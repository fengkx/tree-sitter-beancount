#include <cwctype>
#include <tree_sitter/parser.h>
#include <vector>

namespace {

using std::iswspace;
using std::vector;

enum TokenType {
    SECTION,
    SECTIONEND,
    END_OF_FILE,
    STRING_CONTENT,
};

struct Scanner {
    vector<int16_t> indent_length_stack;
    vector<int16_t> org_section_stack;

    Scanner() {
        deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
        size_t i = 0;

        size_t indent_count = indent_length_stack.size() - 1;
        if (indent_count > UINT8_MAX)
            indent_count = UINT8_MAX;
        buffer[i++] = indent_count;

        vector<int16_t>::iterator iter = indent_length_stack.begin() + 1,
                                  end = indent_length_stack.end();

        for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
             ++iter) {
            buffer[i++] = *iter;
        }

        iter = org_section_stack.begin() + 1;
        end = org_section_stack.end();

        for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
             ++iter) {
            buffer[i++] = *iter;
        }

        return i;
    }

    void deserialize(const char *buffer, unsigned length) {
        org_section_stack.clear();
        org_section_stack.push_back(0);
        indent_length_stack.clear();
        indent_length_stack.push_back(-1);

        if (length == 0)
            return;

        size_t i = 0;

        size_t indent_count = (uint8_t)buffer[i++];

        for (; i <= indent_count; i++)
            indent_length_stack.push_back(buffer[i]);
        for (; i < length; i++)
            org_section_stack.push_back(buffer[i]);
    }

    void advance(TSLexer *lexer) {
        lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
        lexer->advance(lexer, true);
    }

    // Check if the current position starts with a date format (YYYY- or YYYY/)
    // Only matches years starting with 1xxx or 2xxx (reasonable year range)
    // Note: This function consumes characters for lookahead
    static bool is_date_start(TSLexer *lexer) {
        int32_t c = lexer->lookahead;
        
        // First character must be '1' or '2'
        if (c != '1' && c != '2') {
            return false;
        }
        lexer->advance(lexer, false);
        
        // Next 3 characters must be digits
        for (int i = 0; i < 3; i++) {
            c = lexer->lookahead;
            if (c < '0' || c > '9') {
                return false;
            }
            lexer->advance(lexer, false);
        }
        
        // 5th character must be '-' or '/'
        c = lexer->lookahead;
        return (c == '-' || c == '/');
    }

    // Check if current position is an org-mode headline (asterisk followed by whitespace or more asterisks)
    static bool is_org_headline(TSLexer *lexer) {
        if (lexer->lookahead != '*') {
            return false;
        }
        lexer->advance(lexer, false);
        int32_t c = lexer->lookahead;
        return (c == ' ' || c == '\t' || c == '*');
    }

    // Determine if string scanning should abort at the start of a non-indented line
    static bool should_abort_at_line_start(TSLexer *lexer) {
        int32_t c = lexer->lookahead;
        
        // EOF
        if (c == 0) {
            return true;
        }
        
        // Semicolon -> comment
        if (c == ';') {
            return true;
        }
        
        // Asterisk -> possibly org-mode headline
        if (c == '*') {
            return is_org_headline(lexer);
        }
        
        // Starting with '1' or '2' -> check for full date format
        if (c == '1' || c == '2') {
            return is_date_start(lexer);
        }
        
        // Otherwise continue matching
        return false;
    }

    bool scan_string_content(TSLexer *lexer) {
        bool has_content = false;
        
        while (true) {
            int32_t c = lexer->lookahead;
            
            // EOF - abort matching
            if (c == 0) {
                break;
            }
            
            // Closing quote - end content (don't consume quote, leave it for grammar)
            if (c == '"') {
                break;
            }
            
            // Escape sequence handling
            if (c == '\\') {
                lexer->advance(lexer, false);
                has_content = true;
                // Consume the character following the escape (including " and \)
                if (lexer->lookahead != 0) {
                    lexer->advance(lexer, false);
                }
                continue;
            }
            
            // Newline - critical decision point
            if (c == '\n' || c == '\r') {
                // Consume newline
                lexer->advance(lexer, false);
                // Handle \r\n combination
                if (c == '\r' && lexer->lookahead == '\n') {
                    lexer->advance(lexer, false);
                }
                
                // Check if next line has indentation
                bool has_indent = false;
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    has_indent = true;
                    lexer->advance(lexer, false);
                }
                
                // If indented, continue matching (part of current directive)
                if (has_indent) {
                    // Include newline and indentation, mark_end at current position
                    lexer->mark_end(lexer);
                    has_content = true;
                    continue;
                }
                
                // Non-indented (at column 0) - check if should abort
                if (should_abort_at_line_start(lexer)) {
                    // Abort! Don't mark_end, keep the previous valid mark_end
                    // Will rollback to the last mark_end position when returning
                    lexer->result_symbol = STRING_CONTENT;
                    return has_content;
                }
                
                // Don't abort (blank line or non-date content at column 0)
                // Don't mark_end! Keep the previous valid content's mark_end position
                // If we encounter a date later, will correctly rollback
                // If we consume regular characters later, will mark_end then
                has_content = true;
                continue;
            }
            
            // Regular characters (including Unicode like Chinese) - consume and mark_end
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            has_content = true;
        }
        
        if (has_content) {
            lexer->mark_end(lexer);
            lexer->result_symbol = STRING_CONTENT;
        }
        return has_content;
    }

    static bool in_error_recovery(const bool *valid_symbols) {
        return (valid_symbols[SECTION] && valid_symbols[SECTIONEND]
                && valid_symbols[END_OF_FILE] && valid_symbols[STRING_CONTENT]);
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {

        if (in_error_recovery(valid_symbols))
            return false;

        // New: handle string content
        if (valid_symbols[STRING_CONTENT]) {
            return scan_string_content(lexer);
        }

        // - Section ends
        int16_t indent_length = 0;
        lexer->mark_end(lexer);
        for (;;) {
            if (lexer->lookahead == ' ') {
                indent_length++;
            } else if (lexer->lookahead == '\t') {
                indent_length += 8;
            } else if (lexer->lookahead == '\0') {

                if (valid_symbols[SECTIONEND]) {
                    lexer->result_symbol = SECTIONEND;
                } else if (valid_symbols[END_OF_FILE]) {
                    lexer->result_symbol = END_OF_FILE;
                } else {
                    return false;
                }

                return true;
            } else {
                break;
            }
            skip(lexer);
        }

        if (indent_length == 0 && lexer->lookahead == '*') {
            lexer->mark_end(lexer);
            int16_t stars = 1;
            skip(lexer);
            while (lexer->lookahead == '*') {
                stars++;
                skip(lexer);
            }

            if (valid_symbols[SECTIONEND] && iswspace(lexer->lookahead)
                && stars > 0 && stars <= org_section_stack.back()) {
                org_section_stack.pop_back();
                lexer->result_symbol = SECTIONEND;
                return true;
            } else if (valid_symbols[SECTION] && iswspace(lexer->lookahead)) {
                org_section_stack.push_back(stars);
                lexer->result_symbol = SECTION;
                return true;
            }
            return false;
        }

        return false; // default
    }
};

} // namespace

extern "C" {

void *tree_sitter_beancount_external_scanner_create() {
    return new Scanner();
}

bool tree_sitter_beancount_external_scanner_scan(void *payload,
                                                 TSLexer *lexer,
                                                 const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_beancount_external_scanner_serialize(void *payload,
                                                          char *buffer) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
}

void tree_sitter_beancount_external_scanner_deserialize(void *payload,
                                                        const char *buffer,
                                                        unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
}

void tree_sitter_beancount_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
}
}

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

    // Check if the current position starts with a date format (YYYY-MM-DD)
    // Only matches years starting with 1xxx or 2xxx (reasonable year range)
    // This function checks the ENTIRE line pattern to distinguish between:
    // - A new directive line (e.g., "2025-07-07 * ..." or "2025-07-07 balance ...")
    // - A multiline string content that happens to start with digits (e.g., "100 items")
    // Note: This function consumes characters for lookahead
    static bool is_date_start(TSLexer *lexer) {
        int32_t c = lexer->lookahead;
        
        // First character must be '1' or '2'
        if (c != '1' && c != '2') {
            return false;
        }
        lexer->advance(lexer, false);
        
        // Next 3 characters must be digits (YYYY)
        for (int i = 0; i < 3; i++) {
            c = lexer->lookahead;
            if (c < '0' || c > '9') {
                return false;
            }
            lexer->advance(lexer, false);
        }
        
        // 5th character must be '-' or '/'
        c = lexer->lookahead;
        if (c != '-' && c != '/') {
            return false;
        }
        lexer->advance(lexer, false);
        
        // Check for MM (01-12)
        c = lexer->lookahead;
        if (c < '0' || c > '1') {
            return false;
        }
        lexer->advance(lexer, false);
        
        c = lexer->lookahead;
        if (c < '0' || c > '9') {
            return false;
        }
        lexer->advance(lexer, false);
        
        // Check for separator
        c = lexer->lookahead;
        if (c != '-' && c != '/') {
            return false;
        }
        lexer->advance(lexer, false);
        
        // Check for DD (01-31)
        c = lexer->lookahead;
        if (c < '0' || c > '3') {
            return false;
        }
        lexer->advance(lexer, false);
        
        c = lexer->lookahead;
        if (c < '0' || c > '9') {
            return false;
        }
        lexer->advance(lexer, false);
        
        // After the date (YYYY-MM-DD), there MUST be whitespace
        // This distinguishes a directive line from arbitrary text
        c = lexer->lookahead;
        return (c == ' ' || c == '\t');
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

    // Check if the string matches a Beancount account prefix
    // Account format: root account name (uppercase letter or CJK character) followed by ':'
    // Root account names can be customized via option directives (name_assets, name_liabilities, etc.)
    // Returns true if current position starts with an account-like pattern followed by ':'
    static bool is_account_prefix(TSLexer *lexer) {
        int32_t c = lexer->lookahead;
        
        // Check if first character is uppercase letter (A-Z)
        if (c >= 'A' && c <= 'Z') {
            // Consume the first character
            lexer->advance(lexer, false);
            
            // Consume following characters: letters, numbers, dash, or CJK characters
            // until we find a colon
            while (true) {
                c = lexer->lookahead;
                
                // Found colon - this looks like an account prefix
                if (c == ':') {
                    return true;
                }
                
                // Valid account name characters: letters, digits, dash
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || 
                    (c >= '0' && c <= '9') || c == '-') {
                    lexer->advance(lexer, false);
                    continue;
                }
                
                // Check for CJK characters (common ranges)
                // CJK Unified Ideographs: U+4E00-U+9FFF
                if (c >= 0x4E00 && c <= 0x9FFF) {
                    lexer->advance(lexer, false);
                    continue;
                }
                
                // If we hit something else (whitespace, EOF, etc.), not an account prefix
                return false;
            }
        }
        
        // Check for CJK characters as first character
        // CJK Unified Ideographs: U+4E00-U+9FFF
        if (c >= 0x4E00 && c <= 0x9FFF) {
            lexer->advance(lexer, false);
            
            // Consume following CJK characters, letters, numbers, dash until colon
            while (true) {
                c = lexer->lookahead;
                
                if (c == ':') {
                    return true;
                }
                
                // Valid characters: CJK, letters, digits, dash
                if ((c >= 0x4E00 && c <= 0x9FFF) ||
                    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
                    (c >= '0' && c <= '9') || c == '-') {
                    lexer->advance(lexer, false);
                    continue;
                }
                
                return false;
            }
        }
        
        return false;
    }

    // Determine if string scanning should abort at the start of a non-indented line
    // This function may look ahead through empty lines to find the actual content
    static bool should_abort_at_line_start(TSLexer *lexer) {
        int32_t c = lexer->lookahead;
        
        // Skip through empty lines to find actual content
        // Empty lines in Beancount separate directives, so we need to look past them
        while (c == '\n' || c == '\r') {
            lexer->advance(lexer, false);
            if (c == '\r' && lexer->lookahead == '\n') {
                lexer->advance(lexer, false);
            }
            c = lexer->lookahead;
        }
        
        // EOF
        if (c == 0) {
            return true;
        }
        
        // If after empty lines we find indentation, this is still part of the string
        // (indented lines belong to the current directive)
        if (c == ' ' || c == '\t') {
            return false;
        }
        
        // Semicolon -> comment (new directive)
        if (c == ';') {
            return true;
        }
        
        // Asterisk -> possibly org-mode headline (new directive)
        if (c == '*') {
            return is_org_headline(lexer);
        }
        
        // Starting with '1' or '2' -> check for full date format (new directive)
        if (c == '1' || c == '2') {
            return is_date_start(lexer);
        }
        
        // Otherwise continue matching (unknown content, include in string)
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
                // Before consuming newline, mark_end at current position
                // This gives us a safe boundary if we need to abort
                lexer->mark_end(lexer);
                
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
                
                // If indented, check if it looks like a posting (starts with account prefix)
                // In Beancount, an unclosed string followed by posting-like lines should terminate
                // This handles cases like:
                //   2025-07-07 * "Payee" "Unclosed narration
                //       Expenses:Food 30 CNY      <- looks like a posting, terminate string
                //       Liabilities:Credit
                if (has_indent) {
                    // Check if this indented line starts with an account prefix
                    // If so, terminate the string content here (before the newline)
                    if (is_account_prefix(lexer)) {
                        // This looks like a posting line, not string content
                        // Use the mark_end we set before consuming newline
                        if (has_content) {
                            lexer->result_symbol = STRING_CONTENT;
                            return true;
                        }
                        return false;
                    }
                    
                    // Not an account prefix - include newline and indentation
                    lexer->mark_end(lexer);
                    has_content = true;
                    continue;
                }
                
                // Non-indented (at column 0) - check if should abort
                if (should_abort_at_line_start(lexer)) {
                    // Abort! We've already mark_end before consuming the newline
                    // Return the content we have so far
                    if (has_content) {
                        lexer->result_symbol = STRING_CONTENT;
                        return true;
                    }
                    // No content - return false to let tree-sitter handle
                    return false;
                }
                
                // Don't abort - this line is part of the string content
                // Mark_end to include what we've consumed so far
                lexer->mark_end(lexer);
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

        // In error recovery, all external symbols are valid - skip to avoid interference
        if (in_error_recovery(valid_symbols))
            return false;

        // Handle string content when it's the valid symbol
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

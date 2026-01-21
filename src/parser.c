#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 674
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 2
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 30
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 137

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_CR = 3,
  sym__eol = 4,
  aux_sym__any_token1 = 5,
  aux_sym__org_stars_token1 = 6,
  aux_sym_headline_token1 = 7,
  sym_item = 8,
  sym__indent = 9,
  sym_atat = 10,
  sym_at = 11,
  anon_sym_STAR = 12,
  sym_slash = 13,
  sym_plus = 14,
  sym_minus = 15,
  sym_flag = 16,
  sym__none = 17,
  sym_bool = 18,
  sym_date = 19,
  sym_account = 20,
  sym_currency = 21,
  anon_sym_DQUOTE = 22,
  sym_unquoted_string = 23,
  sym_number = 24,
  sym_tag = 25,
  sym_link = 26,
  anon_sym_txn = 27,
  anon_sym_BANG = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_POUND = 31,
  sym_key = 32,
  anon_sym_currency = 33,
  anon_sym_COLON = 34,
  aux_sym_currency_key_value_token1 = 35,
  anon_sym_pushtag = 36,
  anon_sym_poptag = 37,
  anon_sym_pushmeta = 38,
  anon_sym_popmeta = 39,
  anon_sym_open = 40,
  anon_sym_COMMA = 41,
  anon_sym_close = 42,
  anon_sym_commodity = 43,
  anon_sym_pad = 44,
  anon_sym_balance = 45,
  anon_sym_TILDE = 46,
  anon_sym_LBRACE = 47,
  anon_sym_RBRACE = 48,
  anon_sym_LBRACE_LBRACE = 49,
  anon_sym_RBRACE_RBRACE = 50,
  anon_sym_price = 51,
  anon_sym_event = 52,
  anon_sym_query = 53,
  anon_sym_note = 54,
  anon_sym_document = 55,
  anon_sym_custom = 56,
  anon_sym_option = 57,
  anon_sym_include = 58,
  anon_sym_plugin = 59,
  sym_comment = 60,
  sym__stars = 61,
  sym__sectionend = 62,
  sym__eof = 63,
  sym__string_content = 64,
  sym_file = 65,
  sym__nl = 66,
  sym_section = 67,
  sym__org_stars = 68,
  sym_headline = 69,
  sym_asterisk = 70,
  sym_string = 71,
  sym_txn = 72,
  sym__number_expr = 73,
  sym__paren__number_expr = 74,
  sym_unary_number_expr = 75,
  sym_binary_number_expr = 76,
  sym__txn_strings = 77,
  sym_tags_links = 78,
  sym_transaction = 79,
  sym_optflag = 80,
  sym_price_annotation = 81,
  sym_posting = 82,
  sym_value = 83,
  sym_value_currency = 84,
  sym_key_value = 85,
  sym__key_value_line = 86,
  aux_sym__key_value_list = 87,
  sym_pushtag = 88,
  sym_poptag = 89,
  sym_pushmeta = 90,
  sym_popmeta = 91,
  sym_open = 92,
  sym_opt_booking = 93,
  sym_close = 94,
  sym_commodity = 95,
  sym_pad = 96,
  sym_balance = 97,
  sym_amount = 98,
  sym_amount_tolerance = 99,
  sym_compound_amount = 100,
  sym_incomplete_amount = 101,
  sym_cost_spec = 102,
  sym__cost_comp_list = 103,
  sym_cost_comp = 104,
  sym_price = 105,
  sym_event = 106,
  sym_query = 107,
  sym_note = 108,
  sym_filename = 109,
  sym_document = 110,
  sym_custom_value = 111,
  sym_custom = 112,
  sym__entry = 113,
  sym_option = 114,
  sym_include = 115,
  sym_plugin = 116,
  sym__directive = 117,
  sym__declarations = 118,
  sym__skipped_lines = 119,
  aux_sym_file_repeat1 = 120,
  aux_sym_section_repeat1 = 121,
  aux_sym_tags_links_repeat1 = 122,
  aux_sym_transaction_repeat1 = 123,
  aux_sym_currency_key_value_repeat1 = 124,
  aux_sym_open_repeat1 = 125,
  aux_sym_open_repeat2 = 126,
  aux_sym__cost_comp_list_repeat1 = 127,
  aux_sym_custom_repeat1 = 128,
  alias_sym_narration = 129,
  alias_sym_payee = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym__eol] = "_eol",
  [aux_sym__any_token1] = "_any_token1",
  [aux_sym__org_stars_token1] = "_org_stars_token1",
  [aux_sym_headline_token1] = "headline_token1",
  [sym_item] = "item",
  [sym__indent] = "_indent",
  [sym_atat] = "atat",
  [sym_at] = "at",
  [anon_sym_STAR] = "*",
  [sym_slash] = "slash",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_flag] = "flag",
  [sym__none] = "_none",
  [sym_bool] = "bool",
  [sym_date] = "date",
  [sym_account] = "account",
  [sym_currency] = "currency",
  [anon_sym_DQUOTE] = "\"",
  [sym_unquoted_string] = "unquoted_string",
  [sym_number] = "number",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [anon_sym_txn] = "txn",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND] = "#",
  [sym_key] = "key",
  [anon_sym_currency] = "key",
  [anon_sym_COLON] = ":",
  [aux_sym_currency_key_value_token1] = "currency_key_value_token1",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_pushmeta] = "pushmeta",
  [anon_sym_popmeta] = "popmeta",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_pad] = "pad",
  [anon_sym_balance] = "balance",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_price] = "price",
  [anon_sym_event] = "event",
  [anon_sym_query] = "query",
  [anon_sym_note] = "note",
  [anon_sym_document] = "document",
  [anon_sym_custom] = "custom",
  [anon_sym_option] = "option",
  [anon_sym_include] = "include",
  [anon_sym_plugin] = "plugin",
  [sym_comment] = "comment",
  [sym__stars] = "_stars",
  [sym__sectionend] = "_sectionend",
  [sym__eof] = "_eof",
  [sym__string_content] = "_string_content",
  [sym_file] = "file",
  [sym__nl] = "_nl",
  [sym_section] = "section",
  [sym__org_stars] = "_org_stars",
  [sym_headline] = "headline",
  [sym_asterisk] = "asterisk",
  [sym_string] = "string",
  [sym_txn] = "txn",
  [sym__number_expr] = "_number_expr",
  [sym__paren__number_expr] = "_paren__number_expr",
  [sym_unary_number_expr] = "unary_number_expr",
  [sym_binary_number_expr] = "binary_number_expr",
  [sym__txn_strings] = "_txn_strings",
  [sym_tags_links] = "tags_links",
  [sym_transaction] = "transaction",
  [sym_optflag] = "optflag",
  [sym_price_annotation] = "price_annotation",
  [sym_posting] = "posting",
  [sym_value] = "value",
  [sym_value_currency] = "value",
  [sym_key_value] = "key_value",
  [sym__key_value_line] = "_key_value_line",
  [aux_sym__key_value_list] = "_key_value_list",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym_open] = "open",
  [sym_opt_booking] = "opt_booking",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_pad] = "pad",
  [sym_balance] = "balance",
  [sym_amount] = "amount",
  [sym_amount_tolerance] = "amount_tolerance",
  [sym_compound_amount] = "compound_amount",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_cost_spec] = "cost_spec",
  [sym__cost_comp_list] = "_cost_comp_list",
  [sym_cost_comp] = "cost_comp",
  [sym_price] = "price",
  [sym_event] = "event",
  [sym_query] = "query",
  [sym_note] = "note",
  [sym_filename] = "filename",
  [sym_document] = "document",
  [sym_custom_value] = "custom_value",
  [sym_custom] = "custom",
  [sym__entry] = "_entry",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym__directive] = "_directive",
  [sym__declarations] = "_declarations",
  [sym__skipped_lines] = "_skipped_lines",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_tags_links_repeat1] = "tags_links_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_currency_key_value_repeat1] = "currency_key_value_repeat1",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_open_repeat2] = "open_repeat2",
  [aux_sym__cost_comp_list_repeat1] = "_cost_comp_list_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [alias_sym_narration] = "narration",
  [alias_sym_payee] = "payee",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__eol] = sym__eol,
  [aux_sym__any_token1] = aux_sym__any_token1,
  [aux_sym__org_stars_token1] = aux_sym__org_stars_token1,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [sym_item] = sym_item,
  [sym__indent] = sym__indent,
  [sym_atat] = sym_atat,
  [sym_at] = sym_at,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_slash] = sym_slash,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_flag] = sym_flag,
  [sym__none] = sym__none,
  [sym_bool] = sym_bool,
  [sym_date] = sym_date,
  [sym_account] = sym_account,
  [sym_currency] = sym_currency,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_number] = sym_number,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_key] = sym_key,
  [anon_sym_currency] = sym_key,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_currency_key_value_token1] = aux_sym_currency_key_value_token1,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_plugin] = anon_sym_plugin,
  [sym_comment] = sym_comment,
  [sym__stars] = sym__stars,
  [sym__sectionend] = sym__sectionend,
  [sym__eof] = sym__eof,
  [sym__string_content] = sym__string_content,
  [sym_file] = sym_file,
  [sym__nl] = sym__nl,
  [sym_section] = sym_section,
  [sym__org_stars] = sym__org_stars,
  [sym_headline] = sym_headline,
  [sym_asterisk] = sym_asterisk,
  [sym_string] = sym_string,
  [sym_txn] = sym_txn,
  [sym__number_expr] = sym__number_expr,
  [sym__paren__number_expr] = sym__paren__number_expr,
  [sym_unary_number_expr] = sym_unary_number_expr,
  [sym_binary_number_expr] = sym_binary_number_expr,
  [sym__txn_strings] = sym__txn_strings,
  [sym_tags_links] = sym_tags_links,
  [sym_transaction] = sym_transaction,
  [sym_optflag] = sym_optflag,
  [sym_price_annotation] = sym_price_annotation,
  [sym_posting] = sym_posting,
  [sym_value] = sym_value,
  [sym_value_currency] = sym_value,
  [sym_key_value] = sym_key_value,
  [sym__key_value_line] = sym__key_value_line,
  [aux_sym__key_value_list] = aux_sym__key_value_list,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym_open] = sym_open,
  [sym_opt_booking] = sym_opt_booking,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_pad] = sym_pad,
  [sym_balance] = sym_balance,
  [sym_amount] = sym_amount,
  [sym_amount_tolerance] = sym_amount_tolerance,
  [sym_compound_amount] = sym_compound_amount,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_cost_spec] = sym_cost_spec,
  [sym__cost_comp_list] = sym__cost_comp_list,
  [sym_cost_comp] = sym_cost_comp,
  [sym_price] = sym_price,
  [sym_event] = sym_event,
  [sym_query] = sym_query,
  [sym_note] = sym_note,
  [sym_filename] = sym_filename,
  [sym_document] = sym_document,
  [sym_custom_value] = sym_custom_value,
  [sym_custom] = sym_custom,
  [sym__entry] = sym__entry,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym__directive] = sym__directive,
  [sym__declarations] = sym__declarations,
  [sym__skipped_lines] = sym__skipped_lines,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_tags_links_repeat1] = aux_sym_tags_links_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_currency_key_value_repeat1] = aux_sym_currency_key_value_repeat1,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_open_repeat2] = aux_sym_open_repeat2,
  [aux_sym__cost_comp_list_repeat1] = aux_sym__cost_comp_list_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [alias_sym_narration] = alias_sym_narration,
  [alias_sym_payee] = alias_sym_payee,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__any_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__org_stars_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym_atat] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_slash] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym__none] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_txn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_currency] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_currency_key_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__stars] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionend] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__org_stars] = {
    .visible = false,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_txn] = {
    .visible = true,
    .named = true,
  },
  [sym__number_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__paren__number_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__txn_strings] = {
    .visible = false,
    .named = true,
  },
  [sym_tags_links] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_optflag] = {
    .visible = true,
    .named = true,
  },
  [sym_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__key_value_list] = {
    .visible = false,
    .named = false,
  },
  [sym_pushtag] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag] = {
    .visible = true,
    .named = true,
  },
  [sym_pushmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_popmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_booking] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_balance] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_tolerance] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_cost_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__cost_comp_list] = {
    .visible = false,
    .named = true,
  },
  [sym_cost_comp] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_value] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym__skipped_lines] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_links_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_currency_key_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_narration] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_payee] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_account = 1,
  field_amount = 2,
  field_comment = 3,
  field_cost_comp_list = 4,
  field_cost_spec = 5,
  field_currencies = 6,
  field_currency = 7,
  field_custom_value_list = 8,
  field_date = 9,
  field_desc = 10,
  field_filename = 11,
  field_from_account = 12,
  field_headline = 13,
  field_item = 14,
  field_key = 15,
  field_name = 16,
  field_narration = 17,
  field_note = 18,
  field_opt_booking = 19,
  field_optflag = 20,
  field_payee = 21,
  field_per = 22,
  field_price_annotation = 23,
  field_query = 24,
  field_subsection = 25,
  field_tags_links = 26,
  field_total = 27,
  field_txn = 28,
  field_type = 29,
  field_value = 30,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_comment] = "comment",
  [field_cost_comp_list] = "cost_comp_list",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_custom_value_list] = "custom_value_list",
  [field_date] = "date",
  [field_desc] = "desc",
  [field_filename] = "filename",
  [field_from_account] = "from_account",
  [field_headline] = "headline",
  [field_item] = "item",
  [field_key] = "key",
  [field_name] = "name",
  [field_narration] = "narration",
  [field_note] = "note",
  [field_opt_booking] = "opt_booking",
  [field_optflag] = "optflag",
  [field_payee] = "payee",
  [field_per] = "per",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_subsection] = "subsection",
  [field_tags_links] = "tags_links",
  [field_total] = "total",
  [field_txn] = "txn",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 4},
  [14] = {.index = 27, .length = 3},
  [15] = {.index = 30, .length = 1},
  [16] = {.index = 31, .length = 2},
  [17] = {.index = 33, .length = 1},
  [18] = {.index = 34, .length = 3},
  [19] = {.index = 37, .length = 3},
  [20] = {.index = 40, .length = 3},
  [21] = {.index = 43, .length = 3},
  [22] = {.index = 46, .length = 3},
  [23] = {.index = 49, .length = 3},
  [24] = {.index = 52, .length = 3},
  [25] = {.index = 55, .length = 3},
  [26] = {.index = 58, .length = 3},
  [27] = {.index = 61, .length = 3},
  [28] = {.index = 64, .length = 3},
  [29] = {.index = 67, .length = 3},
  [30] = {.index = 70, .length = 3},
  [31] = {.index = 73, .length = 3},
  [32] = {.index = 76, .length = 3},
  [33] = {.index = 79, .length = 3},
  [34] = {.index = 82, .length = 2},
  [35] = {.index = 84, .length = 4},
  [36] = {.index = 88, .length = 5},
  [37] = {.index = 93, .length = 5},
  [38] = {.index = 98, .length = 5},
  [39] = {.index = 103, .length = 4},
  [40] = {.index = 107, .length = 4},
  [41] = {.index = 111, .length = 1},
  [42] = {.index = 112, .length = 4},
  [43] = {.index = 116, .length = 4},
  [44] = {.index = 120, .length = 4},
  [45] = {.index = 124, .length = 4},
  [46] = {.index = 128, .length = 4},
  [47] = {.index = 132, .length = 4},
  [48] = {.index = 136, .length = 4},
  [49] = {.index = 140, .length = 4},
  [50] = {.index = 144, .length = 4},
  [51] = {.index = 148, .length = 4},
  [52] = {.index = 152, .length = 4},
  [53] = {.index = 156, .length = 4},
  [54] = {.index = 160, .length = 4},
  [55] = {.index = 164, .length = 4},
  [56] = {.index = 168, .length = 4},
  [57] = {.index = 172, .length = 4},
  [58] = {.index = 176, .length = 4},
  [59] = {.index = 180, .length = 4},
  [60] = {.index = 184, .length = 4},
  [61] = {.index = 188, .length = 4},
  [62] = {.index = 192, .length = 4},
  [63] = {.index = 196, .length = 4},
  [64] = {.index = 200, .length = 4},
  [65] = {.index = 204, .length = 4},
  [66] = {.index = 208, .length = 4},
  [67] = {.index = 212, .length = 1},
  [68] = {.index = 213, .length = 1},
  [69] = {.index = 214, .length = 6},
  [70] = {.index = 220, .length = 6},
  [71] = {.index = 226, .length = 6},
  [72] = {.index = 232, .length = 5},
  [73] = {.index = 237, .length = 5},
  [74] = {.index = 242, .length = 5},
  [75] = {.index = 247, .length = 5},
  [76] = {.index = 252, .length = 5},
  [77] = {.index = 257, .length = 5},
  [78] = {.index = 262, .length = 5},
  [79] = {.index = 267, .length = 5},
  [80] = {.index = 272, .length = 5},
  [81] = {.index = 277, .length = 5},
  [82] = {.index = 282, .length = 5},
  [83] = {.index = 287, .length = 5},
  [84] = {.index = 292, .length = 5},
  [85] = {.index = 297, .length = 5},
  [86] = {.index = 302, .length = 5},
  [87] = {.index = 307, .length = 1},
  [88] = {.index = 308, .length = 1},
  [89] = {.index = 309, .length = 2},
  [90] = {.index = 311, .length = 2},
  [91] = {.index = 313, .length = 2},
  [92] = {.index = 315, .length = 2},
  [93] = {.index = 317, .length = 7},
  [94] = {.index = 324, .length = 6},
  [95] = {.index = 330, .length = 6},
  [96] = {.index = 336, .length = 2},
  [97] = {.index = 338, .length = 2},
  [98] = {.index = 340, .length = 1},
  [99] = {.index = 341, .length = 2},
  [100] = {.index = 343, .length = 1},
  [101] = {.index = 344, .length = 3},
  [102] = {.index = 347, .length = 3},
  [103] = {.index = 350, .length = 3},
  [104] = {.index = 353, .length = 3},
  [105] = {.index = 356, .length = 3},
  [106] = {.index = 359, .length = 3},
  [107] = {.index = 362, .length = 3},
  [108] = {.index = 365, .length = 2},
  [109] = {.index = 367, .length = 2},
  [110] = {.index = 369, .length = 3},
  [111] = {.index = 372, .length = 3},
  [112] = {.index = 375, .length = 4},
  [113] = {.index = 379, .length = 3},
  [114] = {.index = 382, .length = 3},
  [115] = {.index = 385, .length = 3},
  [116] = {.index = 388, .length = 3},
  [117] = {.index = 391, .length = 4},
  [118] = {.index = 395, .length = 4},
  [119] = {.index = 399, .length = 4},
  [120] = {.index = 403, .length = 3},
  [121] = {.index = 406, .length = 4},
  [122] = {.index = 410, .length = 4},
  [123] = {.index = 414, .length = 4},
  [124] = {.index = 418, .length = 4},
  [125] = {.index = 422, .length = 4},
  [126] = {.index = 426, .length = 4},
  [127] = {.index = 430, .length = 4},
  [128] = {.index = 434, .length = 5},
  [129] = {.index = 439, .length = 4},
  [130] = {.index = 443, .length = 4},
  [131] = {.index = 447, .length = 5},
  [132] = {.index = 452, .length = 5},
  [133] = {.index = 457, .length = 5},
  [134] = {.index = 462, .length = 5},
  [135] = {.index = 467, .length = 5},
  [136] = {.index = 472, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_headline, 0},
  [1] =
    {field_subsection, 0},
  [2] =
    {field_date, 0},
    {field_txn, 1},
  [4] =
    {field_narration, 0},
  [5] =
    {field_headline, 0},
    {field_subsection, 1, .inherited = true},
  [7] =
    {field_subsection, 0, .inherited = true},
    {field_subsection, 1, .inherited = true},
  [9] =
    {field_account, 2},
    {field_date, 0},
  [11] =
    {field_currency, 2},
    {field_date, 0},
  [13] =
    {field_date, 0},
    {field_name, 2},
  [15] =
    {field_comment, 3, .inherited = true},
    {field_date, 0},
    {field_txn, 1},
  [18] =
    {field_comment, 2},
    {field_date, 0},
    {field_txn, 1},
  [21] =
    {field_narration, 1},
    {field_payee, 0},
  [23] =
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_txn, 1},
  [27] =
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [30] =
    {field_value, 2},
  [31] =
    {field_key, 1},
    {field_value, 2},
  [33] =
    {field_item, 2},
  [34] =
    {field_account, 2},
    {field_comment, 4, .inherited = true},
    {field_date, 0},
  [37] =
    {field_account, 2},
    {field_comment, 3},
    {field_date, 0},
  [40] =
    {field_account, 2},
    {field_date, 0},
    {field_opt_booking, 3},
  [43] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [46] =
    {field_comment, 4, .inherited = true},
    {field_currency, 2},
    {field_date, 0},
  [49] =
    {field_comment, 3},
    {field_currency, 2},
    {field_date, 0},
  [52] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [55] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [58] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [61] =
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [64] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [67] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [70] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [73] =
    {field_comment, 4, .inherited = true},
    {field_date, 0},
    {field_name, 2},
  [76] =
    {field_comment, 3},
    {field_date, 0},
    {field_name, 2},
  [79] =
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [82] =
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
  [84] =
    {field_comment, 2},
    {field_comment, 4, .inherited = true},
    {field_date, 0},
    {field_txn, 1},
  [88] =
    {field_comment, 4, .inherited = true},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_txn, 1},
  [93] =
    {field_comment, 3},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_txn, 1},
  [98] =
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_tags_links, 3},
    {field_txn, 1},
  [103] =
    {field_comment, 4, .inherited = true},
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [107] =
    {field_comment, 3},
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [111] =
    {field_value, 3},
  [112] =
    {field_account, 2},
    {field_comment, 3},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
  [116] =
    {field_account, 2},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_opt_booking, 3},
  [120] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_opt_booking, 3},
  [124] =
    {field_account, 2},
    {field_comment, 5, .inherited = true},
    {field_currencies, 3},
    {field_date, 0},
  [128] =
    {field_account, 2},
    {field_comment, 4},
    {field_currencies, 3},
    {field_date, 0},
  [132] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [136] =
    {field_comment, 3},
    {field_comment, 5, .inherited = true},
    {field_currency, 2},
    {field_date, 0},
  [140] =
    {field_account, 2},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_from_account, 3},
  [144] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_from_account, 3},
  [148] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
  [152] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_date, 0},
  [156] =
    {field_amount, 3},
    {field_comment, 5, .inherited = true},
    {field_currency, 2},
    {field_date, 0},
  [160] =
    {field_amount, 3},
    {field_comment, 4},
    {field_currency, 2},
    {field_date, 0},
  [164] =
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [168] =
    {field_comment, 4},
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [172] =
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [176] =
    {field_comment, 4},
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [180] =
    {field_account, 2},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_note, 3},
  [184] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_note, 3},
  [188] =
    {field_account, 2},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_filename, 3},
  [192] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_filename, 3},
  [196] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [200] =
    {field_comment, 3},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_name, 2},
  [204] =
    {field_comment, 5, .inherited = true},
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [208] =
    {field_comment, 4},
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [212] =
    {field_account, 1},
  [213] =
    {field_comment, 1},
  [214] =
    {field_comment, 3},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_txn, 1},
  [220] =
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_tags_links, 3},
    {field_txn, 1},
  [226] =
    {field_comment, 4},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_tags_links, 3},
    {field_txn, 1},
  [232] =
    {field_comment, 3},
    {field_comment, 5, .inherited = true},
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [237] =
    {field_account, 2},
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_opt_booking, 3},
  [242] =
    {field_account, 2},
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_currencies, 3},
    {field_date, 0},
  [247] =
    {field_account, 2},
    {field_comment, 6, .inherited = true},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [252] =
    {field_account, 2},
    {field_comment, 5},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [257] =
    {field_account, 2},
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_from_account, 3},
  [262] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
  [267] =
    {field_amount, 3},
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_currency, 2},
    {field_date, 0},
  [272] =
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [277] =
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [282] =
    {field_account, 2},
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_note, 3},
  [287] =
    {field_account, 2},
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_filename, 3},
  [292] =
    {field_account, 2},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [297] =
    {field_account, 2},
    {field_comment, 5},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [302] =
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [307] =
    {field_currency, 0},
  [308] =
    {field_per, 0},
  [309] =
    {field_account, 1},
    {field_comment, 2},
  [311] =
    {field_account, 1},
    {field_amount, 2},
  [313] =
    {field_account, 1},
    {field_cost_spec, 2},
  [315] =
    {field_account, 2},
    {field_optflag, 1},
  [317] =
    {field_comment, 4},
    {field_comment, 6, .inherited = true},
    {field_date, 0},
    {field_narration, 2, .inherited = true},
    {field_payee, 2, .inherited = true},
    {field_tags_links, 3},
    {field_txn, 1},
  [324] =
    {field_account, 2},
    {field_comment, 5},
    {field_comment, 7, .inherited = true},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [330] =
    {field_account, 2},
    {field_comment, 5},
    {field_comment, 7, .inherited = true},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [336] =
    {field_account, 1},
    {field_comment, 3},
  [338] =
    {field_account, 1},
    {field_price_annotation, 3},
  [340] =
    {field_currency, 1},
  [341] =
    {field_currency, 1},
    {field_per, 0},
  [343] =
    {field_cost_comp_list, 1},
  [344] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 3},
  [347] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [350] =
    {field_account, 1},
    {field_comment, 3},
    {field_cost_spec, 2},
  [353] =
    {field_account, 2},
    {field_comment, 3},
    {field_optflag, 1},
  [356] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
  [359] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [362] =
    {field_account, 1},
    {field_comment, 4},
    {field_price_annotation, 3},
  [365] =
    {field_currency, 2},
    {field_total, 1},
  [367] =
    {field_currency, 2},
    {field_per, 0},
  [369] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
  [372] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 4},
  [375] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
  [379] =
    {field_account, 1},
    {field_comment, 4},
    {field_cost_spec, 2},
  [382] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [385] =
    {field_account, 2},
    {field_comment, 4},
    {field_optflag, 1},
  [388] =
    {field_account, 2},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [391] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_optflag, 1},
  [395] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [399] =
    {field_account, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [403] =
    {field_currency, 3},
    {field_per, 0},
    {field_total, 2},
  [406] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_price_annotation, 4},
  [410] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
  [414] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [418] =
    {field_account, 1},
    {field_comment, 5},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [422] =
    {field_account, 2},
    {field_comment, 5},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [426] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_optflag, 1},
  [430] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [434] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [439] =
    {field_account, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [443] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [447] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [452] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [457] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [462] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
  [467] =
    {field_account, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [472] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 7},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_narration,
  },
  [12] = {
    [0] = alias_sym_payee,
    [1] = alias_sym_narration,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_string, 3,
    sym_string,
    alias_sym_narration,
    alias_sym_payee,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 18,
  [27] = 17,
  [28] = 23,
  [29] = 15,
  [30] = 21,
  [31] = 13,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 24,
  [36] = 33,
  [37] = 34,
  [38] = 14,
  [39] = 32,
  [40] = 40,
  [41] = 20,
  [42] = 19,
  [43] = 40,
  [44] = 11,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 92,
  [97] = 91,
  [98] = 86,
  [99] = 99,
  [100] = 71,
  [101] = 93,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 95,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 103,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 116,
  [119] = 113,
  [120] = 112,
  [121] = 102,
  [122] = 99,
  [123] = 46,
  [124] = 111,
  [125] = 109,
  [126] = 108,
  [127] = 107,
  [128] = 104,
  [129] = 105,
  [130] = 94,
  [131] = 114,
  [132] = 47,
  [133] = 48,
  [134] = 90,
  [135] = 49,
  [136] = 50,
  [137] = 89,
  [138] = 88,
  [139] = 51,
  [140] = 87,
  [141] = 52,
  [142] = 53,
  [143] = 54,
  [144] = 85,
  [145] = 84,
  [146] = 83,
  [147] = 82,
  [148] = 81,
  [149] = 55,
  [150] = 56,
  [151] = 57,
  [152] = 58,
  [153] = 59,
  [154] = 45,
  [155] = 60,
  [156] = 61,
  [157] = 80,
  [158] = 62,
  [159] = 63,
  [160] = 79,
  [161] = 64,
  [162] = 78,
  [163] = 65,
  [164] = 77,
  [165] = 66,
  [166] = 76,
  [167] = 67,
  [168] = 75,
  [169] = 68,
  [170] = 69,
  [171] = 74,
  [172] = 73,
  [173] = 72,
  [174] = 70,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 178,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 196,
  [217] = 194,
  [218] = 184,
  [219] = 182,
  [220] = 185,
  [221] = 186,
  [222] = 187,
  [223] = 188,
  [224] = 189,
  [225] = 190,
  [226] = 191,
  [227] = 192,
  [228] = 193,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 195,
  [234] = 234,
  [235] = 197,
  [236] = 198,
  [237] = 237,
  [238] = 199,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 200,
  [245] = 201,
  [246] = 202,
  [247] = 247,
  [248] = 203,
  [249] = 249,
  [250] = 204,
  [251] = 205,
  [252] = 206,
  [253] = 207,
  [254] = 208,
  [255] = 209,
  [256] = 210,
  [257] = 231,
  [258] = 258,
  [259] = 211,
  [260] = 239,
  [261] = 212,
  [262] = 213,
  [263] = 263,
  [264] = 214,
  [265] = 215,
  [266] = 229,
  [267] = 230,
  [268] = 232,
  [269] = 240,
  [270] = 234,
  [271] = 242,
  [272] = 237,
  [273] = 241,
  [274] = 243,
  [275] = 275,
  [276] = 249,
  [277] = 277,
  [278] = 247,
  [279] = 258,
  [280] = 280,
  [281] = 281,
  [282] = 280,
  [283] = 283,
  [284] = 183,
  [285] = 283,
  [286] = 263,
  [287] = 275,
  [288] = 281,
  [289] = 277,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 295,
  [306] = 290,
  [307] = 294,
  [308] = 292,
  [309] = 302,
  [310] = 301,
  [311] = 296,
  [312] = 312,
  [313] = 293,
  [314] = 304,
  [315] = 315,
  [316] = 297,
  [317] = 317,
  [318] = 312,
  [319] = 299,
  [320] = 320,
  [321] = 321,
  [322] = 303,
  [323] = 291,
  [324] = 317,
  [325] = 315,
  [326] = 326,
  [327] = 326,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 333,
  [335] = 335,
  [336] = 336,
  [337] = 332,
  [338] = 338,
  [339] = 339,
  [340] = 338,
  [341] = 341,
  [342] = 342,
  [343] = 336,
  [344] = 344,
  [345] = 345,
  [346] = 344,
  [347] = 335,
  [348] = 339,
  [349] = 349,
  [350] = 345,
  [351] = 349,
  [352] = 342,
  [353] = 353,
  [354] = 353,
  [355] = 355,
  [356] = 341,
  [357] = 355,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 361,
  [363] = 363,
  [364] = 363,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 365,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 372,
  [374] = 374,
  [375] = 371,
  [376] = 369,
  [377] = 374,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 381,
  [383] = 383,
  [384] = 384,
  [385] = 380,
  [386] = 379,
  [387] = 378,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 391,
  [395] = 395,
  [396] = 393,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 400,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 407,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 412,
  [419] = 419,
  [420] = 420,
  [421] = 415,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 414,
  [426] = 426,
  [427] = 413,
  [428] = 428,
  [429] = 429,
  [430] = 331,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 432,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 441,
  [444] = 434,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 446,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 447,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 454,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 462,
  [473] = 473,
  [474] = 474,
  [475] = 474,
  [476] = 449,
  [477] = 477,
  [478] = 458,
  [479] = 453,
  [480] = 480,
  [481] = 456,
  [482] = 480,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 463,
  [487] = 461,
  [488] = 459,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 455,
  [493] = 483,
  [494] = 490,
  [495] = 484,
  [496] = 466,
  [497] = 460,
  [498] = 498,
  [499] = 473,
  [500] = 451,
  [501] = 464,
  [502] = 471,
  [503] = 469,
  [504] = 465,
  [505] = 450,
  [506] = 470,
  [507] = 507,
  [508] = 489,
  [509] = 491,
  [510] = 510,
  [511] = 468,
  [512] = 485,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 521,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 537,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 515,
  [572] = 539,
  [573] = 516,
  [574] = 540,
  [575] = 513,
  [576] = 531,
  [577] = 577,
  [578] = 534,
  [579] = 579,
  [580] = 561,
  [581] = 570,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 541,
  [587] = 587,
  [588] = 514,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 568,
  [595] = 527,
  [596] = 582,
  [597] = 524,
  [598] = 583,
  [599] = 599,
  [600] = 584,
  [601] = 522,
  [602] = 542,
  [603] = 585,
  [604] = 526,
  [605] = 605,
  [606] = 606,
  [607] = 529,
  [608] = 587,
  [609] = 532,
  [610] = 610,
  [611] = 611,
  [612] = 543,
  [613] = 565,
  [614] = 614,
  [615] = 549,
  [616] = 567,
  [617] = 605,
  [618] = 590,
  [619] = 619,
  [620] = 620,
  [621] = 593,
  [622] = 606,
  [623] = 623,
  [624] = 624,
  [625] = 611,
  [626] = 620,
  [627] = 623,
  [628] = 552,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 530,
  [635] = 545,
  [636] = 553,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 629,
  [641] = 641,
  [642] = 642,
  [643] = 569,
  [644] = 644,
  [645] = 544,
  [646] = 536,
  [647] = 630,
  [648] = 631,
  [649] = 619,
  [650] = 551,
  [651] = 556,
  [652] = 557,
  [653] = 554,
  [654] = 599,
  [655] = 555,
  [656] = 614,
  [657] = 592,
  [658] = 589,
  [659] = 558,
  [660] = 559,
  [661] = 642,
  [662] = 641,
  [663] = 591,
  [664] = 538,
  [665] = 533,
  [666] = 639,
  [667] = 560,
  [668] = 562,
  [669] = 563,
  [670] = 638,
  [671] = 637,
  [672] = 564,
  [673] = 566,
};

static inline bool sym_account_character_set_1(int32_t c) {
  return (c < 7744
    ? (c < 1017
      ? (c < 444
        ? (c < 330
          ? (c < 284
            ? (c < 262
              ? (c < 192
                ? (c < 178
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= 179 || (c < 188
                    ? c == 185
                    : c <= 190)))
                : (c <= 214 || (c < 258
                  ? (c < 256
                    ? (c >= 216 && c <= 222)
                    : c <= 256)
                  : (c <= 258 || c == 260))))
              : (c <= 262 || (c < 274
                ? (c < 268
                  ? (c < 266
                    ? c == 264
                    : c <= 266)
                  : (c <= 268 || (c < 272
                    ? c == 270
                    : c <= 272)))
                : (c <= 274 || (c < 280
                  ? (c < 278
                    ? c == 276
                    : c <= 278)
                  : (c <= 280 || c == 282))))))
            : (c <= 284 || (c < 306
              ? (c < 296
                ? (c < 290
                  ? (c < 288
                    ? c == 286
                    : c <= 288)
                  : (c <= 290 || (c < 294
                    ? c == 292
                    : c <= 294)))
                : (c <= 296 || (c < 302
                  ? (c < 300
                    ? c == 298
                    : c <= 300)
                  : (c <= 302 || c == 304))))
              : (c <= 306 || (c < 319
                ? (c < 313
                  ? (c < 310
                    ? c == 308
                    : c <= 310)
                  : (c <= 313 || (c < 317
                    ? c == 315
                    : c <= 317)))
                : (c <= 319 || (c < 325
                  ? (c < 323
                    ? c == 321
                    : c <= 323)
                  : (c <= 325 || c == 327))))))))
          : (c <= 330 || (c < 374
            ? (c < 352
              ? (c < 342
                ? (c < 336
                  ? (c < 334
                    ? c == 332
                    : c <= 334)
                  : (c <= 336 || (c < 340
                    ? c == 338
                    : c <= 340)))
                : (c <= 342 || (c < 348
                  ? (c < 346
                    ? c == 344
                    : c <= 346)
                  : (c <= 348 || c == 350))))
              : (c <= 352 || (c < 364
                ? (c < 358
                  ? (c < 356
                    ? c == 354
                    : c <= 356)
                  : (c <= 358 || (c < 362
                    ? c == 360
                    : c <= 362)))
                : (c <= 364 || (c < 370
                  ? (c < 368
                    ? c == 366
                    : c <= 368)
                  : (c <= 370 || c == 372))))))
            : (c <= 374 || (c < 412
              ? (c < 390
                ? (c < 381
                  ? (c < 379
                    ? (c >= 376 && c <= 377)
                    : c <= 379)
                  : (c <= 381 || (c < 388
                    ? (c >= 385 && c <= 386)
                    : c <= 388)))
                : (c <= 391 || (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))))
              : (c <= 413 || (c < 428
                ? (c < 420
                  ? (c < 418
                    ? (c >= 415 && c <= 416)
                    : c <= 418)
                  : (c <= 420 || (c < 425
                    ? (c >= 422 && c <= 423)
                    : c <= 425)))
                : (c <= 428 || (c < 437
                  ? (c < 433
                    ? (c >= 430 && c <= 431)
                    : c <= 435)
                  : (c <= 437 || (c >= 439 && c <= 440)))))))))))
        : (c <= 444 || (c < 546
          ? (c < 500
            ? (c < 475
              ? (c < 465
                ? (c < 458
                  ? (c < 455
                    ? c == 452
                    : c <= 455)
                  : (c <= 458 || (c < 463
                    ? c == 461
                    : c <= 463)))
                : (c <= 465 || (c < 471
                  ? (c < 469
                    ? c == 467
                    : c <= 469)
                  : (c <= 471 || c == 473))))
              : (c <= 475 || (c < 488
                ? (c < 482
                  ? (c < 480
                    ? c == 478
                    : c <= 480)
                  : (c <= 482 || (c < 486
                    ? c == 484
                    : c <= 486)))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))))
            : (c <= 500 || (c < 524
              ? (c < 514
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || (c < 512
                    ? c == 510
                    : c <= 512)))
                : (c <= 514 || (c < 520
                  ? (c < 518
                    ? c == 516
                    : c <= 518)
                  : (c <= 520 || c == 522))))
              : (c <= 524 || (c < 536
                ? (c < 530
                  ? (c < 528
                    ? c == 526
                    : c <= 528)
                  : (c <= 530 || (c < 534
                    ? c == 532
                    : c <= 534)))
                : (c <= 536 || (c < 542
                  ? (c < 540
                    ? c == 538
                    : c <= 540)
                  : (c <= 542 || c == 544))))))))
          : (c <= 546 || (c < 904
            ? (c < 577
              ? (c < 558
                ? (c < 552
                  ? (c < 550
                    ? c == 548
                    : c <= 550)
                  : (c <= 552 || (c < 556
                    ? c == 554
                    : c <= 556)))
                : (c <= 558 || (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))))
              : (c <= 577 || (c < 880
                ? (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || (c < 590
                    ? c == 588
                    : c <= 590)))
                : (c <= 880 || (c < 895
                  ? (c < 886
                    ? c == 882
                    : c <= 886)
                  : (c <= 895 || c == 902))))))
            : (c <= 906 || (c < 992
              ? (c < 978
                ? (c < 913
                  ? (c < 910
                    ? c == 908
                    : c <= 911)
                  : (c <= 929 || (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)))
                : (c <= 980 || (c < 988
                  ? (c < 986
                    ? c == 984
                    : c <= 986)
                  : (c <= 988 || c == 990))))
              : (c <= 992 || (c < 1002
                ? (c < 998
                  ? (c < 996
                    ? c == 994
                    : c <= 996)
                  : (c <= 998 || c == 1000))
                : (c <= 1002 || (c < 1012
                  ? (c < 1006
                    ? c == 1004
                    : c <= 1006)
                  : (c <= 1012 || c == 1015))))))))))))
      : (c <= 1018 || (c < 1302
        ? (c < 1212
          ? (c < 1168
            ? (c < 1138
              ? (c < 1128
                ? (c < 1122
                  ? (c < 1120
                    ? (c >= 1021 && c <= 1071)
                    : c <= 1120)
                  : (c <= 1122 || (c < 1126
                    ? c == 1124
                    : c <= 1126)))
                : (c <= 1128 || (c < 1134
                  ? (c < 1132
                    ? c == 1130
                    : c <= 1132)
                  : (c <= 1134 || c == 1136))))
              : (c <= 1138 || (c < 1150
                ? (c < 1144
                  ? (c < 1142
                    ? c == 1140
                    : c <= 1142)
                  : (c <= 1144 || (c < 1148
                    ? c == 1146
                    : c <= 1148)))
                : (c <= 1150 || (c < 1164
                  ? (c < 1162
                    ? c == 1152
                    : c <= 1162)
                  : (c <= 1164 || c == 1166))))))
            : (c <= 1168 || (c < 1190
              ? (c < 1180
                ? (c < 1174
                  ? (c < 1172
                    ? c == 1170
                    : c <= 1172)
                  : (c <= 1174 || (c < 1178
                    ? c == 1176
                    : c <= 1178)))
                : (c <= 1180 || (c < 1186
                  ? (c < 1184
                    ? c == 1182
                    : c <= 1184)
                  : (c <= 1186 || c == 1188))))
              : (c <= 1190 || (c < 1202
                ? (c < 1196
                  ? (c < 1194
                    ? c == 1192
                    : c <= 1194)
                  : (c <= 1196 || (c < 1200
                    ? c == 1198
                    : c <= 1200)))
                : (c <= 1202 || (c < 1208
                  ? (c < 1206
                    ? c == 1204
                    : c <= 1206)
                  : (c <= 1208 || c == 1210))))))))
          : (c <= 1212 || (c < 1258
            ? (c < 1236
              ? (c < 1225
                ? (c < 1219
                  ? (c < 1216
                    ? c == 1214
                    : c <= 1217)
                  : (c <= 1219 || (c < 1223
                    ? c == 1221
                    : c <= 1223)))
                : (c <= 1225 || (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))))
              : (c <= 1236 || (c < 1248
                ? (c < 1242
                  ? (c < 1240
                    ? c == 1238
                    : c <= 1240)
                  : (c <= 1242 || (c < 1246
                    ? c == 1244
                    : c <= 1246)))
                : (c <= 1248 || (c < 1254
                  ? (c < 1252
                    ? c == 1250
                    : c <= 1252)
                  : (c <= 1254 || c == 1256))))))
            : (c <= 1258 || (c < 1280
              ? (c < 1270
                ? (c < 1264
                  ? (c < 1262
                    ? c == 1260
                    : c <= 1262)
                  : (c <= 1264 || (c < 1268
                    ? c == 1266
                    : c <= 1268)))
                : (c <= 1270 || (c < 1276
                  ? (c < 1274
                    ? c == 1272
                    : c <= 1274)
                  : (c <= 1276 || c == 1278))))
              : (c <= 1280 || (c < 1292
                ? (c < 1286
                  ? (c < 1284
                    ? c == 1282
                    : c <= 1284)
                  : (c <= 1286 || (c < 1290
                    ? c == 1288
                    : c <= 1290)))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))))))))
        : (c <= 1302 || (c < 6160
          ? (c < 2918
            ? (c < 1324
              ? (c < 1314
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || (c < 1312
                    ? c == 1310
                    : c <= 1312)))
                : (c <= 1314 || (c < 1320
                  ? (c < 1318
                    ? c == 1316
                    : c <= 1318)
                  : (c <= 1320 || c == 1322))))
              : (c <= 1324 || (c < 2406
                ? (c < 1632
                  ? (c < 1329
                    ? c == 1326
                    : c <= 1366)
                  : (c <= 1641 || (c < 1984
                    ? (c >= 1776 && c <= 1785)
                    : c <= 1993)))
                : (c <= 2415 || (c < 2662
                  ? (c < 2548
                    ? (c >= 2534 && c <= 2543)
                    : c <= 2553)
                  : (c <= 2671 || (c >= 2790 && c <= 2799)))))))
            : (c <= 2927 || (c < 3872
              ? (c < 3416
                ? (c < 3174
                  ? (c < 3046
                    ? (c >= 2930 && c <= 2935)
                    : c <= 3058)
                  : (c <= 3183 || (c < 3302
                    ? (c >= 3192 && c <= 3198)
                    : c <= 3311)))
                : (c <= 3422 || (c < 3664
                  ? (c < 3558
                    ? (c >= 3430 && c <= 3448)
                    : c <= 3567)
                  : (c <= 3673 || (c >= 3792 && c <= 3801)))))
              : (c <= 3891 || (c < 4969
                ? (c < 4256
                  ? (c < 4240
                    ? (c >= 4160 && c <= 4169)
                    : c <= 4249)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4988 || (c < 6112
                  ? (c < 5870
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5872)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))))))
          : (c <= 6169 || (c < 7702
            ? (c < 7680
              ? (c < 7088
                ? (c < 6784
                  ? (c < 6608
                    ? (c >= 6470 && c <= 6479)
                    : c <= 6618)
                  : (c <= 6793 || (c < 6992
                    ? (c >= 6800 && c <= 6809)
                    : c <= 7001)))
                : (c <= 7097 || (c < 7312
                  ? (c < 7248
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7257)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))
              : (c <= 7680 || (c < 7692
                ? (c < 7686
                  ? (c < 7684
                    ? c == 7682
                    : c <= 7684)
                  : (c <= 7686 || (c < 7690
                    ? c == 7688
                    : c <= 7690)))
                : (c <= 7692 || (c < 7698
                  ? (c < 7696
                    ? c == 7694
                    : c <= 7696)
                  : (c <= 7698 || c == 7700))))))
            : (c <= 7702 || (c < 7724
              ? (c < 7714
                ? (c < 7708
                  ? (c < 7706
                    ? c == 7704
                    : c <= 7706)
                  : (c <= 7708 || (c < 7712
                    ? c == 7710
                    : c <= 7712)))
                : (c <= 7714 || (c < 7720
                  ? (c < 7718
                    ? c == 7716
                    : c <= 7718)
                  : (c <= 7720 || c == 7722))))
              : (c <= 7724 || (c < 7734
                ? (c < 7730
                  ? (c < 7728
                    ? c == 7726
                    : c <= 7728)
                  : (c <= 7730 || c == 7732))
                : (c <= 7734 || (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))))))))))))))
    : (c <= 7744 || (c < 11468
      ? (c < 7928
        ? (c < 7840
          ? (c < 7788
            ? (c < 7766
              ? (c < 7756
                ? (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || (c < 7754
                    ? c == 7752
                    : c <= 7754)))
                : (c <= 7756 || (c < 7762
                  ? (c < 7760
                    ? c == 7758
                    : c <= 7760)
                  : (c <= 7762 || c == 7764))))
              : (c <= 7766 || (c < 7778
                ? (c < 7772
                  ? (c < 7770
                    ? c == 7768
                    : c <= 7770)
                  : (c <= 7772 || (c < 7776
                    ? c == 7774
                    : c <= 7776)))
                : (c <= 7778 || (c < 7784
                  ? (c < 7782
                    ? c == 7780
                    : c <= 7782)
                  : (c <= 7784 || c == 7786))))))
            : (c <= 7788 || (c < 7810
              ? (c < 7800
                ? (c < 7794
                  ? (c < 7792
                    ? c == 7790
                    : c <= 7792)
                  : (c <= 7794 || (c < 7798
                    ? c == 7796
                    : c <= 7798)))
                : (c <= 7800 || (c < 7806
                  ? (c < 7804
                    ? c == 7802
                    : c <= 7804)
                  : (c <= 7806 || c == 7808))))
              : (c <= 7810 || (c < 7822
                ? (c < 7816
                  ? (c < 7814
                    ? c == 7812
                    : c <= 7814)
                  : (c <= 7816 || (c < 7820
                    ? c == 7818
                    : c <= 7820)))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))))))
          : (c <= 7840 || (c < 7884
            ? (c < 7862
              ? (c < 7852
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || (c < 7850
                    ? c == 7848
                    : c <= 7850)))
                : (c <= 7852 || (c < 7858
                  ? (c < 7856
                    ? c == 7854
                    : c <= 7856)
                  : (c <= 7858 || c == 7860))))
              : (c <= 7862 || (c < 7874
                ? (c < 7868
                  ? (c < 7866
                    ? c == 7864
                    : c <= 7866)
                  : (c <= 7868 || (c < 7872
                    ? c == 7870
                    : c <= 7872)))
                : (c <= 7874 || (c < 7880
                  ? (c < 7878
                    ? c == 7876
                    : c <= 7878)
                  : (c <= 7880 || c == 7882))))))
            : (c <= 7884 || (c < 7906
              ? (c < 7896
                ? (c < 7890
                  ? (c < 7888
                    ? c == 7886
                    : c <= 7888)
                  : (c <= 7890 || (c < 7894
                    ? c == 7892
                    : c <= 7894)))
                : (c <= 7896 || (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))))
              : (c <= 7906 || (c < 7918
                ? (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || (c < 7916
                    ? c == 7914
                    : c <= 7916)))
                : (c <= 7918 || (c < 7924
                  ? (c < 7922
                    ? c == 7920
                    : c <= 7922)
                  : (c <= 7924 || c == 7926))))))))))
        : (c <= 7928 || (c < 11369
          ? (c < 8450
            ? (c < 8029
              ? (c < 7976
                ? (c < 7934
                  ? (c < 7932
                    ? c == 7930
                    : c <= 7932)
                  : (c <= 7934 || (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)))
                : (c <= 7983 || (c < 8025
                  ? (c < 8008
                    ? (c >= 7992 && c <= 7999)
                    : c <= 8013)
                  : (c <= 8025 || c == 8027))))
              : (c <= 8029 || (c < 8168
                ? (c < 8120
                  ? (c < 8040
                    ? c == 8031
                    : c <= 8047)
                  : (c <= 8123 || (c < 8152
                    ? (c >= 8136 && c <= 8139)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8308
                  ? (c < 8304
                    ? (c >= 8184 && c <= 8187)
                    : c <= 8304)
                  : (c <= 8313 || (c >= 8320 && c <= 8329)))))))
            : (c <= 8450 || (c < 8510
              ? (c < 8484
                ? (c < 8464
                  ? (c < 8459
                    ? c == 8455
                    : c <= 8461)
                  : (c <= 8466 || (c < 8473
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c >= 8496 && c <= 8499)))))
              : (c <= 8511 || (c < 10102
                ? (c < 8581
                  ? (c < 8528
                    ? c == 8517
                    : c <= 8579)
                  : (c <= 8585 || (c < 9450
                    ? (c >= 9312 && c <= 9371)
                    : c <= 9471)))
                : (c <= 10131 || (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))))))))
          : (c <= 11369 || (c < 11426
            ? (c < 11404
              ? (c < 11394
                ? (c < 11378
                  ? (c < 11373
                    ? c == 11371
                    : c <= 11376)
                  : (c <= 11378 || (c < 11390
                    ? c == 11381
                    : c <= 11392)))
                : (c <= 11394 || (c < 11400
                  ? (c < 11398
                    ? c == 11396
                    : c <= 11398)
                  : (c <= 11400 || c == 11402))))
              : (c <= 11404 || (c < 11416
                ? (c < 11410
                  ? (c < 11408
                    ? c == 11406
                    : c <= 11408)
                  : (c <= 11410 || (c < 11414
                    ? c == 11412
                    : c <= 11414)))
                : (c <= 11416 || (c < 11422
                  ? (c < 11420
                    ? c == 11418
                    : c <= 11420)
                  : (c <= 11422 || c == 11424))))))
            : (c <= 11426 || (c < 11448
              ? (c < 11438
                ? (c < 11432
                  ? (c < 11430
                    ? c == 11428
                    : c <= 11430)
                  : (c <= 11432 || (c < 11436
                    ? c == 11434
                    : c <= 11436)))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))))))))
      : (c <= 11468 || (c < 42830
        ? (c < 42590
          ? (c < 12872
            ? (c < 11490
              ? (c < 11480
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || (c < 11478
                    ? c == 11476
                    : c <= 11478)))
                : (c <= 11480 || (c < 11486
                  ? (c < 11484
                    ? c == 11482
                    : c <= 11484)
                  : (c <= 11486 || c == 11488))))
              : (c <= 11490 || (c < 12321
                ? (c < 11506
                  ? (c < 11501
                    ? c == 11499
                    : c <= 11501)
                  : (c <= 11506 || (c < 12295
                    ? c == 11517
                    : c <= 12295)))
                : (c <= 12329 || (c < 12690
                  ? (c < 12352
                    ? (c >= 12344 && c <= 12346)
                    : c <= 12543)
                  : (c <= 12693 || (c >= 12832 && c <= 12841)))))))
            : (c <= 12879 || (c < 42568
              ? (c < 42528
                ? (c < 12977
                  ? (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : c <= 12937)
                  : (c <= 12991 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 40959)))
                : (c <= 42537 || (c < 42564
                  ? (c < 42562
                    ? c == 42560
                    : c <= 42562)
                  : (c <= 42564 || c == 42566))))
              : (c <= 42568 || (c < 42580
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || (c < 42578
                    ? c == 42576
                    : c <= 42578)))
                : (c <= 42580 || (c < 42586
                  ? (c < 42584
                    ? c == 42582
                    : c <= 42584)
                  : (c <= 42586 || c == 42588))))))))
          : (c <= 42590 || (c < 42726
            ? (c < 42630
              ? (c < 42602
                ? (c < 42596
                  ? (c < 42594
                    ? c == 42592
                    : c <= 42594)
                  : (c <= 42596 || (c < 42600
                    ? c == 42598
                    : c <= 42600)))
                : (c <= 42602 || (c < 42626
                  ? (c < 42624
                    ? c == 42604
                    : c <= 42624)
                  : (c <= 42626 || c == 42628))))
              : (c <= 42630 || (c < 42642
                ? (c < 42636
                  ? (c < 42634
                    ? c == 42632
                    : c <= 42634)
                  : (c <= 42636 || (c < 42640
                    ? c == 42638
                    : c <= 42640)))
                : (c <= 42642 || (c < 42648
                  ? (c < 42646
                    ? c == 42644
                    : c <= 42646)
                  : (c <= 42648 || c == 42650))))))
            : (c <= 42735 || (c < 42808
              ? (c < 42796
                ? (c < 42790
                  ? (c < 42788
                    ? c == 42786
                    : c <= 42788)
                  : (c <= 42790 || (c < 42794
                    ? c == 42792
                    : c <= 42794)))
                : (c <= 42796 || (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))))
              : (c <= 42808 || (c < 42820
                ? (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || (c < 42818
                    ? c == 42816
                    : c <= 42818)))
                : (c <= 42820 || (c < 42826
                  ? (c < 42824
                    ? c == 42822
                    : c <= 42824)
                  : (c <= 42826 || c == 42828))))))))))
        : (c <= 42830 || (c < 42942
          ? (c < 42884
            ? (c < 42852
              ? (c < 42842
                ? (c < 42836
                  ? (c < 42834
                    ? c == 42832
                    : c <= 42834)
                  : (c <= 42836 || (c < 42840
                    ? c == 42838
                    : c <= 42840)))
                : (c <= 42842 || (c < 42848
                  ? (c < 42846
                    ? c == 42844
                    : c <= 42846)
                  : (c <= 42848 || c == 42850))))
              : (c <= 42852 || (c < 42873
                ? (c < 42858
                  ? (c < 42856
                    ? c == 42854
                    : c <= 42856)
                  : (c <= 42858 || (c < 42862
                    ? c == 42860
                    : c <= 42862)))
                : (c <= 42873 || (c < 42880
                  ? (c < 42877
                    ? c == 42875
                    : c <= 42878)
                  : (c <= 42880 || c == 42882))))))
            : (c <= 42884 || (c < 42912
              ? (c < 42902
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || (c < 42898
                    ? c == 42896
                    : c <= 42898)))
                : (c <= 42902 || (c < 42908
                  ? (c < 42906
                    ? c == 42904
                    : c <= 42906)
                  : (c <= 42908 || c == 42910))))
              : (c <= 42912 || (c < 42928
                ? (c < 42918
                  ? (c < 42916
                    ? c == 42914
                    : c <= 42916)
                  : (c <= 42918 || (c < 42922
                    ? c == 42920
                    : c <= 42926)))
                : (c <= 42932 || (c < 42938
                  ? (c < 42936
                    ? c == 42934
                    : c <= 42936)
                  : (c <= 42938 || c == 42940))))))))
          : (c <= 42942 || (c < 65930
            ? (c < 43264
              ? (c < 42966
                ? (c < 42948
                  ? (c < 42946
                    ? c == 42944
                    : c <= 42946)
                  : (c <= 42951 || (c < 42960
                    ? c == 42953
                    : c <= 42960)))
                : (c <= 42966 || (c < 43056
                  ? (c < 42997
                    ? c == 42968
                    : c <= 42997)
                  : (c <= 43061 || (c >= 43216 && c <= 43225)))))
              : (c <= 43273 || (c < 63744
                ? (c < 43600
                  ? (c < 43504
                    ? (c >= 43472 && c <= 43481)
                    : c <= 43513)
                  : (c <= 43609 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55215)))
                : (c <= 64255 || (c < 65799
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))))
            : (c <= 65931 || (c < 66956
              ? (c < 66560
                ? (c < 66369
                  ? (c < 66336
                    ? (c >= 66273 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66369 || (c < 66513
                    ? c == 66378
                    : c <= 66517)))
                : (c <= 66599 || (c < 66928
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))
              : (c <= 66962 || (c < 67835
                ? (c < 67705
                  ? (c < 67672
                    ? (c >= 66964 && c <= 66965)
                    : c <= 67679)
                  : (c <= 67711 || (c >= 67751 && c <= 67759)))
                : (c <= 67839 || (c < 173824
                  ? (c < 131072
                    ? (c >= 67862 && c <= 67867)
                    : c <= 173791)
                  : (c <= 183983 || (c >= 194560 && c <= 195103)))))))))))))))));
}

static inline bool sym_account_character_set_2(int32_t c) {
  return (c < 6528
    ? (c < 2990
      ? (c < 2384
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2958
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3976
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6272
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : c <= 6264)))
              : (c <= 6276 || (c < 6400
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43138
      ? (c < 8526
        ? (c < 8027
          ? (c < 7245
            ? (c < 6917
              ? (c < 6688
                ? (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6800
                  ? (c >= 6784 && c <= 6793)
                  : (c <= 6809 || c == 6823))))
              : (c <= 6963 || (c < 7086
                ? (c < 6992
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))
                : (c <= 7141 || (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7241)))))
            : (c <= 7293 || (c < 7424
              ? (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8144
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))
              : (c <= 8147 || (c < 8182
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : c <= 8313)))))
            : (c <= 8329 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8495
                ? (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12593
          ? (c < 11680
            ? (c < 11517
              ? (c < 10102
                ? (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : (c <= 9371 || (c >= 9450 && c <= 9471)))
                : (c <= 10131 || (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))))
              : (c <= 11517 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11823
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))
              : (c <= 11823 || (c < 12344
                ? (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12549
                  ? (c >= 12352 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42623
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 42240
                ? (c < 19968
                  ? (c >= 13312 && c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65482
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64320
            ? (c < 63744
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))
              : (c <= 64262 || (c < 64298
                ? (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : c <= 64318)))))
            : (c <= 64321 || (c < 65136
              ? (c < 64848
                ? (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))
                : (c <= 64911 || (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)))
              : (c <= 65140 || (c < 65345
                ? (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65305 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : c <= 65479)))))))))
        : (c <= 65487 || (c < 66940
          ? (c < 66273
            ? (c < 65616
              ? (c < 65549
                ? (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))
                : (c <= 65574 || (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))
              : (c <= 65629 || (c < 65930
                ? (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))
                : (c <= 65931 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : c <= 66256)))))
            : (c <= 66299 || (c < 66560
              ? (c < 66432
                ? (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))
                : (c <= 66461 || (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66816
                ? (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : c <= 66938)))))))
          : (c <= 66954 || (c < 67594
            ? (c < 67392
              ? (c < 66979
                ? (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))))
              : (c <= 67413 || (c < 67506
                ? (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))
                : (c <= 67514 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))))
            : (c <= 67637 || (c < 67808
              ? (c < 67672
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : c <= 67759)))
              : (c <= 67826 || (c < 131072
                ? (c < 67835
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))
                : (c <= 173791 || (c < 194560
                  ? (c >= 173824 && c <= 183983)
                  : c <= 195103)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '!') ADVANCE(271);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(289);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == '{') ADVANCE(291);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '~') ADVANCE(290);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead == '%' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == '1') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'q') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(295);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(46)
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(99);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      END_STATE();
    case 51:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      END_STATE();
    case 52:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '!') ADVANCE(271);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(289);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '{') ADVANCE(291);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(289);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == '~') ADVANCE(290);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '!') ADVANCE(271);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(145);
      if (lookahead == 'L') ADVANCE(143);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == '{') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'F') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(145);
      if (lookahead == 'L') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(137);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(289);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '~') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '#' ||
          lookahead == '*') ADVANCE(103);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 62:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      END_STATE();
    case 64:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 66:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 67:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 68:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 70:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      END_STATE();
    case 71:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 72:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      END_STATE();
    case 73:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 74:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 75:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 76:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 77:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 78:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 79:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 80:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 81:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 82:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 83:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 90:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 91:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 92:
      if (sym_account_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(87);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(296);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(87);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__org_stars_token1);
      if (lookahead == '#' ||
          lookahead == '*') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_item);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_item);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(98);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_atat);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_at);
      if (lookahead == '@') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_slash);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__none);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__none);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(92);
      if (sym_account_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(256);
      if (sym_account_character_set_2(lookahead)) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(139);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'R') ADVANCE(142);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'S') ADVANCE(130);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'S') ADVANCE(131);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'U') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'U') ADVANCE(135);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'U') ADVANCE(129);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'q') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'q') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == ',') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '0') ADVANCE(252);
      if (lookahead == '1') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == '3') ADVANCE(228);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == 'y') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (sym_account_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(268);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '.') ADVANCE(268);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'y') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_currency);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_currency);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_currency_key_value_token1);
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_currency_key_value_token1);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_currency_key_value_token1);
      if (lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(297);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(283);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_txn);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 93, .external_lex_state = 2},
  [2] = {.lex_state = 93, .external_lex_state = 2},
  [3] = {.lex_state = 93, .external_lex_state = 2},
  [4] = {.lex_state = 93, .external_lex_state = 3},
  [5] = {.lex_state = 93, .external_lex_state = 3},
  [6] = {.lex_state = 93, .external_lex_state = 3},
  [7] = {.lex_state = 93, .external_lex_state = 3},
  [8] = {.lex_state = 93, .external_lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 94, .external_lex_state = 2},
  [12] = {.lex_state = 94, .external_lex_state = 3},
  [13] = {.lex_state = 94, .external_lex_state = 2},
  [14] = {.lex_state = 94, .external_lex_state = 2},
  [15] = {.lex_state = 94, .external_lex_state = 2},
  [16] = {.lex_state = 94, .external_lex_state = 2},
  [17] = {.lex_state = 94, .external_lex_state = 2},
  [18] = {.lex_state = 94, .external_lex_state = 2},
  [19] = {.lex_state = 94, .external_lex_state = 2},
  [20] = {.lex_state = 94, .external_lex_state = 2},
  [21] = {.lex_state = 94, .external_lex_state = 2},
  [22] = {.lex_state = 94, .external_lex_state = 2},
  [23] = {.lex_state = 94, .external_lex_state = 2},
  [24] = {.lex_state = 94, .external_lex_state = 3},
  [25] = {.lex_state = 94, .external_lex_state = 3},
  [26] = {.lex_state = 94, .external_lex_state = 3},
  [27] = {.lex_state = 94, .external_lex_state = 3},
  [28] = {.lex_state = 94, .external_lex_state = 3},
  [29] = {.lex_state = 94, .external_lex_state = 3},
  [30] = {.lex_state = 94, .external_lex_state = 3},
  [31] = {.lex_state = 94, .external_lex_state = 3},
  [32] = {.lex_state = 94, .external_lex_state = 2},
  [33] = {.lex_state = 94, .external_lex_state = 2},
  [34] = {.lex_state = 94, .external_lex_state = 2},
  [35] = {.lex_state = 94, .external_lex_state = 2},
  [36] = {.lex_state = 94, .external_lex_state = 3},
  [37] = {.lex_state = 94, .external_lex_state = 3},
  [38] = {.lex_state = 94, .external_lex_state = 3},
  [39] = {.lex_state = 94, .external_lex_state = 3},
  [40] = {.lex_state = 94, .external_lex_state = 3},
  [41] = {.lex_state = 94, .external_lex_state = 3},
  [42] = {.lex_state = 94, .external_lex_state = 3},
  [43] = {.lex_state = 94, .external_lex_state = 2},
  [44] = {.lex_state = 94, .external_lex_state = 3},
  [45] = {.lex_state = 94, .external_lex_state = 3},
  [46] = {.lex_state = 94, .external_lex_state = 2},
  [47] = {.lex_state = 94, .external_lex_state = 3},
  [48] = {.lex_state = 94, .external_lex_state = 3},
  [49] = {.lex_state = 94, .external_lex_state = 3},
  [50] = {.lex_state = 94, .external_lex_state = 3},
  [51] = {.lex_state = 94, .external_lex_state = 3},
  [52] = {.lex_state = 94, .external_lex_state = 3},
  [53] = {.lex_state = 94, .external_lex_state = 3},
  [54] = {.lex_state = 94, .external_lex_state = 3},
  [55] = {.lex_state = 94, .external_lex_state = 3},
  [56] = {.lex_state = 94, .external_lex_state = 3},
  [57] = {.lex_state = 94, .external_lex_state = 3},
  [58] = {.lex_state = 94, .external_lex_state = 3},
  [59] = {.lex_state = 94, .external_lex_state = 3},
  [60] = {.lex_state = 94, .external_lex_state = 3},
  [61] = {.lex_state = 94, .external_lex_state = 3},
  [62] = {.lex_state = 94, .external_lex_state = 3},
  [63] = {.lex_state = 94, .external_lex_state = 3},
  [64] = {.lex_state = 94, .external_lex_state = 3},
  [65] = {.lex_state = 94, .external_lex_state = 3},
  [66] = {.lex_state = 94, .external_lex_state = 3},
  [67] = {.lex_state = 94, .external_lex_state = 3},
  [68] = {.lex_state = 94, .external_lex_state = 3},
  [69] = {.lex_state = 94, .external_lex_state = 3},
  [70] = {.lex_state = 94, .external_lex_state = 3},
  [71] = {.lex_state = 94, .external_lex_state = 3},
  [72] = {.lex_state = 94, .external_lex_state = 3},
  [73] = {.lex_state = 94, .external_lex_state = 3},
  [74] = {.lex_state = 94, .external_lex_state = 3},
  [75] = {.lex_state = 94, .external_lex_state = 3},
  [76] = {.lex_state = 94, .external_lex_state = 3},
  [77] = {.lex_state = 94, .external_lex_state = 3},
  [78] = {.lex_state = 94, .external_lex_state = 3},
  [79] = {.lex_state = 94, .external_lex_state = 3},
  [80] = {.lex_state = 94, .external_lex_state = 3},
  [81] = {.lex_state = 94, .external_lex_state = 3},
  [82] = {.lex_state = 94, .external_lex_state = 3},
  [83] = {.lex_state = 94, .external_lex_state = 3},
  [84] = {.lex_state = 94, .external_lex_state = 3},
  [85] = {.lex_state = 94, .external_lex_state = 3},
  [86] = {.lex_state = 94, .external_lex_state = 2},
  [87] = {.lex_state = 94, .external_lex_state = 3},
  [88] = {.lex_state = 94, .external_lex_state = 3},
  [89] = {.lex_state = 94, .external_lex_state = 3},
  [90] = {.lex_state = 94, .external_lex_state = 3},
  [91] = {.lex_state = 94, .external_lex_state = 2},
  [92] = {.lex_state = 94, .external_lex_state = 2},
  [93] = {.lex_state = 94, .external_lex_state = 3},
  [94] = {.lex_state = 94, .external_lex_state = 3},
  [95] = {.lex_state = 94, .external_lex_state = 3},
  [96] = {.lex_state = 94, .external_lex_state = 3},
  [97] = {.lex_state = 94, .external_lex_state = 3},
  [98] = {.lex_state = 94, .external_lex_state = 3},
  [99] = {.lex_state = 94, .external_lex_state = 3},
  [100] = {.lex_state = 94, .external_lex_state = 2},
  [101] = {.lex_state = 94, .external_lex_state = 2},
  [102] = {.lex_state = 94, .external_lex_state = 3},
  [103] = {.lex_state = 94, .external_lex_state = 2},
  [104] = {.lex_state = 94, .external_lex_state = 2},
  [105] = {.lex_state = 94, .external_lex_state = 2},
  [106] = {.lex_state = 94, .external_lex_state = 2},
  [107] = {.lex_state = 94, .external_lex_state = 2},
  [108] = {.lex_state = 94, .external_lex_state = 2},
  [109] = {.lex_state = 94, .external_lex_state = 2},
  [110] = {.lex_state = 94, .external_lex_state = 3},
  [111] = {.lex_state = 94, .external_lex_state = 2},
  [112] = {.lex_state = 94, .external_lex_state = 3},
  [113] = {.lex_state = 94, .external_lex_state = 3},
  [114] = {.lex_state = 94, .external_lex_state = 3},
  [115] = {.lex_state = 94, .external_lex_state = 3},
  [116] = {.lex_state = 94, .external_lex_state = 2},
  [117] = {.lex_state = 94, .external_lex_state = 2},
  [118] = {.lex_state = 94, .external_lex_state = 3},
  [119] = {.lex_state = 94, .external_lex_state = 2},
  [120] = {.lex_state = 94, .external_lex_state = 2},
  [121] = {.lex_state = 94, .external_lex_state = 2},
  [122] = {.lex_state = 94, .external_lex_state = 2},
  [123] = {.lex_state = 94, .external_lex_state = 3},
  [124] = {.lex_state = 94, .external_lex_state = 3},
  [125] = {.lex_state = 94, .external_lex_state = 3},
  [126] = {.lex_state = 94, .external_lex_state = 3},
  [127] = {.lex_state = 94, .external_lex_state = 3},
  [128] = {.lex_state = 94, .external_lex_state = 3},
  [129] = {.lex_state = 94, .external_lex_state = 3},
  [130] = {.lex_state = 94, .external_lex_state = 2},
  [131] = {.lex_state = 94, .external_lex_state = 2},
  [132] = {.lex_state = 94, .external_lex_state = 2},
  [133] = {.lex_state = 94, .external_lex_state = 2},
  [134] = {.lex_state = 94, .external_lex_state = 2},
  [135] = {.lex_state = 94, .external_lex_state = 2},
  [136] = {.lex_state = 94, .external_lex_state = 2},
  [137] = {.lex_state = 94, .external_lex_state = 2},
  [138] = {.lex_state = 94, .external_lex_state = 2},
  [139] = {.lex_state = 94, .external_lex_state = 2},
  [140] = {.lex_state = 94, .external_lex_state = 2},
  [141] = {.lex_state = 94, .external_lex_state = 2},
  [142] = {.lex_state = 94, .external_lex_state = 2},
  [143] = {.lex_state = 94, .external_lex_state = 2},
  [144] = {.lex_state = 94, .external_lex_state = 2},
  [145] = {.lex_state = 94, .external_lex_state = 2},
  [146] = {.lex_state = 94, .external_lex_state = 2},
  [147] = {.lex_state = 94, .external_lex_state = 2},
  [148] = {.lex_state = 94, .external_lex_state = 2},
  [149] = {.lex_state = 94, .external_lex_state = 2},
  [150] = {.lex_state = 94, .external_lex_state = 2},
  [151] = {.lex_state = 94, .external_lex_state = 2},
  [152] = {.lex_state = 94, .external_lex_state = 2},
  [153] = {.lex_state = 94, .external_lex_state = 2},
  [154] = {.lex_state = 94, .external_lex_state = 2},
  [155] = {.lex_state = 94, .external_lex_state = 2},
  [156] = {.lex_state = 94, .external_lex_state = 2},
  [157] = {.lex_state = 94, .external_lex_state = 2},
  [158] = {.lex_state = 94, .external_lex_state = 2},
  [159] = {.lex_state = 94, .external_lex_state = 2},
  [160] = {.lex_state = 94, .external_lex_state = 2},
  [161] = {.lex_state = 94, .external_lex_state = 2},
  [162] = {.lex_state = 94, .external_lex_state = 2},
  [163] = {.lex_state = 94, .external_lex_state = 2},
  [164] = {.lex_state = 94, .external_lex_state = 2},
  [165] = {.lex_state = 94, .external_lex_state = 2},
  [166] = {.lex_state = 94, .external_lex_state = 2},
  [167] = {.lex_state = 94, .external_lex_state = 2},
  [168] = {.lex_state = 94, .external_lex_state = 2},
  [169] = {.lex_state = 94, .external_lex_state = 2},
  [170] = {.lex_state = 94, .external_lex_state = 2},
  [171] = {.lex_state = 94, .external_lex_state = 2},
  [172] = {.lex_state = 94, .external_lex_state = 2},
  [173] = {.lex_state = 94, .external_lex_state = 2},
  [174] = {.lex_state = 94, .external_lex_state = 2},
  [175] = {.lex_state = 53},
  [176] = {.lex_state = 54},
  [177] = {.lex_state = 55},
  [178] = {.lex_state = 53},
  [179] = {.lex_state = 53},
  [180] = {.lex_state = 53},
  [181] = {.lex_state = 53},
  [182] = {.lex_state = 94, .external_lex_state = 3},
  [183] = {.lex_state = 94, .external_lex_state = 3},
  [184] = {.lex_state = 94, .external_lex_state = 2},
  [185] = {.lex_state = 94, .external_lex_state = 2},
  [186] = {.lex_state = 94, .external_lex_state = 2},
  [187] = {.lex_state = 94, .external_lex_state = 2},
  [188] = {.lex_state = 94, .external_lex_state = 2},
  [189] = {.lex_state = 94, .external_lex_state = 2},
  [190] = {.lex_state = 94, .external_lex_state = 2},
  [191] = {.lex_state = 94, .external_lex_state = 2},
  [192] = {.lex_state = 94, .external_lex_state = 2},
  [193] = {.lex_state = 94, .external_lex_state = 2},
  [194] = {.lex_state = 94, .external_lex_state = 2},
  [195] = {.lex_state = 94, .external_lex_state = 2},
  [196] = {.lex_state = 94, .external_lex_state = 2},
  [197] = {.lex_state = 94, .external_lex_state = 2},
  [198] = {.lex_state = 94, .external_lex_state = 2},
  [199] = {.lex_state = 94, .external_lex_state = 2},
  [200] = {.lex_state = 94, .external_lex_state = 2},
  [201] = {.lex_state = 94, .external_lex_state = 2},
  [202] = {.lex_state = 94, .external_lex_state = 2},
  [203] = {.lex_state = 94, .external_lex_state = 2},
  [204] = {.lex_state = 94, .external_lex_state = 2},
  [205] = {.lex_state = 94, .external_lex_state = 2},
  [206] = {.lex_state = 94, .external_lex_state = 2},
  [207] = {.lex_state = 94, .external_lex_state = 2},
  [208] = {.lex_state = 94, .external_lex_state = 2},
  [209] = {.lex_state = 94, .external_lex_state = 2},
  [210] = {.lex_state = 94, .external_lex_state = 2},
  [211] = {.lex_state = 94, .external_lex_state = 2},
  [212] = {.lex_state = 94, .external_lex_state = 2},
  [213] = {.lex_state = 94, .external_lex_state = 2},
  [214] = {.lex_state = 94, .external_lex_state = 2},
  [215] = {.lex_state = 94, .external_lex_state = 2},
  [216] = {.lex_state = 94, .external_lex_state = 3},
  [217] = {.lex_state = 94, .external_lex_state = 3},
  [218] = {.lex_state = 94, .external_lex_state = 3},
  [219] = {.lex_state = 94, .external_lex_state = 2},
  [220] = {.lex_state = 94, .external_lex_state = 3},
  [221] = {.lex_state = 94, .external_lex_state = 3},
  [222] = {.lex_state = 94, .external_lex_state = 3},
  [223] = {.lex_state = 94, .external_lex_state = 3},
  [224] = {.lex_state = 94, .external_lex_state = 3},
  [225] = {.lex_state = 94, .external_lex_state = 3},
  [226] = {.lex_state = 94, .external_lex_state = 3},
  [227] = {.lex_state = 94, .external_lex_state = 3},
  [228] = {.lex_state = 94, .external_lex_state = 3},
  [229] = {.lex_state = 94, .external_lex_state = 2},
  [230] = {.lex_state = 94, .external_lex_state = 2},
  [231] = {.lex_state = 94, .external_lex_state = 2},
  [232] = {.lex_state = 94, .external_lex_state = 2},
  [233] = {.lex_state = 94, .external_lex_state = 3},
  [234] = {.lex_state = 94, .external_lex_state = 2},
  [235] = {.lex_state = 94, .external_lex_state = 3},
  [236] = {.lex_state = 94, .external_lex_state = 3},
  [237] = {.lex_state = 94, .external_lex_state = 2},
  [238] = {.lex_state = 94, .external_lex_state = 3},
  [239] = {.lex_state = 94, .external_lex_state = 2},
  [240] = {.lex_state = 94, .external_lex_state = 2},
  [241] = {.lex_state = 94, .external_lex_state = 2},
  [242] = {.lex_state = 94, .external_lex_state = 2},
  [243] = {.lex_state = 94, .external_lex_state = 2},
  [244] = {.lex_state = 94, .external_lex_state = 3},
  [245] = {.lex_state = 94, .external_lex_state = 3},
  [246] = {.lex_state = 94, .external_lex_state = 3},
  [247] = {.lex_state = 94, .external_lex_state = 2},
  [248] = {.lex_state = 94, .external_lex_state = 3},
  [249] = {.lex_state = 94, .external_lex_state = 2},
  [250] = {.lex_state = 94, .external_lex_state = 3},
  [251] = {.lex_state = 94, .external_lex_state = 3},
  [252] = {.lex_state = 94, .external_lex_state = 3},
  [253] = {.lex_state = 94, .external_lex_state = 3},
  [254] = {.lex_state = 94, .external_lex_state = 3},
  [255] = {.lex_state = 94, .external_lex_state = 3},
  [256] = {.lex_state = 94, .external_lex_state = 3},
  [257] = {.lex_state = 94, .external_lex_state = 3},
  [258] = {.lex_state = 94, .external_lex_state = 2},
  [259] = {.lex_state = 94, .external_lex_state = 3},
  [260] = {.lex_state = 94, .external_lex_state = 3},
  [261] = {.lex_state = 94, .external_lex_state = 3},
  [262] = {.lex_state = 94, .external_lex_state = 3},
  [263] = {.lex_state = 94, .external_lex_state = 2},
  [264] = {.lex_state = 94, .external_lex_state = 3},
  [265] = {.lex_state = 94, .external_lex_state = 3},
  [266] = {.lex_state = 94, .external_lex_state = 3},
  [267] = {.lex_state = 94, .external_lex_state = 3},
  [268] = {.lex_state = 94, .external_lex_state = 3},
  [269] = {.lex_state = 94, .external_lex_state = 3},
  [270] = {.lex_state = 94, .external_lex_state = 3},
  [271] = {.lex_state = 94, .external_lex_state = 3},
  [272] = {.lex_state = 94, .external_lex_state = 3},
  [273] = {.lex_state = 94, .external_lex_state = 3},
  [274] = {.lex_state = 94, .external_lex_state = 3},
  [275] = {.lex_state = 94, .external_lex_state = 2},
  [276] = {.lex_state = 94, .external_lex_state = 3},
  [277] = {.lex_state = 94, .external_lex_state = 2},
  [278] = {.lex_state = 94, .external_lex_state = 3},
  [279] = {.lex_state = 94, .external_lex_state = 3},
  [280] = {.lex_state = 94, .external_lex_state = 3},
  [281] = {.lex_state = 94, .external_lex_state = 2},
  [282] = {.lex_state = 94, .external_lex_state = 2},
  [283] = {.lex_state = 94, .external_lex_state = 3},
  [284] = {.lex_state = 94, .external_lex_state = 2},
  [285] = {.lex_state = 94, .external_lex_state = 2},
  [286] = {.lex_state = 94, .external_lex_state = 3},
  [287] = {.lex_state = 94, .external_lex_state = 3},
  [288] = {.lex_state = 94, .external_lex_state = 3},
  [289] = {.lex_state = 94, .external_lex_state = 3},
  [290] = {.lex_state = 93, .external_lex_state = 3},
  [291] = {.lex_state = 56},
  [292] = {.lex_state = 93, .external_lex_state = 3},
  [293] = {.lex_state = 93, .external_lex_state = 3},
  [294] = {.lex_state = 93, .external_lex_state = 2},
  [295] = {.lex_state = 93, .external_lex_state = 2},
  [296] = {.lex_state = 93, .external_lex_state = 3},
  [297] = {.lex_state = 93, .external_lex_state = 3},
  [298] = {.lex_state = 93, .external_lex_state = 3},
  [299] = {.lex_state = 93, .external_lex_state = 3},
  [300] = {.lex_state = 54},
  [301] = {.lex_state = 93, .external_lex_state = 3},
  [302] = {.lex_state = 93, .external_lex_state = 3},
  [303] = {.lex_state = 93, .external_lex_state = 3},
  [304] = {.lex_state = 93, .external_lex_state = 3},
  [305] = {.lex_state = 93, .external_lex_state = 3},
  [306] = {.lex_state = 93, .external_lex_state = 2},
  [307] = {.lex_state = 93, .external_lex_state = 3},
  [308] = {.lex_state = 93, .external_lex_state = 2},
  [309] = {.lex_state = 93, .external_lex_state = 2},
  [310] = {.lex_state = 93, .external_lex_state = 2},
  [311] = {.lex_state = 93, .external_lex_state = 2},
  [312] = {.lex_state = 56},
  [313] = {.lex_state = 93, .external_lex_state = 2},
  [314] = {.lex_state = 93, .external_lex_state = 2},
  [315] = {.lex_state = 93, .external_lex_state = 2},
  [316] = {.lex_state = 93, .external_lex_state = 2},
  [317] = {.lex_state = 93, .external_lex_state = 2},
  [318] = {.lex_state = 56},
  [319] = {.lex_state = 93, .external_lex_state = 2},
  [320] = {.lex_state = 93, .external_lex_state = 3},
  [321] = {.lex_state = 93, .external_lex_state = 3},
  [322] = {.lex_state = 93, .external_lex_state = 2},
  [323] = {.lex_state = 56},
  [324] = {.lex_state = 93, .external_lex_state = 3},
  [325] = {.lex_state = 93, .external_lex_state = 3},
  [326] = {.lex_state = 53},
  [327] = {.lex_state = 53},
  [328] = {.lex_state = 53},
  [329] = {.lex_state = 53},
  [330] = {.lex_state = 57},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 57},
  [333] = {.lex_state = 56},
  [334] = {.lex_state = 56},
  [335] = {.lex_state = 57},
  [336] = {.lex_state = 57},
  [337] = {.lex_state = 58},
  [338] = {.lex_state = 56},
  [339] = {.lex_state = 56},
  [340] = {.lex_state = 56},
  [341] = {.lex_state = 56},
  [342] = {.lex_state = 56},
  [343] = {.lex_state = 58},
  [344] = {.lex_state = 56},
  [345] = {.lex_state = 56},
  [346] = {.lex_state = 56},
  [347] = {.lex_state = 58},
  [348] = {.lex_state = 56},
  [349] = {.lex_state = 56},
  [350] = {.lex_state = 56},
  [351] = {.lex_state = 56},
  [352] = {.lex_state = 56},
  [353] = {.lex_state = 56},
  [354] = {.lex_state = 56},
  [355] = {.lex_state = 57},
  [356] = {.lex_state = 56},
  [357] = {.lex_state = 58},
  [358] = {.lex_state = 53},
  [359] = {.lex_state = 53},
  [360] = {.lex_state = 58},
  [361] = {.lex_state = 56},
  [362] = {.lex_state = 56},
  [363] = {.lex_state = 53},
  [364] = {.lex_state = 53},
  [365] = {.lex_state = 56},
  [366] = {.lex_state = 56},
  [367] = {.lex_state = 56},
  [368] = {.lex_state = 56},
  [369] = {.lex_state = 56},
  [370] = {.lex_state = 56},
  [371] = {.lex_state = 56},
  [372] = {.lex_state = 56},
  [373] = {.lex_state = 56},
  [374] = {.lex_state = 56},
  [375] = {.lex_state = 56},
  [376] = {.lex_state = 56},
  [377] = {.lex_state = 56},
  [378] = {.lex_state = 54},
  [379] = {.lex_state = 54},
  [380] = {.lex_state = 53},
  [381] = {.lex_state = 53},
  [382] = {.lex_state = 53},
  [383] = {.lex_state = 54},
  [384] = {.lex_state = 54},
  [385] = {.lex_state = 53},
  [386] = {.lex_state = 54},
  [387] = {.lex_state = 54},
  [388] = {.lex_state = 53},
  [389] = {.lex_state = 54},
  [390] = {.lex_state = 54},
  [391] = {.lex_state = 53},
  [392] = {.lex_state = 54},
  [393] = {.lex_state = 53},
  [394] = {.lex_state = 53},
  [395] = {.lex_state = 54},
  [396] = {.lex_state = 53},
  [397] = {.lex_state = 54},
  [398] = {.lex_state = 53},
  [399] = {.lex_state = 54},
  [400] = {.lex_state = 53},
  [401] = {.lex_state = 54},
  [402] = {.lex_state = 54},
  [403] = {.lex_state = 53},
  [404] = {.lex_state = 53},
  [405] = {.lex_state = 54},
  [406] = {.lex_state = 46},
  [407] = {.lex_state = 54},
  [408] = {.lex_state = 53},
  [409] = {.lex_state = 54},
  [410] = {.lex_state = 53},
  [411] = {.lex_state = 54},
  [412] = {.lex_state = 53},
  [413] = {.lex_state = 53},
  [414] = {.lex_state = 53},
  [415] = {.lex_state = 53},
  [416] = {.lex_state = 56},
  [417] = {.lex_state = 47},
  [418] = {.lex_state = 53},
  [419] = {.lex_state = 53},
  [420] = {.lex_state = 53},
  [421] = {.lex_state = 53},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 46},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 53},
  [426] = {.lex_state = 53},
  [427] = {.lex_state = 53},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 53},
  [430] = {.lex_state = 46},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 54},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 48},
  [441] = {.lex_state = 53},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 53},
  [444] = {.lex_state = 54},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 53},
  [447] = {.lex_state = 53},
  [448] = {.lex_state = 53},
  [449] = {.lex_state = 53},
  [450] = {.lex_state = 53},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0, .external_lex_state = 4},
  [453] = {.lex_state = 53},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 53},
  [456] = {.lex_state = 53},
  [457] = {.lex_state = 53},
  [458] = {.lex_state = 53},
  [459] = {.lex_state = 53},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 53},
  [462] = {.lex_state = 53},
  [463] = {.lex_state = 53},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 53},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 53},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 53},
  [472] = {.lex_state = 53},
  [473] = {.lex_state = 53},
  [474] = {.lex_state = 53},
  [475] = {.lex_state = 53},
  [476] = {.lex_state = 53},
  [477] = {.lex_state = 53},
  [478] = {.lex_state = 53},
  [479] = {.lex_state = 53},
  [480] = {.lex_state = 53},
  [481] = {.lex_state = 53},
  [482] = {.lex_state = 53},
  [483] = {.lex_state = 53},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 53},
  [486] = {.lex_state = 53},
  [487] = {.lex_state = 53},
  [488] = {.lex_state = 53},
  [489] = {.lex_state = 53},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 53},
  [493] = {.lex_state = 53},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 53},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 53},
  [499] = {.lex_state = 53},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 53},
  [503] = {.lex_state = 53},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 53},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 53},
  [508] = {.lex_state = 53},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 53},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 53},
  [513] = {.lex_state = 53},
  [514] = {.lex_state = 53},
  [515] = {.lex_state = 53},
  [516] = {.lex_state = 53},
  [517] = {.lex_state = 53},
  [518] = {.lex_state = 53},
  [519] = {.lex_state = 53},
  [520] = {.lex_state = 53},
  [521] = {.lex_state = 53},
  [522] = {.lex_state = 53},
  [523] = {.lex_state = 54},
  [524] = {.lex_state = 53},
  [525] = {.lex_state = 55},
  [526] = {.lex_state = 53},
  [527] = {.lex_state = 53},
  [528] = {.lex_state = 54},
  [529] = {.lex_state = 53},
  [530] = {.lex_state = 53},
  [531] = {.lex_state = 53},
  [532] = {.lex_state = 53},
  [533] = {.lex_state = 55},
  [534] = {.lex_state = 53},
  [535] = {.lex_state = 53},
  [536] = {.lex_state = 53},
  [537] = {.lex_state = 53},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 53},
  [540] = {.lex_state = 53},
  [541] = {.lex_state = 53},
  [542] = {.lex_state = 53},
  [543] = {.lex_state = 53},
  [544] = {.lex_state = 53},
  [545] = {.lex_state = 53},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 49},
  [548] = {.lex_state = 49},
  [549] = {.lex_state = 53},
  [550] = {.lex_state = 53},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 53},
  [553] = {.lex_state = 53},
  [554] = {.lex_state = 53},
  [555] = {.lex_state = 53},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 54},
  [558] = {.lex_state = 53},
  [559] = {.lex_state = 53},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 53},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 54},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 53},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 53},
  [568] = {.lex_state = 53},
  [569] = {.lex_state = 101},
  [570] = {.lex_state = 53},
  [571] = {.lex_state = 53},
  [572] = {.lex_state = 53},
  [573] = {.lex_state = 53},
  [574] = {.lex_state = 53},
  [575] = {.lex_state = 53},
  [576] = {.lex_state = 53},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 53},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 53},
  [581] = {.lex_state = 53},
  [582] = {.lex_state = 53},
  [583] = {.lex_state = 53},
  [584] = {.lex_state = 53},
  [585] = {.lex_state = 53},
  [586] = {.lex_state = 53},
  [587] = {.lex_state = 53},
  [588] = {.lex_state = 53},
  [589] = {.lex_state = 53},
  [590] = {.lex_state = 53},
  [591] = {.lex_state = 53},
  [592] = {.lex_state = 53},
  [593] = {.lex_state = 53},
  [594] = {.lex_state = 53},
  [595] = {.lex_state = 53},
  [596] = {.lex_state = 53},
  [597] = {.lex_state = 53},
  [598] = {.lex_state = 53},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 53},
  [601] = {.lex_state = 53},
  [602] = {.lex_state = 53},
  [603] = {.lex_state = 53},
  [604] = {.lex_state = 53},
  [605] = {.lex_state = 53},
  [606] = {.lex_state = 53},
  [607] = {.lex_state = 53},
  [608] = {.lex_state = 53},
  [609] = {.lex_state = 53},
  [610] = {.lex_state = 59},
  [611] = {.lex_state = 53},
  [612] = {.lex_state = 53},
  [613] = {.lex_state = 53},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 53},
  [616] = {.lex_state = 53},
  [617] = {.lex_state = 53},
  [618] = {.lex_state = 53},
  [619] = {.lex_state = 53},
  [620] = {.lex_state = 53},
  [621] = {.lex_state = 53},
  [622] = {.lex_state = 53},
  [623] = {.lex_state = 53},
  [624] = {.lex_state = 53},
  [625] = {.lex_state = 53},
  [626] = {.lex_state = 53},
  [627] = {.lex_state = 53},
  [628] = {.lex_state = 53},
  [629] = {.lex_state = 53},
  [630] = {.lex_state = 53},
  [631] = {.lex_state = 53},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 53},
  [634] = {.lex_state = 53},
  [635] = {.lex_state = 53},
  [636] = {.lex_state = 53},
  [637] = {.lex_state = 53},
  [638] = {.lex_state = 53},
  [639] = {.lex_state = 53},
  [640] = {.lex_state = 53},
  [641] = {.lex_state = 53},
  [642] = {.lex_state = 53},
  [643] = {.lex_state = 101},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 53},
  [646] = {.lex_state = 53},
  [647] = {.lex_state = 53},
  [648] = {.lex_state = 53},
  [649] = {.lex_state = 53},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 54},
  [653] = {.lex_state = 53},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 53},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 53},
  [658] = {.lex_state = 53},
  [659] = {.lex_state = 53},
  [660] = {.lex_state = 53},
  [661] = {.lex_state = 53},
  [662] = {.lex_state = 53},
  [663] = {.lex_state = 53},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 55},
  [666] = {.lex_state = 53},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 54},
  [670] = {.lex_state = 53},
  [671] = {.lex_state = 53},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
};

enum {
  ts_external_token__stars = 0,
  ts_external_token__sectionend = 1,
  ts_external_token__eof = 2,
  ts_external_token__string_content = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__stars] = sym__stars,
  [ts_external_token__sectionend] = sym__sectionend,
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__string_content] = sym__string_content,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__stars] = true,
    [ts_external_token__sectionend] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__string_content] = true,
  },
  [2] = {
    [ts_external_token__stars] = true,
  },
  [3] = {
    [ts_external_token__stars] = true,
    [ts_external_token__sectionend] = true,
  },
  [4] = {
    [ts_external_token__string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym_atat] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_slash] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym__none] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_txn] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_currency] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__stars] = ACTIONS(1),
    [sym__sectionend] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(546),
    [sym__nl] = STATE(2),
    [sym_section] = STATE(2),
    [sym__org_stars] = STATE(547),
    [sym_headline] = STATE(8),
    [sym_transaction] = STATE(294),
    [sym_pushtag] = STATE(295),
    [sym_poptag] = STATE(295),
    [sym_pushmeta] = STATE(295),
    [sym_popmeta] = STATE(295),
    [sym_open] = STATE(294),
    [sym_close] = STATE(294),
    [sym_commodity] = STATE(294),
    [sym_pad] = STATE(294),
    [sym_balance] = STATE(294),
    [sym_price] = STATE(294),
    [sym_event] = STATE(294),
    [sym_query] = STATE(294),
    [sym_note] = STATE(294),
    [sym_document] = STATE(294),
    [sym_custom] = STATE(294),
    [sym__entry] = STATE(2),
    [sym_option] = STATE(295),
    [sym_include] = STATE(295),
    [sym_plugin] = STATE(295),
    [sym__directive] = STATE(2),
    [sym__declarations] = STATE(2),
    [sym__skipped_lines] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(7),
    [sym__eol] = ACTIONS(5),
    [sym_flag] = ACTIONS(9),
    [sym_date] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_pushtag] = ACTIONS(13),
    [anon_sym_poptag] = ACTIONS(15),
    [anon_sym_pushmeta] = ACTIONS(17),
    [anon_sym_popmeta] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_plugin] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
    [sym__stars] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(13), 1,
      anon_sym_pushtag,
    ACTIONS(15), 1,
      anon_sym_poptag,
    ACTIONS(17), 1,
      anon_sym_pushmeta,
    ACTIONS(19), 1,
      anon_sym_popmeta,
    ACTIONS(21), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_plugin,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_CR,
    STATE(8), 1,
      sym_headline,
    STATE(547), 1,
      sym__org_stars,
    ACTIONS(9), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(33), 2,
      anon_sym_LF,
      sym__eol,
    STATE(3), 7,
      sym__nl,
      sym_section,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_file_repeat1,
    STATE(295), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(294), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [83] = 19,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_CR,
    ACTIONS(48), 1,
      sym_date,
    ACTIONS(51), 1,
      anon_sym_pushtag,
    ACTIONS(54), 1,
      anon_sym_poptag,
    ACTIONS(57), 1,
      anon_sym_pushmeta,
    ACTIONS(60), 1,
      anon_sym_popmeta,
    ACTIONS(63), 1,
      anon_sym_option,
    ACTIONS(66), 1,
      anon_sym_include,
    ACTIONS(69), 1,
      anon_sym_plugin,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym__stars,
    STATE(8), 1,
      sym_headline,
    STATE(547), 1,
      sym__org_stars,
    ACTIONS(39), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(45), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(3), 7,
      sym__nl,
      sym_section,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_file_repeat1,
    STATE(295), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(294), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [166] = 20,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(80), 1,
      anon_sym_CR,
    ACTIONS(84), 1,
      sym_date,
    ACTIONS(86), 1,
      anon_sym_pushtag,
    ACTIONS(88), 1,
      anon_sym_poptag,
    ACTIONS(90), 1,
      anon_sym_pushmeta,
    ACTIONS(92), 1,
      anon_sym_popmeta,
    ACTIONS(94), 1,
      anon_sym_option,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(98), 1,
      anon_sym_plugin,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__sectionend,
    STATE(5), 1,
      sym_headline,
    STATE(298), 1,
      sym_section,
    STATE(547), 1,
      sym__org_stars,
    ACTIONS(78), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(82), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(7), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(305), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(307), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [251] = 20,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(84), 1,
      sym_date,
    ACTIONS(86), 1,
      anon_sym_pushtag,
    ACTIONS(88), 1,
      anon_sym_poptag,
    ACTIONS(90), 1,
      anon_sym_pushmeta,
    ACTIONS(92), 1,
      anon_sym_popmeta,
    ACTIONS(94), 1,
      anon_sym_option,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(98), 1,
      anon_sym_plugin,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_CR,
    ACTIONS(108), 1,
      sym__sectionend,
    STATE(5), 1,
      sym_headline,
    STATE(298), 1,
      sym_section,
    STATE(547), 1,
      sym__org_stars,
    ACTIONS(82), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(104), 2,
      anon_sym_LF,
      sym__eol,
    STATE(4), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(305), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(307), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [336] = 20,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(80), 1,
      anon_sym_CR,
    ACTIONS(84), 1,
      sym_date,
    ACTIONS(86), 1,
      anon_sym_pushtag,
    ACTIONS(88), 1,
      anon_sym_poptag,
    ACTIONS(90), 1,
      anon_sym_pushmeta,
    ACTIONS(92), 1,
      anon_sym_popmeta,
    ACTIONS(94), 1,
      anon_sym_option,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(98), 1,
      anon_sym_plugin,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__sectionend,
    STATE(5), 1,
      sym_headline,
    STATE(298), 1,
      sym_section,
    STATE(547), 1,
      sym__org_stars,
    ACTIONS(78), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(82), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(7), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(305), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(307), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [421] = 20,
    ACTIONS(115), 1,
      anon_sym_CR,
    ACTIONS(121), 1,
      sym_date,
    ACTIONS(124), 1,
      anon_sym_pushtag,
    ACTIONS(127), 1,
      anon_sym_poptag,
    ACTIONS(130), 1,
      anon_sym_pushmeta,
    ACTIONS(133), 1,
      anon_sym_popmeta,
    ACTIONS(136), 1,
      anon_sym_option,
    ACTIONS(139), 1,
      anon_sym_include,
    ACTIONS(142), 1,
      anon_sym_plugin,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__stars,
    ACTIONS(151), 1,
      sym__sectionend,
    STATE(5), 1,
      sym_headline,
    STATE(298), 1,
      sym_section,
    STATE(547), 1,
      sym__org_stars,
    ACTIONS(112), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(118), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(7), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(305), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(307), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [506] = 20,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(84), 1,
      sym_date,
    ACTIONS(86), 1,
      anon_sym_pushtag,
    ACTIONS(88), 1,
      anon_sym_poptag,
    ACTIONS(90), 1,
      anon_sym_pushmeta,
    ACTIONS(92), 1,
      anon_sym_popmeta,
    ACTIONS(94), 1,
      anon_sym_option,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(98), 1,
      anon_sym_plugin,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_CR,
    ACTIONS(157), 1,
      sym__sectionend,
    STATE(5), 1,
      sym_headline,
    STATE(298), 1,
      sym_section,
    STATE(547), 1,
      sym__org_stars,
    ACTIONS(82), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(153), 2,
      anon_sym_LF,
      sym__eol,
    STATE(6), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(305), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(307), 12,
      sym_transaction,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
  [591] = 11,
    ACTIONS(159), 1,
      sym__eol,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_number,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      aux_sym_currency_key_value_token1,
    STATE(10), 1,
      aux_sym_currency_key_value_repeat1,
    STATE(518), 1,
      sym_value,
    ACTIONS(161), 2,
      sym_plus,
      sym_minus,
    STATE(517), 2,
      sym_string,
      sym_amount,
    STATE(384), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
    ACTIONS(163), 7,
      sym__none,
      sym_bool,
      sym_date,
      sym_account,
      sym_currency,
      sym_unquoted_string,
      sym_tag,
  [636] = 10,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_number,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_currency_key_value_token1,
    STATE(331), 1,
      aux_sym_currency_key_value_repeat1,
    STATE(633), 1,
      sym_value,
    ACTIONS(161), 2,
      sym_plus,
      sym_minus,
    STATE(517), 2,
      sym_string,
      sym_amount,
    STATE(384), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
    ACTIONS(163), 7,
      sym__none,
      sym_bool,
      sym_date,
      sym_account,
      sym_currency,
      sym_unquoted_string,
      sym_tag,
  [678] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(175), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(18), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(177), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [707] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(185), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(181), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [736] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(187), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(189), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [765] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(191), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(193), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [794] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(195), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(197), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [823] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(185), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(181), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [852] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(199), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(201), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [881] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(203), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(205), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [910] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(207), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(209), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [939] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(211), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(14), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(213), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [968] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(215), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(32), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(217), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [997] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(219), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(221), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1026] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(223), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(225), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1055] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(229), 2,
      sym__stars,
      sym__sectionend,
    STATE(25), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(227), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1084] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(219), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(221), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1113] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(203), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(205), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1142] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(199), 2,
      sym__stars,
      sym__sectionend,
    STATE(28), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(201), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1171] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(223), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(225), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1200] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(195), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(197), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1229] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(215), 2,
      sym__stars,
      sym__sectionend,
    STATE(39), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(217), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1258] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(187), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(189), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1287] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(231), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(233), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1316] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(235), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(16), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(237), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1345] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(239), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(15), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(241), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1374] = 4,
    ACTIONS(179), 1,
      sym__indent,
    ACTIONS(229), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(227), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1403] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(235), 2,
      sym__stars,
      sym__sectionend,
    STATE(12), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(237), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1432] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(239), 2,
      sym__stars,
      sym__sectionend,
    STATE(29), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(241), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1461] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(191), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(193), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1490] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(231), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(233), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1519] = 4,
    ACTIONS(245), 1,
      sym__indent,
    ACTIONS(248), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(243), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1548] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(211), 2,
      sym__stars,
      sym__sectionend,
    STATE(38), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(213), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1577] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(207), 2,
      sym__stars,
      sym__sectionend,
    STATE(31), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(209), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1606] = 4,
    ACTIONS(250), 1,
      sym__indent,
    ACTIONS(248), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(243), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1635] = 4,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(175), 2,
      sym__stars,
      sym__sectionend,
    STATE(26), 3,
      sym_posting,
      sym__key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(177), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1664] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(257), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(253), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1692] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(259), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(261), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1720] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(267), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(265), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1748] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(271), 2,
      sym__stars,
      sym__sectionend,
    STATE(129), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(269), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1776] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(275), 2,
      sym__stars,
      sym__sectionend,
    STATE(127), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(273), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1804] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(279), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(277), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1832] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(283), 2,
      sym__stars,
      sym__sectionend,
    STATE(126), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(281), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1860] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(287), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(285), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1888] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(291), 2,
      sym__stars,
      sym__sectionend,
    STATE(125), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(289), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1916] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(295), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(293), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1944] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(299), 2,
      sym__stars,
      sym__sectionend,
    STATE(124), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(297), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [1972] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(303), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(301), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2000] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(307), 2,
      sym__stars,
      sym__sectionend,
    STATE(123), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(305), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2028] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(311), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(309), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2056] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(315), 2,
      sym__stars,
      sym__sectionend,
    STATE(118), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(313), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2084] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(319), 2,
      sym__stars,
      sym__sectionend,
    STATE(115), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(317), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2112] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(323), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(321), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2140] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(327), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(325), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2168] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(331), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(329), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2196] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(335), 2,
      sym__stars,
      sym__sectionend,
    STATE(112), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(333), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2224] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(339), 2,
      sym__stars,
      sym__sectionend,
    STATE(102), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(337), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2252] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(343), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(341), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2280] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(347), 2,
      sym__stars,
      sym__sectionend,
    STATE(99), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(345), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2308] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(351), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(349), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2336] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(355), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(353), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2364] = 4,
    ACTIONS(359), 1,
      sym__indent,
    ACTIONS(362), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(357), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2392] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(366), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(364), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2420] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(370), 2,
      sym__stars,
      sym__sectionend,
    STATE(114), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(368), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2448] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(374), 2,
      sym__stars,
      sym__sectionend,
    STATE(47), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(372), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2476] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(378), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(376), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2504] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(382), 2,
      sym__stars,
      sym__sectionend,
    STATE(50), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(380), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2532] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(386), 2,
      sym__stars,
      sym__sectionend,
    STATE(52), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(384), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2560] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(390), 2,
      sym__stars,
      sym__sectionend,
    STATE(54), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(388), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2588] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(394), 2,
      sym__stars,
      sym__sectionend,
    STATE(56), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(392), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2616] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(398), 2,
      sym__stars,
      sym__sectionend,
    STATE(58), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(396), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2644] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(402), 2,
      sym__stars,
      sym__sectionend,
    STATE(45), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(400), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2672] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(406), 2,
      sym__stars,
      sym__sectionend,
    STATE(61), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(404), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2700] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(410), 2,
      sym__stars,
      sym__sectionend,
    STATE(62), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(408), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2728] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(414), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(412), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2756] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(418), 2,
      sym__stars,
      sym__sectionend,
    STATE(63), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(416), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2784] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(422), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(420), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2812] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(424), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(134), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(426), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2840] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(430), 2,
      sym__stars,
      sym__sectionend,
    STATE(66), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(428), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2868] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(434), 2,
      sym__stars,
      sym__sectionend,
    STATE(68), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(432), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2896] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(438), 2,
      sym__stars,
      sym__sectionend,
    STATE(69), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(436), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2924] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(442), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(440), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2952] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(444), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(144), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(446), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [2980] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(448), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(146), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(450), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3008] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(454), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(452), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3036] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(458), 2,
      sym__stars,
      sym__sectionend,
    STATE(110), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(456), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3064] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(462), 2,
      sym__stars,
      sym__sectionend,
    STATE(74), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(460), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3092] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(448), 2,
      sym__stars,
      sym__sectionend,
    STATE(83), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(450), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3120] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(444), 2,
      sym__stars,
      sym__sectionend,
    STATE(85), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(446), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3148] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(424), 2,
      sym__stars,
      sym__sectionend,
    STATE(90), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(426), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3176] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(466), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(464), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3204] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(366), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(364), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3232] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(454), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(452), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3260] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(470), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(468), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3288] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(472), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(474), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3316] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(476), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(100), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(478), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3344] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(480), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(482), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3372] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(462), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(171), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(460), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3400] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(484), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(486), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3428] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(488), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(490), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3456] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(492), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(494), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3484] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(472), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(474), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3512] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(496), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(498), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3540] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(502), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(500), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3568] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(506), 2,
      sym__stars,
      sym__sectionend,
    STATE(93), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(504), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3596] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(510), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(508), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3624] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(514), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(512), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3652] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(516), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(518), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3680] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(514), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(512), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3708] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(516), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(518), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3736] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(506), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(101), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(504), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3764] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(502), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(500), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3792] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(470), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(468), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3820] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(466), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(464), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3848] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(259), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(261), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3876] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(496), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(498), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3904] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(492), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(494), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3932] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(488), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(490), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3960] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(484), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(486), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [3988] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(476), 2,
      sym__stars,
      sym__sectionend,
    STATE(71), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(478), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4016] = 4,
    ACTIONS(255), 1,
      sym__indent,
    ACTIONS(480), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(482), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4044] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(458), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(456), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4072] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(510), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(508), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4100] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(267), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(265), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4128] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(271), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(269), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4156] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(442), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(440), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4184] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(275), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(107), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(273), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4212] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(279), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(277), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4240] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(438), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(170), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(436), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4268] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(434), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(169), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(432), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4296] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(283), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(108), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(281), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4324] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(430), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(165), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(428), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4352] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(287), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(285), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4380] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(291), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(109), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(289), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4408] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(295), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(293), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4436] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(422), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(420), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4464] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(418), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(159), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(416), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4492] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(414), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(412), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4520] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(410), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(158), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(408), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4548] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(406), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(156), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(404), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4576] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(299), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(111), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(297), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4604] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(303), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(301), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4632] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(307), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(46), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(305), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4660] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(311), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(309), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4688] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(315), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(116), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(313), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4716] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(257), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(253), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4744] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(319), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(117), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(317), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4772] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(323), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(321), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4800] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(402), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(154), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(400), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4828] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(327), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(325), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4856] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(331), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(329), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4884] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(398), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(152), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(396), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4912] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(335), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(120), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(333), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4940] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(394), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(150), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(392), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4968] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(339), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(121), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(337), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [4996] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(390), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(143), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(388), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5024] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(343), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(341), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5052] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(386), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(141), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(384), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5080] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(347), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(122), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(345), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5108] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(382), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(136), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(380), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5136] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(351), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(349), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5164] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(355), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(353), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5192] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(378), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(376), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5220] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(374), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(132), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(372), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5248] = 4,
    ACTIONS(263), 1,
      sym__indent,
    ACTIONS(370), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(131), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(368), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5276] = 4,
    ACTIONS(520), 1,
      sym__indent,
    ACTIONS(362), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(174), 2,
      sym__key_value_line,
      aux_sym__key_value_list,
    ACTIONS(357), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5304] = 9,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(534), 1,
      sym_number,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 2,
      sym__eol,
      sym_comment,
    ACTIONS(525), 2,
      sym_plus,
      sym_minus,
    STATE(175), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    ACTIONS(528), 3,
      sym_bool,
      sym_date,
      sym_account,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5341] = 12,
    ACTIONS(544), 1,
      sym_currency,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      sym_number,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    STATE(424), 1,
      sym_cost_comp,
    STATE(523), 1,
      sym__cost_comp_list,
    ACTIONS(540), 2,
      anon_sym_STAR,
      sym_date,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(431), 2,
      sym_string,
      sym_compound_amount,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5384] = 12,
    ACTIONS(544), 1,
      sym_currency,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      sym_number,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(424), 1,
      sym_cost_comp,
    STATE(525), 1,
      sym__cost_comp_list,
    ACTIONS(540), 2,
      anon_sym_STAR,
      sym_date,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(431), 2,
      sym_string,
      sym_compound_amount,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5427] = 10,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(556), 1,
      sym__eol,
    ACTIONS(562), 1,
      sym_number,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(558), 2,
      sym_plus,
      sym_minus,
    STATE(175), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    ACTIONS(560), 3,
      sym_bool,
      sym_date,
      sym_account,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5466] = 10,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(562), 1,
      sym_number,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      sym__eol,
    ACTIONS(570), 1,
      sym_comment,
    ACTIONS(558), 2,
      sym_plus,
      sym_minus,
    STATE(175), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    ACTIONS(560), 3,
      sym_bool,
      sym_date,
      sym_account,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5505] = 10,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(562), 1,
      sym_number,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(572), 1,
      sym__eol,
    ACTIONS(574), 1,
      sym_comment,
    ACTIONS(558), 2,
      sym_plus,
      sym_minus,
    STATE(178), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    ACTIONS(560), 3,
      sym_bool,
      sym_date,
      sym_account,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5544] = 10,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(562), 1,
      sym_number,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      sym__eol,
    ACTIONS(578), 1,
      sym_comment,
    ACTIONS(558), 2,
      sym_plus,
      sym_minus,
    STATE(179), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    ACTIONS(560), 3,
      sym_bool,
      sym_date,
      sym_account,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5583] = 2,
    ACTIONS(582), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(580), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5605] = 2,
    ACTIONS(586), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(584), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5627] = 2,
    ACTIONS(588), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(590), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5649] = 2,
    ACTIONS(592), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(594), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5671] = 2,
    ACTIONS(596), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(598), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5693] = 2,
    ACTIONS(600), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(602), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5715] = 2,
    ACTIONS(604), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(606), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5737] = 2,
    ACTIONS(608), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(610), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5759] = 2,
    ACTIONS(612), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(614), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5781] = 2,
    ACTIONS(616), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(618), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5803] = 2,
    ACTIONS(620), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(622), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5825] = 2,
    ACTIONS(624), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(626), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5847] = 2,
    ACTIONS(628), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(630), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5869] = 2,
    ACTIONS(632), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(634), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5891] = 2,
    ACTIONS(636), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(638), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5913] = 2,
    ACTIONS(640), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(642), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5935] = 2,
    ACTIONS(644), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(646), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5957] = 2,
    ACTIONS(648), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(650), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [5979] = 2,
    ACTIONS(652), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(654), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6001] = 2,
    ACTIONS(656), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(658), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6023] = 2,
    ACTIONS(660), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(662), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6045] = 2,
    ACTIONS(664), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(666), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6067] = 2,
    ACTIONS(668), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(670), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6089] = 2,
    ACTIONS(672), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(674), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6111] = 2,
    ACTIONS(676), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(678), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6133] = 2,
    ACTIONS(680), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(682), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6155] = 2,
    ACTIONS(684), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(686), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6177] = 2,
    ACTIONS(688), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(690), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6199] = 2,
    ACTIONS(692), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(694), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6221] = 2,
    ACTIONS(696), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(698), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6243] = 2,
    ACTIONS(700), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(702), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6265] = 2,
    ACTIONS(704), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(706), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6287] = 2,
    ACTIONS(708), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(710), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6309] = 2,
    ACTIONS(712), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(714), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6331] = 2,
    ACTIONS(636), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(638), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6353] = 2,
    ACTIONS(628), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(630), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6375] = 2,
    ACTIONS(588), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(590), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6397] = 2,
    ACTIONS(582), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(580), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6419] = 2,
    ACTIONS(592), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(594), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6441] = 2,
    ACTIONS(596), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(598), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6463] = 2,
    ACTIONS(600), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(602), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6485] = 2,
    ACTIONS(604), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(606), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6507] = 2,
    ACTIONS(608), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(610), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6529] = 2,
    ACTIONS(612), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(614), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6551] = 2,
    ACTIONS(616), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(618), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6573] = 2,
    ACTIONS(620), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(622), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6595] = 2,
    ACTIONS(624), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(626), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6617] = 2,
    ACTIONS(716), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(718), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6639] = 2,
    ACTIONS(720), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(722), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6661] = 2,
    ACTIONS(724), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(726), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6683] = 2,
    ACTIONS(728), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(730), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6705] = 2,
    ACTIONS(632), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(634), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6727] = 2,
    ACTIONS(732), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(734), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6749] = 2,
    ACTIONS(640), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(642), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6771] = 2,
    ACTIONS(644), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(646), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6793] = 2,
    ACTIONS(736), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(738), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6815] = 2,
    ACTIONS(648), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(650), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6837] = 2,
    ACTIONS(740), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(742), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6859] = 2,
    ACTIONS(744), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(746), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6881] = 2,
    ACTIONS(748), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(750), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6903] = 2,
    ACTIONS(752), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(754), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6925] = 2,
    ACTIONS(756), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(758), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6947] = 2,
    ACTIONS(652), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(654), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6969] = 2,
    ACTIONS(656), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(658), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [6991] = 2,
    ACTIONS(660), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(662), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7013] = 2,
    ACTIONS(760), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(762), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7035] = 2,
    ACTIONS(664), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(666), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7057] = 2,
    ACTIONS(764), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(766), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7079] = 2,
    ACTIONS(668), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(670), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7101] = 2,
    ACTIONS(672), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(674), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7123] = 2,
    ACTIONS(676), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(678), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7145] = 2,
    ACTIONS(680), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(682), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7167] = 2,
    ACTIONS(684), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(686), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7189] = 2,
    ACTIONS(688), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(690), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7211] = 2,
    ACTIONS(692), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(694), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7233] = 2,
    ACTIONS(724), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(726), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7255] = 2,
    ACTIONS(768), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(770), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7277] = 2,
    ACTIONS(696), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(698), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7299] = 2,
    ACTIONS(740), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(742), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7321] = 2,
    ACTIONS(700), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(702), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7343] = 2,
    ACTIONS(704), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(706), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7365] = 2,
    ACTIONS(772), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(774), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7387] = 2,
    ACTIONS(708), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(710), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7409] = 2,
    ACTIONS(712), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(714), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7431] = 2,
    ACTIONS(716), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(718), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7453] = 2,
    ACTIONS(720), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(722), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7475] = 2,
    ACTIONS(728), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(730), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7497] = 2,
    ACTIONS(744), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(746), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7519] = 2,
    ACTIONS(732), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(734), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7541] = 2,
    ACTIONS(752), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(754), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7563] = 2,
    ACTIONS(736), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(738), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7585] = 2,
    ACTIONS(748), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(750), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7607] = 2,
    ACTIONS(756), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(758), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7629] = 2,
    ACTIONS(776), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(778), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7651] = 2,
    ACTIONS(764), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(766), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7673] = 2,
    ACTIONS(780), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(782), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7695] = 2,
    ACTIONS(760), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(762), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7717] = 2,
    ACTIONS(768), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(770), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7739] = 2,
    ACTIONS(786), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(784), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7761] = 2,
    ACTIONS(788), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(790), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7783] = 2,
    ACTIONS(786), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(784), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7805] = 2,
    ACTIONS(794), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(792), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7827] = 2,
    ACTIONS(586), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(584), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7849] = 2,
    ACTIONS(794), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(792), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7871] = 2,
    ACTIONS(772), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(774), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7893] = 2,
    ACTIONS(776), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(778), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7915] = 2,
    ACTIONS(788), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(790), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7937] = 2,
    ACTIONS(780), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(782), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7959] = 2,
    ACTIONS(798), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(796), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [7980] = 12,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      sym__eol,
    ACTIONS(802), 1,
      sym_atat,
    ACTIONS(804), 1,
      sym_at,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(812), 1,
      sym_comment,
    STATE(385), 1,
      sym_incomplete_amount,
    STATE(427), 1,
      sym_cost_spec,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8021] = 2,
    ACTIONS(816), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(814), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8042] = 2,
    ACTIONS(820), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(818), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8063] = 2,
    ACTIONS(822), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(824), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8084] = 2,
    ACTIONS(826), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(828), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8105] = 2,
    ACTIONS(832), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(830), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8126] = 2,
    ACTIONS(836), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(834), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8147] = 2,
    ACTIONS(840), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(838), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8168] = 2,
    ACTIONS(844), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(842), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8189] = 10,
    ACTIONS(544), 1,
      sym_currency,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      sym_number,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUND,
    STATE(438), 1,
      sym_cost_comp,
    ACTIONS(540), 2,
      anon_sym_STAR,
      sym_date,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(431), 2,
      sym_string,
      sym_compound_amount,
    STATE(360), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8226] = 2,
    ACTIONS(848), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(846), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8247] = 2,
    ACTIONS(852), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(850), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8268] = 2,
    ACTIONS(856), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(854), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8289] = 2,
    ACTIONS(860), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(858), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8310] = 2,
    ACTIONS(826), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(828), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8331] = 2,
    ACTIONS(798), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(796), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8352] = 2,
    ACTIONS(822), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(824), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8373] = 2,
    ACTIONS(816), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(814), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8394] = 2,
    ACTIONS(852), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(850), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8415] = 2,
    ACTIONS(848), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(846), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8436] = 2,
    ACTIONS(832), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(830), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8457] = 12,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(862), 1,
      sym__eol,
    ACTIONS(864), 1,
      sym_atat,
    ACTIONS(866), 1,
      sym_at,
    ACTIONS(868), 1,
      sym_comment,
    STATE(381), 1,
      sym_incomplete_amount,
    STATE(414), 1,
      sym_cost_spec,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8498] = 2,
    ACTIONS(820), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(818), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8519] = 2,
    ACTIONS(860), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(858), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8540] = 2,
    ACTIONS(870), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(872), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8561] = 2,
    ACTIONS(836), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(834), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8582] = 2,
    ACTIONS(874), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(876), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8603] = 12,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(878), 1,
      sym__eol,
    ACTIONS(880), 1,
      sym_atat,
    ACTIONS(882), 1,
      sym_at,
    ACTIONS(884), 1,
      sym_comment,
    STATE(382), 1,
      sym_incomplete_amount,
    STATE(425), 1,
      sym_cost_spec,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8644] = 2,
    ACTIONS(844), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(842), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8665] = 2,
    ACTIONS(888), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(886), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8686] = 2,
    ACTIONS(892), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(890), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8707] = 2,
    ACTIONS(856), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(854), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8728] = 12,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(894), 1,
      sym__eol,
    ACTIONS(896), 1,
      sym_atat,
    ACTIONS(898), 1,
      sym_at,
    ACTIONS(900), 1,
      sym_comment,
    STATE(380), 1,
      sym_incomplete_amount,
    STATE(413), 1,
      sym_cost_spec,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8769] = 2,
    ACTIONS(874), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(876), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8790] = 2,
    ACTIONS(870), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(872), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      sym_comment,
  [8811] = 13,
    ACTIONS(904), 1,
      anon_sym_open,
    ACTIONS(906), 1,
      anon_sym_close,
    ACTIONS(908), 1,
      anon_sym_commodity,
    ACTIONS(910), 1,
      anon_sym_pad,
    ACTIONS(912), 1,
      anon_sym_balance,
    ACTIONS(914), 1,
      anon_sym_price,
    ACTIONS(916), 1,
      anon_sym_event,
    ACTIONS(918), 1,
      anon_sym_query,
    ACTIONS(920), 1,
      anon_sym_note,
    ACTIONS(922), 1,
      anon_sym_document,
    ACTIONS(924), 1,
      anon_sym_custom,
    STATE(363), 1,
      sym_txn,
    ACTIONS(902), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_BANG,
  [8853] = 13,
    ACTIONS(926), 1,
      anon_sym_open,
    ACTIONS(928), 1,
      anon_sym_close,
    ACTIONS(930), 1,
      anon_sym_commodity,
    ACTIONS(932), 1,
      anon_sym_pad,
    ACTIONS(934), 1,
      anon_sym_balance,
    ACTIONS(936), 1,
      anon_sym_price,
    ACTIONS(938), 1,
      anon_sym_event,
    ACTIONS(940), 1,
      anon_sym_query,
    ACTIONS(942), 1,
      anon_sym_note,
    ACTIONS(944), 1,
      anon_sym_document,
    ACTIONS(946), 1,
      anon_sym_custom,
    STATE(364), 1,
      sym_txn,
    ACTIONS(902), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_BANG,
  [8895] = 2,
    ACTIONS(950), 2,
      sym_number,
      anon_sym_RBRACE,
    ACTIONS(948), 13,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
      sym_comment,
  [8915] = 2,
    ACTIONS(954), 2,
      sym_number,
      anon_sym_RBRACE,
    ACTIONS(952), 13,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
      sym_comment,
  [8935] = 7,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(960), 1,
      sym_slash,
    ACTIONS(966), 1,
      sym_currency,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(962), 2,
      sym_plus,
      sym_minus,
    ACTIONS(964), 2,
      sym_bool,
      sym_number,
    ACTIONS(956), 6,
      sym__eol,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [8964] = 3,
    ACTIONS(970), 1,
      aux_sym_currency_key_value_token1,
    STATE(331), 1,
      aux_sym_currency_key_value_repeat1,
    ACTIONS(968), 12,
      sym_plus,
      sym_minus,
      sym__none,
      sym_bool,
      sym_date,
      sym_account,
      sym_currency,
      anon_sym_DQUOTE,
      sym_unquoted_string,
      sym_number,
      sym_tag,
      anon_sym_LPAREN,
  [8985] = 3,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(975), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(973), 10,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9006] = 12,
    ACTIONS(977), 1,
      sym__eol,
    ACTIONS(981), 1,
      sym_account,
    ACTIONS(985), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      sym_key,
    ACTIONS(989), 1,
      anon_sym_currency,
    ACTIONS(991), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(538), 1,
      sym_optflag,
    STATE(618), 1,
      sym_tags_links,
    STATE(663), 1,
      sym_key_value,
    ACTIONS(979), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [9045] = 12,
    ACTIONS(985), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      sym_key,
    ACTIONS(989), 1,
      anon_sym_currency,
    ACTIONS(993), 1,
      sym__eol,
    ACTIONS(995), 1,
      sym_account,
    ACTIONS(997), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(590), 1,
      sym_tags_links,
    STATE(591), 1,
      sym_key_value,
    STATE(664), 1,
      sym_optflag,
    ACTIONS(979), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [9084] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(960), 1,
      sym_slash,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(975), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(973), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9109] = 3,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(1001), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(999), 10,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9130] = 3,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(973), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [9150] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1003), 1,
      sym__eol,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1007), 1,
      sym_comment,
    STATE(476), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9182] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1009), 1,
      sym__eol,
    ACTIONS(1011), 1,
      sym_comment,
    STATE(489), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9214] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1013), 1,
      sym__eol,
    ACTIONS(1015), 1,
      sym_comment,
    STATE(449), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9246] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1017), 1,
      sym__eol,
    ACTIONS(1019), 1,
      sym_comment,
    STATE(462), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9278] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1021), 1,
      sym__eol,
    ACTIONS(1023), 1,
      sym_comment,
    STATE(485), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9310] = 3,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(999), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [9330] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1025), 1,
      sym__eol,
    ACTIONS(1027), 1,
      sym_comment,
    STATE(483), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9362] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1029), 1,
      sym__eol,
    ACTIONS(1031), 1,
      sym_comment,
    STATE(448), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9394] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1033), 1,
      sym__eol,
    ACTIONS(1035), 1,
      sym_comment,
    STATE(493), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9426] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    ACTIONS(1037), 1,
      sym_slash,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(973), 9,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [9450] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1039), 1,
      sym__eol,
    ACTIONS(1041), 1,
      sym_comment,
    STATE(507), 1,
      sym_incomplete_amount,
    STATE(508), 1,
      sym_price_annotation,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9482] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1043), 1,
      sym__eol,
    ACTIONS(1045), 1,
      sym_comment,
    STATE(480), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9514] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1047), 1,
      sym__eol,
    ACTIONS(1049), 1,
      sym_comment,
    STATE(446), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9546] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1051), 1,
      sym__eol,
    ACTIONS(1053), 1,
      sym_comment,
    STATE(482), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9578] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1055), 1,
      sym__eol,
    ACTIONS(1057), 1,
      sym_comment,
    STATE(507), 1,
      sym_incomplete_amount,
    STATE(512), 1,
      sym_price_annotation,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9610] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1059), 1,
      sym__eol,
    ACTIONS(1061), 1,
      sym_comment,
    STATE(450), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9642] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1063), 1,
      sym__eol,
    ACTIONS(1065), 1,
      sym_comment,
    STATE(505), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9674] = 2,
    ACTIONS(1069), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(1067), 10,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9692] = 9,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(806), 1,
      sym_number,
    ACTIONS(1005), 1,
      sym_currency,
    ACTIONS(1071), 1,
      sym__eol,
    ACTIONS(1073), 1,
      sym_comment,
    STATE(472), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9724] = 2,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
    ACTIONS(1067), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [9741] = 2,
    ACTIONS(964), 1,
      sym_number,
    ACTIONS(956), 9,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9756] = 2,
    ACTIONS(1077), 1,
      sym_number,
    ACTIONS(1075), 9,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9771] = 8,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1081), 1,
      sym_currency,
    ACTIONS(1083), 1,
      anon_sym_POUND,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
    ACTIONS(1085), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [9798] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1089), 1,
      sym_number,
    STATE(496), 1,
      sym_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(389), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9818] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1089), 1,
      sym_number,
    STATE(466), 1,
      sym_amount,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(389), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9838] = 8,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1091), 1,
      sym__eol,
    ACTIONS(1093), 1,
      sym_comment,
    STATE(388), 1,
      sym_string,
    STATE(403), 1,
      sym__txn_strings,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(474), 1,
      sym_tags_links,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [9864] = 8,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1095), 1,
      sym__eol,
    ACTIONS(1097), 1,
      sym_comment,
    STATE(388), 1,
      sym_string,
    STATE(400), 1,
      sym__txn_strings,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(475), 1,
      sym_tags_links,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [9890] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      sym_number,
    STATE(469), 1,
      sym_amount_tolerance,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(383), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9910] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1101), 1,
      sym_currency,
    ACTIONS(1103), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(399), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9930] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1105), 1,
      sym_currency,
    ACTIONS(1107), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(397), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9950] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1099), 1,
      sym_number,
    STATE(503), 1,
      sym_amount_tolerance,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(383), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9970] = 4,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1109), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(337), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9987] = 4,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1111), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(401), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10004] = 4,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1113), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(343), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10021] = 4,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1115), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(391), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10038] = 4,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1117), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(394), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10055] = 4,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(1119), 1,
      sym_number,
    ACTIONS(542), 2,
      sym_plus,
      sym_minus,
    STATE(347), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10072] = 4,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(1121), 1,
      sym_number,
    ACTIONS(558), 2,
      sym_plus,
      sym_minus,
    STATE(336), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10089] = 4,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(1123), 1,
      sym_number,
    ACTIONS(558), 2,
      sym_plus,
      sym_minus,
    STATE(332), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10106] = 4,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(1125), 1,
      sym_number,
    ACTIONS(558), 2,
      sym_plus,
      sym_minus,
    STATE(335), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10123] = 7,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1127), 1,
      sym__eol,
    ACTIONS(1129), 1,
      sym_currency,
    ACTIONS(1131), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_open_repeat2,
    STATE(492), 1,
      sym_opt_booking,
    STATE(498), 1,
      sym_string,
  [10145] = 7,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1129), 1,
      sym_currency,
    ACTIONS(1133), 1,
      sym__eol,
    ACTIONS(1135), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym_open_repeat2,
    STATE(498), 1,
      sym_string,
    STATE(499), 1,
      sym_opt_booking,
  [10167] = 7,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1137), 1,
      sym__eol,
    ACTIONS(1139), 1,
      sym_atat,
    ACTIONS(1141), 1,
      sym_at,
    ACTIONS(1143), 1,
      sym_comment,
    STATE(412), 1,
      sym_cost_spec,
  [10189] = 7,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1145), 1,
      sym__eol,
    ACTIONS(1147), 1,
      sym_atat,
    ACTIONS(1149), 1,
      sym_at,
    ACTIONS(1151), 1,
      sym_comment,
    STATE(415), 1,
      sym_cost_spec,
  [10211] = 7,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1153), 1,
      sym__eol,
    ACTIONS(1155), 1,
      sym_atat,
    ACTIONS(1157), 1,
      sym_at,
    ACTIONS(1159), 1,
      sym_comment,
    STATE(421), 1,
      sym_cost_spec,
  [10233] = 6,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1161), 1,
      sym_currency,
    ACTIONS(1163), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10253] = 6,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1165), 1,
      sym__eol,
    ACTIONS(1167), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10273] = 7,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1169), 1,
      sym__eol,
    ACTIONS(1171), 1,
      sym_atat,
    ACTIONS(1173), 1,
      sym_at,
    ACTIONS(1175), 1,
      sym_comment,
    STATE(418), 1,
      sym_cost_spec,
  [10295] = 7,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1129), 1,
      sym_currency,
    ACTIONS(1177), 1,
      sym__eol,
    ACTIONS(1179), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym_open_repeat2,
    STATE(473), 1,
      sym_opt_booking,
    STATE(498), 1,
      sym_string,
  [10317] = 7,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1129), 1,
      sym_currency,
    ACTIONS(1181), 1,
      sym__eol,
    ACTIONS(1183), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_open_repeat2,
    STATE(455), 1,
      sym_opt_booking,
    STATE(498), 1,
      sym_string,
  [10339] = 3,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(419), 1,
      sym_string,
    ACTIONS(1185), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [10352] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1167), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10369] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_open_repeat1,
    ACTIONS(1187), 4,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      sym_comment,
  [10382] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10399] = 3,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_open_repeat1,
    ACTIONS(1193), 4,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      sym_comment,
  [10412] = 5,
    ACTIONS(1198), 1,
      sym__eol,
    ACTIONS(1200), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(479), 1,
      sym_tags_links,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [10429] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10446] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_open_repeat1,
    ACTIONS(1204), 4,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      sym_comment,
  [10459] = 5,
    ACTIONS(1206), 1,
      sym__eol,
    ACTIONS(1208), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(453), 1,
      sym_tags_links,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [10476] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1210), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10493] = 2,
    ACTIONS(1214), 2,
      sym_at,
      anon_sym_LBRACE,
    ACTIONS(1212), 4,
      sym__eol,
      sym_atat,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10504] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1216), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10521] = 5,
    ACTIONS(1218), 1,
      sym__eol,
    ACTIONS(1220), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(447), 1,
      sym_tags_links,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [10538] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1222), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10555] = 5,
    ACTIONS(958), 1,
      anon_sym_STAR,
    ACTIONS(1037), 1,
      sym_slash,
    ACTIONS(1224), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1079), 2,
      sym_plus,
      sym_minus,
  [10572] = 5,
    ACTIONS(1226), 1,
      sym__eol,
    ACTIONS(1228), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(457), 1,
      sym_tags_links,
    ACTIONS(983), 2,
      sym_tag,
      sym_link,
  [10589] = 3,
    STATE(410), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1230), 2,
      sym__eol,
      sym_comment,
    ACTIONS(1232), 2,
      sym_tag,
      sym_link,
  [10601] = 1,
    ACTIONS(1193), 5,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      sym_comment,
  [10609] = 5,
    ACTIONS(159), 1,
      sym__eol,
    ACTIONS(1234), 1,
      sym_currency,
    ACTIONS(1236), 1,
      aux_sym_currency_key_value_token1,
    STATE(423), 1,
      aux_sym_currency_key_value_repeat1,
    STATE(520), 1,
      sym_value_currency,
  [10625] = 5,
    ACTIONS(987), 1,
      sym_key,
    ACTIONS(989), 1,
      anon_sym_currency,
    ACTIONS(1238), 1,
      sym__eol,
    ACTIONS(1240), 1,
      sym_comment,
    STATE(591), 1,
      sym_key_value,
  [10641] = 1,
    ACTIONS(1242), 5,
      sym__eol,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
      sym_comment,
  [10649] = 5,
    ACTIONS(987), 1,
      sym_key,
    ACTIONS(989), 1,
      anon_sym_currency,
    ACTIONS(1244), 1,
      sym__eol,
    ACTIONS(1246), 1,
      sym_comment,
    STATE(663), 1,
      sym_key_value,
  [10665] = 3,
    STATE(410), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1248), 2,
      sym__eol,
      sym_comment,
    ACTIONS(1250), 2,
      sym_tag,
      sym_link,
  [10677] = 3,
    ACTIONS(1253), 1,
      sym_currency,
    STATE(411), 1,
      aux_sym_open_repeat2,
    ACTIONS(1187), 3,
      sym__eol,
      anon_sym_DQUOTE,
      sym_comment,
  [10689] = 4,
    ACTIONS(1256), 1,
      sym__eol,
    ACTIONS(1258), 1,
      sym_atat,
    ACTIONS(1260), 1,
      sym_at,
    ACTIONS(1262), 1,
      sym_comment,
  [10702] = 4,
    ACTIONS(1264), 1,
      sym__eol,
    ACTIONS(1266), 1,
      sym_atat,
    ACTIONS(1268), 1,
      sym_at,
    ACTIONS(1270), 1,
      sym_comment,
  [10715] = 4,
    ACTIONS(1272), 1,
      sym__eol,
    ACTIONS(1274), 1,
      sym_atat,
    ACTIONS(1276), 1,
      sym_at,
    ACTIONS(1278), 1,
      sym_comment,
  [10728] = 4,
    ACTIONS(1280), 1,
      sym__eol,
    ACTIONS(1282), 1,
      sym_atat,
    ACTIONS(1284), 1,
      sym_at,
    ACTIONS(1286), 1,
      sym_comment,
  [10741] = 1,
    ACTIONS(1288), 4,
      sym_plus,
      sym_minus,
      sym_number,
      anon_sym_LPAREN,
  [10748] = 3,
    ACTIONS(1292), 1,
      sym_item,
    STATE(320), 1,
      sym__nl,
    ACTIONS(1290), 2,
      anon_sym_LF,
      anon_sym_CR,
  [10759] = 4,
    ACTIONS(1294), 1,
      sym__eol,
    ACTIONS(1296), 1,
      sym_atat,
    ACTIONS(1298), 1,
      sym_at,
    ACTIONS(1300), 1,
      sym_comment,
  [10772] = 1,
    ACTIONS(1302), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [10779] = 1,
    ACTIONS(1304), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [10786] = 4,
    ACTIONS(1306), 1,
      sym__eol,
    ACTIONS(1308), 1,
      sym_atat,
    ACTIONS(1310), 1,
      sym_at,
    ACTIONS(1312), 1,
      sym_comment,
  [10799] = 4,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    ACTIONS(1317), 1,
      anon_sym_RBRACE,
    ACTIONS(1319), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(422), 1,
      aux_sym__cost_comp_list_repeat1,
  [10812] = 4,
    ACTIONS(1234), 1,
      sym_currency,
    ACTIONS(1321), 1,
      aux_sym_currency_key_value_token1,
    STATE(430), 1,
      aux_sym_currency_key_value_repeat1,
    STATE(624), 1,
      sym_value_currency,
  [10825] = 4,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1325), 1,
      anon_sym_RBRACE,
    ACTIONS(1327), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(428), 1,
      aux_sym__cost_comp_list_repeat1,
  [10838] = 4,
    ACTIONS(1329), 1,
      sym__eol,
    ACTIONS(1331), 1,
      sym_atat,
    ACTIONS(1333), 1,
      sym_at,
    ACTIONS(1335), 1,
      sym_comment,
  [10851] = 2,
    ACTIONS(1339), 1,
      sym_at,
    ACTIONS(1337), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [10860] = 4,
    ACTIONS(1341), 1,
      sym__eol,
    ACTIONS(1343), 1,
      sym_atat,
    ACTIONS(1345), 1,
      sym_at,
    ACTIONS(1347), 1,
      sym_comment,
  [10873] = 4,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RBRACE,
    ACTIONS(1351), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(422), 1,
      aux_sym__cost_comp_list_repeat1,
  [10886] = 2,
    ACTIONS(1355), 1,
      sym_at,
    ACTIONS(1353), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [10895] = 3,
    ACTIONS(968), 1,
      sym_currency,
    ACTIONS(1357), 1,
      aux_sym_currency_key_value_token1,
    STATE(430), 1,
      aux_sym_currency_key_value_repeat1,
  [10905] = 2,
    ACTIONS(1362), 1,
      anon_sym_RBRACE,
    ACTIONS(1360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10913] = 3,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(393), 1,
      sym_filename,
    STATE(420), 1,
      sym_string,
  [10923] = 2,
    ACTIONS(1366), 1,
      anon_sym_RBRACE,
    ACTIONS(1364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10931] = 3,
    ACTIONS(987), 1,
      sym_key,
    ACTIONS(989), 1,
      anon_sym_currency,
    STATE(586), 1,
      sym_key_value,
  [10941] = 2,
    ACTIONS(1370), 1,
      anon_sym_RBRACE,
    ACTIONS(1368), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10949] = 2,
    ACTIONS(1374), 1,
      anon_sym_RBRACE,
    ACTIONS(1372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10957] = 2,
    ACTIONS(1378), 1,
      anon_sym_RBRACE,
    ACTIONS(1376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10965] = 2,
    ACTIONS(1317), 1,
      anon_sym_RBRACE,
    ACTIONS(1319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10973] = 3,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(396), 1,
      sym_filename,
    STATE(420), 1,
      sym_string,
  [10983] = 3,
    ACTIONS(1380), 1,
      anon_sym_LF,
    ACTIONS(1382), 1,
      anon_sym_CR,
    STATE(321), 1,
      sym__nl,
  [10993] = 3,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1384), 1,
      sym__eol,
    STATE(653), 1,
      sym_string,
  [11003] = 2,
    ACTIONS(1388), 1,
      anon_sym_RBRACE,
    ACTIONS(1386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [11011] = 3,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1390), 1,
      sym__eol,
    STATE(554), 1,
      sym_string,
  [11021] = 3,
    ACTIONS(987), 1,
      sym_key,
    ACTIONS(989), 1,
      anon_sym_currency,
    STATE(541), 1,
      sym_key_value,
  [11031] = 2,
    ACTIONS(1394), 1,
      anon_sym_RBRACE,
    ACTIONS(1392), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [11039] = 2,
    ACTIONS(1396), 1,
      sym__eol,
    ACTIONS(1398), 1,
      sym_comment,
  [11046] = 2,
    ACTIONS(1400), 1,
      sym__eol,
    ACTIONS(1402), 1,
      sym_comment,
  [11053] = 2,
    ACTIONS(1404), 1,
      sym__eol,
    ACTIONS(1406), 1,
      sym_comment,
  [11060] = 2,
    ACTIONS(1408), 1,
      sym__eol,
    ACTIONS(1410), 1,
      sym_comment,
  [11067] = 2,
    ACTIONS(1412), 1,
      sym__eol,
    ACTIONS(1414), 1,
      sym_comment,
  [11074] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(636), 1,
      sym_string,
  [11081] = 2,
    ACTIONS(1416), 1,
      anon_sym_DQUOTE,
    ACTIONS(1418), 1,
      sym__string_content,
  [11088] = 2,
    ACTIONS(1420), 1,
      sym__eol,
    ACTIONS(1422), 1,
      sym_comment,
  [11095] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(504), 1,
      sym_string,
  [11102] = 2,
    ACTIONS(1424), 1,
      sym__eol,
    ACTIONS(1426), 1,
      sym_comment,
  [11109] = 2,
    ACTIONS(1428), 1,
      sym__eol,
    ACTIONS(1430), 1,
      sym_comment,
  [11116] = 2,
    ACTIONS(1432), 1,
      sym__eol,
    ACTIONS(1434), 1,
      sym_comment,
  [11123] = 2,
    ACTIONS(1436), 1,
      sym__eol,
    ACTIONS(1438), 1,
      sym_comment,
  [11130] = 2,
    ACTIONS(1440), 1,
      sym__eol,
    ACTIONS(1442), 1,
      sym_comment,
  [11137] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_string,
  [11144] = 2,
    ACTIONS(1444), 1,
      sym__eol,
    ACTIONS(1446), 1,
      sym_comment,
  [11151] = 2,
    ACTIONS(1448), 1,
      sym__eol,
    ACTIONS(1450), 1,
      sym_comment,
  [11158] = 2,
    ACTIONS(1452), 1,
      sym__eol,
    ACTIONS(1454), 1,
      sym_comment,
  [11165] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(486), 1,
      sym_string,
  [11172] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(487), 1,
      sym_string,
  [11179] = 2,
    ACTIONS(1456), 1,
      sym__eol,
    ACTIONS(1458), 1,
      sym_comment,
  [11186] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(465), 1,
      sym_string,
  [11193] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(464), 1,
      sym_string,
  [11200] = 2,
    ACTIONS(1460), 1,
      sym__eol,
    ACTIONS(1462), 1,
      sym_comment,
  [11207] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(488), 1,
      sym_string,
  [11214] = 2,
    ACTIONS(1464), 1,
      sym__eol,
    ACTIONS(1466), 1,
      sym_comment,
  [11221] = 2,
    ACTIONS(1468), 1,
      sym__eol,
    ACTIONS(1470), 1,
      sym_comment,
  [11228] = 2,
    ACTIONS(1472), 1,
      sym__eol,
    ACTIONS(1474), 1,
      sym_comment,
  [11235] = 2,
    ACTIONS(1476), 1,
      sym__eol,
    ACTIONS(1478), 1,
      sym_comment,
  [11242] = 2,
    ACTIONS(1480), 1,
      sym__eol,
    ACTIONS(1482), 1,
      sym_comment,
  [11249] = 2,
    ACTIONS(1484), 1,
      sym__eol,
    ACTIONS(1486), 1,
      sym_comment,
  [11256] = 1,
    ACTIONS(1488), 2,
      sym__eol,
      sym_comment,
  [11261] = 2,
    ACTIONS(1490), 1,
      sym__eol,
    ACTIONS(1492), 1,
      sym_comment,
  [11268] = 2,
    ACTIONS(1494), 1,
      sym__eol,
    ACTIONS(1496), 1,
      sym_comment,
  [11275] = 2,
    ACTIONS(1498), 1,
      sym__eol,
    ACTIONS(1500), 1,
      sym_comment,
  [11282] = 2,
    ACTIONS(1502), 1,
      sym__eol,
    ACTIONS(1504), 1,
      sym_comment,
  [11289] = 2,
    ACTIONS(1506), 1,
      sym__eol,
    ACTIONS(1508), 1,
      sym_comment,
  [11296] = 2,
    ACTIONS(1510), 1,
      sym__eol,
    ACTIONS(1512), 1,
      sym_comment,
  [11303] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(441), 1,
      sym_string,
  [11310] = 2,
    ACTIONS(1514), 1,
      sym__eol,
    ACTIONS(1516), 1,
      sym_comment,
  [11317] = 2,
    ACTIONS(1518), 1,
      sym__eol,
    ACTIONS(1520), 1,
      sym_comment,
  [11324] = 2,
    ACTIONS(1522), 1,
      sym__eol,
    ACTIONS(1524), 1,
      sym_comment,
  [11331] = 2,
    ACTIONS(1526), 1,
      sym__eol,
    ACTIONS(1528), 1,
      sym_comment,
  [11338] = 2,
    ACTIONS(1530), 1,
      sym__eol,
    ACTIONS(1532), 1,
      sym_comment,
  [11345] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(602), 1,
      sym_string,
  [11352] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(451), 1,
      sym_string,
  [11359] = 2,
    ACTIONS(1534), 1,
      sym__eol,
    ACTIONS(1536), 1,
      sym_comment,
  [11366] = 2,
    ACTIONS(1538), 1,
      sym__eol,
    ACTIONS(1540), 1,
      sym_comment,
  [11373] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(542), 1,
      sym_string,
  [11380] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym_string,
  [11387] = 2,
    ACTIONS(1542), 1,
      sym__eol,
    ACTIONS(1544), 1,
      sym_comment,
  [11394] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_string,
  [11401] = 1,
    ACTIONS(1546), 2,
      sym__eol,
      sym_comment,
  [11406] = 2,
    ACTIONS(1548), 1,
      sym__eol,
    ACTIONS(1550), 1,
      sym_comment,
  [11413] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(553), 1,
      sym_string,
  [11420] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(463), 1,
      sym_string,
  [11427] = 2,
    ACTIONS(1552), 1,
      sym__eol,
    ACTIONS(1554), 1,
      sym_comment,
  [11434] = 2,
    ACTIONS(1556), 1,
      sym__eol,
    ACTIONS(1558), 1,
      sym_comment,
  [11441] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(461), 1,
      sym_string,
  [11448] = 2,
    ACTIONS(1560), 1,
      sym__eol,
    ACTIONS(1562), 1,
      sym_comment,
  [11455] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(459), 1,
      sym_string,
  [11462] = 1,
    ACTIONS(1564), 2,
      sym__eol,
      sym_comment,
  [11467] = 2,
    ACTIONS(1566), 1,
      sym__eol,
    ACTIONS(1568), 1,
      sym_comment,
  [11474] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(500), 1,
      sym_string,
  [11481] = 1,
    ACTIONS(1570), 2,
      sym__eol,
      sym_comment,
  [11486] = 2,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(501), 1,
      sym_string,
  [11493] = 2,
    ACTIONS(1572), 1,
      sym__eol,
    ACTIONS(1574), 1,
      sym_comment,
  [11500] = 1,
    ACTIONS(1576), 1,
      sym__eol,
  [11504] = 1,
    ACTIONS(1578), 1,
      sym__eol,
  [11508] = 1,
    ACTIONS(1580), 1,
      sym__eol,
  [11512] = 1,
    ACTIONS(1582), 1,
      sym__eol,
  [11516] = 1,
    ACTIONS(1165), 1,
      sym__eol,
  [11520] = 1,
    ACTIONS(1584), 1,
      sym__eol,
  [11524] = 1,
    ACTIONS(1586), 1,
      sym__eol,
  [11528] = 1,
    ACTIONS(1588), 1,
      sym__eol,
  [11532] = 1,
    ACTIONS(1590), 1,
      sym__eol,
  [11536] = 1,
    ACTIONS(1592), 1,
      sym__eol,
  [11540] = 1,
    ACTIONS(1594), 1,
      anon_sym_RBRACE,
  [11544] = 1,
    ACTIONS(1596), 1,
      sym__eol,
  [11548] = 1,
    ACTIONS(1594), 1,
      anon_sym_RBRACE_RBRACE,
  [11552] = 1,
    ACTIONS(1598), 1,
      sym__eol,
  [11556] = 1,
    ACTIONS(1600), 1,
      sym__eol,
  [11560] = 1,
    ACTIONS(1602), 1,
      sym_currency,
  [11564] = 1,
    ACTIONS(1604), 1,
      sym__eol,
  [11568] = 1,
    ACTIONS(1606), 1,
      sym__eol,
  [11572] = 1,
    ACTIONS(1608), 1,
      sym__eol,
  [11576] = 1,
    ACTIONS(1610), 1,
      sym__eol,
  [11580] = 1,
    ACTIONS(1612), 1,
      sym_key,
  [11584] = 1,
    ACTIONS(1614), 1,
      sym__eol,
  [11588] = 1,
    ACTIONS(1616), 1,
      sym__eol,
  [11592] = 1,
    ACTIONS(1618), 1,
      sym_tag,
  [11596] = 1,
    ACTIONS(1620), 1,
      sym__eol,
  [11600] = 1,
    ACTIONS(1622), 1,
      sym_account,
  [11604] = 1,
    ACTIONS(1624), 1,
      sym__eol,
  [11608] = 1,
    ACTIONS(1626), 1,
      sym__eol,
  [11612] = 1,
    ACTIONS(1628), 1,
      sym__eol,
  [11616] = 1,
    ACTIONS(1630), 1,
      sym__eol,
  [11620] = 1,
    ACTIONS(1632), 1,
      sym__eol,
  [11624] = 1,
    ACTIONS(1634), 1,
      sym_tag,
  [11628] = 1,
    ACTIONS(1636), 1,
      sym__eol,
  [11632] = 1,
    ACTIONS(1638), 1,
      ts_builtin_sym_end,
  [11636] = 1,
    ACTIONS(1640), 1,
      aux_sym_headline_token1,
  [11640] = 1,
    ACTIONS(1642), 1,
      aux_sym_headline_token1,
  [11644] = 1,
    ACTIONS(1644), 1,
      sym__eol,
  [11648] = 1,
    ACTIONS(1646), 1,
      sym__eol,
  [11652] = 1,
    ACTIONS(1648), 1,
      sym_account,
  [11656] = 1,
    ACTIONS(1650), 1,
      sym__eol,
  [11660] = 1,
    ACTIONS(1652), 1,
      sym__eol,
  [11664] = 1,
    ACTIONS(1654), 1,
      sym__eol,
  [11668] = 1,
    ACTIONS(1656), 1,
      sym__eol,
  [11672] = 1,
    ACTIONS(1658), 1,
      sym_account,
  [11676] = 1,
    ACTIONS(1660), 1,
      sym_currency,
  [11680] = 1,
    ACTIONS(1662), 1,
      sym__eol,
  [11684] = 1,
    ACTIONS(1664), 1,
      sym__eol,
  [11688] = 1,
    ACTIONS(1666), 1,
      sym_account,
  [11692] = 1,
    ACTIONS(1668), 1,
      sym__eol,
  [11696] = 1,
    ACTIONS(1670), 1,
      sym_account,
  [11700] = 1,
    ACTIONS(1672), 1,
      sym_currency,
  [11704] = 1,
    ACTIONS(1674), 1,
      sym_account,
  [11708] = 1,
    ACTIONS(1676), 1,
      sym__eol,
  [11712] = 1,
    ACTIONS(1678), 1,
      sym_account,
  [11716] = 1,
    ACTIONS(1680), 1,
      sym__eol,
  [11720] = 1,
    ACTIONS(1682), 1,
      sym__eol,
  [11724] = 1,
    ACTIONS(1684), 1,
      aux_sym__any_token1,
  [11728] = 1,
    ACTIONS(1686), 1,
      sym__eol,
  [11732] = 1,
    ACTIONS(1688), 1,
      sym__eol,
  [11736] = 1,
    ACTIONS(1690), 1,
      sym__eol,
  [11740] = 1,
    ACTIONS(1692), 1,
      sym__eol,
  [11744] = 1,
    ACTIONS(1694), 1,
      sym__eol,
  [11748] = 1,
    ACTIONS(1696), 1,
      sym__eol,
  [11752] = 1,
    ACTIONS(1698), 1,
      sym__eol,
  [11756] = 1,
    ACTIONS(1700), 1,
      anon_sym_COLON,
  [11760] = 1,
    ACTIONS(1702), 1,
      sym__eol,
  [11764] = 1,
    ACTIONS(1704), 1,
      anon_sym_COLON,
  [11768] = 1,
    ACTIONS(1706), 1,
      sym__eol,
  [11772] = 1,
    ACTIONS(1708), 1,
      sym__eol,
  [11776] = 1,
    ACTIONS(1710), 1,
      sym__eol,
  [11780] = 1,
    ACTIONS(1712), 1,
      sym__eol,
  [11784] = 1,
    ACTIONS(1714), 1,
      sym__eol,
  [11788] = 1,
    ACTIONS(1716), 1,
      sym__eol,
  [11792] = 1,
    ACTIONS(1718), 1,
      sym__eol,
  [11796] = 1,
    ACTIONS(1720), 1,
      sym__eol,
  [11800] = 1,
    ACTIONS(1722), 1,
      sym__eol,
  [11804] = 1,
    ACTIONS(1724), 1,
      sym__eol,
  [11808] = 1,
    ACTIONS(1726), 1,
      sym__eol,
  [11812] = 1,
    ACTIONS(1728), 1,
      sym__eol,
  [11816] = 1,
    ACTIONS(1730), 1,
      sym__eol,
  [11820] = 1,
    ACTIONS(1732), 1,
      sym__eol,
  [11824] = 1,
    ACTIONS(1734), 1,
      sym__eol,
  [11828] = 1,
    ACTIONS(1736), 1,
      sym__eol,
  [11832] = 1,
    ACTIONS(1738), 1,
      sym__eol,
  [11836] = 1,
    ACTIONS(1740), 1,
      sym__eol,
  [11840] = 1,
    ACTIONS(1742), 1,
      sym__eol,
  [11844] = 1,
    ACTIONS(1744), 1,
      anon_sym_COLON,
  [11848] = 1,
    ACTIONS(1746), 1,
      sym__eol,
  [11852] = 1,
    ACTIONS(1748), 1,
      sym__eol,
  [11856] = 1,
    ACTIONS(1750), 1,
      sym__eol,
  [11860] = 1,
    ACTIONS(1752), 1,
      sym__eol,
  [11864] = 1,
    ACTIONS(1754), 1,
      sym__eol,
  [11868] = 1,
    ACTIONS(1756), 1,
      sym__eol,
  [11872] = 1,
    ACTIONS(1758), 1,
      sym__eol,
  [11876] = 1,
    ACTIONS(1760), 1,
      sym__eol,
  [11880] = 1,
    ACTIONS(1762), 1,
      sym__eol,
  [11884] = 1,
    ACTIONS(1764), 1,
      sym__eol,
  [11888] = 1,
    ACTIONS(1766), 1,
      aux_sym__org_stars_token1,
  [11892] = 1,
    ACTIONS(1768), 1,
      sym__eol,
  [11896] = 1,
    ACTIONS(1770), 1,
      sym__eol,
  [11900] = 1,
    ACTIONS(1772), 1,
      sym__eol,
  [11904] = 1,
    ACTIONS(1774), 1,
      sym_account,
  [11908] = 1,
    ACTIONS(1776), 1,
      sym__eol,
  [11912] = 1,
    ACTIONS(1778), 1,
      sym__eol,
  [11916] = 1,
    ACTIONS(1780), 1,
      sym__eol,
  [11920] = 1,
    ACTIONS(1782), 1,
      sym__eol,
  [11924] = 1,
    ACTIONS(1784), 1,
      sym__eol,
  [11928] = 1,
    ACTIONS(1786), 1,
      sym__eol,
  [11932] = 1,
    ACTIONS(1788), 1,
      sym__eol,
  [11936] = 1,
    ACTIONS(1790), 1,
      sym__eol,
  [11940] = 1,
    ACTIONS(1792), 1,
      sym__eol,
  [11944] = 1,
    ACTIONS(1794), 1,
      sym__eol,
  [11948] = 1,
    ACTIONS(1796), 1,
      sym__eol,
  [11952] = 1,
    ACTIONS(1798), 1,
      sym__eol,
  [11956] = 1,
    ACTIONS(1800), 1,
      sym__eol,
  [11960] = 1,
    ACTIONS(1802), 1,
      sym__eol,
  [11964] = 1,
    ACTIONS(1804), 1,
      sym__eol,
  [11968] = 1,
    ACTIONS(1806), 1,
      sym__eol,
  [11972] = 1,
    ACTIONS(1808), 1,
      sym__eol,
  [11976] = 1,
    ACTIONS(1810), 1,
      anon_sym_DQUOTE,
  [11980] = 1,
    ACTIONS(1812), 1,
      sym__eol,
  [11984] = 1,
    ACTIONS(1814), 1,
      sym__eol,
  [11988] = 1,
    ACTIONS(1816), 1,
      sym__eol,
  [11992] = 1,
    ACTIONS(1818), 1,
      sym__eol,
  [11996] = 1,
    ACTIONS(1820), 1,
      sym__eol,
  [12000] = 1,
    ACTIONS(1822), 1,
      sym__eol,
  [12004] = 1,
    ACTIONS(1824), 1,
      sym__eol,
  [12008] = 1,
    ACTIONS(1826), 1,
      sym__eol,
  [12012] = 1,
    ACTIONS(1828), 1,
      sym__eol,
  [12016] = 1,
    ACTIONS(1830), 1,
      sym__eol,
  [12020] = 1,
    ACTIONS(1832), 1,
      aux_sym__any_token1,
  [12024] = 1,
    ACTIONS(1834), 1,
      sym_account,
  [12028] = 1,
    ACTIONS(1836), 1,
      sym_tag,
  [12032] = 1,
    ACTIONS(1838), 1,
      sym_tag,
  [12036] = 1,
    ACTIONS(1840), 1,
      sym__eol,
  [12040] = 1,
    ACTIONS(1842), 1,
      sym__eol,
  [12044] = 1,
    ACTIONS(1844), 1,
      sym__eol,
  [12048] = 1,
    ACTIONS(1846), 1,
      sym_account,
  [12052] = 1,
    ACTIONS(1848), 1,
      sym_account,
  [12056] = 1,
    ACTIONS(1850), 1,
      sym_currency,
  [12060] = 1,
    ACTIONS(1852), 1,
      sym__eol,
  [12064] = 1,
    ACTIONS(1854), 1,
      anon_sym_COLON,
  [12068] = 1,
    ACTIONS(1856), 1,
      sym__eol,
  [12072] = 1,
    ACTIONS(1858), 1,
      sym_account,
  [12076] = 1,
    ACTIONS(1860), 1,
      sym__eol,
  [12080] = 1,
    ACTIONS(1862), 1,
      sym__eol,
  [12084] = 1,
    ACTIONS(1864), 1,
      sym__eol,
  [12088] = 1,
    ACTIONS(1866), 1,
      sym__eol,
  [12092] = 1,
    ACTIONS(1868), 1,
      sym__eol,
  [12096] = 1,
    ACTIONS(1870), 1,
      sym__eol,
  [12100] = 1,
    ACTIONS(1872), 1,
      sym__eol,
  [12104] = 1,
    ACTIONS(1874), 1,
      sym_account,
  [12108] = 1,
    ACTIONS(1876), 1,
      sym_key,
  [12112] = 1,
    ACTIONS(1878), 1,
      sym__eol,
  [12116] = 1,
    ACTIONS(1880), 1,
      sym_account,
  [12120] = 1,
    ACTIONS(1882), 1,
      sym_account,
  [12124] = 1,
    ACTIONS(1884), 1,
      sym_currency,
  [12128] = 1,
    ACTIONS(1886), 1,
      sym__eol,
  [12132] = 1,
    ACTIONS(1888), 1,
      sym__eol,
  [12136] = 1,
    ACTIONS(1890), 1,
      sym_account,
  [12140] = 1,
    ACTIONS(1892), 1,
      sym_account,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 251,
  [SMALL_STATE(6)] = 336,
  [SMALL_STATE(7)] = 421,
  [SMALL_STATE(8)] = 506,
  [SMALL_STATE(9)] = 591,
  [SMALL_STATE(10)] = 636,
  [SMALL_STATE(11)] = 678,
  [SMALL_STATE(12)] = 707,
  [SMALL_STATE(13)] = 736,
  [SMALL_STATE(14)] = 765,
  [SMALL_STATE(15)] = 794,
  [SMALL_STATE(16)] = 823,
  [SMALL_STATE(17)] = 852,
  [SMALL_STATE(18)] = 881,
  [SMALL_STATE(19)] = 910,
  [SMALL_STATE(20)] = 939,
  [SMALL_STATE(21)] = 968,
  [SMALL_STATE(22)] = 997,
  [SMALL_STATE(23)] = 1026,
  [SMALL_STATE(24)] = 1055,
  [SMALL_STATE(25)] = 1084,
  [SMALL_STATE(26)] = 1113,
  [SMALL_STATE(27)] = 1142,
  [SMALL_STATE(28)] = 1171,
  [SMALL_STATE(29)] = 1200,
  [SMALL_STATE(30)] = 1229,
  [SMALL_STATE(31)] = 1258,
  [SMALL_STATE(32)] = 1287,
  [SMALL_STATE(33)] = 1316,
  [SMALL_STATE(34)] = 1345,
  [SMALL_STATE(35)] = 1374,
  [SMALL_STATE(36)] = 1403,
  [SMALL_STATE(37)] = 1432,
  [SMALL_STATE(38)] = 1461,
  [SMALL_STATE(39)] = 1490,
  [SMALL_STATE(40)] = 1519,
  [SMALL_STATE(41)] = 1548,
  [SMALL_STATE(42)] = 1577,
  [SMALL_STATE(43)] = 1606,
  [SMALL_STATE(44)] = 1635,
  [SMALL_STATE(45)] = 1664,
  [SMALL_STATE(46)] = 1692,
  [SMALL_STATE(47)] = 1720,
  [SMALL_STATE(48)] = 1748,
  [SMALL_STATE(49)] = 1776,
  [SMALL_STATE(50)] = 1804,
  [SMALL_STATE(51)] = 1832,
  [SMALL_STATE(52)] = 1860,
  [SMALL_STATE(53)] = 1888,
  [SMALL_STATE(54)] = 1916,
  [SMALL_STATE(55)] = 1944,
  [SMALL_STATE(56)] = 1972,
  [SMALL_STATE(57)] = 2000,
  [SMALL_STATE(58)] = 2028,
  [SMALL_STATE(59)] = 2056,
  [SMALL_STATE(60)] = 2084,
  [SMALL_STATE(61)] = 2112,
  [SMALL_STATE(62)] = 2140,
  [SMALL_STATE(63)] = 2168,
  [SMALL_STATE(64)] = 2196,
  [SMALL_STATE(65)] = 2224,
  [SMALL_STATE(66)] = 2252,
  [SMALL_STATE(67)] = 2280,
  [SMALL_STATE(68)] = 2308,
  [SMALL_STATE(69)] = 2336,
  [SMALL_STATE(70)] = 2364,
  [SMALL_STATE(71)] = 2392,
  [SMALL_STATE(72)] = 2420,
  [SMALL_STATE(73)] = 2448,
  [SMALL_STATE(74)] = 2476,
  [SMALL_STATE(75)] = 2504,
  [SMALL_STATE(76)] = 2532,
  [SMALL_STATE(77)] = 2560,
  [SMALL_STATE(78)] = 2588,
  [SMALL_STATE(79)] = 2616,
  [SMALL_STATE(80)] = 2644,
  [SMALL_STATE(81)] = 2672,
  [SMALL_STATE(82)] = 2700,
  [SMALL_STATE(83)] = 2728,
  [SMALL_STATE(84)] = 2756,
  [SMALL_STATE(85)] = 2784,
  [SMALL_STATE(86)] = 2812,
  [SMALL_STATE(87)] = 2840,
  [SMALL_STATE(88)] = 2868,
  [SMALL_STATE(89)] = 2896,
  [SMALL_STATE(90)] = 2924,
  [SMALL_STATE(91)] = 2952,
  [SMALL_STATE(92)] = 2980,
  [SMALL_STATE(93)] = 3008,
  [SMALL_STATE(94)] = 3036,
  [SMALL_STATE(95)] = 3064,
  [SMALL_STATE(96)] = 3092,
  [SMALL_STATE(97)] = 3120,
  [SMALL_STATE(98)] = 3148,
  [SMALL_STATE(99)] = 3176,
  [SMALL_STATE(100)] = 3204,
  [SMALL_STATE(101)] = 3232,
  [SMALL_STATE(102)] = 3260,
  [SMALL_STATE(103)] = 3288,
  [SMALL_STATE(104)] = 3316,
  [SMALL_STATE(105)] = 3344,
  [SMALL_STATE(106)] = 3372,
  [SMALL_STATE(107)] = 3400,
  [SMALL_STATE(108)] = 3428,
  [SMALL_STATE(109)] = 3456,
  [SMALL_STATE(110)] = 3484,
  [SMALL_STATE(111)] = 3512,
  [SMALL_STATE(112)] = 3540,
  [SMALL_STATE(113)] = 3568,
  [SMALL_STATE(114)] = 3596,
  [SMALL_STATE(115)] = 3624,
  [SMALL_STATE(116)] = 3652,
  [SMALL_STATE(117)] = 3680,
  [SMALL_STATE(118)] = 3708,
  [SMALL_STATE(119)] = 3736,
  [SMALL_STATE(120)] = 3764,
  [SMALL_STATE(121)] = 3792,
  [SMALL_STATE(122)] = 3820,
  [SMALL_STATE(123)] = 3848,
  [SMALL_STATE(124)] = 3876,
  [SMALL_STATE(125)] = 3904,
  [SMALL_STATE(126)] = 3932,
  [SMALL_STATE(127)] = 3960,
  [SMALL_STATE(128)] = 3988,
  [SMALL_STATE(129)] = 4016,
  [SMALL_STATE(130)] = 4044,
  [SMALL_STATE(131)] = 4072,
  [SMALL_STATE(132)] = 4100,
  [SMALL_STATE(133)] = 4128,
  [SMALL_STATE(134)] = 4156,
  [SMALL_STATE(135)] = 4184,
  [SMALL_STATE(136)] = 4212,
  [SMALL_STATE(137)] = 4240,
  [SMALL_STATE(138)] = 4268,
  [SMALL_STATE(139)] = 4296,
  [SMALL_STATE(140)] = 4324,
  [SMALL_STATE(141)] = 4352,
  [SMALL_STATE(142)] = 4380,
  [SMALL_STATE(143)] = 4408,
  [SMALL_STATE(144)] = 4436,
  [SMALL_STATE(145)] = 4464,
  [SMALL_STATE(146)] = 4492,
  [SMALL_STATE(147)] = 4520,
  [SMALL_STATE(148)] = 4548,
  [SMALL_STATE(149)] = 4576,
  [SMALL_STATE(150)] = 4604,
  [SMALL_STATE(151)] = 4632,
  [SMALL_STATE(152)] = 4660,
  [SMALL_STATE(153)] = 4688,
  [SMALL_STATE(154)] = 4716,
  [SMALL_STATE(155)] = 4744,
  [SMALL_STATE(156)] = 4772,
  [SMALL_STATE(157)] = 4800,
  [SMALL_STATE(158)] = 4828,
  [SMALL_STATE(159)] = 4856,
  [SMALL_STATE(160)] = 4884,
  [SMALL_STATE(161)] = 4912,
  [SMALL_STATE(162)] = 4940,
  [SMALL_STATE(163)] = 4968,
  [SMALL_STATE(164)] = 4996,
  [SMALL_STATE(165)] = 5024,
  [SMALL_STATE(166)] = 5052,
  [SMALL_STATE(167)] = 5080,
  [SMALL_STATE(168)] = 5108,
  [SMALL_STATE(169)] = 5136,
  [SMALL_STATE(170)] = 5164,
  [SMALL_STATE(171)] = 5192,
  [SMALL_STATE(172)] = 5220,
  [SMALL_STATE(173)] = 5248,
  [SMALL_STATE(174)] = 5276,
  [SMALL_STATE(175)] = 5304,
  [SMALL_STATE(176)] = 5341,
  [SMALL_STATE(177)] = 5384,
  [SMALL_STATE(178)] = 5427,
  [SMALL_STATE(179)] = 5466,
  [SMALL_STATE(180)] = 5505,
  [SMALL_STATE(181)] = 5544,
  [SMALL_STATE(182)] = 5583,
  [SMALL_STATE(183)] = 5605,
  [SMALL_STATE(184)] = 5627,
  [SMALL_STATE(185)] = 5649,
  [SMALL_STATE(186)] = 5671,
  [SMALL_STATE(187)] = 5693,
  [SMALL_STATE(188)] = 5715,
  [SMALL_STATE(189)] = 5737,
  [SMALL_STATE(190)] = 5759,
  [SMALL_STATE(191)] = 5781,
  [SMALL_STATE(192)] = 5803,
  [SMALL_STATE(193)] = 5825,
  [SMALL_STATE(194)] = 5847,
  [SMALL_STATE(195)] = 5869,
  [SMALL_STATE(196)] = 5891,
  [SMALL_STATE(197)] = 5913,
  [SMALL_STATE(198)] = 5935,
  [SMALL_STATE(199)] = 5957,
  [SMALL_STATE(200)] = 5979,
  [SMALL_STATE(201)] = 6001,
  [SMALL_STATE(202)] = 6023,
  [SMALL_STATE(203)] = 6045,
  [SMALL_STATE(204)] = 6067,
  [SMALL_STATE(205)] = 6089,
  [SMALL_STATE(206)] = 6111,
  [SMALL_STATE(207)] = 6133,
  [SMALL_STATE(208)] = 6155,
  [SMALL_STATE(209)] = 6177,
  [SMALL_STATE(210)] = 6199,
  [SMALL_STATE(211)] = 6221,
  [SMALL_STATE(212)] = 6243,
  [SMALL_STATE(213)] = 6265,
  [SMALL_STATE(214)] = 6287,
  [SMALL_STATE(215)] = 6309,
  [SMALL_STATE(216)] = 6331,
  [SMALL_STATE(217)] = 6353,
  [SMALL_STATE(218)] = 6375,
  [SMALL_STATE(219)] = 6397,
  [SMALL_STATE(220)] = 6419,
  [SMALL_STATE(221)] = 6441,
  [SMALL_STATE(222)] = 6463,
  [SMALL_STATE(223)] = 6485,
  [SMALL_STATE(224)] = 6507,
  [SMALL_STATE(225)] = 6529,
  [SMALL_STATE(226)] = 6551,
  [SMALL_STATE(227)] = 6573,
  [SMALL_STATE(228)] = 6595,
  [SMALL_STATE(229)] = 6617,
  [SMALL_STATE(230)] = 6639,
  [SMALL_STATE(231)] = 6661,
  [SMALL_STATE(232)] = 6683,
  [SMALL_STATE(233)] = 6705,
  [SMALL_STATE(234)] = 6727,
  [SMALL_STATE(235)] = 6749,
  [SMALL_STATE(236)] = 6771,
  [SMALL_STATE(237)] = 6793,
  [SMALL_STATE(238)] = 6815,
  [SMALL_STATE(239)] = 6837,
  [SMALL_STATE(240)] = 6859,
  [SMALL_STATE(241)] = 6881,
  [SMALL_STATE(242)] = 6903,
  [SMALL_STATE(243)] = 6925,
  [SMALL_STATE(244)] = 6947,
  [SMALL_STATE(245)] = 6969,
  [SMALL_STATE(246)] = 6991,
  [SMALL_STATE(247)] = 7013,
  [SMALL_STATE(248)] = 7035,
  [SMALL_STATE(249)] = 7057,
  [SMALL_STATE(250)] = 7079,
  [SMALL_STATE(251)] = 7101,
  [SMALL_STATE(252)] = 7123,
  [SMALL_STATE(253)] = 7145,
  [SMALL_STATE(254)] = 7167,
  [SMALL_STATE(255)] = 7189,
  [SMALL_STATE(256)] = 7211,
  [SMALL_STATE(257)] = 7233,
  [SMALL_STATE(258)] = 7255,
  [SMALL_STATE(259)] = 7277,
  [SMALL_STATE(260)] = 7299,
  [SMALL_STATE(261)] = 7321,
  [SMALL_STATE(262)] = 7343,
  [SMALL_STATE(263)] = 7365,
  [SMALL_STATE(264)] = 7387,
  [SMALL_STATE(265)] = 7409,
  [SMALL_STATE(266)] = 7431,
  [SMALL_STATE(267)] = 7453,
  [SMALL_STATE(268)] = 7475,
  [SMALL_STATE(269)] = 7497,
  [SMALL_STATE(270)] = 7519,
  [SMALL_STATE(271)] = 7541,
  [SMALL_STATE(272)] = 7563,
  [SMALL_STATE(273)] = 7585,
  [SMALL_STATE(274)] = 7607,
  [SMALL_STATE(275)] = 7629,
  [SMALL_STATE(276)] = 7651,
  [SMALL_STATE(277)] = 7673,
  [SMALL_STATE(278)] = 7695,
  [SMALL_STATE(279)] = 7717,
  [SMALL_STATE(280)] = 7739,
  [SMALL_STATE(281)] = 7761,
  [SMALL_STATE(282)] = 7783,
  [SMALL_STATE(283)] = 7805,
  [SMALL_STATE(284)] = 7827,
  [SMALL_STATE(285)] = 7849,
  [SMALL_STATE(286)] = 7871,
  [SMALL_STATE(287)] = 7893,
  [SMALL_STATE(288)] = 7915,
  [SMALL_STATE(289)] = 7937,
  [SMALL_STATE(290)] = 7959,
  [SMALL_STATE(291)] = 7980,
  [SMALL_STATE(292)] = 8021,
  [SMALL_STATE(293)] = 8042,
  [SMALL_STATE(294)] = 8063,
  [SMALL_STATE(295)] = 8084,
  [SMALL_STATE(296)] = 8105,
  [SMALL_STATE(297)] = 8126,
  [SMALL_STATE(298)] = 8147,
  [SMALL_STATE(299)] = 8168,
  [SMALL_STATE(300)] = 8189,
  [SMALL_STATE(301)] = 8226,
  [SMALL_STATE(302)] = 8247,
  [SMALL_STATE(303)] = 8268,
  [SMALL_STATE(304)] = 8289,
  [SMALL_STATE(305)] = 8310,
  [SMALL_STATE(306)] = 8331,
  [SMALL_STATE(307)] = 8352,
  [SMALL_STATE(308)] = 8373,
  [SMALL_STATE(309)] = 8394,
  [SMALL_STATE(310)] = 8415,
  [SMALL_STATE(311)] = 8436,
  [SMALL_STATE(312)] = 8457,
  [SMALL_STATE(313)] = 8498,
  [SMALL_STATE(314)] = 8519,
  [SMALL_STATE(315)] = 8540,
  [SMALL_STATE(316)] = 8561,
  [SMALL_STATE(317)] = 8582,
  [SMALL_STATE(318)] = 8603,
  [SMALL_STATE(319)] = 8644,
  [SMALL_STATE(320)] = 8665,
  [SMALL_STATE(321)] = 8686,
  [SMALL_STATE(322)] = 8707,
  [SMALL_STATE(323)] = 8728,
  [SMALL_STATE(324)] = 8769,
  [SMALL_STATE(325)] = 8790,
  [SMALL_STATE(326)] = 8811,
  [SMALL_STATE(327)] = 8853,
  [SMALL_STATE(328)] = 8895,
  [SMALL_STATE(329)] = 8915,
  [SMALL_STATE(330)] = 8935,
  [SMALL_STATE(331)] = 8964,
  [SMALL_STATE(332)] = 8985,
  [SMALL_STATE(333)] = 9006,
  [SMALL_STATE(334)] = 9045,
  [SMALL_STATE(335)] = 9084,
  [SMALL_STATE(336)] = 9109,
  [SMALL_STATE(337)] = 9130,
  [SMALL_STATE(338)] = 9150,
  [SMALL_STATE(339)] = 9182,
  [SMALL_STATE(340)] = 9214,
  [SMALL_STATE(341)] = 9246,
  [SMALL_STATE(342)] = 9278,
  [SMALL_STATE(343)] = 9310,
  [SMALL_STATE(344)] = 9330,
  [SMALL_STATE(345)] = 9362,
  [SMALL_STATE(346)] = 9394,
  [SMALL_STATE(347)] = 9426,
  [SMALL_STATE(348)] = 9450,
  [SMALL_STATE(349)] = 9482,
  [SMALL_STATE(350)] = 9514,
  [SMALL_STATE(351)] = 9546,
  [SMALL_STATE(352)] = 9578,
  [SMALL_STATE(353)] = 9610,
  [SMALL_STATE(354)] = 9642,
  [SMALL_STATE(355)] = 9674,
  [SMALL_STATE(356)] = 9692,
  [SMALL_STATE(357)] = 9724,
  [SMALL_STATE(358)] = 9741,
  [SMALL_STATE(359)] = 9756,
  [SMALL_STATE(360)] = 9771,
  [SMALL_STATE(361)] = 9798,
  [SMALL_STATE(362)] = 9818,
  [SMALL_STATE(363)] = 9838,
  [SMALL_STATE(364)] = 9864,
  [SMALL_STATE(365)] = 9890,
  [SMALL_STATE(366)] = 9910,
  [SMALL_STATE(367)] = 9930,
  [SMALL_STATE(368)] = 9950,
  [SMALL_STATE(369)] = 9970,
  [SMALL_STATE(370)] = 9987,
  [SMALL_STATE(371)] = 10004,
  [SMALL_STATE(372)] = 10021,
  [SMALL_STATE(373)] = 10038,
  [SMALL_STATE(374)] = 10055,
  [SMALL_STATE(375)] = 10072,
  [SMALL_STATE(376)] = 10089,
  [SMALL_STATE(377)] = 10106,
  [SMALL_STATE(378)] = 10123,
  [SMALL_STATE(379)] = 10145,
  [SMALL_STATE(380)] = 10167,
  [SMALL_STATE(381)] = 10189,
  [SMALL_STATE(382)] = 10211,
  [SMALL_STATE(383)] = 10233,
  [SMALL_STATE(384)] = 10253,
  [SMALL_STATE(385)] = 10273,
  [SMALL_STATE(386)] = 10295,
  [SMALL_STATE(387)] = 10317,
  [SMALL_STATE(388)] = 10339,
  [SMALL_STATE(389)] = 10352,
  [SMALL_STATE(390)] = 10369,
  [SMALL_STATE(391)] = 10382,
  [SMALL_STATE(392)] = 10399,
  [SMALL_STATE(393)] = 10412,
  [SMALL_STATE(394)] = 10429,
  [SMALL_STATE(395)] = 10446,
  [SMALL_STATE(396)] = 10459,
  [SMALL_STATE(397)] = 10476,
  [SMALL_STATE(398)] = 10493,
  [SMALL_STATE(399)] = 10504,
  [SMALL_STATE(400)] = 10521,
  [SMALL_STATE(401)] = 10538,
  [SMALL_STATE(402)] = 10555,
  [SMALL_STATE(403)] = 10572,
  [SMALL_STATE(404)] = 10589,
  [SMALL_STATE(405)] = 10601,
  [SMALL_STATE(406)] = 10609,
  [SMALL_STATE(407)] = 10625,
  [SMALL_STATE(408)] = 10641,
  [SMALL_STATE(409)] = 10649,
  [SMALL_STATE(410)] = 10665,
  [SMALL_STATE(411)] = 10677,
  [SMALL_STATE(412)] = 10689,
  [SMALL_STATE(413)] = 10702,
  [SMALL_STATE(414)] = 10715,
  [SMALL_STATE(415)] = 10728,
  [SMALL_STATE(416)] = 10741,
  [SMALL_STATE(417)] = 10748,
  [SMALL_STATE(418)] = 10759,
  [SMALL_STATE(419)] = 10772,
  [SMALL_STATE(420)] = 10779,
  [SMALL_STATE(421)] = 10786,
  [SMALL_STATE(422)] = 10799,
  [SMALL_STATE(423)] = 10812,
  [SMALL_STATE(424)] = 10825,
  [SMALL_STATE(425)] = 10838,
  [SMALL_STATE(426)] = 10851,
  [SMALL_STATE(427)] = 10860,
  [SMALL_STATE(428)] = 10873,
  [SMALL_STATE(429)] = 10886,
  [SMALL_STATE(430)] = 10895,
  [SMALL_STATE(431)] = 10905,
  [SMALL_STATE(432)] = 10913,
  [SMALL_STATE(433)] = 10923,
  [SMALL_STATE(434)] = 10931,
  [SMALL_STATE(435)] = 10941,
  [SMALL_STATE(436)] = 10949,
  [SMALL_STATE(437)] = 10957,
  [SMALL_STATE(438)] = 10965,
  [SMALL_STATE(439)] = 10973,
  [SMALL_STATE(440)] = 10983,
  [SMALL_STATE(441)] = 10993,
  [SMALL_STATE(442)] = 11003,
  [SMALL_STATE(443)] = 11011,
  [SMALL_STATE(444)] = 11021,
  [SMALL_STATE(445)] = 11031,
  [SMALL_STATE(446)] = 11039,
  [SMALL_STATE(447)] = 11046,
  [SMALL_STATE(448)] = 11053,
  [SMALL_STATE(449)] = 11060,
  [SMALL_STATE(450)] = 11067,
  [SMALL_STATE(451)] = 11074,
  [SMALL_STATE(452)] = 11081,
  [SMALL_STATE(453)] = 11088,
  [SMALL_STATE(454)] = 11095,
  [SMALL_STATE(455)] = 11102,
  [SMALL_STATE(456)] = 11109,
  [SMALL_STATE(457)] = 11116,
  [SMALL_STATE(458)] = 11123,
  [SMALL_STATE(459)] = 11130,
  [SMALL_STATE(460)] = 11137,
  [SMALL_STATE(461)] = 11144,
  [SMALL_STATE(462)] = 11151,
  [SMALL_STATE(463)] = 11158,
  [SMALL_STATE(464)] = 11165,
  [SMALL_STATE(465)] = 11172,
  [SMALL_STATE(466)] = 11179,
  [SMALL_STATE(467)] = 11186,
  [SMALL_STATE(468)] = 11193,
  [SMALL_STATE(469)] = 11200,
  [SMALL_STATE(470)] = 11207,
  [SMALL_STATE(471)] = 11214,
  [SMALL_STATE(472)] = 11221,
  [SMALL_STATE(473)] = 11228,
  [SMALL_STATE(474)] = 11235,
  [SMALL_STATE(475)] = 11242,
  [SMALL_STATE(476)] = 11249,
  [SMALL_STATE(477)] = 11256,
  [SMALL_STATE(478)] = 11261,
  [SMALL_STATE(479)] = 11268,
  [SMALL_STATE(480)] = 11275,
  [SMALL_STATE(481)] = 11282,
  [SMALL_STATE(482)] = 11289,
  [SMALL_STATE(483)] = 11296,
  [SMALL_STATE(484)] = 11303,
  [SMALL_STATE(485)] = 11310,
  [SMALL_STATE(486)] = 11317,
  [SMALL_STATE(487)] = 11324,
  [SMALL_STATE(488)] = 11331,
  [SMALL_STATE(489)] = 11338,
  [SMALL_STATE(490)] = 11345,
  [SMALL_STATE(491)] = 11352,
  [SMALL_STATE(492)] = 11359,
  [SMALL_STATE(493)] = 11366,
  [SMALL_STATE(494)] = 11373,
  [SMALL_STATE(495)] = 11380,
  [SMALL_STATE(496)] = 11387,
  [SMALL_STATE(497)] = 11394,
  [SMALL_STATE(498)] = 11401,
  [SMALL_STATE(499)] = 11406,
  [SMALL_STATE(500)] = 11413,
  [SMALL_STATE(501)] = 11420,
  [SMALL_STATE(502)] = 11427,
  [SMALL_STATE(503)] = 11434,
  [SMALL_STATE(504)] = 11441,
  [SMALL_STATE(505)] = 11448,
  [SMALL_STATE(506)] = 11455,
  [SMALL_STATE(507)] = 11462,
  [SMALL_STATE(508)] = 11467,
  [SMALL_STATE(509)] = 11474,
  [SMALL_STATE(510)] = 11481,
  [SMALL_STATE(511)] = 11486,
  [SMALL_STATE(512)] = 11493,
  [SMALL_STATE(513)] = 11500,
  [SMALL_STATE(514)] = 11504,
  [SMALL_STATE(515)] = 11508,
  [SMALL_STATE(516)] = 11512,
  [SMALL_STATE(517)] = 11516,
  [SMALL_STATE(518)] = 11520,
  [SMALL_STATE(519)] = 11524,
  [SMALL_STATE(520)] = 11528,
  [SMALL_STATE(521)] = 11532,
  [SMALL_STATE(522)] = 11536,
  [SMALL_STATE(523)] = 11540,
  [SMALL_STATE(524)] = 11544,
  [SMALL_STATE(525)] = 11548,
  [SMALL_STATE(526)] = 11552,
  [SMALL_STATE(527)] = 11556,
  [SMALL_STATE(528)] = 11560,
  [SMALL_STATE(529)] = 11564,
  [SMALL_STATE(530)] = 11568,
  [SMALL_STATE(531)] = 11572,
  [SMALL_STATE(532)] = 11576,
  [SMALL_STATE(533)] = 11580,
  [SMALL_STATE(534)] = 11584,
  [SMALL_STATE(535)] = 11588,
  [SMALL_STATE(536)] = 11592,
  [SMALL_STATE(537)] = 11596,
  [SMALL_STATE(538)] = 11600,
  [SMALL_STATE(539)] = 11604,
  [SMALL_STATE(540)] = 11608,
  [SMALL_STATE(541)] = 11612,
  [SMALL_STATE(542)] = 11616,
  [SMALL_STATE(543)] = 11620,
  [SMALL_STATE(544)] = 11624,
  [SMALL_STATE(545)] = 11628,
  [SMALL_STATE(546)] = 11632,
  [SMALL_STATE(547)] = 11636,
  [SMALL_STATE(548)] = 11640,
  [SMALL_STATE(549)] = 11644,
  [SMALL_STATE(550)] = 11648,
  [SMALL_STATE(551)] = 11652,
  [SMALL_STATE(552)] = 11656,
  [SMALL_STATE(553)] = 11660,
  [SMALL_STATE(554)] = 11664,
  [SMALL_STATE(555)] = 11668,
  [SMALL_STATE(556)] = 11672,
  [SMALL_STATE(557)] = 11676,
  [SMALL_STATE(558)] = 11680,
  [SMALL_STATE(559)] = 11684,
  [SMALL_STATE(560)] = 11688,
  [SMALL_STATE(561)] = 11692,
  [SMALL_STATE(562)] = 11696,
  [SMALL_STATE(563)] = 11700,
  [SMALL_STATE(564)] = 11704,
  [SMALL_STATE(565)] = 11708,
  [SMALL_STATE(566)] = 11712,
  [SMALL_STATE(567)] = 11716,
  [SMALL_STATE(568)] = 11720,
  [SMALL_STATE(569)] = 11724,
  [SMALL_STATE(570)] = 11728,
  [SMALL_STATE(571)] = 11732,
  [SMALL_STATE(572)] = 11736,
  [SMALL_STATE(573)] = 11740,
  [SMALL_STATE(574)] = 11744,
  [SMALL_STATE(575)] = 11748,
  [SMALL_STATE(576)] = 11752,
  [SMALL_STATE(577)] = 11756,
  [SMALL_STATE(578)] = 11760,
  [SMALL_STATE(579)] = 11764,
  [SMALL_STATE(580)] = 11768,
  [SMALL_STATE(581)] = 11772,
  [SMALL_STATE(582)] = 11776,
  [SMALL_STATE(583)] = 11780,
  [SMALL_STATE(584)] = 11784,
  [SMALL_STATE(585)] = 11788,
  [SMALL_STATE(586)] = 11792,
  [SMALL_STATE(587)] = 11796,
  [SMALL_STATE(588)] = 11800,
  [SMALL_STATE(589)] = 11804,
  [SMALL_STATE(590)] = 11808,
  [SMALL_STATE(591)] = 11812,
  [SMALL_STATE(592)] = 11816,
  [SMALL_STATE(593)] = 11820,
  [SMALL_STATE(594)] = 11824,
  [SMALL_STATE(595)] = 11828,
  [SMALL_STATE(596)] = 11832,
  [SMALL_STATE(597)] = 11836,
  [SMALL_STATE(598)] = 11840,
  [SMALL_STATE(599)] = 11844,
  [SMALL_STATE(600)] = 11848,
  [SMALL_STATE(601)] = 11852,
  [SMALL_STATE(602)] = 11856,
  [SMALL_STATE(603)] = 11860,
  [SMALL_STATE(604)] = 11864,
  [SMALL_STATE(605)] = 11868,
  [SMALL_STATE(606)] = 11872,
  [SMALL_STATE(607)] = 11876,
  [SMALL_STATE(608)] = 11880,
  [SMALL_STATE(609)] = 11884,
  [SMALL_STATE(610)] = 11888,
  [SMALL_STATE(611)] = 11892,
  [SMALL_STATE(612)] = 11896,
  [SMALL_STATE(613)] = 11900,
  [SMALL_STATE(614)] = 11904,
  [SMALL_STATE(615)] = 11908,
  [SMALL_STATE(616)] = 11912,
  [SMALL_STATE(617)] = 11916,
  [SMALL_STATE(618)] = 11920,
  [SMALL_STATE(619)] = 11924,
  [SMALL_STATE(620)] = 11928,
  [SMALL_STATE(621)] = 11932,
  [SMALL_STATE(622)] = 11936,
  [SMALL_STATE(623)] = 11940,
  [SMALL_STATE(624)] = 11944,
  [SMALL_STATE(625)] = 11948,
  [SMALL_STATE(626)] = 11952,
  [SMALL_STATE(627)] = 11956,
  [SMALL_STATE(628)] = 11960,
  [SMALL_STATE(629)] = 11964,
  [SMALL_STATE(630)] = 11968,
  [SMALL_STATE(631)] = 11972,
  [SMALL_STATE(632)] = 11976,
  [SMALL_STATE(633)] = 11980,
  [SMALL_STATE(634)] = 11984,
  [SMALL_STATE(635)] = 11988,
  [SMALL_STATE(636)] = 11992,
  [SMALL_STATE(637)] = 11996,
  [SMALL_STATE(638)] = 12000,
  [SMALL_STATE(639)] = 12004,
  [SMALL_STATE(640)] = 12008,
  [SMALL_STATE(641)] = 12012,
  [SMALL_STATE(642)] = 12016,
  [SMALL_STATE(643)] = 12020,
  [SMALL_STATE(644)] = 12024,
  [SMALL_STATE(645)] = 12028,
  [SMALL_STATE(646)] = 12032,
  [SMALL_STATE(647)] = 12036,
  [SMALL_STATE(648)] = 12040,
  [SMALL_STATE(649)] = 12044,
  [SMALL_STATE(650)] = 12048,
  [SMALL_STATE(651)] = 12052,
  [SMALL_STATE(652)] = 12056,
  [SMALL_STATE(653)] = 12060,
  [SMALL_STATE(654)] = 12064,
  [SMALL_STATE(655)] = 12068,
  [SMALL_STATE(656)] = 12072,
  [SMALL_STATE(657)] = 12076,
  [SMALL_STATE(658)] = 12080,
  [SMALL_STATE(659)] = 12084,
  [SMALL_STATE(660)] = 12088,
  [SMALL_STATE(661)] = 12092,
  [SMALL_STATE(662)] = 12096,
  [SMALL_STATE(663)] = 12100,
  [SMALL_STATE(664)] = 12104,
  [SMALL_STATE(665)] = 12108,
  [SMALL_STATE(666)] = 12112,
  [SMALL_STATE(667)] = 12116,
  [SMALL_STATE(668)] = 12120,
  [SMALL_STATE(669)] = 12124,
  [SMALL_STATE(670)] = 12128,
  [SMALL_STATE(671)] = 12132,
  [SMALL_STATE(672)] = 12136,
  [SMALL_STATE(673)] = 12140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(569),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(327),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(544),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(536),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(434),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(533),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(491),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(490),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(484),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(521),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(610),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(7),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(7),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(643),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(326),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(645),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(646),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(444),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(665),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(509),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(494),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(495),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(535),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6), SHIFT_REPEAT(610),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 40),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 40),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 70),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 70),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 39),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 39),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 36),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 36),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 69),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 69),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 71),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 71),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 72),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 72),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 14),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 14),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 13),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 13),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 11),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 11),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 10),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 10),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 93),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7, .production_id = 93),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3, .production_id = 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 35),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 35),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 38),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 38),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 37),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 37),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2, .production_id = 34),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2, .production_id = 34), SHIFT_REPEAT(334),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2, .production_id = 34),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2, .production_id = 34), SHIFT_REPEAT(333),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 51),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 51),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 7, .production_id = 79),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 7, .production_id = 79),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6, .production_id = 64),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 64),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 63),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 63),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 62),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 62),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 61),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 61),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6, .production_id = 60),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 60),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6, .production_id = 59),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 59),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6, .production_id = 58),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 58),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6, .production_id = 57),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 57),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6, .production_id = 56),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 56),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6, .production_id = 55),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 55),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 6, .production_id = 54),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 54),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 6, .production_id = 53),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 53),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 52),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 52),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 50),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 50),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 49),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 49),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 6, .production_id = 48),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 6, .production_id = 48),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 6, .production_id = 42),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 6, .production_id = 42),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 47),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 47),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 46),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 46),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 45),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 45),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 44),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 44),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 43),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 43),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 42),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 42),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2, .production_id = 34),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2, .production_id = 34), SHIFT_REPEAT(407),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list, 2, .production_id = 34),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 8, .production_id = 95),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 8, .production_id = 95),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 33),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 33),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 32),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 32),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 31),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 31),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5, .production_id = 30),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 30),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 29),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 29),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, .production_id = 28),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 28),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5, .production_id = 27),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 27),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5, .production_id = 26),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 26),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5, .production_id = 25),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 25),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5, .production_id = 24),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 24),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 23),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 23),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 22),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 22),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 19),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 19),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 18),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 18),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 7),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4, .production_id = 7),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 21),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 21),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 20),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 20),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 19),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 19),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 18),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 18),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 7),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4, .production_id = 7),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 8),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4, .production_id = 8),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 8, .production_id = 94),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8, .production_id = 94),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6, .production_id = 66),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 66),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4, .production_id = 9),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 9),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 73),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 73),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 74),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 74),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 7, .production_id = 86),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 7, .production_id = 86),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 85),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7, .production_id = 85),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 84),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7, .production_id = 84),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 83),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7, .production_id = 83),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 7, .production_id = 82),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 7, .production_id = 82),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 7, .production_id = 81),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 7, .production_id = 81),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 7, .production_id = 80),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 7, .production_id = 80),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 75),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 75),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 76),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 76),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6, .production_id = 65),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 65),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 7, .production_id = 77),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 7, .production_id = 77),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 7, .production_id = 78),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 7, .production_id = 78),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2, .production_id = 34), SHIFT_REPEAT(409),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(375),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(358),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(452),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(330),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(373),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 107),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 107),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 92),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 92),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, .production_id = 136),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, .production_id = 136),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 135),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 135),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 134),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 134),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 133),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 133),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 132),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 132),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 131),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 131),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 130),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 130),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 129),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 129),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 128),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 128),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 118),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 118),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 127),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 127),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 126),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 126),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 125),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 125),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 124),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 124),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 123),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 123),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 122),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 122),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 121),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 121),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 119),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 119),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 106),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 106),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 118),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 118),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 117),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 117),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 105),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 105),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 116),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 116),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 115),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 115),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 114),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 114),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 113),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 113),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 112),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 112),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 102),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 102),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 111),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 111),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 110),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 110),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 106),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 106),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 105),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 105),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 67),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 67),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 104),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 104),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 92),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 92),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 103),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 103),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 3, .production_id = 68),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 3, .production_id = 68),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 91),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 91),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_line, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_line, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 102),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 102),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list, 3, .production_id = 68),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list, 3, .production_id = 68),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 101),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 101),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 90),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 90),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 67),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 67),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 89),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 89),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 90),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 90),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 97),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 97),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 91),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 91),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 96),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 96),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_popmeta, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushmeta, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry, 1),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poptag, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushtag, 3),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 1, .production_id = 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1, .production_id = 2),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 1),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 5),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 5),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 16),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4, .production_id = 16),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 4),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 3),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 3),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 4, .production_id = 17),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 4, .production_id = 17),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_key_value_repeat1, 2),
  [970] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_currency_key_value_repeat1, 2), SHIFT_REPEAT(331),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 88),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 88),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 1, .production_id = 4),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(528),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 1),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2),
  [1250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2), SHIFT_REPEAT(410),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2), SHIFT_REPEAT(395),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 2, .production_id = 12),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2), SHIFT_REPEAT(300),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 1),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 1),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 2),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 100),
  [1355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 100),
  [1357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_key_value_repeat1, 2), SHIFT_REPEAT(430),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 99),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 99),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 109),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 109),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 108),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 108),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 87),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 87),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 98),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 98),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 120),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 120),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_currency, 1),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 15),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1638] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_stars, 2),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4, .production_id = 41),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_beancount_external_scanner_create(void);
void tree_sitter_beancount_external_scanner_destroy(void *);
bool tree_sitter_beancount_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_beancount_external_scanner_serialize(void *, char *);
void tree_sitter_beancount_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_beancount_external_scanner_create,
      tree_sitter_beancount_external_scanner_destroy,
      tree_sitter_beancount_external_scanner_scan,
      tree_sitter_beancount_external_scanner_serialize,
      tree_sitter_beancount_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

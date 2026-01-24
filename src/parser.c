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
  return (c < 6608
    ? (c < 3077
      ? (c < 2417
        ? (c < 1568
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 1015
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))
              : (c <= 1153 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2048
            ? (c < 1808
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))))
              : (c <= 1808 || (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))))
            : (c <= 2069 || (c < 2185
              ? (c < 2112
                ? (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))
              : (c <= 2190 || (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2415)))))))))
        : (c <= 2432 || (c < 2741
          ? (c < 2575
            ? (c < 2510
              ? (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))))
              : (c <= 2510 || (c < 2548
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2534 && c <= 2545)))
                : (c <= 2553 || (c < 2565
                  ? c == 2556
                  : c <= 2570)))))
            : (c <= 2576 || (c < 2662
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))))
              : (c <= 2671 || (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))))))
          : (c <= 2745 || (c < 2918
            ? (c < 2835
              ? (c < 2790
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2799 || (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))))
            : (c <= 2927 || (c < 2972
              ? (c < 2958
                ? (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))
              : (c <= 2972 || (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3046
                  ? c == 3024
                  : c <= 3058)))))))))))
      : (c <= 3084 || (c < 4176
        ? (c < 3461
          ? (c < 3253
            ? (c < 3174
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3302
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3311 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3416
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3751
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))))
              : (c <= 3654 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3840
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6314
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43216
      ? (c < 9312
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8517
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))
                : (c <= 8521 || (c < 8528
                  ? c == 8526
                  : c <= 8585)))))))))
        : (c <= 9371 || (c < 12690
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : (c <= 10131 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11517
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12295 || (c < 12352
                ? (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42656
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 19903 || (c < 42512
                ? (c < 42192
                  ? (c >= 19968 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43056
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43061 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65490
        ? (c < 43816
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43739
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64323
            ? (c < 64275
              ? (c < 44016
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44025 || (c < 55243
                  ? (c >= 44032 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64262)))))
              : (c <= 64279 || (c < 64312
                ? (c < 64287
                  ? c == 64285
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))))
            : (c <= 64324 || (c < 65142
              ? (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))
              : (c <= 65276 || (c < 65382
                ? (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))))))))
        : (c <= 65495 || (c < 66940
          ? (c < 66304
            ? (c < 65664
              ? (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))
              : (c <= 65786 || (c < 66176
                ? (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : (c <= 65912 || (c >= 65930 && c <= 65931)))
                : (c <= 66204 || (c < 66273
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66299)))))
            : (c <= 66339 || (c < 66560
              ? (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66517)))
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
                  : (c <= '9' || (c >= 'B' && c <= 'Z')))
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

static inline bool sym_account_character_set_3(int32_t c) {
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

static inline bool sym_account_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 3046
      ? (c < 2406
        ? (c < 1519
          ? (c < 880
            ? (c < 192
              ? (c < 178
                ? (c < 'a'
                  ? c == '-'
                  : (c <= 'z' || c == 170))
                : (c <= 179 || (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 931
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))
              : (c <= 1013 || (c < 1369
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2042
            ? (c < 1791
              ? (c < 1649
                ? (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))))
              : (c <= 1791 || (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : c <= 2037)))))
            : (c <= 2042 || (c < 2160
              ? (c < 2088
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))
              : (c <= 2183 || (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2738
          ? (c < 2565
            ? (c < 2493
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2654
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2969
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4159
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3804
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : c <= 3801)))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4969
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6279
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43216
      ? (c < 8528
        ? (c < 8029
          ? (c < 7296
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7680
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8016
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8150
              ? (c < 8126
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))))
              : (c <= 8155 || (c < 8304
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : c <= 8329)))))
            : (c <= 8348 || (c < 8486
              ? (c < 8469
                ? (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8508
                ? (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8585 || (c < 12690
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : (c <= 9471 || (c >= 10102 && c <= 10131)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || c == 11517))))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 12293
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))))
              : (c <= 12295 || (c < 12352
                ? (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42656
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 19903 || (c < 42512
                ? (c < 42192
                  ? (c >= 19968 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43056
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43061 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65490
        ? (c < 43816
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43739
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64323
            ? (c < 64275
              ? (c < 44016
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44025 || (c < 55243
                  ? (c >= 44032 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64262)))))
              : (c <= 64279 || (c < 64312
                ? (c < 64287
                  ? c == 64285
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))))
            : (c <= 64324 || (c < 65142
              ? (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))
              : (c <= 65276 || (c < 65382
                ? (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))))))))
        : (c <= 65495 || (c < 66940
          ? (c < 66304
            ? (c < 65664
              ? (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))
              : (c <= 65786 || (c < 66176
                ? (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : (c <= 65912 || (c >= 65930 && c <= 65931)))
                : (c <= 66204 || (c < 66273
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66299)))))
            : (c <= 66339 || (c < 66560
              ? (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66517)))
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

static inline bool sym_account_character_set_5(int32_t c) {
  return (c < 7742
    ? (c < 975
      ? (c < 425
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 368
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 364
                  ? (c < 362
                    ? c == 360
                    : c <= 362)
                  : (c <= 364 || c == 366))))))
            : (c <= 368 || (c < 393
              ? (c < 379
                ? (c < 374
                  ? (c < 372
                    ? c == 370
                    : c <= 372)
                  : (c <= 374 || (c >= 376 && c <= 377)))
                : (c <= 379 || (c < 388
                  ? (c < 385
                    ? c == 381
                    : c <= 386)
                  : (c <= 388 || (c >= 390 && c <= 391)))))
              : (c <= 395 || (c < 415
                ? (c < 406
                  ? (c < 403
                    ? (c >= 398 && c <= 401)
                    : c <= 404)
                  : (c <= 408 || (c >= 412 && c <= 413)))
                : (c <= 416 || (c < 420
                  ? c == 418
                  : (c <= 420 || (c >= 422 && c <= 423)))))))))))
        : (c <= 425 || (c < 524
          ? (c < 482
            ? (c < 461
              ? (c < 439
                ? (c < 433
                  ? (c < 430
                    ? c == 428
                    : c <= 431)
                  : (c <= 435 || c == 437))
                : (c <= 440 || (c < 455
                  ? (c < 452
                    ? c == 444
                    : c <= 452)
                  : (c <= 455 || c == 458))))
              : (c <= 461 || (c < 471
                ? (c < 467
                  ? (c < 465
                    ? c == 463
                    : c <= 465)
                  : (c <= 467 || c == 469))
                : (c <= 471 || (c < 478
                  ? (c < 475
                    ? c == 473
                    : c <= 475)
                  : (c <= 478 || c == 480))))))
            : (c <= 482 || (c < 506
              ? (c < 492
                ? (c < 488
                  ? (c < 486
                    ? c == 484
                    : c <= 486)
                  : (c <= 488 || c == 490))
                : (c <= 492 || (c < 500
                  ? (c < 497
                    ? c == 494
                    : c <= 497)
                  : (c <= 500 || (c >= 502 && c <= 504)))))
              : (c <= 506 || (c < 516
                ? (c < 512
                  ? (c < 510
                    ? c == 508
                    : c <= 510)
                  : (c <= 512 || c == 514))
                : (c <= 516 || (c < 520
                  ? c == 518
                  : (c <= 520 || c == 522))))))))
          : (c <= 524 || (c < 562
            ? (c < 544
              ? (c < 534
                ? (c < 530
                  ? (c < 528
                    ? c == 526
                    : c <= 528)
                  : (c <= 530 || c == 532))
                : (c <= 534 || (c < 540
                  ? (c < 538
                    ? c == 536
                    : c <= 538)
                  : (c <= 540 || c == 542))))
              : (c <= 544 || (c < 554
                ? (c < 550
                  ? (c < 548
                    ? c == 546
                    : c <= 548)
                  : (c <= 550 || c == 552))
                : (c <= 554 || (c < 558
                  ? c == 556
                  : (c <= 558 || c == 560))))))
            : (c <= 562 || (c < 882
              ? (c < 584
                ? (c < 577
                  ? (c < 573
                    ? (c >= 570 && c <= 571)
                    : c <= 574)
                  : (c <= 577 || (c >= 579 && c <= 582)))
                : (c <= 584 || (c < 590
                  ? (c < 588
                    ? c == 586
                    : c <= 588)
                  : (c <= 590 || c == 880))))
              : (c <= 882 || (c < 908
                ? (c < 902
                  ? (c < 895
                    ? c == 886
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 913
                  ? (c >= 910 && c <= 911)
                  : (c <= 929 || (c >= 931 && c <= 939)))))))))))))
      : (c <= 975 || (c < 1250
        ? (c < 1170
          ? (c < 1124
            ? (c < 1000
              ? (c < 990
                ? (c < 986
                  ? (c < 984
                    ? (c >= 978 && c <= 980)
                    : c <= 984)
                  : (c <= 986 || c == 988))
                : (c <= 990 || (c < 996
                  ? (c < 994
                    ? c == 992
                    : c <= 994)
                  : (c <= 996 || c == 998))))
              : (c <= 1000 || (c < 1015
                ? (c < 1006
                  ? (c < 1004
                    ? c == 1002
                    : c <= 1004)
                  : (c <= 1006 || c == 1012))
                : (c <= 1015 || (c < 1120
                  ? (c < 1021
                    ? (c >= 1017 && c <= 1018)
                    : c <= 1071)
                  : (c <= 1120 || c == 1122))))))
            : (c <= 1124 || (c < 1144
              ? (c < 1134
                ? (c < 1130
                  ? (c < 1128
                    ? c == 1126
                    : c <= 1128)
                  : (c <= 1130 || c == 1132))
                : (c <= 1134 || (c < 1140
                  ? (c < 1138
                    ? c == 1136
                    : c <= 1138)
                  : (c <= 1140 || c == 1142))))
              : (c <= 1144 || (c < 1162
                ? (c < 1150
                  ? (c < 1148
                    ? c == 1146
                    : c <= 1148)
                  : (c <= 1150 || c == 1152))
                : (c <= 1162 || (c < 1166
                  ? c == 1164
                  : (c <= 1166 || c == 1168))))))))
          : (c <= 1170 || (c < 1210
            ? (c < 1190
              ? (c < 1180
                ? (c < 1176
                  ? (c < 1174
                    ? c == 1172
                    : c <= 1174)
                  : (c <= 1176 || c == 1178))
                : (c <= 1180 || (c < 1186
                  ? (c < 1184
                    ? c == 1182
                    : c <= 1184)
                  : (c <= 1186 || c == 1188))))
              : (c <= 1190 || (c < 1200
                ? (c < 1196
                  ? (c < 1194
                    ? c == 1192
                    : c <= 1194)
                  : (c <= 1196 || c == 1198))
                : (c <= 1200 || (c < 1206
                  ? (c < 1204
                    ? c == 1202
                    : c <= 1204)
                  : (c <= 1206 || c == 1208))))))
            : (c <= 1210 || (c < 1232
              ? (c < 1221
                ? (c < 1216
                  ? (c < 1214
                    ? c == 1212
                    : c <= 1214)
                  : (c <= 1217 || c == 1219))
                : (c <= 1221 || (c < 1227
                  ? (c < 1225
                    ? c == 1223
                    : c <= 1225)
                  : (c <= 1227 || c == 1229))))
              : (c <= 1232 || (c < 1242
                ? (c < 1238
                  ? (c < 1236
                    ? c == 1234
                    : c <= 1236)
                  : (c <= 1238 || c == 1240))
                : (c <= 1242 || (c < 1246
                  ? c == 1244
                  : (c <= 1246 || c == 1248))))))))))
        : (c <= 1250 || (c < 1329
          ? (c < 1290
            ? (c < 1270
              ? (c < 1260
                ? (c < 1256
                  ? (c < 1254
                    ? c == 1252
                    : c <= 1254)
                  : (c <= 1256 || c == 1258))
                : (c <= 1260 || (c < 1266
                  ? (c < 1264
                    ? c == 1262
                    : c <= 1264)
                  : (c <= 1266 || c == 1268))))
              : (c <= 1270 || (c < 1280
                ? (c < 1276
                  ? (c < 1274
                    ? c == 1272
                    : c <= 1274)
                  : (c <= 1276 || c == 1278))
                : (c <= 1280 || (c < 1286
                  ? (c < 1284
                    ? c == 1282
                    : c <= 1284)
                  : (c <= 1286 || c == 1288))))))
            : (c <= 1290 || (c < 1310
              ? (c < 1300
                ? (c < 1296
                  ? (c < 1294
                    ? c == 1292
                    : c <= 1294)
                  : (c <= 1296 || c == 1298))
                : (c <= 1300 || (c < 1306
                  ? (c < 1304
                    ? c == 1302
                    : c <= 1304)
                  : (c <= 1306 || c == 1308))))
              : (c <= 1310 || (c < 1320
                ? (c < 1316
                  ? (c < 1314
                    ? c == 1312
                    : c <= 1314)
                  : (c <= 1316 || c == 1318))
                : (c <= 1320 || (c < 1324
                  ? c == 1322
                  : (c <= 1324 || c == 1326))))))))
          : (c <= 1366 || (c < 7704
            ? (c < 7686
              ? (c < 7312
                ? (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 5024 && c <= 5109)))
                : (c <= 7354 || (c < 7682
                  ? (c < 7680
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7680)
                  : (c <= 7682 || c == 7684))))
              : (c <= 7686 || (c < 7696
                ? (c < 7692
                  ? (c < 7690
                    ? c == 7688
                    : c <= 7690)
                  : (c <= 7692 || c == 7694))
                : (c <= 7696 || (c < 7700
                  ? c == 7698
                  : (c <= 7700 || c == 7702))))))
            : (c <= 7704 || (c < 7724
              ? (c < 7714
                ? (c < 7710
                  ? (c < 7708
                    ? c == 7706
                    : c <= 7708)
                  : (c <= 7710 || c == 7712))
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
                : (c <= 7734 || (c < 7738
                  ? c == 7736
                  : (c <= 7738 || c == 7740))))))))))))))
    : (c <= 7742 || (c < 11440
      ? (c < 7906
        ? (c < 7820
          ? (c < 7782
            ? (c < 7762
              ? (c < 7752
                ? (c < 7748
                  ? (c < 7746
                    ? c == 7744
                    : c <= 7746)
                  : (c <= 7748 || c == 7750))
                : (c <= 7752 || (c < 7758
                  ? (c < 7756
                    ? c == 7754
                    : c <= 7756)
                  : (c <= 7758 || c == 7760))))
              : (c <= 7762 || (c < 7772
                ? (c < 7768
                  ? (c < 7766
                    ? c == 7764
                    : c <= 7766)
                  : (c <= 7768 || c == 7770))
                : (c <= 7772 || (c < 7778
                  ? (c < 7776
                    ? c == 7774
                    : c <= 7776)
                  : (c <= 7778 || c == 7780))))))
            : (c <= 7782 || (c < 7802
              ? (c < 7792
                ? (c < 7788
                  ? (c < 7786
                    ? c == 7784
                    : c <= 7786)
                  : (c <= 7788 || c == 7790))
                : (c <= 7792 || (c < 7798
                  ? (c < 7796
                    ? c == 7794
                    : c <= 7796)
                  : (c <= 7798 || c == 7800))))
              : (c <= 7802 || (c < 7812
                ? (c < 7808
                  ? (c < 7806
                    ? c == 7804
                    : c <= 7806)
                  : (c <= 7808 || c == 7810))
                : (c <= 7812 || (c < 7816
                  ? c == 7814
                  : (c <= 7816 || c == 7818))))))))
          : (c <= 7820 || (c < 7868
            ? (c < 7848
              ? (c < 7838
                ? (c < 7826
                  ? (c < 7824
                    ? c == 7822
                    : c <= 7824)
                  : (c <= 7826 || c == 7828))
                : (c <= 7838 || (c < 7844
                  ? (c < 7842
                    ? c == 7840
                    : c <= 7842)
                  : (c <= 7844 || c == 7846))))
              : (c <= 7848 || (c < 7858
                ? (c < 7854
                  ? (c < 7852
                    ? c == 7850
                    : c <= 7852)
                  : (c <= 7854 || c == 7856))
                : (c <= 7858 || (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))))))
            : (c <= 7868 || (c < 7888
              ? (c < 7878
                ? (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))
                : (c <= 7878 || (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))))
              : (c <= 7888 || (c < 7898
                ? (c < 7894
                  ? (c < 7892
                    ? c == 7890
                    : c <= 7892)
                  : (c <= 7894 || c == 7896))
                : (c <= 7898 || (c < 7902
                  ? c == 7900
                  : (c <= 7902 || c == 7904))))))))))
        : (c <= 7906 || (c < 8490
          ? (c < 8025
            ? (c < 7926
              ? (c < 7916
                ? (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))
                : (c <= 7916 || (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))))
              : (c <= 7926 || (c < 7944
                ? (c < 7932
                  ? (c < 7930
                    ? c == 7928
                    : c <= 7930)
                  : (c <= 7932 || c == 7934))
                : (c <= 7951 || (c < 7992
                  ? (c < 7976
                    ? (c >= 7960 && c <= 7965)
                    : c <= 7983)
                  : (c <= 7999 || (c >= 8008 && c <= 8013)))))))
            : (c <= 8025 || (c < 8450
              ? (c < 8120
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8031 || (c >= 8040 && c <= 8047)))
                : (c <= 8123 || (c < 8168
                  ? (c < 8152
                    ? (c >= 8136 && c <= 8139)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8184 && c <= 8187)))))
              : (c <= 8450 || (c < 8473
                ? (c < 8464
                  ? (c < 8459
                    ? c == 8455
                    : c <= 8461)
                  : (c <= 8466 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))))))
          : (c <= 8493 || (c < 11402
            ? (c < 11371
              ? (c < 11264
                ? (c < 8517
                  ? (c < 8510
                    ? (c >= 8496 && c <= 8499)
                    : c <= 8511)
                  : (c <= 8517 || c == 8579))
                : (c <= 11311 || (c < 11367
                  ? (c < 11362
                    ? c == 11360
                    : c <= 11364)
                  : (c <= 11367 || c == 11369))))
              : (c <= 11371 || (c < 11394
                ? (c < 11381
                  ? (c < 11378
                    ? (c >= 11373 && c <= 11376)
                    : c <= 11378)
                  : (c <= 11381 || (c >= 11390 && c <= 11392)))
                : (c <= 11394 || (c < 11398
                  ? c == 11396
                  : (c <= 11398 || c == 11400))))))
            : (c <= 11402 || (c < 11422
              ? (c < 11412
                ? (c < 11408
                  ? (c < 11406
                    ? c == 11404
                    : c <= 11406)
                  : (c <= 11408 || c == 11410))
                : (c <= 11412 || (c < 11418
                  ? (c < 11416
                    ? c == 11414
                    : c <= 11416)
                  : (c <= 11418 || c == 11420))))
              : (c <= 11422 || (c < 11432
                ? (c < 11428
                  ? (c < 11426
                    ? c == 11424
                    : c <= 11426)
                  : (c <= 11428 || c == 11430))
                : (c <= 11432 || (c < 11436
                  ? c == 11434
                  : (c <= 11436 || c == 11438))))))))))))
      : (c <= 11440 || (c < 42806
        ? (c < 42574
          ? (c < 11480
            ? (c < 11460
              ? (c < 11450
                ? (c < 11446
                  ? (c < 11444
                    ? c == 11442
                    : c <= 11444)
                  : (c <= 11446 || c == 11448))
                : (c <= 11450 || (c < 11456
                  ? (c < 11454
                    ? c == 11452
                    : c <= 11454)
                  : (c <= 11456 || c == 11458))))
              : (c <= 11460 || (c < 11470
                ? (c < 11466
                  ? (c < 11464
                    ? c == 11462
                    : c <= 11464)
                  : (c <= 11466 || c == 11468))
                : (c <= 11470 || (c < 11476
                  ? (c < 11474
                    ? c == 11472
                    : c <= 11474)
                  : (c <= 11476 || c == 11478))))))
            : (c <= 11480 || (c < 13312
              ? (c < 11490
                ? (c < 11486
                  ? (c < 11484
                    ? c == 11482
                    : c <= 11484)
                  : (c <= 11486 || c == 11488))
                : (c <= 11490 || (c < 11506
                  ? (c < 11501
                    ? c == 11499
                    : c <= 11501)
                  : (c <= 11506 || (c >= 12352 && c <= 12543)))))
              : (c <= 19903 || (c < 42566
                ? (c < 42562
                  ? (c < 42560
                    ? (c >= 19968 && c <= 40959)
                    : c <= 42560)
                  : (c <= 42562 || c == 42564))
                : (c <= 42566 || (c < 42570
                  ? c == 42568
                  : (c <= 42570 || c == 42572))))))))
          : (c <= 42574 || (c < 42632
            ? (c < 42594
              ? (c < 42584
                ? (c < 42580
                  ? (c < 42578
                    ? c == 42576
                    : c <= 42578)
                  : (c <= 42580 || c == 42582))
                : (c <= 42584 || (c < 42590
                  ? (c < 42588
                    ? c == 42586
                    : c <= 42588)
                  : (c <= 42590 || c == 42592))))
              : (c <= 42594 || (c < 42604
                ? (c < 42600
                  ? (c < 42598
                    ? c == 42596
                    : c <= 42598)
                  : (c <= 42600 || c == 42602))
                : (c <= 42604 || (c < 42628
                  ? (c < 42626
                    ? c == 42624
                    : c <= 42626)
                  : (c <= 42628 || c == 42630))))))
            : (c <= 42632 || (c < 42786
              ? (c < 42642
                ? (c < 42638
                  ? (c < 42636
                    ? c == 42634
                    : c <= 42636)
                  : (c <= 42638 || c == 42640))
                : (c <= 42642 || (c < 42648
                  ? (c < 42646
                    ? c == 42644
                    : c <= 42646)
                  : (c <= 42648 || c == 42650))))
              : (c <= 42786 || (c < 42796
                ? (c < 42792
                  ? (c < 42790
                    ? c == 42788
                    : c <= 42790)
                  : (c <= 42792 || c == 42794))
                : (c <= 42796 || (c < 42802
                  ? c == 42798
                  : (c <= 42802 || c == 42804))))))))))
        : (c <= 42806 || (c < 42898
          ? (c < 42846
            ? (c < 42826
              ? (c < 42816
                ? (c < 42812
                  ? (c < 42810
                    ? c == 42808
                    : c <= 42810)
                  : (c <= 42812 || c == 42814))
                : (c <= 42816 || (c < 42822
                  ? (c < 42820
                    ? c == 42818
                    : c <= 42820)
                  : (c <= 42822 || c == 42824))))
              : (c <= 42826 || (c < 42836
                ? (c < 42832
                  ? (c < 42830
                    ? c == 42828
                    : c <= 42830)
                  : (c <= 42832 || c == 42834))
                : (c <= 42836 || (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))))))
            : (c <= 42846 || (c < 42875
              ? (c < 42856
                ? (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))
                : (c <= 42856 || (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))))
              : (c <= 42875 || (c < 42886
                ? (c < 42882
                  ? (c < 42880
                    ? (c >= 42877 && c <= 42878)
                    : c <= 42880)
                  : (c <= 42882 || c == 42884))
                : (c <= 42886 || (c < 42893
                  ? c == 42891
                  : (c <= 42893 || c == 42896))))))))
          : (c <= 42898 || (c < 42946
            ? (c < 42920
              ? (c < 42910
                ? (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))
                : (c <= 42910 || (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))))
              : (c <= 42920 || (c < 42938
                ? (c < 42934
                  ? (c < 42928
                    ? (c >= 42922 && c <= 42926)
                    : c <= 42932)
                  : (c <= 42934 || c == 42936))
                : (c <= 42938 || (c < 42942
                  ? c == 42940
                  : (c <= 42942 || c == 42944))))))
            : (c <= 42946 || (c < 66560
              ? (c < 42968
                ? (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))
                : (c <= 42968 || (c < 63744
                  ? (c < 44032
                    ? c == 42997
                    : c <= 55215)
                  : (c <= 64255 || (c >= 65313 && c <= 65338)))))
              : (c <= 66599 || (c < 66964
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 173824
                  ? (c >= 131072 && c <= 173791)
                  : (c <= 183983 || (c >= 194560 && c <= 195103)))))))))))))))));
}

static inline bool sym_account_character_set_6(int32_t c) {
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

static inline bool sym_unquoted_string_character_set_1(int32_t c) {
  return (c < 7744
    ? (c < 978
      ? (c < 428
        ? (c < 330
          ? (c < 290
            ? (c < 270
              ? (c < 260
                ? (c < 256
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 222)
                  : (c <= 256 || c == 258))
                : (c <= 260 || (c < 266
                  ? (c < 264
                    ? c == 262
                    : c <= 264)
                  : (c <= 266 || c == 268))))
              : (c <= 270 || (c < 280
                ? (c < 276
                  ? (c < 274
                    ? c == 272
                    : c <= 274)
                  : (c <= 276 || c == 278))
                : (c <= 280 || (c < 286
                  ? (c < 284
                    ? c == 282
                    : c <= 284)
                  : (c <= 286 || c == 288))))))
            : (c <= 290 || (c < 310
              ? (c < 300
                ? (c < 296
                  ? (c < 294
                    ? c == 292
                    : c <= 294)
                  : (c <= 296 || c == 298))
                : (c <= 300 || (c < 306
                  ? (c < 304
                    ? c == 302
                    : c <= 304)
                  : (c <= 306 || c == 308))))
              : (c <= 310 || (c < 321
                ? (c < 317
                  ? (c < 315
                    ? c == 313
                    : c <= 315)
                  : (c <= 317 || c == 319))
                : (c <= 321 || (c < 325
                  ? c == 323
                  : (c <= 325 || c == 327))))))))
          : (c <= 330 || (c < 370
            ? (c < 350
              ? (c < 340
                ? (c < 336
                  ? (c < 334
                    ? c == 332
                    : c <= 334)
                  : (c <= 336 || c == 338))
                : (c <= 340 || (c < 346
                  ? (c < 344
                    ? c == 342
                    : c <= 344)
                  : (c <= 346 || c == 348))))
              : (c <= 350 || (c < 360
                ? (c < 356
                  ? (c < 354
                    ? c == 352
                    : c <= 354)
                  : (c <= 356 || c == 358))
                : (c <= 360 || (c < 366
                  ? (c < 364
                    ? c == 362
                    : c <= 364)
                  : (c <= 366 || c == 368))))))
            : (c <= 370 || (c < 398
              ? (c < 381
                ? (c < 376
                  ? (c < 374
                    ? c == 372
                    : c <= 374)
                  : (c <= 377 || c == 379))
                : (c <= 381 || (c < 390
                  ? (c < 388
                    ? (c >= 385 && c <= 386)
                    : c <= 388)
                  : (c <= 391 || (c >= 393 && c <= 395)))))
              : (c <= 401 || (c < 418
                ? (c < 412
                  ? (c < 406
                    ? (c >= 403 && c <= 404)
                    : c <= 408)
                  : (c <= 413 || (c >= 415 && c <= 416)))
                : (c <= 418 || (c < 422
                  ? c == 420
                  : (c <= 423 || c == 425))))))))))
        : (c <= 428 || (c < 526
          ? (c < 484
            ? (c < 463
              ? (c < 444
                ? (c < 437
                  ? (c < 433
                    ? (c >= 430 && c <= 431)
                    : c <= 435)
                  : (c <= 437 || (c >= 439 && c <= 440)))
                : (c <= 444 || (c < 458
                  ? (c < 455
                    ? c == 452
                    : c <= 455)
                  : (c <= 458 || c == 461))))
              : (c <= 463 || (c < 473
                ? (c < 469
                  ? (c < 467
                    ? c == 465
                    : c <= 467)
                  : (c <= 469 || c == 471))
                : (c <= 473 || (c < 480
                  ? (c < 478
                    ? c == 475
                    : c <= 478)
                  : (c <= 480 || c == 482))))))
            : (c <= 484 || (c < 508
              ? (c < 494
                ? (c < 490
                  ? (c < 488
                    ? c == 486
                    : c <= 488)
                  : (c <= 490 || c == 492))
                : (c <= 494 || (c < 502
                  ? (c < 500
                    ? c == 497
                    : c <= 500)
                  : (c <= 504 || c == 506))))
              : (c <= 508 || (c < 518
                ? (c < 514
                  ? (c < 512
                    ? c == 510
                    : c <= 512)
                  : (c <= 514 || c == 516))
                : (c <= 518 || (c < 522
                  ? c == 520
                  : (c <= 522 || c == 524))))))))
          : (c <= 526 || (c < 570
            ? (c < 546
              ? (c < 536
                ? (c < 532
                  ? (c < 530
                    ? c == 528
                    : c <= 530)
                  : (c <= 532 || c == 534))
                : (c <= 536 || (c < 542
                  ? (c < 540
                    ? c == 538
                    : c <= 540)
                  : (c <= 542 || c == 544))))
              : (c <= 546 || (c < 556
                ? (c < 552
                  ? (c < 550
                    ? c == 548
                    : c <= 550)
                  : (c <= 552 || c == 554))
                : (c <= 556 || (c < 560
                  ? c == 558
                  : (c <= 560 || c == 562))))))
            : (c <= 571 || (c < 886
              ? (c < 586
                ? (c < 579
                  ? (c < 577
                    ? (c >= 573 && c <= 574)
                    : c <= 577)
                  : (c <= 582 || c == 584))
                : (c <= 586 || (c < 880
                  ? (c < 590
                    ? c == 588
                    : c <= 590)
                  : (c <= 880 || c == 882))))
              : (c <= 886 || (c < 910
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))
                : (c <= 911 || (c < 931
                  ? (c >= 913 && c <= 929)
                  : (c <= 939 || c == 975))))))))))))
      : (c <= 980 || (c < 1252
        ? (c < 1172
          ? (c < 1126
            ? (c < 1002
              ? (c < 992
                ? (c < 988
                  ? (c < 986
                    ? c == 984
                    : c <= 986)
                  : (c <= 988 || c == 990))
                : (c <= 992 || (c < 998
                  ? (c < 996
                    ? c == 994
                    : c <= 996)
                  : (c <= 998 || c == 1000))))
              : (c <= 1002 || (c < 1017
                ? (c < 1012
                  ? (c < 1006
                    ? c == 1004
                    : c <= 1006)
                  : (c <= 1012 || c == 1015))
                : (c <= 1018 || (c < 1122
                  ? (c < 1120
                    ? (c >= 1021 && c <= 1071)
                    : c <= 1120)
                  : (c <= 1122 || c == 1124))))))
            : (c <= 1126 || (c < 1146
              ? (c < 1136
                ? (c < 1132
                  ? (c < 1130
                    ? c == 1128
                    : c <= 1130)
                  : (c <= 1132 || c == 1134))
                : (c <= 1136 || (c < 1142
                  ? (c < 1140
                    ? c == 1138
                    : c <= 1140)
                  : (c <= 1142 || c == 1144))))
              : (c <= 1146 || (c < 1164
                ? (c < 1152
                  ? (c < 1150
                    ? c == 1148
                    : c <= 1150)
                  : (c <= 1152 || c == 1162))
                : (c <= 1164 || (c < 1168
                  ? c == 1166
                  : (c <= 1168 || c == 1170))))))))
          : (c <= 1172 || (c < 1212
            ? (c < 1192
              ? (c < 1182
                ? (c < 1178
                  ? (c < 1176
                    ? c == 1174
                    : c <= 1176)
                  : (c <= 1178 || c == 1180))
                : (c <= 1182 || (c < 1188
                  ? (c < 1186
                    ? c == 1184
                    : c <= 1186)
                  : (c <= 1188 || c == 1190))))
              : (c <= 1192 || (c < 1202
                ? (c < 1198
                  ? (c < 1196
                    ? c == 1194
                    : c <= 1196)
                  : (c <= 1198 || c == 1200))
                : (c <= 1202 || (c < 1208
                  ? (c < 1206
                    ? c == 1204
                    : c <= 1206)
                  : (c <= 1208 || c == 1210))))))
            : (c <= 1212 || (c < 1234
              ? (c < 1223
                ? (c < 1219
                  ? (c < 1216
                    ? c == 1214
                    : c <= 1217)
                  : (c <= 1219 || c == 1221))
                : (c <= 1223 || (c < 1229
                  ? (c < 1227
                    ? c == 1225
                    : c <= 1227)
                  : (c <= 1229 || c == 1232))))
              : (c <= 1234 || (c < 1244
                ? (c < 1240
                  ? (c < 1238
                    ? c == 1236
                    : c <= 1238)
                  : (c <= 1240 || c == 1242))
                : (c <= 1244 || (c < 1248
                  ? c == 1246
                  : (c <= 1248 || c == 1250))))))))))
        : (c <= 1252 || (c < 4256
          ? (c < 1292
            ? (c < 1272
              ? (c < 1262
                ? (c < 1258
                  ? (c < 1256
                    ? c == 1254
                    : c <= 1256)
                  : (c <= 1258 || c == 1260))
                : (c <= 1262 || (c < 1268
                  ? (c < 1266
                    ? c == 1264
                    : c <= 1266)
                  : (c <= 1268 || c == 1270))))
              : (c <= 1272 || (c < 1282
                ? (c < 1278
                  ? (c < 1276
                    ? c == 1274
                    : c <= 1276)
                  : (c <= 1278 || c == 1280))
                : (c <= 1282 || (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))))))
            : (c <= 1292 || (c < 1312
              ? (c < 1302
                ? (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))
                : (c <= 1302 || (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))))
              : (c <= 1312 || (c < 1322
                ? (c < 1318
                  ? (c < 1316
                    ? c == 1314
                    : c <= 1316)
                  : (c <= 1318 || c == 1320))
                : (c <= 1322 || (c < 1326
                  ? c == 1324
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))))))))
          : (c <= 4293 || (c < 7706
            ? (c < 7688
              ? (c < 7357
                ? (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))))
              : (c <= 7688 || (c < 7698
                ? (c < 7694
                  ? (c < 7692
                    ? c == 7690
                    : c <= 7692)
                  : (c <= 7694 || c == 7696))
                : (c <= 7698 || (c < 7702
                  ? c == 7700
                  : (c <= 7702 || c == 7704))))))
            : (c <= 7706 || (c < 7726
              ? (c < 7716
                ? (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))
                : (c <= 7716 || (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))))
              : (c <= 7726 || (c < 7736
                ? (c < 7732
                  ? (c < 7730
                    ? c == 7728
                    : c <= 7730)
                  : (c <= 7732 || c == 7734))
                : (c <= 7736 || (c < 7740
                  ? c == 7738
                  : (c <= 7740 || c == 7742))))))))))))))
    : (c <= 7744 || (c < 11442
      ? (c < 7908
        ? (c < 7822
          ? (c < 7784
            ? (c < 7764
              ? (c < 7754
                ? (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))
                : (c <= 7754 || (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))))
              : (c <= 7764 || (c < 7774
                ? (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))
                : (c <= 7774 || (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))))))
            : (c <= 7784 || (c < 7804
              ? (c < 7794
                ? (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))
                : (c <= 7794 || (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))))
              : (c <= 7804 || (c < 7814
                ? (c < 7810
                  ? (c < 7808
                    ? c == 7806
                    : c <= 7808)
                  : (c <= 7810 || c == 7812))
                : (c <= 7814 || (c < 7818
                  ? c == 7816
                  : (c <= 7818 || c == 7820))))))))
          : (c <= 7822 || (c < 7870
            ? (c < 7850
              ? (c < 7840
                ? (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))
                : (c <= 7840 || (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))))
              : (c <= 7850 || (c < 7860
                ? (c < 7856
                  ? (c < 7854
                    ? c == 7852
                    : c <= 7854)
                  : (c <= 7856 || c == 7858))
                : (c <= 7860 || (c < 7866
                  ? (c < 7864
                    ? c == 7862
                    : c <= 7864)
                  : (c <= 7866 || c == 7868))))))
            : (c <= 7870 || (c < 7890
              ? (c < 7880
                ? (c < 7876
                  ? (c < 7874
                    ? c == 7872
                    : c <= 7874)
                  : (c <= 7876 || c == 7878))
                : (c <= 7880 || (c < 7886
                  ? (c < 7884
                    ? c == 7882
                    : c <= 7884)
                  : (c <= 7886 || c == 7888))))
              : (c <= 7890 || (c < 7900
                ? (c < 7896
                  ? (c < 7894
                    ? c == 7892
                    : c <= 7894)
                  : (c <= 7896 || c == 7898))
                : (c <= 7900 || (c < 7904
                  ? c == 7902
                  : (c <= 7904 || c == 7906))))))))))
        : (c <= 7908 || (c < 8496
          ? (c < 8027
            ? (c < 7928
              ? (c < 7918
                ? (c < 7914
                  ? (c < 7912
                    ? c == 7910
                    : c <= 7912)
                  : (c <= 7914 || c == 7916))
                : (c <= 7918 || (c < 7924
                  ? (c < 7922
                    ? c == 7920
                    : c <= 7922)
                  : (c <= 7924 || c == 7926))))
              : (c <= 7928 || (c < 7960
                ? (c < 7934
                  ? (c < 7932
                    ? c == 7930
                    : c <= 7932)
                  : (c <= 7934 || (c >= 7944 && c <= 7951)))
                : (c <= 7965 || (c < 8008
                  ? (c < 7992
                    ? (c >= 7976 && c <= 7983)
                    : c <= 7999)
                  : (c <= 8013 || c == 8025))))))
            : (c <= 8027 || (c < 8455
              ? (c < 8136
                ? (c < 8040
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8031)
                  : (c <= 8047 || (c >= 8120 && c <= 8123)))
                : (c <= 8139 || (c < 8184
                  ? (c < 8168
                    ? (c >= 8152 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8187 || c == 8450))))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c < 8464
                    ? (c >= 8459 && c <= 8461)
                    : c <= 8466)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))))))
          : (c <= 8499 || (c < 11404
            ? (c < 11373
              ? (c < 11360
                ? (c < 8579
                  ? (c < 8517
                    ? (c >= 8510 && c <= 8511)
                    : c <= 8517)
                  : (c <= 8579 || (c >= 11264 && c <= 11311)))
                : (c <= 11360 || (c < 11369
                  ? (c < 11367
                    ? (c >= 11362 && c <= 11364)
                    : c <= 11367)
                  : (c <= 11369 || c == 11371))))
              : (c <= 11376 || (c < 11396
                ? (c < 11390
                  ? (c < 11381
                    ? c == 11378
                    : c <= 11381)
                  : (c <= 11392 || c == 11394))
                : (c <= 11396 || (c < 11400
                  ? c == 11398
                  : (c <= 11400 || c == 11402))))))
            : (c <= 11404 || (c < 11424
              ? (c < 11414
                ? (c < 11410
                  ? (c < 11408
                    ? c == 11406
                    : c <= 11408)
                  : (c <= 11410 || c == 11412))
                : (c <= 11414 || (c < 11420
                  ? (c < 11418
                    ? c == 11416
                    : c <= 11418)
                  : (c <= 11420 || c == 11422))))
              : (c <= 11424 || (c < 11434
                ? (c < 11430
                  ? (c < 11428
                    ? c == 11426
                    : c <= 11428)
                  : (c <= 11430 || c == 11432))
                : (c <= 11434 || (c < 11438
                  ? c == 11436
                  : (c <= 11438 || c == 11440))))))))))))
      : (c <= 11442 || (c < 42806
        ? (c < 42576
          ? (c < 11482
            ? (c < 11462
              ? (c < 11452
                ? (c < 11448
                  ? (c < 11446
                    ? c == 11444
                    : c <= 11446)
                  : (c <= 11448 || c == 11450))
                : (c <= 11452 || (c < 11458
                  ? (c < 11456
                    ? c == 11454
                    : c <= 11456)
                  : (c <= 11458 || c == 11460))))
              : (c <= 11462 || (c < 11472
                ? (c < 11468
                  ? (c < 11466
                    ? c == 11464
                    : c <= 11466)
                  : (c <= 11468 || c == 11470))
                : (c <= 11472 || (c < 11478
                  ? (c < 11476
                    ? c == 11474
                    : c <= 11476)
                  : (c <= 11478 || c == 11480))))))
            : (c <= 11482 || (c < 19968
              ? (c < 11499
                ? (c < 11488
                  ? (c < 11486
                    ? c == 11484
                    : c <= 11486)
                  : (c <= 11488 || c == 11490))
                : (c <= 11499 || (c < 12352
                  ? (c < 11506
                    ? c == 11501
                    : c <= 11506)
                  : (c <= 12543 || (c >= 13312 && c <= 19903)))))
              : (c <= 40959 || (c < 42568
                ? (c < 42564
                  ? (c < 42562
                    ? c == 42560
                    : c <= 42562)
                  : (c <= 42564 || c == 42566))
                : (c <= 42568 || (c < 42572
                  ? c == 42570
                  : (c <= 42572 || c == 42574))))))))
          : (c <= 42576 || (c < 42632
            ? (c < 42596
              ? (c < 42586
                ? (c < 42582
                  ? (c < 42580
                    ? c == 42578
                    : c <= 42580)
                  : (c <= 42582 || c == 42584))
                : (c <= 42586 || (c < 42592
                  ? (c < 42590
                    ? c == 42588
                    : c <= 42590)
                  : (c <= 42592 || c == 42594))))
              : (c <= 42596 || (c < 42624
                ? (c < 42602
                  ? (c < 42600
                    ? c == 42598
                    : c <= 42600)
                  : (c <= 42602 || c == 42604))
                : (c <= 42624 || (c < 42628
                  ? c == 42626
                  : (c <= 42628 || c == 42630))))))
            : (c <= 42632 || (c < 42786
              ? (c < 42642
                ? (c < 42638
                  ? (c < 42636
                    ? c == 42634
                    : c <= 42636)
                  : (c <= 42638 || c == 42640))
                : (c <= 42642 || (c < 42648
                  ? (c < 42646
                    ? c == 42644
                    : c <= 42646)
                  : (c <= 42648 || c == 42650))))
              : (c <= 42786 || (c < 42796
                ? (c < 42792
                  ? (c < 42790
                    ? c == 42788
                    : c <= 42790)
                  : (c <= 42792 || c == 42794))
                : (c <= 42796 || (c < 42802
                  ? c == 42798
                  : (c <= 42802 || c == 42804))))))))))
        : (c <= 42806 || (c < 42898
          ? (c < 42846
            ? (c < 42826
              ? (c < 42816
                ? (c < 42812
                  ? (c < 42810
                    ? c == 42808
                    : c <= 42810)
                  : (c <= 42812 || c == 42814))
                : (c <= 42816 || (c < 42822
                  ? (c < 42820
                    ? c == 42818
                    : c <= 42820)
                  : (c <= 42822 || c == 42824))))
              : (c <= 42826 || (c < 42836
                ? (c < 42832
                  ? (c < 42830
                    ? c == 42828
                    : c <= 42830)
                  : (c <= 42832 || c == 42834))
                : (c <= 42836 || (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))))))
            : (c <= 42846 || (c < 42875
              ? (c < 42856
                ? (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))
                : (c <= 42856 || (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))))
              : (c <= 42875 || (c < 42886
                ? (c < 42882
                  ? (c < 42880
                    ? (c >= 42877 && c <= 42878)
                    : c <= 42880)
                  : (c <= 42882 || c == 42884))
                : (c <= 42886 || (c < 42893
                  ? c == 42891
                  : (c <= 42893 || c == 42896))))))))
          : (c <= 42898 || (c < 42946
            ? (c < 42920
              ? (c < 42910
                ? (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))
                : (c <= 42910 || (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))))
              : (c <= 42920 || (c < 42938
                ? (c < 42934
                  ? (c < 42928
                    ? (c >= 42922 && c <= 42926)
                    : c <= 42932)
                  : (c <= 42934 || c == 42936))
                : (c <= 42938 || (c < 42942
                  ? c == 42940
                  : (c <= 42942 || c == 42944))))))
            : (c <= 42946 || (c < 66560
              ? (c < 42968
                ? (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))
                : (c <= 42968 || (c < 63744
                  ? (c < 44032
                    ? c == 42997
                    : c <= 55215)
                  : (c <= 64255 || (c >= 65313 && c <= 65338)))))
              : (c <= 66599 || (c < 66964
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 173824
                  ? (c >= 131072 && c <= 173791)
                  : (c <= 183983 || (c >= 194560 && c <= 195103)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == '{') ADVANCE(321);
      if (lookahead == '}') ADVANCE(323);
      if (lookahead == '~') ADVANCE(320);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead == '%' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(316);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      if (sym_unquoted_string_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') ADVANCE(317);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      if (sym_unquoted_string_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(130);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(138);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '1') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'A') ADVANCE(29);
      if (sym_account_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'E') ADVANCE(115);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(31);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(32);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(28);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(28);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (sym_account_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(86);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(325);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(40)
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == '{') ADVANCE(321);
      if (lookahead == '}') ADVANCE(323);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (sym_account_character_set_5(lookahead)) ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == '}') ADVANCE(322);
      if (lookahead == '~') ADVANCE(320);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == '{') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (sym_account_character_set_5(lookahead)) ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (sym_unquoted_string_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == '}') ADVANCE(323);
      if (lookahead == '~') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '#' ||
          lookahead == '*') ADVANCE(97);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 56:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 57:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 58:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 59:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 60:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 61:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 62:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 63:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 64:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 65:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 66:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 67:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 68:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 69:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 70:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 71:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 72:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 73:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 74:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 75:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 76:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 77:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 84:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 85:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 86:
      if (sym_account_character_set_6(lookahead)) ADVANCE(118);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(87)
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(81);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == ';') ADVANCE(326);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(81);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__org_stars_token1);
      if (lookahead == '#' ||
          lookahead == '*') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_item);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_item);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(92);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_atat);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_at);
      if (lookahead == '@') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_slash);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__none);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__none);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(86);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(286);
      if (sym_account_character_set_3(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(86);
      if (sym_account_character_set_3(lookahead)) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'A') ADVANCE(167);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'U') ADVANCE(168);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'A') ADVANCE(171);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(172);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(130);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(138);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(176);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(175);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'U') ADVANCE(174);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(179);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(178);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      if (sym_account_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (sym_account_character_set_4(lookahead)) ADVANCE(256);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(286);
      if (sym_account_character_set_3(lookahead)) ADVANCE(256);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      if (sym_account_character_set_4(lookahead)) ADVANCE(34);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(86);
      if (sym_account_character_set_3(lookahead)) ADVANCE(34);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(202);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(316);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      if (sym_unquoted_string_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') ADVANCE(317);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      if (sym_unquoted_string_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == ',') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (sym_account_character_set_1(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '0') ADVANCE(281);
      if (lookahead == '3') ADVANCE(258);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == ':') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (sym_account_character_set_4(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == ':') ADVANCE(286);
      if (sym_account_character_set_3(lookahead)) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (sym_account_character_set_6(lookahead)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '.') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'y') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_currency);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_currency);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_currency_key_value_token1);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_currency_key_value_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_currency_key_value_token1);
      if (lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(333);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(329);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(327);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(330);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(331);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(313);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
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
  [1] = {.lex_state = 87, .external_lex_state = 2},
  [2] = {.lex_state = 87, .external_lex_state = 2},
  [3] = {.lex_state = 87, .external_lex_state = 2},
  [4] = {.lex_state = 87, .external_lex_state = 3},
  [5] = {.lex_state = 87, .external_lex_state = 3},
  [6] = {.lex_state = 87, .external_lex_state = 3},
  [7] = {.lex_state = 87, .external_lex_state = 3},
  [8] = {.lex_state = 87, .external_lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 88, .external_lex_state = 2},
  [12] = {.lex_state = 88, .external_lex_state = 3},
  [13] = {.lex_state = 88, .external_lex_state = 2},
  [14] = {.lex_state = 88, .external_lex_state = 2},
  [15] = {.lex_state = 88, .external_lex_state = 2},
  [16] = {.lex_state = 88, .external_lex_state = 2},
  [17] = {.lex_state = 88, .external_lex_state = 2},
  [18] = {.lex_state = 88, .external_lex_state = 2},
  [19] = {.lex_state = 88, .external_lex_state = 2},
  [20] = {.lex_state = 88, .external_lex_state = 2},
  [21] = {.lex_state = 88, .external_lex_state = 2},
  [22] = {.lex_state = 88, .external_lex_state = 2},
  [23] = {.lex_state = 88, .external_lex_state = 2},
  [24] = {.lex_state = 88, .external_lex_state = 3},
  [25] = {.lex_state = 88, .external_lex_state = 3},
  [26] = {.lex_state = 88, .external_lex_state = 3},
  [27] = {.lex_state = 88, .external_lex_state = 3},
  [28] = {.lex_state = 88, .external_lex_state = 3},
  [29] = {.lex_state = 88, .external_lex_state = 3},
  [30] = {.lex_state = 88, .external_lex_state = 3},
  [31] = {.lex_state = 88, .external_lex_state = 3},
  [32] = {.lex_state = 88, .external_lex_state = 2},
  [33] = {.lex_state = 88, .external_lex_state = 2},
  [34] = {.lex_state = 88, .external_lex_state = 2},
  [35] = {.lex_state = 88, .external_lex_state = 2},
  [36] = {.lex_state = 88, .external_lex_state = 3},
  [37] = {.lex_state = 88, .external_lex_state = 3},
  [38] = {.lex_state = 88, .external_lex_state = 3},
  [39] = {.lex_state = 88, .external_lex_state = 3},
  [40] = {.lex_state = 88, .external_lex_state = 3},
  [41] = {.lex_state = 88, .external_lex_state = 3},
  [42] = {.lex_state = 88, .external_lex_state = 3},
  [43] = {.lex_state = 88, .external_lex_state = 2},
  [44] = {.lex_state = 88, .external_lex_state = 3},
  [45] = {.lex_state = 88, .external_lex_state = 3},
  [46] = {.lex_state = 88, .external_lex_state = 2},
  [47] = {.lex_state = 88, .external_lex_state = 3},
  [48] = {.lex_state = 88, .external_lex_state = 3},
  [49] = {.lex_state = 88, .external_lex_state = 3},
  [50] = {.lex_state = 88, .external_lex_state = 3},
  [51] = {.lex_state = 88, .external_lex_state = 3},
  [52] = {.lex_state = 88, .external_lex_state = 3},
  [53] = {.lex_state = 88, .external_lex_state = 3},
  [54] = {.lex_state = 88, .external_lex_state = 3},
  [55] = {.lex_state = 88, .external_lex_state = 3},
  [56] = {.lex_state = 88, .external_lex_state = 3},
  [57] = {.lex_state = 88, .external_lex_state = 3},
  [58] = {.lex_state = 88, .external_lex_state = 3},
  [59] = {.lex_state = 88, .external_lex_state = 3},
  [60] = {.lex_state = 88, .external_lex_state = 3},
  [61] = {.lex_state = 88, .external_lex_state = 3},
  [62] = {.lex_state = 88, .external_lex_state = 3},
  [63] = {.lex_state = 88, .external_lex_state = 3},
  [64] = {.lex_state = 88, .external_lex_state = 3},
  [65] = {.lex_state = 88, .external_lex_state = 3},
  [66] = {.lex_state = 88, .external_lex_state = 3},
  [67] = {.lex_state = 88, .external_lex_state = 3},
  [68] = {.lex_state = 88, .external_lex_state = 3},
  [69] = {.lex_state = 88, .external_lex_state = 3},
  [70] = {.lex_state = 88, .external_lex_state = 3},
  [71] = {.lex_state = 88, .external_lex_state = 3},
  [72] = {.lex_state = 88, .external_lex_state = 3},
  [73] = {.lex_state = 88, .external_lex_state = 3},
  [74] = {.lex_state = 88, .external_lex_state = 3},
  [75] = {.lex_state = 88, .external_lex_state = 3},
  [76] = {.lex_state = 88, .external_lex_state = 3},
  [77] = {.lex_state = 88, .external_lex_state = 3},
  [78] = {.lex_state = 88, .external_lex_state = 3},
  [79] = {.lex_state = 88, .external_lex_state = 3},
  [80] = {.lex_state = 88, .external_lex_state = 3},
  [81] = {.lex_state = 88, .external_lex_state = 3},
  [82] = {.lex_state = 88, .external_lex_state = 3},
  [83] = {.lex_state = 88, .external_lex_state = 3},
  [84] = {.lex_state = 88, .external_lex_state = 3},
  [85] = {.lex_state = 88, .external_lex_state = 3},
  [86] = {.lex_state = 88, .external_lex_state = 2},
  [87] = {.lex_state = 88, .external_lex_state = 3},
  [88] = {.lex_state = 88, .external_lex_state = 3},
  [89] = {.lex_state = 88, .external_lex_state = 3},
  [90] = {.lex_state = 88, .external_lex_state = 3},
  [91] = {.lex_state = 88, .external_lex_state = 2},
  [92] = {.lex_state = 88, .external_lex_state = 2},
  [93] = {.lex_state = 88, .external_lex_state = 3},
  [94] = {.lex_state = 88, .external_lex_state = 3},
  [95] = {.lex_state = 88, .external_lex_state = 3},
  [96] = {.lex_state = 88, .external_lex_state = 3},
  [97] = {.lex_state = 88, .external_lex_state = 3},
  [98] = {.lex_state = 88, .external_lex_state = 3},
  [99] = {.lex_state = 88, .external_lex_state = 3},
  [100] = {.lex_state = 88, .external_lex_state = 2},
  [101] = {.lex_state = 88, .external_lex_state = 2},
  [102] = {.lex_state = 88, .external_lex_state = 3},
  [103] = {.lex_state = 88, .external_lex_state = 2},
  [104] = {.lex_state = 88, .external_lex_state = 2},
  [105] = {.lex_state = 88, .external_lex_state = 2},
  [106] = {.lex_state = 88, .external_lex_state = 2},
  [107] = {.lex_state = 88, .external_lex_state = 2},
  [108] = {.lex_state = 88, .external_lex_state = 2},
  [109] = {.lex_state = 88, .external_lex_state = 2},
  [110] = {.lex_state = 88, .external_lex_state = 3},
  [111] = {.lex_state = 88, .external_lex_state = 2},
  [112] = {.lex_state = 88, .external_lex_state = 3},
  [113] = {.lex_state = 88, .external_lex_state = 3},
  [114] = {.lex_state = 88, .external_lex_state = 3},
  [115] = {.lex_state = 88, .external_lex_state = 3},
  [116] = {.lex_state = 88, .external_lex_state = 2},
  [117] = {.lex_state = 88, .external_lex_state = 2},
  [118] = {.lex_state = 88, .external_lex_state = 3},
  [119] = {.lex_state = 88, .external_lex_state = 2},
  [120] = {.lex_state = 88, .external_lex_state = 2},
  [121] = {.lex_state = 88, .external_lex_state = 2},
  [122] = {.lex_state = 88, .external_lex_state = 2},
  [123] = {.lex_state = 88, .external_lex_state = 3},
  [124] = {.lex_state = 88, .external_lex_state = 3},
  [125] = {.lex_state = 88, .external_lex_state = 3},
  [126] = {.lex_state = 88, .external_lex_state = 3},
  [127] = {.lex_state = 88, .external_lex_state = 3},
  [128] = {.lex_state = 88, .external_lex_state = 3},
  [129] = {.lex_state = 88, .external_lex_state = 3},
  [130] = {.lex_state = 88, .external_lex_state = 2},
  [131] = {.lex_state = 88, .external_lex_state = 2},
  [132] = {.lex_state = 88, .external_lex_state = 2},
  [133] = {.lex_state = 88, .external_lex_state = 2},
  [134] = {.lex_state = 88, .external_lex_state = 2},
  [135] = {.lex_state = 88, .external_lex_state = 2},
  [136] = {.lex_state = 88, .external_lex_state = 2},
  [137] = {.lex_state = 88, .external_lex_state = 2},
  [138] = {.lex_state = 88, .external_lex_state = 2},
  [139] = {.lex_state = 88, .external_lex_state = 2},
  [140] = {.lex_state = 88, .external_lex_state = 2},
  [141] = {.lex_state = 88, .external_lex_state = 2},
  [142] = {.lex_state = 88, .external_lex_state = 2},
  [143] = {.lex_state = 88, .external_lex_state = 2},
  [144] = {.lex_state = 88, .external_lex_state = 2},
  [145] = {.lex_state = 88, .external_lex_state = 2},
  [146] = {.lex_state = 88, .external_lex_state = 2},
  [147] = {.lex_state = 88, .external_lex_state = 2},
  [148] = {.lex_state = 88, .external_lex_state = 2},
  [149] = {.lex_state = 88, .external_lex_state = 2},
  [150] = {.lex_state = 88, .external_lex_state = 2},
  [151] = {.lex_state = 88, .external_lex_state = 2},
  [152] = {.lex_state = 88, .external_lex_state = 2},
  [153] = {.lex_state = 88, .external_lex_state = 2},
  [154] = {.lex_state = 88, .external_lex_state = 2},
  [155] = {.lex_state = 88, .external_lex_state = 2},
  [156] = {.lex_state = 88, .external_lex_state = 2},
  [157] = {.lex_state = 88, .external_lex_state = 2},
  [158] = {.lex_state = 88, .external_lex_state = 2},
  [159] = {.lex_state = 88, .external_lex_state = 2},
  [160] = {.lex_state = 88, .external_lex_state = 2},
  [161] = {.lex_state = 88, .external_lex_state = 2},
  [162] = {.lex_state = 88, .external_lex_state = 2},
  [163] = {.lex_state = 88, .external_lex_state = 2},
  [164] = {.lex_state = 88, .external_lex_state = 2},
  [165] = {.lex_state = 88, .external_lex_state = 2},
  [166] = {.lex_state = 88, .external_lex_state = 2},
  [167] = {.lex_state = 88, .external_lex_state = 2},
  [168] = {.lex_state = 88, .external_lex_state = 2},
  [169] = {.lex_state = 88, .external_lex_state = 2},
  [170] = {.lex_state = 88, .external_lex_state = 2},
  [171] = {.lex_state = 88, .external_lex_state = 2},
  [172] = {.lex_state = 88, .external_lex_state = 2},
  [173] = {.lex_state = 88, .external_lex_state = 2},
  [174] = {.lex_state = 88, .external_lex_state = 2},
  [175] = {.lex_state = 47},
  [176] = {.lex_state = 48},
  [177] = {.lex_state = 49},
  [178] = {.lex_state = 47},
  [179] = {.lex_state = 47},
  [180] = {.lex_state = 47},
  [181] = {.lex_state = 47},
  [182] = {.lex_state = 88, .external_lex_state = 3},
  [183] = {.lex_state = 88, .external_lex_state = 3},
  [184] = {.lex_state = 88, .external_lex_state = 2},
  [185] = {.lex_state = 88, .external_lex_state = 2},
  [186] = {.lex_state = 88, .external_lex_state = 2},
  [187] = {.lex_state = 88, .external_lex_state = 2},
  [188] = {.lex_state = 88, .external_lex_state = 2},
  [189] = {.lex_state = 88, .external_lex_state = 2},
  [190] = {.lex_state = 88, .external_lex_state = 2},
  [191] = {.lex_state = 88, .external_lex_state = 2},
  [192] = {.lex_state = 88, .external_lex_state = 2},
  [193] = {.lex_state = 88, .external_lex_state = 2},
  [194] = {.lex_state = 88, .external_lex_state = 2},
  [195] = {.lex_state = 88, .external_lex_state = 2},
  [196] = {.lex_state = 88, .external_lex_state = 2},
  [197] = {.lex_state = 88, .external_lex_state = 2},
  [198] = {.lex_state = 88, .external_lex_state = 2},
  [199] = {.lex_state = 88, .external_lex_state = 2},
  [200] = {.lex_state = 88, .external_lex_state = 2},
  [201] = {.lex_state = 88, .external_lex_state = 2},
  [202] = {.lex_state = 88, .external_lex_state = 2},
  [203] = {.lex_state = 88, .external_lex_state = 2},
  [204] = {.lex_state = 88, .external_lex_state = 2},
  [205] = {.lex_state = 88, .external_lex_state = 2},
  [206] = {.lex_state = 88, .external_lex_state = 2},
  [207] = {.lex_state = 88, .external_lex_state = 2},
  [208] = {.lex_state = 88, .external_lex_state = 2},
  [209] = {.lex_state = 88, .external_lex_state = 2},
  [210] = {.lex_state = 88, .external_lex_state = 2},
  [211] = {.lex_state = 88, .external_lex_state = 2},
  [212] = {.lex_state = 88, .external_lex_state = 2},
  [213] = {.lex_state = 88, .external_lex_state = 2},
  [214] = {.lex_state = 88, .external_lex_state = 2},
  [215] = {.lex_state = 88, .external_lex_state = 2},
  [216] = {.lex_state = 88, .external_lex_state = 3},
  [217] = {.lex_state = 88, .external_lex_state = 3},
  [218] = {.lex_state = 88, .external_lex_state = 3},
  [219] = {.lex_state = 88, .external_lex_state = 2},
  [220] = {.lex_state = 88, .external_lex_state = 3},
  [221] = {.lex_state = 88, .external_lex_state = 3},
  [222] = {.lex_state = 88, .external_lex_state = 3},
  [223] = {.lex_state = 88, .external_lex_state = 3},
  [224] = {.lex_state = 88, .external_lex_state = 3},
  [225] = {.lex_state = 88, .external_lex_state = 3},
  [226] = {.lex_state = 88, .external_lex_state = 3},
  [227] = {.lex_state = 88, .external_lex_state = 3},
  [228] = {.lex_state = 88, .external_lex_state = 3},
  [229] = {.lex_state = 88, .external_lex_state = 2},
  [230] = {.lex_state = 88, .external_lex_state = 2},
  [231] = {.lex_state = 88, .external_lex_state = 2},
  [232] = {.lex_state = 88, .external_lex_state = 2},
  [233] = {.lex_state = 88, .external_lex_state = 3},
  [234] = {.lex_state = 88, .external_lex_state = 2},
  [235] = {.lex_state = 88, .external_lex_state = 3},
  [236] = {.lex_state = 88, .external_lex_state = 3},
  [237] = {.lex_state = 88, .external_lex_state = 2},
  [238] = {.lex_state = 88, .external_lex_state = 3},
  [239] = {.lex_state = 88, .external_lex_state = 2},
  [240] = {.lex_state = 88, .external_lex_state = 2},
  [241] = {.lex_state = 88, .external_lex_state = 2},
  [242] = {.lex_state = 88, .external_lex_state = 2},
  [243] = {.lex_state = 88, .external_lex_state = 2},
  [244] = {.lex_state = 88, .external_lex_state = 3},
  [245] = {.lex_state = 88, .external_lex_state = 3},
  [246] = {.lex_state = 88, .external_lex_state = 3},
  [247] = {.lex_state = 88, .external_lex_state = 2},
  [248] = {.lex_state = 88, .external_lex_state = 3},
  [249] = {.lex_state = 88, .external_lex_state = 2},
  [250] = {.lex_state = 88, .external_lex_state = 3},
  [251] = {.lex_state = 88, .external_lex_state = 3},
  [252] = {.lex_state = 88, .external_lex_state = 3},
  [253] = {.lex_state = 88, .external_lex_state = 3},
  [254] = {.lex_state = 88, .external_lex_state = 3},
  [255] = {.lex_state = 88, .external_lex_state = 3},
  [256] = {.lex_state = 88, .external_lex_state = 3},
  [257] = {.lex_state = 88, .external_lex_state = 3},
  [258] = {.lex_state = 88, .external_lex_state = 2},
  [259] = {.lex_state = 88, .external_lex_state = 3},
  [260] = {.lex_state = 88, .external_lex_state = 3},
  [261] = {.lex_state = 88, .external_lex_state = 3},
  [262] = {.lex_state = 88, .external_lex_state = 3},
  [263] = {.lex_state = 88, .external_lex_state = 2},
  [264] = {.lex_state = 88, .external_lex_state = 3},
  [265] = {.lex_state = 88, .external_lex_state = 3},
  [266] = {.lex_state = 88, .external_lex_state = 3},
  [267] = {.lex_state = 88, .external_lex_state = 3},
  [268] = {.lex_state = 88, .external_lex_state = 3},
  [269] = {.lex_state = 88, .external_lex_state = 3},
  [270] = {.lex_state = 88, .external_lex_state = 3},
  [271] = {.lex_state = 88, .external_lex_state = 3},
  [272] = {.lex_state = 88, .external_lex_state = 3},
  [273] = {.lex_state = 88, .external_lex_state = 3},
  [274] = {.lex_state = 88, .external_lex_state = 3},
  [275] = {.lex_state = 88, .external_lex_state = 2},
  [276] = {.lex_state = 88, .external_lex_state = 3},
  [277] = {.lex_state = 88, .external_lex_state = 2},
  [278] = {.lex_state = 88, .external_lex_state = 3},
  [279] = {.lex_state = 88, .external_lex_state = 3},
  [280] = {.lex_state = 88, .external_lex_state = 3},
  [281] = {.lex_state = 88, .external_lex_state = 2},
  [282] = {.lex_state = 88, .external_lex_state = 2},
  [283] = {.lex_state = 88, .external_lex_state = 3},
  [284] = {.lex_state = 88, .external_lex_state = 2},
  [285] = {.lex_state = 88, .external_lex_state = 2},
  [286] = {.lex_state = 88, .external_lex_state = 3},
  [287] = {.lex_state = 88, .external_lex_state = 3},
  [288] = {.lex_state = 88, .external_lex_state = 3},
  [289] = {.lex_state = 88, .external_lex_state = 3},
  [290] = {.lex_state = 87, .external_lex_state = 3},
  [291] = {.lex_state = 50},
  [292] = {.lex_state = 87, .external_lex_state = 3},
  [293] = {.lex_state = 87, .external_lex_state = 3},
  [294] = {.lex_state = 87, .external_lex_state = 2},
  [295] = {.lex_state = 87, .external_lex_state = 2},
  [296] = {.lex_state = 87, .external_lex_state = 3},
  [297] = {.lex_state = 87, .external_lex_state = 3},
  [298] = {.lex_state = 87, .external_lex_state = 3},
  [299] = {.lex_state = 87, .external_lex_state = 3},
  [300] = {.lex_state = 48},
  [301] = {.lex_state = 87, .external_lex_state = 3},
  [302] = {.lex_state = 87, .external_lex_state = 3},
  [303] = {.lex_state = 87, .external_lex_state = 3},
  [304] = {.lex_state = 87, .external_lex_state = 3},
  [305] = {.lex_state = 87, .external_lex_state = 3},
  [306] = {.lex_state = 87, .external_lex_state = 2},
  [307] = {.lex_state = 87, .external_lex_state = 3},
  [308] = {.lex_state = 87, .external_lex_state = 2},
  [309] = {.lex_state = 87, .external_lex_state = 2},
  [310] = {.lex_state = 87, .external_lex_state = 2},
  [311] = {.lex_state = 87, .external_lex_state = 2},
  [312] = {.lex_state = 50},
  [313] = {.lex_state = 87, .external_lex_state = 2},
  [314] = {.lex_state = 87, .external_lex_state = 2},
  [315] = {.lex_state = 87, .external_lex_state = 2},
  [316] = {.lex_state = 87, .external_lex_state = 2},
  [317] = {.lex_state = 87, .external_lex_state = 2},
  [318] = {.lex_state = 50},
  [319] = {.lex_state = 87, .external_lex_state = 2},
  [320] = {.lex_state = 87, .external_lex_state = 3},
  [321] = {.lex_state = 87, .external_lex_state = 3},
  [322] = {.lex_state = 87, .external_lex_state = 2},
  [323] = {.lex_state = 50},
  [324] = {.lex_state = 87, .external_lex_state = 3},
  [325] = {.lex_state = 87, .external_lex_state = 3},
  [326] = {.lex_state = 47},
  [327] = {.lex_state = 47},
  [328] = {.lex_state = 47},
  [329] = {.lex_state = 47},
  [330] = {.lex_state = 51},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 51},
  [333] = {.lex_state = 50},
  [334] = {.lex_state = 50},
  [335] = {.lex_state = 51},
  [336] = {.lex_state = 51},
  [337] = {.lex_state = 52},
  [338] = {.lex_state = 52},
  [339] = {.lex_state = 52},
  [340] = {.lex_state = 52},
  [341] = {.lex_state = 52},
  [342] = {.lex_state = 52},
  [343] = {.lex_state = 52},
  [344] = {.lex_state = 52},
  [345] = {.lex_state = 52},
  [346] = {.lex_state = 52},
  [347] = {.lex_state = 52},
  [348] = {.lex_state = 52},
  [349] = {.lex_state = 52},
  [350] = {.lex_state = 52},
  [351] = {.lex_state = 52},
  [352] = {.lex_state = 52},
  [353] = {.lex_state = 52},
  [354] = {.lex_state = 52},
  [355] = {.lex_state = 51},
  [356] = {.lex_state = 52},
  [357] = {.lex_state = 52},
  [358] = {.lex_state = 47},
  [359] = {.lex_state = 47},
  [360] = {.lex_state = 52},
  [361] = {.lex_state = 50},
  [362] = {.lex_state = 50},
  [363] = {.lex_state = 47},
  [364] = {.lex_state = 47},
  [365] = {.lex_state = 50},
  [366] = {.lex_state = 52},
  [367] = {.lex_state = 52},
  [368] = {.lex_state = 50},
  [369] = {.lex_state = 50},
  [370] = {.lex_state = 50},
  [371] = {.lex_state = 50},
  [372] = {.lex_state = 50},
  [373] = {.lex_state = 50},
  [374] = {.lex_state = 50},
  [375] = {.lex_state = 50},
  [376] = {.lex_state = 50},
  [377] = {.lex_state = 50},
  [378] = {.lex_state = 48},
  [379] = {.lex_state = 48},
  [380] = {.lex_state = 47},
  [381] = {.lex_state = 47},
  [382] = {.lex_state = 47},
  [383] = {.lex_state = 48},
  [384] = {.lex_state = 48},
  [385] = {.lex_state = 47},
  [386] = {.lex_state = 48},
  [387] = {.lex_state = 48},
  [388] = {.lex_state = 47},
  [389] = {.lex_state = 48},
  [390] = {.lex_state = 48},
  [391] = {.lex_state = 47},
  [392] = {.lex_state = 48},
  [393] = {.lex_state = 47},
  [394] = {.lex_state = 47},
  [395] = {.lex_state = 48},
  [396] = {.lex_state = 47},
  [397] = {.lex_state = 48},
  [398] = {.lex_state = 47},
  [399] = {.lex_state = 48},
  [400] = {.lex_state = 47},
  [401] = {.lex_state = 48},
  [402] = {.lex_state = 48},
  [403] = {.lex_state = 47},
  [404] = {.lex_state = 47},
  [405] = {.lex_state = 48},
  [406] = {.lex_state = 40},
  [407] = {.lex_state = 48},
  [408] = {.lex_state = 47},
  [409] = {.lex_state = 48},
  [410] = {.lex_state = 47},
  [411] = {.lex_state = 48},
  [412] = {.lex_state = 47},
  [413] = {.lex_state = 47},
  [414] = {.lex_state = 47},
  [415] = {.lex_state = 47},
  [416] = {.lex_state = 50},
  [417] = {.lex_state = 41},
  [418] = {.lex_state = 47},
  [419] = {.lex_state = 47},
  [420] = {.lex_state = 47},
  [421] = {.lex_state = 47},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 40},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 47},
  [426] = {.lex_state = 47},
  [427] = {.lex_state = 47},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 47},
  [430] = {.lex_state = 40},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 48},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 42},
  [441] = {.lex_state = 47},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 47},
  [444] = {.lex_state = 48},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 47},
  [447] = {.lex_state = 47},
  [448] = {.lex_state = 47},
  [449] = {.lex_state = 47},
  [450] = {.lex_state = 47},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0, .external_lex_state = 4},
  [453] = {.lex_state = 47},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 47},
  [456] = {.lex_state = 47},
  [457] = {.lex_state = 47},
  [458] = {.lex_state = 47},
  [459] = {.lex_state = 47},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 47},
  [462] = {.lex_state = 47},
  [463] = {.lex_state = 47},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 47},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 47},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 47},
  [472] = {.lex_state = 47},
  [473] = {.lex_state = 47},
  [474] = {.lex_state = 47},
  [475] = {.lex_state = 47},
  [476] = {.lex_state = 47},
  [477] = {.lex_state = 47},
  [478] = {.lex_state = 47},
  [479] = {.lex_state = 47},
  [480] = {.lex_state = 47},
  [481] = {.lex_state = 47},
  [482] = {.lex_state = 47},
  [483] = {.lex_state = 47},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 47},
  [486] = {.lex_state = 47},
  [487] = {.lex_state = 47},
  [488] = {.lex_state = 47},
  [489] = {.lex_state = 47},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 47},
  [493] = {.lex_state = 47},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 47},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 47},
  [499] = {.lex_state = 47},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 47},
  [503] = {.lex_state = 47},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 47},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 47},
  [508] = {.lex_state = 47},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 47},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 47},
  [513] = {.lex_state = 47},
  [514] = {.lex_state = 47},
  [515] = {.lex_state = 47},
  [516] = {.lex_state = 47},
  [517] = {.lex_state = 47},
  [518] = {.lex_state = 47},
  [519] = {.lex_state = 47},
  [520] = {.lex_state = 47},
  [521] = {.lex_state = 47},
  [522] = {.lex_state = 47},
  [523] = {.lex_state = 48},
  [524] = {.lex_state = 47},
  [525] = {.lex_state = 49},
  [526] = {.lex_state = 47},
  [527] = {.lex_state = 47},
  [528] = {.lex_state = 48},
  [529] = {.lex_state = 47},
  [530] = {.lex_state = 47},
  [531] = {.lex_state = 47},
  [532] = {.lex_state = 47},
  [533] = {.lex_state = 49},
  [534] = {.lex_state = 47},
  [535] = {.lex_state = 47},
  [536] = {.lex_state = 47},
  [537] = {.lex_state = 47},
  [538] = {.lex_state = 47},
  [539] = {.lex_state = 47},
  [540] = {.lex_state = 47},
  [541] = {.lex_state = 47},
  [542] = {.lex_state = 47},
  [543] = {.lex_state = 47},
  [544] = {.lex_state = 47},
  [545] = {.lex_state = 47},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 43},
  [548] = {.lex_state = 43},
  [549] = {.lex_state = 47},
  [550] = {.lex_state = 47},
  [551] = {.lex_state = 47},
  [552] = {.lex_state = 47},
  [553] = {.lex_state = 47},
  [554] = {.lex_state = 47},
  [555] = {.lex_state = 47},
  [556] = {.lex_state = 47},
  [557] = {.lex_state = 48},
  [558] = {.lex_state = 47},
  [559] = {.lex_state = 47},
  [560] = {.lex_state = 47},
  [561] = {.lex_state = 47},
  [562] = {.lex_state = 47},
  [563] = {.lex_state = 48},
  [564] = {.lex_state = 47},
  [565] = {.lex_state = 47},
  [566] = {.lex_state = 47},
  [567] = {.lex_state = 47},
  [568] = {.lex_state = 47},
  [569] = {.lex_state = 95},
  [570] = {.lex_state = 47},
  [571] = {.lex_state = 47},
  [572] = {.lex_state = 47},
  [573] = {.lex_state = 47},
  [574] = {.lex_state = 47},
  [575] = {.lex_state = 47},
  [576] = {.lex_state = 47},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 47},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 47},
  [581] = {.lex_state = 47},
  [582] = {.lex_state = 47},
  [583] = {.lex_state = 47},
  [584] = {.lex_state = 47},
  [585] = {.lex_state = 47},
  [586] = {.lex_state = 47},
  [587] = {.lex_state = 47},
  [588] = {.lex_state = 47},
  [589] = {.lex_state = 47},
  [590] = {.lex_state = 47},
  [591] = {.lex_state = 47},
  [592] = {.lex_state = 47},
  [593] = {.lex_state = 47},
  [594] = {.lex_state = 47},
  [595] = {.lex_state = 47},
  [596] = {.lex_state = 47},
  [597] = {.lex_state = 47},
  [598] = {.lex_state = 47},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 47},
  [601] = {.lex_state = 47},
  [602] = {.lex_state = 47},
  [603] = {.lex_state = 47},
  [604] = {.lex_state = 47},
  [605] = {.lex_state = 47},
  [606] = {.lex_state = 47},
  [607] = {.lex_state = 47},
  [608] = {.lex_state = 47},
  [609] = {.lex_state = 47},
  [610] = {.lex_state = 53},
  [611] = {.lex_state = 47},
  [612] = {.lex_state = 47},
  [613] = {.lex_state = 47},
  [614] = {.lex_state = 47},
  [615] = {.lex_state = 47},
  [616] = {.lex_state = 47},
  [617] = {.lex_state = 47},
  [618] = {.lex_state = 47},
  [619] = {.lex_state = 47},
  [620] = {.lex_state = 47},
  [621] = {.lex_state = 47},
  [622] = {.lex_state = 47},
  [623] = {.lex_state = 47},
  [624] = {.lex_state = 47},
  [625] = {.lex_state = 47},
  [626] = {.lex_state = 47},
  [627] = {.lex_state = 47},
  [628] = {.lex_state = 47},
  [629] = {.lex_state = 47},
  [630] = {.lex_state = 47},
  [631] = {.lex_state = 47},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 47},
  [634] = {.lex_state = 47},
  [635] = {.lex_state = 47},
  [636] = {.lex_state = 47},
  [637] = {.lex_state = 47},
  [638] = {.lex_state = 47},
  [639] = {.lex_state = 47},
  [640] = {.lex_state = 47},
  [641] = {.lex_state = 47},
  [642] = {.lex_state = 47},
  [643] = {.lex_state = 95},
  [644] = {.lex_state = 47},
  [645] = {.lex_state = 47},
  [646] = {.lex_state = 47},
  [647] = {.lex_state = 47},
  [648] = {.lex_state = 47},
  [649] = {.lex_state = 47},
  [650] = {.lex_state = 47},
  [651] = {.lex_state = 47},
  [652] = {.lex_state = 48},
  [653] = {.lex_state = 47},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 47},
  [656] = {.lex_state = 47},
  [657] = {.lex_state = 47},
  [658] = {.lex_state = 47},
  [659] = {.lex_state = 47},
  [660] = {.lex_state = 47},
  [661] = {.lex_state = 47},
  [662] = {.lex_state = 47},
  [663] = {.lex_state = 47},
  [664] = {.lex_state = 47},
  [665] = {.lex_state = 49},
  [666] = {.lex_state = 47},
  [667] = {.lex_state = 47},
  [668] = {.lex_state = 47},
  [669] = {.lex_state = 48},
  [670] = {.lex_state = 47},
  [671] = {.lex_state = 47},
  [672] = {.lex_state = 47},
  [673] = {.lex_state = 47},
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
  [5304] = 10,
    ACTIONS(528), 1,
      sym_bool,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      sym_number,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 2,
      sym__eol,
      sym_comment,
    ACTIONS(525), 2,
      sym_plus,
      sym_minus,
    ACTIONS(531), 2,
      sym_date,
      sym_account,
    STATE(175), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5343] = 12,
    ACTIONS(547), 1,
      sym_currency,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym_number,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    STATE(424), 1,
      sym_cost_comp,
    STATE(523), 1,
      sym__cost_comp_list,
    ACTIONS(543), 2,
      anon_sym_STAR,
      sym_date,
    ACTIONS(545), 2,
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
  [5386] = 12,
    ACTIONS(547), 1,
      sym_currency,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym_number,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(424), 1,
      sym_cost_comp,
    STATE(525), 1,
      sym__cost_comp_list,
    ACTIONS(543), 2,
      anon_sym_STAR,
      sym_date,
    ACTIONS(545), 2,
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
  [5429] = 11,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(559), 1,
      sym__eol,
    ACTIONS(563), 1,
      sym_bool,
    ACTIONS(567), 1,
      sym_number,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_plus,
      sym_minus,
    ACTIONS(565), 2,
      sym_date,
      sym_account,
    STATE(175), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5470] = 11,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym_bool,
    ACTIONS(567), 1,
      sym_number,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      sym__eol,
    ACTIONS(575), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_plus,
      sym_minus,
    ACTIONS(565), 2,
      sym_date,
      sym_account,
    STATE(175), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5511] = 11,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym_bool,
    ACTIONS(567), 1,
      sym_number,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      sym__eol,
    ACTIONS(579), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_plus,
      sym_minus,
    ACTIONS(565), 2,
      sym_date,
      sym_account,
    STATE(178), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5552] = 11,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym_bool,
    ACTIONS(567), 1,
      sym_number,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      sym__eol,
    ACTIONS(583), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_plus,
      sym_minus,
    ACTIONS(565), 2,
      sym_date,
      sym_account,
    STATE(179), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    STATE(358), 2,
      sym_string,
      sym_amount,
    STATE(330), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5593] = 2,
    ACTIONS(587), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(585), 15,
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
  [5615] = 2,
    ACTIONS(591), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(589), 15,
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
  [5637] = 2,
    ACTIONS(593), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(595), 15,
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
  [5659] = 2,
    ACTIONS(597), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(599), 15,
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
  [5681] = 2,
    ACTIONS(601), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(603), 15,
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
  [5703] = 2,
    ACTIONS(605), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(607), 15,
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
  [5725] = 2,
    ACTIONS(609), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(611), 15,
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
  [5747] = 2,
    ACTIONS(613), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(615), 15,
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
  [5769] = 2,
    ACTIONS(617), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(619), 15,
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
  [5791] = 2,
    ACTIONS(621), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(623), 15,
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
  [5813] = 2,
    ACTIONS(625), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(627), 15,
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
  [5835] = 2,
    ACTIONS(629), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(631), 15,
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
  [5857] = 2,
    ACTIONS(633), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(635), 15,
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
  [5879] = 2,
    ACTIONS(637), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(639), 15,
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
  [5901] = 2,
    ACTIONS(641), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(643), 15,
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
  [5923] = 2,
    ACTIONS(645), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(647), 15,
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
  [5945] = 2,
    ACTIONS(649), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(651), 15,
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
  [5967] = 2,
    ACTIONS(653), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(655), 15,
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
  [5989] = 2,
    ACTIONS(657), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(659), 15,
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
  [6011] = 2,
    ACTIONS(661), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(663), 15,
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
  [6033] = 2,
    ACTIONS(665), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(667), 15,
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
  [6055] = 2,
    ACTIONS(669), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(671), 15,
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
  [6077] = 2,
    ACTIONS(673), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(675), 15,
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
  [6099] = 2,
    ACTIONS(677), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(679), 15,
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
  [6121] = 2,
    ACTIONS(681), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(683), 15,
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
  [6143] = 2,
    ACTIONS(685), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(687), 15,
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
  [6165] = 2,
    ACTIONS(689), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(691), 15,
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
  [6187] = 2,
    ACTIONS(693), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(695), 15,
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
  [6209] = 2,
    ACTIONS(697), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(699), 15,
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
  [6231] = 2,
    ACTIONS(701), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(703), 15,
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
  [6253] = 2,
    ACTIONS(705), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(707), 15,
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
  [6275] = 2,
    ACTIONS(709), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(711), 15,
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
  [6297] = 2,
    ACTIONS(713), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(715), 15,
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
  [6319] = 2,
    ACTIONS(717), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(719), 15,
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
  [6341] = 2,
    ACTIONS(641), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(643), 15,
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
  [6363] = 2,
    ACTIONS(633), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(635), 15,
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
  [6385] = 2,
    ACTIONS(593), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(595), 15,
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
  [6407] = 2,
    ACTIONS(587), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(585), 15,
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
  [6429] = 2,
    ACTIONS(597), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(599), 15,
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
  [6451] = 2,
    ACTIONS(601), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(603), 15,
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
  [6473] = 2,
    ACTIONS(605), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(607), 15,
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
  [6495] = 2,
    ACTIONS(609), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(611), 15,
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
  [6517] = 2,
    ACTIONS(613), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(615), 15,
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
  [6539] = 2,
    ACTIONS(617), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(619), 15,
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
  [6561] = 2,
    ACTIONS(621), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(623), 15,
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
  [6583] = 2,
    ACTIONS(625), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(627), 15,
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
  [6605] = 2,
    ACTIONS(629), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(631), 15,
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
  [6627] = 2,
    ACTIONS(721), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(723), 15,
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
  [6649] = 2,
    ACTIONS(725), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(727), 15,
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
  [6671] = 2,
    ACTIONS(729), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(731), 15,
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
  [6693] = 2,
    ACTIONS(733), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(735), 15,
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
  [6715] = 2,
    ACTIONS(637), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(639), 15,
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
  [6737] = 2,
    ACTIONS(737), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(739), 15,
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
  [6759] = 2,
    ACTIONS(645), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(647), 15,
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
  [6781] = 2,
    ACTIONS(649), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(651), 15,
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
  [6803] = 2,
    ACTIONS(741), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(743), 15,
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
  [6825] = 2,
    ACTIONS(653), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(655), 15,
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
  [6847] = 2,
    ACTIONS(745), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(747), 15,
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
  [6869] = 2,
    ACTIONS(749), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(751), 15,
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
  [6891] = 2,
    ACTIONS(753), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(755), 15,
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
  [6913] = 2,
    ACTIONS(757), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(759), 15,
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
  [6935] = 2,
    ACTIONS(761), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(763), 15,
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
  [6957] = 2,
    ACTIONS(657), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(659), 15,
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
  [6979] = 2,
    ACTIONS(661), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(663), 15,
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
  [7001] = 2,
    ACTIONS(665), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(667), 15,
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
  [7023] = 2,
    ACTIONS(765), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(767), 15,
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
  [7045] = 2,
    ACTIONS(669), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(671), 15,
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
  [7067] = 2,
    ACTIONS(769), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(771), 15,
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
  [7089] = 2,
    ACTIONS(673), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(675), 15,
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
  [7111] = 2,
    ACTIONS(677), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(679), 15,
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
  [7133] = 2,
    ACTIONS(681), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(683), 15,
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
  [7155] = 2,
    ACTIONS(685), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(687), 15,
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
  [7177] = 2,
    ACTIONS(689), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(691), 15,
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
  [7199] = 2,
    ACTIONS(693), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(695), 15,
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
  [7221] = 2,
    ACTIONS(697), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(699), 15,
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
  [7243] = 2,
    ACTIONS(729), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(731), 15,
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
  [7265] = 2,
    ACTIONS(773), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(775), 15,
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
  [7287] = 2,
    ACTIONS(701), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(703), 15,
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
  [7309] = 2,
    ACTIONS(745), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(747), 15,
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
  [7331] = 2,
    ACTIONS(705), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(707), 15,
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
  [7353] = 2,
    ACTIONS(709), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(711), 15,
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
  [7375] = 2,
    ACTIONS(777), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(779), 15,
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
  [7397] = 2,
    ACTIONS(713), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(715), 15,
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
  [7419] = 2,
    ACTIONS(717), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(719), 15,
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
  [7441] = 2,
    ACTIONS(721), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(723), 15,
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
  [7463] = 2,
    ACTIONS(725), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(727), 15,
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
  [7485] = 2,
    ACTIONS(733), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(735), 15,
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
  [7507] = 2,
    ACTIONS(749), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(751), 15,
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
  [7529] = 2,
    ACTIONS(737), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(739), 15,
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
  [7551] = 2,
    ACTIONS(757), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(759), 15,
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
  [7573] = 2,
    ACTIONS(741), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(743), 15,
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
  [7595] = 2,
    ACTIONS(753), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(755), 15,
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
  [7617] = 2,
    ACTIONS(761), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(763), 15,
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
  [7639] = 2,
    ACTIONS(781), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(783), 15,
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
  [7661] = 2,
    ACTIONS(769), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(771), 15,
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
  [7683] = 2,
    ACTIONS(785), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(787), 15,
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
  [7705] = 2,
    ACTIONS(765), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(767), 15,
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
  [7727] = 2,
    ACTIONS(773), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(775), 15,
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
  [7749] = 2,
    ACTIONS(791), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(789), 15,
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
  [7771] = 2,
    ACTIONS(793), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(795), 15,
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
  [7793] = 2,
    ACTIONS(791), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(789), 15,
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
  [7815] = 2,
    ACTIONS(799), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(797), 15,
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
  [7837] = 2,
    ACTIONS(591), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(589), 15,
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
  [7859] = 2,
    ACTIONS(799), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(797), 15,
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
  [7881] = 2,
    ACTIONS(777), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(779), 15,
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
  [7903] = 2,
    ACTIONS(781), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(783), 15,
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
  [7925] = 2,
    ACTIONS(793), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(795), 15,
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
  [7947] = 2,
    ACTIONS(785), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(787), 15,
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
  [7969] = 2,
    ACTIONS(803), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(801), 13,
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
  [7990] = 12,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(805), 1,
      sym__eol,
    ACTIONS(807), 1,
      sym_atat,
    ACTIONS(809), 1,
      sym_at,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(817), 1,
      sym_comment,
    STATE(385), 1,
      sym_incomplete_amount,
    STATE(427), 1,
      sym_cost_spec,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8031] = 2,
    ACTIONS(821), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(819), 13,
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
  [8052] = 2,
    ACTIONS(825), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(823), 13,
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
  [8073] = 2,
    ACTIONS(827), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(829), 13,
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
  [8094] = 2,
    ACTIONS(831), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(833), 13,
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
  [8115] = 2,
    ACTIONS(837), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(835), 13,
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
  [8136] = 2,
    ACTIONS(841), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(839), 13,
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
  [8157] = 2,
    ACTIONS(845), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(843), 13,
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
  [8178] = 2,
    ACTIONS(849), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(847), 13,
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
  [8199] = 10,
    ACTIONS(547), 1,
      sym_currency,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym_number,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_POUND,
    STATE(438), 1,
      sym_cost_comp,
    ACTIONS(543), 2,
      anon_sym_STAR,
      sym_date,
    ACTIONS(545), 2,
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
  [8236] = 2,
    ACTIONS(853), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(851), 13,
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
  [8257] = 2,
    ACTIONS(857), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(855), 13,
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
  [8278] = 2,
    ACTIONS(861), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(859), 13,
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
  [8299] = 2,
    ACTIONS(865), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(863), 13,
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
  [8320] = 2,
    ACTIONS(831), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(833), 13,
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
  [8341] = 2,
    ACTIONS(803), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(801), 13,
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
  [8362] = 2,
    ACTIONS(827), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(829), 13,
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
  [8383] = 2,
    ACTIONS(821), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(819), 13,
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
  [8404] = 2,
    ACTIONS(857), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(855), 13,
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
  [8425] = 2,
    ACTIONS(853), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(851), 13,
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
  [8446] = 2,
    ACTIONS(837), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(835), 13,
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
  [8467] = 12,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(867), 1,
      sym__eol,
    ACTIONS(869), 1,
      sym_atat,
    ACTIONS(871), 1,
      sym_at,
    ACTIONS(873), 1,
      sym_comment,
    STATE(381), 1,
      sym_incomplete_amount,
    STATE(414), 1,
      sym_cost_spec,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8508] = 2,
    ACTIONS(825), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(823), 13,
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
  [8529] = 2,
    ACTIONS(865), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(863), 13,
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
  [8550] = 2,
    ACTIONS(875), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(877), 13,
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
  [8571] = 2,
    ACTIONS(841), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(839), 13,
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
  [8592] = 2,
    ACTIONS(879), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(881), 13,
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
  [8613] = 12,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(883), 1,
      sym__eol,
    ACTIONS(885), 1,
      sym_atat,
    ACTIONS(887), 1,
      sym_at,
    ACTIONS(889), 1,
      sym_comment,
    STATE(382), 1,
      sym_incomplete_amount,
    STATE(425), 1,
      sym_cost_spec,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8654] = 2,
    ACTIONS(849), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(847), 13,
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
  [8675] = 2,
    ACTIONS(893), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(891), 13,
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
  [8696] = 2,
    ACTIONS(897), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(895), 13,
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
  [8717] = 2,
    ACTIONS(861), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(859), 13,
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
  [8738] = 12,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(899), 1,
      sym__eol,
    ACTIONS(901), 1,
      sym_atat,
    ACTIONS(903), 1,
      sym_at,
    ACTIONS(905), 1,
      sym_comment,
    STATE(380), 1,
      sym_incomplete_amount,
    STATE(413), 1,
      sym_cost_spec,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8779] = 2,
    ACTIONS(879), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(881), 13,
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
  [8800] = 2,
    ACTIONS(875), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(877), 13,
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
  [8821] = 13,
    ACTIONS(909), 1,
      anon_sym_open,
    ACTIONS(911), 1,
      anon_sym_close,
    ACTIONS(913), 1,
      anon_sym_commodity,
    ACTIONS(915), 1,
      anon_sym_pad,
    ACTIONS(917), 1,
      anon_sym_balance,
    ACTIONS(919), 1,
      anon_sym_price,
    ACTIONS(921), 1,
      anon_sym_event,
    ACTIONS(923), 1,
      anon_sym_query,
    ACTIONS(925), 1,
      anon_sym_note,
    ACTIONS(927), 1,
      anon_sym_document,
    ACTIONS(929), 1,
      anon_sym_custom,
    STATE(363), 1,
      sym_txn,
    ACTIONS(907), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_BANG,
  [8863] = 13,
    ACTIONS(931), 1,
      anon_sym_open,
    ACTIONS(933), 1,
      anon_sym_close,
    ACTIONS(935), 1,
      anon_sym_commodity,
    ACTIONS(937), 1,
      anon_sym_pad,
    ACTIONS(939), 1,
      anon_sym_balance,
    ACTIONS(941), 1,
      anon_sym_price,
    ACTIONS(943), 1,
      anon_sym_event,
    ACTIONS(945), 1,
      anon_sym_query,
    ACTIONS(947), 1,
      anon_sym_note,
    ACTIONS(949), 1,
      anon_sym_document,
    ACTIONS(951), 1,
      anon_sym_custom,
    STATE(364), 1,
      sym_txn,
    ACTIONS(907), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_BANG,
  [8905] = 2,
    ACTIONS(955), 3,
      sym_bool,
      sym_number,
      anon_sym_RBRACE,
    ACTIONS(953), 12,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
      sym_comment,
  [8925] = 2,
    ACTIONS(959), 3,
      sym_bool,
      sym_number,
      anon_sym_RBRACE,
    ACTIONS(957), 12,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
      sym_comment,
  [8945] = 7,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(965), 1,
      sym_slash,
    ACTIONS(971), 1,
      sym_currency,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(967), 2,
      sym_plus,
      sym_minus,
    ACTIONS(969), 2,
      sym_bool,
      sym_number,
    ACTIONS(961), 6,
      sym__eol,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [8974] = 3,
    ACTIONS(975), 1,
      aux_sym_currency_key_value_token1,
    STATE(331), 1,
      aux_sym_currency_key_value_repeat1,
    ACTIONS(973), 12,
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
  [8995] = 3,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(980), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(978), 10,
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
  [9016] = 12,
    ACTIONS(982), 1,
      sym__eol,
    ACTIONS(986), 1,
      sym_account,
    ACTIONS(990), 1,
      anon_sym_POUND,
    ACTIONS(992), 1,
      sym_key,
    ACTIONS(994), 1,
      anon_sym_currency,
    ACTIONS(996), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(538), 1,
      sym_optflag,
    STATE(618), 1,
      sym_tags_links,
    STATE(663), 1,
      sym_key_value,
    ACTIONS(984), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [9055] = 12,
    ACTIONS(990), 1,
      anon_sym_POUND,
    ACTIONS(992), 1,
      sym_key,
    ACTIONS(994), 1,
      anon_sym_currency,
    ACTIONS(998), 1,
      sym__eol,
    ACTIONS(1000), 1,
      sym_account,
    ACTIONS(1002), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(590), 1,
      sym_tags_links,
    STATE(591), 1,
      sym_key_value,
    STATE(664), 1,
      sym_optflag,
    ACTIONS(984), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [9094] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(965), 1,
      sym_slash,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(980), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(978), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9119] = 3,
    STATE(376), 1,
      sym_asterisk,
    ACTIONS(1006), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(1004), 10,
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
  [9140] = 3,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(978), 11,
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
  [9160] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1008), 1,
      sym__eol,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1012), 1,
      sym_comment,
    STATE(476), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9192] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1014), 1,
      sym__eol,
    ACTIONS(1016), 1,
      sym_comment,
    STATE(489), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9224] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1018), 1,
      sym__eol,
    ACTIONS(1020), 1,
      sym_comment,
    STATE(449), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9256] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1022), 1,
      sym__eol,
    ACTIONS(1024), 1,
      sym_comment,
    STATE(462), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9288] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1026), 1,
      sym__eol,
    ACTIONS(1028), 1,
      sym_comment,
    STATE(485), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9320] = 3,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1004), 11,
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
  [9340] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1030), 1,
      sym__eol,
    ACTIONS(1032), 1,
      sym_comment,
    STATE(483), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9372] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1034), 1,
      sym__eol,
    ACTIONS(1036), 1,
      sym_comment,
    STATE(448), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9404] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1038), 1,
      sym__eol,
    ACTIONS(1040), 1,
      sym_comment,
    STATE(493), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9436] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
    ACTIONS(1042), 1,
      sym_slash,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(978), 9,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [9460] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1044), 1,
      sym__eol,
    ACTIONS(1046), 1,
      sym_comment,
    STATE(507), 1,
      sym_incomplete_amount,
    STATE(508), 1,
      sym_price_annotation,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9492] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1048), 1,
      sym__eol,
    ACTIONS(1050), 1,
      sym_comment,
    STATE(480), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9524] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1052), 1,
      sym__eol,
    ACTIONS(1054), 1,
      sym_comment,
    STATE(446), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9556] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1056), 1,
      sym__eol,
    ACTIONS(1058), 1,
      sym_comment,
    STATE(482), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9588] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1060), 1,
      sym__eol,
    ACTIONS(1062), 1,
      sym_comment,
    STATE(507), 1,
      sym_incomplete_amount,
    STATE(512), 1,
      sym_price_annotation,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9620] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1064), 1,
      sym__eol,
    ACTIONS(1066), 1,
      sym_comment,
    STATE(450), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9652] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1068), 1,
      sym__eol,
    ACTIONS(1070), 1,
      sym_comment,
    STATE(505), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9684] = 2,
    ACTIONS(1074), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(1072), 10,
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
  [9702] = 9,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      sym_number,
    ACTIONS(1010), 1,
      sym_currency,
    ACTIONS(1076), 1,
      sym__eol,
    ACTIONS(1078), 1,
      sym_comment,
    STATE(472), 1,
      sym_price_annotation,
    STATE(507), 1,
      sym_incomplete_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(402), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9734] = 2,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    ACTIONS(1072), 11,
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
  [9751] = 2,
    ACTIONS(969), 2,
      sym_bool,
      sym_number,
    ACTIONS(961), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9766] = 2,
    ACTIONS(1082), 2,
      sym_bool,
      sym_number,
    ACTIONS(1080), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      sym_comment,
  [9781] = 8,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1086), 1,
      sym_currency,
    ACTIONS(1088), 1,
      anon_sym_POUND,
    ACTIONS(1092), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
    ACTIONS(1090), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [9808] = 5,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1094), 1,
      sym_number,
    STATE(496), 1,
      sym_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(389), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9828] = 5,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1094), 1,
      sym_number,
    STATE(466), 1,
      sym_amount,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(389), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9848] = 8,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1096), 1,
      sym__eol,
    ACTIONS(1098), 1,
      sym_comment,
    STATE(388), 1,
      sym_string,
    STATE(403), 1,
      sym__txn_strings,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(474), 1,
      sym_tags_links,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [9874] = 8,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1100), 1,
      sym__eol,
    ACTIONS(1102), 1,
      sym_comment,
    STATE(388), 1,
      sym_string,
    STATE(400), 1,
      sym__txn_strings,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(475), 1,
      sym_tags_links,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [9900] = 5,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1104), 1,
      sym_number,
    STATE(469), 1,
      sym_amount_tolerance,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(383), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9920] = 5,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1106), 1,
      sym_currency,
    ACTIONS(1108), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(399), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9940] = 5,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1110), 1,
      sym_currency,
    ACTIONS(1112), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(397), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9960] = 5,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1104), 1,
      sym_number,
    STATE(503), 1,
      sym_amount_tolerance,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(383), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9980] = 4,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1114), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(337), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9997] = 4,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1116), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(401), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10014] = 4,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1118), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(343), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10031] = 4,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1120), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(391), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10048] = 4,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1122), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(394), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10065] = 4,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(1124), 1,
      sym_number,
    ACTIONS(545), 2,
      sym_plus,
      sym_minus,
    STATE(347), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10082] = 4,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(1126), 1,
      sym_number,
    ACTIONS(561), 2,
      sym_plus,
      sym_minus,
    STATE(336), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10099] = 4,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      sym_number,
    ACTIONS(561), 2,
      sym_plus,
      sym_minus,
    STATE(332), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10116] = 4,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(1130), 1,
      sym_number,
    ACTIONS(561), 2,
      sym_plus,
      sym_minus,
    STATE(335), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [10133] = 7,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1132), 1,
      sym__eol,
    ACTIONS(1134), 1,
      sym_currency,
    ACTIONS(1136), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_open_repeat2,
    STATE(492), 1,
      sym_opt_booking,
    STATE(498), 1,
      sym_string,
  [10155] = 7,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1134), 1,
      sym_currency,
    ACTIONS(1138), 1,
      sym__eol,
    ACTIONS(1140), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym_open_repeat2,
    STATE(498), 1,
      sym_string,
    STATE(499), 1,
      sym_opt_booking,
  [10177] = 7,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1142), 1,
      sym__eol,
    ACTIONS(1144), 1,
      sym_atat,
    ACTIONS(1146), 1,
      sym_at,
    ACTIONS(1148), 1,
      sym_comment,
    STATE(412), 1,
      sym_cost_spec,
  [10199] = 7,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1150), 1,
      sym__eol,
    ACTIONS(1152), 1,
      sym_atat,
    ACTIONS(1154), 1,
      sym_at,
    ACTIONS(1156), 1,
      sym_comment,
    STATE(415), 1,
      sym_cost_spec,
  [10221] = 7,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1158), 1,
      sym__eol,
    ACTIONS(1160), 1,
      sym_atat,
    ACTIONS(1162), 1,
      sym_at,
    ACTIONS(1164), 1,
      sym_comment,
    STATE(421), 1,
      sym_cost_spec,
  [10243] = 6,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1166), 1,
      sym_currency,
    ACTIONS(1168), 1,
      anon_sym_TILDE,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10263] = 6,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1170), 1,
      sym__eol,
    ACTIONS(1172), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10283] = 7,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1174), 1,
      sym__eol,
    ACTIONS(1176), 1,
      sym_atat,
    ACTIONS(1178), 1,
      sym_at,
    ACTIONS(1180), 1,
      sym_comment,
    STATE(418), 1,
      sym_cost_spec,
  [10305] = 7,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1134), 1,
      sym_currency,
    ACTIONS(1182), 1,
      sym__eol,
    ACTIONS(1184), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym_open_repeat2,
    STATE(473), 1,
      sym_opt_booking,
    STATE(498), 1,
      sym_string,
  [10327] = 7,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1134), 1,
      sym_currency,
    ACTIONS(1186), 1,
      sym__eol,
    ACTIONS(1188), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_open_repeat2,
    STATE(455), 1,
      sym_opt_booking,
    STATE(498), 1,
      sym_string,
  [10349] = 3,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(419), 1,
      sym_string,
    ACTIONS(1190), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [10362] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1172), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10379] = 3,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_open_repeat1,
    ACTIONS(1192), 4,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      sym_comment,
  [10392] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10409] = 3,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_open_repeat1,
    ACTIONS(1198), 4,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      sym_comment,
  [10422] = 5,
    ACTIONS(1203), 1,
      sym__eol,
    ACTIONS(1205), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(479), 1,
      sym_tags_links,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [10439] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10456] = 3,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_open_repeat1,
    ACTIONS(1209), 4,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      sym_comment,
  [10469] = 5,
    ACTIONS(1211), 1,
      sym__eol,
    ACTIONS(1213), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(453), 1,
      sym_tags_links,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [10486] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1215), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10503] = 2,
    ACTIONS(1219), 2,
      sym_at,
      anon_sym_LBRACE,
    ACTIONS(1217), 4,
      sym__eol,
      sym_atat,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10514] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1221), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10531] = 5,
    ACTIONS(1223), 1,
      sym__eol,
    ACTIONS(1225), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(447), 1,
      sym_tags_links,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [10548] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1227), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10565] = 5,
    ACTIONS(963), 1,
      anon_sym_STAR,
    ACTIONS(1042), 1,
      sym_slash,
    ACTIONS(1229), 1,
      sym_currency,
    STATE(369), 1,
      sym_asterisk,
    ACTIONS(1084), 2,
      sym_plus,
      sym_minus,
  [10582] = 5,
    ACTIONS(1231), 1,
      sym__eol,
    ACTIONS(1233), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_tags_links_repeat1,
    STATE(457), 1,
      sym_tags_links,
    ACTIONS(988), 2,
      sym_tag,
      sym_link,
  [10599] = 3,
    STATE(410), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1235), 2,
      sym__eol,
      sym_comment,
    ACTIONS(1237), 2,
      sym_tag,
      sym_link,
  [10611] = 1,
    ACTIONS(1198), 5,
      sym__eol,
      sym_currency,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      sym_comment,
  [10619] = 5,
    ACTIONS(159), 1,
      sym__eol,
    ACTIONS(1239), 1,
      sym_currency,
    ACTIONS(1241), 1,
      aux_sym_currency_key_value_token1,
    STATE(423), 1,
      aux_sym_currency_key_value_repeat1,
    STATE(520), 1,
      sym_value_currency,
  [10635] = 5,
    ACTIONS(992), 1,
      sym_key,
    ACTIONS(994), 1,
      anon_sym_currency,
    ACTIONS(1243), 1,
      sym__eol,
    ACTIONS(1245), 1,
      sym_comment,
    STATE(591), 1,
      sym_key_value,
  [10651] = 1,
    ACTIONS(1247), 5,
      sym__eol,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
      sym_comment,
  [10659] = 5,
    ACTIONS(992), 1,
      sym_key,
    ACTIONS(994), 1,
      anon_sym_currency,
    ACTIONS(1249), 1,
      sym__eol,
    ACTIONS(1251), 1,
      sym_comment,
    STATE(663), 1,
      sym_key_value,
  [10675] = 3,
    STATE(410), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1253), 2,
      sym__eol,
      sym_comment,
    ACTIONS(1255), 2,
      sym_tag,
      sym_link,
  [10687] = 3,
    ACTIONS(1258), 1,
      sym_currency,
    STATE(411), 1,
      aux_sym_open_repeat2,
    ACTIONS(1192), 3,
      sym__eol,
      anon_sym_DQUOTE,
      sym_comment,
  [10699] = 4,
    ACTIONS(1261), 1,
      sym__eol,
    ACTIONS(1263), 1,
      sym_atat,
    ACTIONS(1265), 1,
      sym_at,
    ACTIONS(1267), 1,
      sym_comment,
  [10712] = 4,
    ACTIONS(1269), 1,
      sym__eol,
    ACTIONS(1271), 1,
      sym_atat,
    ACTIONS(1273), 1,
      sym_at,
    ACTIONS(1275), 1,
      sym_comment,
  [10725] = 4,
    ACTIONS(1277), 1,
      sym__eol,
    ACTIONS(1279), 1,
      sym_atat,
    ACTIONS(1281), 1,
      sym_at,
    ACTIONS(1283), 1,
      sym_comment,
  [10738] = 4,
    ACTIONS(1285), 1,
      sym__eol,
    ACTIONS(1287), 1,
      sym_atat,
    ACTIONS(1289), 1,
      sym_at,
    ACTIONS(1291), 1,
      sym_comment,
  [10751] = 1,
    ACTIONS(1293), 4,
      sym_plus,
      sym_minus,
      sym_number,
      anon_sym_LPAREN,
  [10758] = 3,
    ACTIONS(1297), 1,
      sym_item,
    STATE(320), 1,
      sym__nl,
    ACTIONS(1295), 2,
      anon_sym_LF,
      anon_sym_CR,
  [10769] = 4,
    ACTIONS(1299), 1,
      sym__eol,
    ACTIONS(1301), 1,
      sym_atat,
    ACTIONS(1303), 1,
      sym_at,
    ACTIONS(1305), 1,
      sym_comment,
  [10782] = 1,
    ACTIONS(1307), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [10789] = 1,
    ACTIONS(1309), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [10796] = 4,
    ACTIONS(1311), 1,
      sym__eol,
    ACTIONS(1313), 1,
      sym_atat,
    ACTIONS(1315), 1,
      sym_at,
    ACTIONS(1317), 1,
      sym_comment,
  [10809] = 4,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    ACTIONS(1322), 1,
      anon_sym_RBRACE,
    ACTIONS(1324), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(422), 1,
      aux_sym__cost_comp_list_repeat1,
  [10822] = 4,
    ACTIONS(1239), 1,
      sym_currency,
    ACTIONS(1326), 1,
      aux_sym_currency_key_value_token1,
    STATE(430), 1,
      aux_sym_currency_key_value_repeat1,
    STATE(624), 1,
      sym_value_currency,
  [10835] = 4,
    ACTIONS(1328), 1,
      anon_sym_COMMA,
    ACTIONS(1330), 1,
      anon_sym_RBRACE,
    ACTIONS(1332), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(428), 1,
      aux_sym__cost_comp_list_repeat1,
  [10848] = 4,
    ACTIONS(1334), 1,
      sym__eol,
    ACTIONS(1336), 1,
      sym_atat,
    ACTIONS(1338), 1,
      sym_at,
    ACTIONS(1340), 1,
      sym_comment,
  [10861] = 2,
    ACTIONS(1344), 1,
      sym_at,
    ACTIONS(1342), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [10870] = 4,
    ACTIONS(1346), 1,
      sym__eol,
    ACTIONS(1348), 1,
      sym_atat,
    ACTIONS(1350), 1,
      sym_at,
    ACTIONS(1352), 1,
      sym_comment,
  [10883] = 4,
    ACTIONS(1328), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_RBRACE,
    ACTIONS(1356), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(422), 1,
      aux_sym__cost_comp_list_repeat1,
  [10896] = 2,
    ACTIONS(1360), 1,
      sym_at,
    ACTIONS(1358), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [10905] = 3,
    ACTIONS(973), 1,
      sym_currency,
    ACTIONS(1362), 1,
      aux_sym_currency_key_value_token1,
    STATE(430), 1,
      aux_sym_currency_key_value_repeat1,
  [10915] = 2,
    ACTIONS(1367), 1,
      anon_sym_RBRACE,
    ACTIONS(1365), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10923] = 3,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(393), 1,
      sym_filename,
    STATE(420), 1,
      sym_string,
  [10933] = 2,
    ACTIONS(1371), 1,
      anon_sym_RBRACE,
    ACTIONS(1369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10941] = 3,
    ACTIONS(992), 1,
      sym_key,
    ACTIONS(994), 1,
      anon_sym_currency,
    STATE(586), 1,
      sym_key_value,
  [10951] = 2,
    ACTIONS(1375), 1,
      anon_sym_RBRACE,
    ACTIONS(1373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10959] = 2,
    ACTIONS(1379), 1,
      anon_sym_RBRACE,
    ACTIONS(1377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10967] = 2,
    ACTIONS(1383), 1,
      anon_sym_RBRACE,
    ACTIONS(1381), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10975] = 2,
    ACTIONS(1322), 1,
      anon_sym_RBRACE,
    ACTIONS(1324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10983] = 3,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(396), 1,
      sym_filename,
    STATE(420), 1,
      sym_string,
  [10993] = 3,
    ACTIONS(1385), 1,
      anon_sym_LF,
    ACTIONS(1387), 1,
      anon_sym_CR,
    STATE(321), 1,
      sym__nl,
  [11003] = 3,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      sym__eol,
    STATE(653), 1,
      sym_string,
  [11013] = 2,
    ACTIONS(1393), 1,
      anon_sym_RBRACE,
    ACTIONS(1391), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [11021] = 3,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    ACTIONS(1395), 1,
      sym__eol,
    STATE(554), 1,
      sym_string,
  [11031] = 3,
    ACTIONS(992), 1,
      sym_key,
    ACTIONS(994), 1,
      anon_sym_currency,
    STATE(541), 1,
      sym_key_value,
  [11041] = 2,
    ACTIONS(1399), 1,
      anon_sym_RBRACE,
    ACTIONS(1397), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [11049] = 2,
    ACTIONS(1401), 1,
      sym__eol,
    ACTIONS(1403), 1,
      sym_comment,
  [11056] = 2,
    ACTIONS(1405), 1,
      sym__eol,
    ACTIONS(1407), 1,
      sym_comment,
  [11063] = 2,
    ACTIONS(1409), 1,
      sym__eol,
    ACTIONS(1411), 1,
      sym_comment,
  [11070] = 2,
    ACTIONS(1413), 1,
      sym__eol,
    ACTIONS(1415), 1,
      sym_comment,
  [11077] = 2,
    ACTIONS(1417), 1,
      sym__eol,
    ACTIONS(1419), 1,
      sym_comment,
  [11084] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(636), 1,
      sym_string,
  [11091] = 2,
    ACTIONS(1421), 1,
      anon_sym_DQUOTE,
    ACTIONS(1423), 1,
      sym__string_content,
  [11098] = 2,
    ACTIONS(1425), 1,
      sym__eol,
    ACTIONS(1427), 1,
      sym_comment,
  [11105] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(504), 1,
      sym_string,
  [11112] = 2,
    ACTIONS(1429), 1,
      sym__eol,
    ACTIONS(1431), 1,
      sym_comment,
  [11119] = 2,
    ACTIONS(1433), 1,
      sym__eol,
    ACTIONS(1435), 1,
      sym_comment,
  [11126] = 2,
    ACTIONS(1437), 1,
      sym__eol,
    ACTIONS(1439), 1,
      sym_comment,
  [11133] = 2,
    ACTIONS(1441), 1,
      sym__eol,
    ACTIONS(1443), 1,
      sym_comment,
  [11140] = 2,
    ACTIONS(1445), 1,
      sym__eol,
    ACTIONS(1447), 1,
      sym_comment,
  [11147] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_string,
  [11154] = 2,
    ACTIONS(1449), 1,
      sym__eol,
    ACTIONS(1451), 1,
      sym_comment,
  [11161] = 2,
    ACTIONS(1453), 1,
      sym__eol,
    ACTIONS(1455), 1,
      sym_comment,
  [11168] = 2,
    ACTIONS(1457), 1,
      sym__eol,
    ACTIONS(1459), 1,
      sym_comment,
  [11175] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(486), 1,
      sym_string,
  [11182] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(487), 1,
      sym_string,
  [11189] = 2,
    ACTIONS(1461), 1,
      sym__eol,
    ACTIONS(1463), 1,
      sym_comment,
  [11196] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(465), 1,
      sym_string,
  [11203] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(464), 1,
      sym_string,
  [11210] = 2,
    ACTIONS(1465), 1,
      sym__eol,
    ACTIONS(1467), 1,
      sym_comment,
  [11217] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(488), 1,
      sym_string,
  [11224] = 2,
    ACTIONS(1469), 1,
      sym__eol,
    ACTIONS(1471), 1,
      sym_comment,
  [11231] = 2,
    ACTIONS(1473), 1,
      sym__eol,
    ACTIONS(1475), 1,
      sym_comment,
  [11238] = 2,
    ACTIONS(1477), 1,
      sym__eol,
    ACTIONS(1479), 1,
      sym_comment,
  [11245] = 2,
    ACTIONS(1481), 1,
      sym__eol,
    ACTIONS(1483), 1,
      sym_comment,
  [11252] = 2,
    ACTIONS(1485), 1,
      sym__eol,
    ACTIONS(1487), 1,
      sym_comment,
  [11259] = 2,
    ACTIONS(1489), 1,
      sym__eol,
    ACTIONS(1491), 1,
      sym_comment,
  [11266] = 1,
    ACTIONS(1493), 2,
      sym__eol,
      sym_comment,
  [11271] = 2,
    ACTIONS(1495), 1,
      sym__eol,
    ACTIONS(1497), 1,
      sym_comment,
  [11278] = 2,
    ACTIONS(1499), 1,
      sym__eol,
    ACTIONS(1501), 1,
      sym_comment,
  [11285] = 2,
    ACTIONS(1503), 1,
      sym__eol,
    ACTIONS(1505), 1,
      sym_comment,
  [11292] = 2,
    ACTIONS(1507), 1,
      sym__eol,
    ACTIONS(1509), 1,
      sym_comment,
  [11299] = 2,
    ACTIONS(1511), 1,
      sym__eol,
    ACTIONS(1513), 1,
      sym_comment,
  [11306] = 2,
    ACTIONS(1515), 1,
      sym__eol,
    ACTIONS(1517), 1,
      sym_comment,
  [11313] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(441), 1,
      sym_string,
  [11320] = 2,
    ACTIONS(1519), 1,
      sym__eol,
    ACTIONS(1521), 1,
      sym_comment,
  [11327] = 2,
    ACTIONS(1523), 1,
      sym__eol,
    ACTIONS(1525), 1,
      sym_comment,
  [11334] = 2,
    ACTIONS(1527), 1,
      sym__eol,
    ACTIONS(1529), 1,
      sym_comment,
  [11341] = 2,
    ACTIONS(1531), 1,
      sym__eol,
    ACTIONS(1533), 1,
      sym_comment,
  [11348] = 2,
    ACTIONS(1535), 1,
      sym__eol,
    ACTIONS(1537), 1,
      sym_comment,
  [11355] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(602), 1,
      sym_string,
  [11362] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(451), 1,
      sym_string,
  [11369] = 2,
    ACTIONS(1539), 1,
      sym__eol,
    ACTIONS(1541), 1,
      sym_comment,
  [11376] = 2,
    ACTIONS(1543), 1,
      sym__eol,
    ACTIONS(1545), 1,
      sym_comment,
  [11383] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(542), 1,
      sym_string,
  [11390] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym_string,
  [11397] = 2,
    ACTIONS(1547), 1,
      sym__eol,
    ACTIONS(1549), 1,
      sym_comment,
  [11404] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_string,
  [11411] = 1,
    ACTIONS(1551), 2,
      sym__eol,
      sym_comment,
  [11416] = 2,
    ACTIONS(1553), 1,
      sym__eol,
    ACTIONS(1555), 1,
      sym_comment,
  [11423] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(553), 1,
      sym_string,
  [11430] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(463), 1,
      sym_string,
  [11437] = 2,
    ACTIONS(1557), 1,
      sym__eol,
    ACTIONS(1559), 1,
      sym_comment,
  [11444] = 2,
    ACTIONS(1561), 1,
      sym__eol,
    ACTIONS(1563), 1,
      sym_comment,
  [11451] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(461), 1,
      sym_string,
  [11458] = 2,
    ACTIONS(1565), 1,
      sym__eol,
    ACTIONS(1567), 1,
      sym_comment,
  [11465] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(459), 1,
      sym_string,
  [11472] = 1,
    ACTIONS(1569), 2,
      sym__eol,
      sym_comment,
  [11477] = 2,
    ACTIONS(1571), 1,
      sym__eol,
    ACTIONS(1573), 1,
      sym_comment,
  [11484] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(500), 1,
      sym_string,
  [11491] = 1,
    ACTIONS(1575), 2,
      sym__eol,
      sym_comment,
  [11496] = 2,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(501), 1,
      sym_string,
  [11503] = 2,
    ACTIONS(1577), 1,
      sym__eol,
    ACTIONS(1579), 1,
      sym_comment,
  [11510] = 1,
    ACTIONS(1581), 1,
      sym__eol,
  [11514] = 1,
    ACTIONS(1583), 1,
      sym__eol,
  [11518] = 1,
    ACTIONS(1585), 1,
      sym__eol,
  [11522] = 1,
    ACTIONS(1587), 1,
      sym__eol,
  [11526] = 1,
    ACTIONS(1170), 1,
      sym__eol,
  [11530] = 1,
    ACTIONS(1589), 1,
      sym__eol,
  [11534] = 1,
    ACTIONS(1591), 1,
      sym__eol,
  [11538] = 1,
    ACTIONS(1593), 1,
      sym__eol,
  [11542] = 1,
    ACTIONS(1595), 1,
      sym__eol,
  [11546] = 1,
    ACTIONS(1597), 1,
      sym__eol,
  [11550] = 1,
    ACTIONS(1599), 1,
      anon_sym_RBRACE,
  [11554] = 1,
    ACTIONS(1601), 1,
      sym__eol,
  [11558] = 1,
    ACTIONS(1599), 1,
      anon_sym_RBRACE_RBRACE,
  [11562] = 1,
    ACTIONS(1603), 1,
      sym__eol,
  [11566] = 1,
    ACTIONS(1605), 1,
      sym__eol,
  [11570] = 1,
    ACTIONS(1607), 1,
      sym_currency,
  [11574] = 1,
    ACTIONS(1609), 1,
      sym__eol,
  [11578] = 1,
    ACTIONS(1611), 1,
      sym__eol,
  [11582] = 1,
    ACTIONS(1613), 1,
      sym__eol,
  [11586] = 1,
    ACTIONS(1615), 1,
      sym__eol,
  [11590] = 1,
    ACTIONS(1617), 1,
      sym_key,
  [11594] = 1,
    ACTIONS(1619), 1,
      sym__eol,
  [11598] = 1,
    ACTIONS(1621), 1,
      sym__eol,
  [11602] = 1,
    ACTIONS(1623), 1,
      sym_tag,
  [11606] = 1,
    ACTIONS(1625), 1,
      sym__eol,
  [11610] = 1,
    ACTIONS(1627), 1,
      sym_account,
  [11614] = 1,
    ACTIONS(1629), 1,
      sym__eol,
  [11618] = 1,
    ACTIONS(1631), 1,
      sym__eol,
  [11622] = 1,
    ACTIONS(1633), 1,
      sym__eol,
  [11626] = 1,
    ACTIONS(1635), 1,
      sym__eol,
  [11630] = 1,
    ACTIONS(1637), 1,
      sym__eol,
  [11634] = 1,
    ACTIONS(1639), 1,
      sym_tag,
  [11638] = 1,
    ACTIONS(1641), 1,
      sym__eol,
  [11642] = 1,
    ACTIONS(1643), 1,
      ts_builtin_sym_end,
  [11646] = 1,
    ACTIONS(1645), 1,
      aux_sym_headline_token1,
  [11650] = 1,
    ACTIONS(1647), 1,
      aux_sym_headline_token1,
  [11654] = 1,
    ACTIONS(1649), 1,
      sym__eol,
  [11658] = 1,
    ACTIONS(1651), 1,
      sym__eol,
  [11662] = 1,
    ACTIONS(1653), 1,
      sym_account,
  [11666] = 1,
    ACTIONS(1655), 1,
      sym__eol,
  [11670] = 1,
    ACTIONS(1657), 1,
      sym__eol,
  [11674] = 1,
    ACTIONS(1659), 1,
      sym__eol,
  [11678] = 1,
    ACTIONS(1661), 1,
      sym__eol,
  [11682] = 1,
    ACTIONS(1663), 1,
      sym_account,
  [11686] = 1,
    ACTIONS(1665), 1,
      sym_currency,
  [11690] = 1,
    ACTIONS(1667), 1,
      sym__eol,
  [11694] = 1,
    ACTIONS(1669), 1,
      sym__eol,
  [11698] = 1,
    ACTIONS(1671), 1,
      sym_account,
  [11702] = 1,
    ACTIONS(1673), 1,
      sym__eol,
  [11706] = 1,
    ACTIONS(1675), 1,
      sym_account,
  [11710] = 1,
    ACTIONS(1677), 1,
      sym_currency,
  [11714] = 1,
    ACTIONS(1679), 1,
      sym_account,
  [11718] = 1,
    ACTIONS(1681), 1,
      sym__eol,
  [11722] = 1,
    ACTIONS(1683), 1,
      sym_account,
  [11726] = 1,
    ACTIONS(1685), 1,
      sym__eol,
  [11730] = 1,
    ACTIONS(1687), 1,
      sym__eol,
  [11734] = 1,
    ACTIONS(1689), 1,
      aux_sym__any_token1,
  [11738] = 1,
    ACTIONS(1691), 1,
      sym__eol,
  [11742] = 1,
    ACTIONS(1693), 1,
      sym__eol,
  [11746] = 1,
    ACTIONS(1695), 1,
      sym__eol,
  [11750] = 1,
    ACTIONS(1697), 1,
      sym__eol,
  [11754] = 1,
    ACTIONS(1699), 1,
      sym__eol,
  [11758] = 1,
    ACTIONS(1701), 1,
      sym__eol,
  [11762] = 1,
    ACTIONS(1703), 1,
      sym__eol,
  [11766] = 1,
    ACTIONS(1705), 1,
      anon_sym_COLON,
  [11770] = 1,
    ACTIONS(1707), 1,
      sym__eol,
  [11774] = 1,
    ACTIONS(1709), 1,
      anon_sym_COLON,
  [11778] = 1,
    ACTIONS(1711), 1,
      sym__eol,
  [11782] = 1,
    ACTIONS(1713), 1,
      sym__eol,
  [11786] = 1,
    ACTIONS(1715), 1,
      sym__eol,
  [11790] = 1,
    ACTIONS(1717), 1,
      sym__eol,
  [11794] = 1,
    ACTIONS(1719), 1,
      sym__eol,
  [11798] = 1,
    ACTIONS(1721), 1,
      sym__eol,
  [11802] = 1,
    ACTIONS(1723), 1,
      sym__eol,
  [11806] = 1,
    ACTIONS(1725), 1,
      sym__eol,
  [11810] = 1,
    ACTIONS(1727), 1,
      sym__eol,
  [11814] = 1,
    ACTIONS(1729), 1,
      sym__eol,
  [11818] = 1,
    ACTIONS(1731), 1,
      sym__eol,
  [11822] = 1,
    ACTIONS(1733), 1,
      sym__eol,
  [11826] = 1,
    ACTIONS(1735), 1,
      sym__eol,
  [11830] = 1,
    ACTIONS(1737), 1,
      sym__eol,
  [11834] = 1,
    ACTIONS(1739), 1,
      sym__eol,
  [11838] = 1,
    ACTIONS(1741), 1,
      sym__eol,
  [11842] = 1,
    ACTIONS(1743), 1,
      sym__eol,
  [11846] = 1,
    ACTIONS(1745), 1,
      sym__eol,
  [11850] = 1,
    ACTIONS(1747), 1,
      sym__eol,
  [11854] = 1,
    ACTIONS(1749), 1,
      anon_sym_COLON,
  [11858] = 1,
    ACTIONS(1751), 1,
      sym__eol,
  [11862] = 1,
    ACTIONS(1753), 1,
      sym__eol,
  [11866] = 1,
    ACTIONS(1755), 1,
      sym__eol,
  [11870] = 1,
    ACTIONS(1757), 1,
      sym__eol,
  [11874] = 1,
    ACTIONS(1759), 1,
      sym__eol,
  [11878] = 1,
    ACTIONS(1761), 1,
      sym__eol,
  [11882] = 1,
    ACTIONS(1763), 1,
      sym__eol,
  [11886] = 1,
    ACTIONS(1765), 1,
      sym__eol,
  [11890] = 1,
    ACTIONS(1767), 1,
      sym__eol,
  [11894] = 1,
    ACTIONS(1769), 1,
      sym__eol,
  [11898] = 1,
    ACTIONS(1771), 1,
      aux_sym__org_stars_token1,
  [11902] = 1,
    ACTIONS(1773), 1,
      sym__eol,
  [11906] = 1,
    ACTIONS(1775), 1,
      sym__eol,
  [11910] = 1,
    ACTIONS(1777), 1,
      sym__eol,
  [11914] = 1,
    ACTIONS(1779), 1,
      sym_account,
  [11918] = 1,
    ACTIONS(1781), 1,
      sym__eol,
  [11922] = 1,
    ACTIONS(1783), 1,
      sym__eol,
  [11926] = 1,
    ACTIONS(1785), 1,
      sym__eol,
  [11930] = 1,
    ACTIONS(1787), 1,
      sym__eol,
  [11934] = 1,
    ACTIONS(1789), 1,
      sym__eol,
  [11938] = 1,
    ACTIONS(1791), 1,
      sym__eol,
  [11942] = 1,
    ACTIONS(1793), 1,
      sym__eol,
  [11946] = 1,
    ACTIONS(1795), 1,
      sym__eol,
  [11950] = 1,
    ACTIONS(1797), 1,
      sym__eol,
  [11954] = 1,
    ACTIONS(1799), 1,
      sym__eol,
  [11958] = 1,
    ACTIONS(1801), 1,
      sym__eol,
  [11962] = 1,
    ACTIONS(1803), 1,
      sym__eol,
  [11966] = 1,
    ACTIONS(1805), 1,
      sym__eol,
  [11970] = 1,
    ACTIONS(1807), 1,
      sym__eol,
  [11974] = 1,
    ACTIONS(1809), 1,
      sym__eol,
  [11978] = 1,
    ACTIONS(1811), 1,
      sym__eol,
  [11982] = 1,
    ACTIONS(1813), 1,
      sym__eol,
  [11986] = 1,
    ACTIONS(1815), 1,
      anon_sym_DQUOTE,
  [11990] = 1,
    ACTIONS(1817), 1,
      sym__eol,
  [11994] = 1,
    ACTIONS(1819), 1,
      sym__eol,
  [11998] = 1,
    ACTIONS(1821), 1,
      sym__eol,
  [12002] = 1,
    ACTIONS(1823), 1,
      sym__eol,
  [12006] = 1,
    ACTIONS(1825), 1,
      sym__eol,
  [12010] = 1,
    ACTIONS(1827), 1,
      sym__eol,
  [12014] = 1,
    ACTIONS(1829), 1,
      sym__eol,
  [12018] = 1,
    ACTIONS(1831), 1,
      sym__eol,
  [12022] = 1,
    ACTIONS(1833), 1,
      sym__eol,
  [12026] = 1,
    ACTIONS(1835), 1,
      sym__eol,
  [12030] = 1,
    ACTIONS(1837), 1,
      aux_sym__any_token1,
  [12034] = 1,
    ACTIONS(1839), 1,
      sym_account,
  [12038] = 1,
    ACTIONS(1841), 1,
      sym_tag,
  [12042] = 1,
    ACTIONS(1843), 1,
      sym_tag,
  [12046] = 1,
    ACTIONS(1845), 1,
      sym__eol,
  [12050] = 1,
    ACTIONS(1847), 1,
      sym__eol,
  [12054] = 1,
    ACTIONS(1849), 1,
      sym__eol,
  [12058] = 1,
    ACTIONS(1851), 1,
      sym_account,
  [12062] = 1,
    ACTIONS(1853), 1,
      sym_account,
  [12066] = 1,
    ACTIONS(1855), 1,
      sym_currency,
  [12070] = 1,
    ACTIONS(1857), 1,
      sym__eol,
  [12074] = 1,
    ACTIONS(1859), 1,
      anon_sym_COLON,
  [12078] = 1,
    ACTIONS(1861), 1,
      sym__eol,
  [12082] = 1,
    ACTIONS(1863), 1,
      sym_account,
  [12086] = 1,
    ACTIONS(1865), 1,
      sym__eol,
  [12090] = 1,
    ACTIONS(1867), 1,
      sym__eol,
  [12094] = 1,
    ACTIONS(1869), 1,
      sym__eol,
  [12098] = 1,
    ACTIONS(1871), 1,
      sym__eol,
  [12102] = 1,
    ACTIONS(1873), 1,
      sym__eol,
  [12106] = 1,
    ACTIONS(1875), 1,
      sym__eol,
  [12110] = 1,
    ACTIONS(1877), 1,
      sym__eol,
  [12114] = 1,
    ACTIONS(1879), 1,
      sym_account,
  [12118] = 1,
    ACTIONS(1881), 1,
      sym_key,
  [12122] = 1,
    ACTIONS(1883), 1,
      sym__eol,
  [12126] = 1,
    ACTIONS(1885), 1,
      sym_account,
  [12130] = 1,
    ACTIONS(1887), 1,
      sym_account,
  [12134] = 1,
    ACTIONS(1889), 1,
      sym_currency,
  [12138] = 1,
    ACTIONS(1891), 1,
      sym__eol,
  [12142] = 1,
    ACTIONS(1893), 1,
      sym__eol,
  [12146] = 1,
    ACTIONS(1895), 1,
      sym_account,
  [12150] = 1,
    ACTIONS(1897), 1,
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
  [SMALL_STATE(176)] = 5343,
  [SMALL_STATE(177)] = 5386,
  [SMALL_STATE(178)] = 5429,
  [SMALL_STATE(179)] = 5470,
  [SMALL_STATE(180)] = 5511,
  [SMALL_STATE(181)] = 5552,
  [SMALL_STATE(182)] = 5593,
  [SMALL_STATE(183)] = 5615,
  [SMALL_STATE(184)] = 5637,
  [SMALL_STATE(185)] = 5659,
  [SMALL_STATE(186)] = 5681,
  [SMALL_STATE(187)] = 5703,
  [SMALL_STATE(188)] = 5725,
  [SMALL_STATE(189)] = 5747,
  [SMALL_STATE(190)] = 5769,
  [SMALL_STATE(191)] = 5791,
  [SMALL_STATE(192)] = 5813,
  [SMALL_STATE(193)] = 5835,
  [SMALL_STATE(194)] = 5857,
  [SMALL_STATE(195)] = 5879,
  [SMALL_STATE(196)] = 5901,
  [SMALL_STATE(197)] = 5923,
  [SMALL_STATE(198)] = 5945,
  [SMALL_STATE(199)] = 5967,
  [SMALL_STATE(200)] = 5989,
  [SMALL_STATE(201)] = 6011,
  [SMALL_STATE(202)] = 6033,
  [SMALL_STATE(203)] = 6055,
  [SMALL_STATE(204)] = 6077,
  [SMALL_STATE(205)] = 6099,
  [SMALL_STATE(206)] = 6121,
  [SMALL_STATE(207)] = 6143,
  [SMALL_STATE(208)] = 6165,
  [SMALL_STATE(209)] = 6187,
  [SMALL_STATE(210)] = 6209,
  [SMALL_STATE(211)] = 6231,
  [SMALL_STATE(212)] = 6253,
  [SMALL_STATE(213)] = 6275,
  [SMALL_STATE(214)] = 6297,
  [SMALL_STATE(215)] = 6319,
  [SMALL_STATE(216)] = 6341,
  [SMALL_STATE(217)] = 6363,
  [SMALL_STATE(218)] = 6385,
  [SMALL_STATE(219)] = 6407,
  [SMALL_STATE(220)] = 6429,
  [SMALL_STATE(221)] = 6451,
  [SMALL_STATE(222)] = 6473,
  [SMALL_STATE(223)] = 6495,
  [SMALL_STATE(224)] = 6517,
  [SMALL_STATE(225)] = 6539,
  [SMALL_STATE(226)] = 6561,
  [SMALL_STATE(227)] = 6583,
  [SMALL_STATE(228)] = 6605,
  [SMALL_STATE(229)] = 6627,
  [SMALL_STATE(230)] = 6649,
  [SMALL_STATE(231)] = 6671,
  [SMALL_STATE(232)] = 6693,
  [SMALL_STATE(233)] = 6715,
  [SMALL_STATE(234)] = 6737,
  [SMALL_STATE(235)] = 6759,
  [SMALL_STATE(236)] = 6781,
  [SMALL_STATE(237)] = 6803,
  [SMALL_STATE(238)] = 6825,
  [SMALL_STATE(239)] = 6847,
  [SMALL_STATE(240)] = 6869,
  [SMALL_STATE(241)] = 6891,
  [SMALL_STATE(242)] = 6913,
  [SMALL_STATE(243)] = 6935,
  [SMALL_STATE(244)] = 6957,
  [SMALL_STATE(245)] = 6979,
  [SMALL_STATE(246)] = 7001,
  [SMALL_STATE(247)] = 7023,
  [SMALL_STATE(248)] = 7045,
  [SMALL_STATE(249)] = 7067,
  [SMALL_STATE(250)] = 7089,
  [SMALL_STATE(251)] = 7111,
  [SMALL_STATE(252)] = 7133,
  [SMALL_STATE(253)] = 7155,
  [SMALL_STATE(254)] = 7177,
  [SMALL_STATE(255)] = 7199,
  [SMALL_STATE(256)] = 7221,
  [SMALL_STATE(257)] = 7243,
  [SMALL_STATE(258)] = 7265,
  [SMALL_STATE(259)] = 7287,
  [SMALL_STATE(260)] = 7309,
  [SMALL_STATE(261)] = 7331,
  [SMALL_STATE(262)] = 7353,
  [SMALL_STATE(263)] = 7375,
  [SMALL_STATE(264)] = 7397,
  [SMALL_STATE(265)] = 7419,
  [SMALL_STATE(266)] = 7441,
  [SMALL_STATE(267)] = 7463,
  [SMALL_STATE(268)] = 7485,
  [SMALL_STATE(269)] = 7507,
  [SMALL_STATE(270)] = 7529,
  [SMALL_STATE(271)] = 7551,
  [SMALL_STATE(272)] = 7573,
  [SMALL_STATE(273)] = 7595,
  [SMALL_STATE(274)] = 7617,
  [SMALL_STATE(275)] = 7639,
  [SMALL_STATE(276)] = 7661,
  [SMALL_STATE(277)] = 7683,
  [SMALL_STATE(278)] = 7705,
  [SMALL_STATE(279)] = 7727,
  [SMALL_STATE(280)] = 7749,
  [SMALL_STATE(281)] = 7771,
  [SMALL_STATE(282)] = 7793,
  [SMALL_STATE(283)] = 7815,
  [SMALL_STATE(284)] = 7837,
  [SMALL_STATE(285)] = 7859,
  [SMALL_STATE(286)] = 7881,
  [SMALL_STATE(287)] = 7903,
  [SMALL_STATE(288)] = 7925,
  [SMALL_STATE(289)] = 7947,
  [SMALL_STATE(290)] = 7969,
  [SMALL_STATE(291)] = 7990,
  [SMALL_STATE(292)] = 8031,
  [SMALL_STATE(293)] = 8052,
  [SMALL_STATE(294)] = 8073,
  [SMALL_STATE(295)] = 8094,
  [SMALL_STATE(296)] = 8115,
  [SMALL_STATE(297)] = 8136,
  [SMALL_STATE(298)] = 8157,
  [SMALL_STATE(299)] = 8178,
  [SMALL_STATE(300)] = 8199,
  [SMALL_STATE(301)] = 8236,
  [SMALL_STATE(302)] = 8257,
  [SMALL_STATE(303)] = 8278,
  [SMALL_STATE(304)] = 8299,
  [SMALL_STATE(305)] = 8320,
  [SMALL_STATE(306)] = 8341,
  [SMALL_STATE(307)] = 8362,
  [SMALL_STATE(308)] = 8383,
  [SMALL_STATE(309)] = 8404,
  [SMALL_STATE(310)] = 8425,
  [SMALL_STATE(311)] = 8446,
  [SMALL_STATE(312)] = 8467,
  [SMALL_STATE(313)] = 8508,
  [SMALL_STATE(314)] = 8529,
  [SMALL_STATE(315)] = 8550,
  [SMALL_STATE(316)] = 8571,
  [SMALL_STATE(317)] = 8592,
  [SMALL_STATE(318)] = 8613,
  [SMALL_STATE(319)] = 8654,
  [SMALL_STATE(320)] = 8675,
  [SMALL_STATE(321)] = 8696,
  [SMALL_STATE(322)] = 8717,
  [SMALL_STATE(323)] = 8738,
  [SMALL_STATE(324)] = 8779,
  [SMALL_STATE(325)] = 8800,
  [SMALL_STATE(326)] = 8821,
  [SMALL_STATE(327)] = 8863,
  [SMALL_STATE(328)] = 8905,
  [SMALL_STATE(329)] = 8925,
  [SMALL_STATE(330)] = 8945,
  [SMALL_STATE(331)] = 8974,
  [SMALL_STATE(332)] = 8995,
  [SMALL_STATE(333)] = 9016,
  [SMALL_STATE(334)] = 9055,
  [SMALL_STATE(335)] = 9094,
  [SMALL_STATE(336)] = 9119,
  [SMALL_STATE(337)] = 9140,
  [SMALL_STATE(338)] = 9160,
  [SMALL_STATE(339)] = 9192,
  [SMALL_STATE(340)] = 9224,
  [SMALL_STATE(341)] = 9256,
  [SMALL_STATE(342)] = 9288,
  [SMALL_STATE(343)] = 9320,
  [SMALL_STATE(344)] = 9340,
  [SMALL_STATE(345)] = 9372,
  [SMALL_STATE(346)] = 9404,
  [SMALL_STATE(347)] = 9436,
  [SMALL_STATE(348)] = 9460,
  [SMALL_STATE(349)] = 9492,
  [SMALL_STATE(350)] = 9524,
  [SMALL_STATE(351)] = 9556,
  [SMALL_STATE(352)] = 9588,
  [SMALL_STATE(353)] = 9620,
  [SMALL_STATE(354)] = 9652,
  [SMALL_STATE(355)] = 9684,
  [SMALL_STATE(356)] = 9702,
  [SMALL_STATE(357)] = 9734,
  [SMALL_STATE(358)] = 9751,
  [SMALL_STATE(359)] = 9766,
  [SMALL_STATE(360)] = 9781,
  [SMALL_STATE(361)] = 9808,
  [SMALL_STATE(362)] = 9828,
  [SMALL_STATE(363)] = 9848,
  [SMALL_STATE(364)] = 9874,
  [SMALL_STATE(365)] = 9900,
  [SMALL_STATE(366)] = 9920,
  [SMALL_STATE(367)] = 9940,
  [SMALL_STATE(368)] = 9960,
  [SMALL_STATE(369)] = 9980,
  [SMALL_STATE(370)] = 9997,
  [SMALL_STATE(371)] = 10014,
  [SMALL_STATE(372)] = 10031,
  [SMALL_STATE(373)] = 10048,
  [SMALL_STATE(374)] = 10065,
  [SMALL_STATE(375)] = 10082,
  [SMALL_STATE(376)] = 10099,
  [SMALL_STATE(377)] = 10116,
  [SMALL_STATE(378)] = 10133,
  [SMALL_STATE(379)] = 10155,
  [SMALL_STATE(380)] = 10177,
  [SMALL_STATE(381)] = 10199,
  [SMALL_STATE(382)] = 10221,
  [SMALL_STATE(383)] = 10243,
  [SMALL_STATE(384)] = 10263,
  [SMALL_STATE(385)] = 10283,
  [SMALL_STATE(386)] = 10305,
  [SMALL_STATE(387)] = 10327,
  [SMALL_STATE(388)] = 10349,
  [SMALL_STATE(389)] = 10362,
  [SMALL_STATE(390)] = 10379,
  [SMALL_STATE(391)] = 10392,
  [SMALL_STATE(392)] = 10409,
  [SMALL_STATE(393)] = 10422,
  [SMALL_STATE(394)] = 10439,
  [SMALL_STATE(395)] = 10456,
  [SMALL_STATE(396)] = 10469,
  [SMALL_STATE(397)] = 10486,
  [SMALL_STATE(398)] = 10503,
  [SMALL_STATE(399)] = 10514,
  [SMALL_STATE(400)] = 10531,
  [SMALL_STATE(401)] = 10548,
  [SMALL_STATE(402)] = 10565,
  [SMALL_STATE(403)] = 10582,
  [SMALL_STATE(404)] = 10599,
  [SMALL_STATE(405)] = 10611,
  [SMALL_STATE(406)] = 10619,
  [SMALL_STATE(407)] = 10635,
  [SMALL_STATE(408)] = 10651,
  [SMALL_STATE(409)] = 10659,
  [SMALL_STATE(410)] = 10675,
  [SMALL_STATE(411)] = 10687,
  [SMALL_STATE(412)] = 10699,
  [SMALL_STATE(413)] = 10712,
  [SMALL_STATE(414)] = 10725,
  [SMALL_STATE(415)] = 10738,
  [SMALL_STATE(416)] = 10751,
  [SMALL_STATE(417)] = 10758,
  [SMALL_STATE(418)] = 10769,
  [SMALL_STATE(419)] = 10782,
  [SMALL_STATE(420)] = 10789,
  [SMALL_STATE(421)] = 10796,
  [SMALL_STATE(422)] = 10809,
  [SMALL_STATE(423)] = 10822,
  [SMALL_STATE(424)] = 10835,
  [SMALL_STATE(425)] = 10848,
  [SMALL_STATE(426)] = 10861,
  [SMALL_STATE(427)] = 10870,
  [SMALL_STATE(428)] = 10883,
  [SMALL_STATE(429)] = 10896,
  [SMALL_STATE(430)] = 10905,
  [SMALL_STATE(431)] = 10915,
  [SMALL_STATE(432)] = 10923,
  [SMALL_STATE(433)] = 10933,
  [SMALL_STATE(434)] = 10941,
  [SMALL_STATE(435)] = 10951,
  [SMALL_STATE(436)] = 10959,
  [SMALL_STATE(437)] = 10967,
  [SMALL_STATE(438)] = 10975,
  [SMALL_STATE(439)] = 10983,
  [SMALL_STATE(440)] = 10993,
  [SMALL_STATE(441)] = 11003,
  [SMALL_STATE(442)] = 11013,
  [SMALL_STATE(443)] = 11021,
  [SMALL_STATE(444)] = 11031,
  [SMALL_STATE(445)] = 11041,
  [SMALL_STATE(446)] = 11049,
  [SMALL_STATE(447)] = 11056,
  [SMALL_STATE(448)] = 11063,
  [SMALL_STATE(449)] = 11070,
  [SMALL_STATE(450)] = 11077,
  [SMALL_STATE(451)] = 11084,
  [SMALL_STATE(452)] = 11091,
  [SMALL_STATE(453)] = 11098,
  [SMALL_STATE(454)] = 11105,
  [SMALL_STATE(455)] = 11112,
  [SMALL_STATE(456)] = 11119,
  [SMALL_STATE(457)] = 11126,
  [SMALL_STATE(458)] = 11133,
  [SMALL_STATE(459)] = 11140,
  [SMALL_STATE(460)] = 11147,
  [SMALL_STATE(461)] = 11154,
  [SMALL_STATE(462)] = 11161,
  [SMALL_STATE(463)] = 11168,
  [SMALL_STATE(464)] = 11175,
  [SMALL_STATE(465)] = 11182,
  [SMALL_STATE(466)] = 11189,
  [SMALL_STATE(467)] = 11196,
  [SMALL_STATE(468)] = 11203,
  [SMALL_STATE(469)] = 11210,
  [SMALL_STATE(470)] = 11217,
  [SMALL_STATE(471)] = 11224,
  [SMALL_STATE(472)] = 11231,
  [SMALL_STATE(473)] = 11238,
  [SMALL_STATE(474)] = 11245,
  [SMALL_STATE(475)] = 11252,
  [SMALL_STATE(476)] = 11259,
  [SMALL_STATE(477)] = 11266,
  [SMALL_STATE(478)] = 11271,
  [SMALL_STATE(479)] = 11278,
  [SMALL_STATE(480)] = 11285,
  [SMALL_STATE(481)] = 11292,
  [SMALL_STATE(482)] = 11299,
  [SMALL_STATE(483)] = 11306,
  [SMALL_STATE(484)] = 11313,
  [SMALL_STATE(485)] = 11320,
  [SMALL_STATE(486)] = 11327,
  [SMALL_STATE(487)] = 11334,
  [SMALL_STATE(488)] = 11341,
  [SMALL_STATE(489)] = 11348,
  [SMALL_STATE(490)] = 11355,
  [SMALL_STATE(491)] = 11362,
  [SMALL_STATE(492)] = 11369,
  [SMALL_STATE(493)] = 11376,
  [SMALL_STATE(494)] = 11383,
  [SMALL_STATE(495)] = 11390,
  [SMALL_STATE(496)] = 11397,
  [SMALL_STATE(497)] = 11404,
  [SMALL_STATE(498)] = 11411,
  [SMALL_STATE(499)] = 11416,
  [SMALL_STATE(500)] = 11423,
  [SMALL_STATE(501)] = 11430,
  [SMALL_STATE(502)] = 11437,
  [SMALL_STATE(503)] = 11444,
  [SMALL_STATE(504)] = 11451,
  [SMALL_STATE(505)] = 11458,
  [SMALL_STATE(506)] = 11465,
  [SMALL_STATE(507)] = 11472,
  [SMALL_STATE(508)] = 11477,
  [SMALL_STATE(509)] = 11484,
  [SMALL_STATE(510)] = 11491,
  [SMALL_STATE(511)] = 11496,
  [SMALL_STATE(512)] = 11503,
  [SMALL_STATE(513)] = 11510,
  [SMALL_STATE(514)] = 11514,
  [SMALL_STATE(515)] = 11518,
  [SMALL_STATE(516)] = 11522,
  [SMALL_STATE(517)] = 11526,
  [SMALL_STATE(518)] = 11530,
  [SMALL_STATE(519)] = 11534,
  [SMALL_STATE(520)] = 11538,
  [SMALL_STATE(521)] = 11542,
  [SMALL_STATE(522)] = 11546,
  [SMALL_STATE(523)] = 11550,
  [SMALL_STATE(524)] = 11554,
  [SMALL_STATE(525)] = 11558,
  [SMALL_STATE(526)] = 11562,
  [SMALL_STATE(527)] = 11566,
  [SMALL_STATE(528)] = 11570,
  [SMALL_STATE(529)] = 11574,
  [SMALL_STATE(530)] = 11578,
  [SMALL_STATE(531)] = 11582,
  [SMALL_STATE(532)] = 11586,
  [SMALL_STATE(533)] = 11590,
  [SMALL_STATE(534)] = 11594,
  [SMALL_STATE(535)] = 11598,
  [SMALL_STATE(536)] = 11602,
  [SMALL_STATE(537)] = 11606,
  [SMALL_STATE(538)] = 11610,
  [SMALL_STATE(539)] = 11614,
  [SMALL_STATE(540)] = 11618,
  [SMALL_STATE(541)] = 11622,
  [SMALL_STATE(542)] = 11626,
  [SMALL_STATE(543)] = 11630,
  [SMALL_STATE(544)] = 11634,
  [SMALL_STATE(545)] = 11638,
  [SMALL_STATE(546)] = 11642,
  [SMALL_STATE(547)] = 11646,
  [SMALL_STATE(548)] = 11650,
  [SMALL_STATE(549)] = 11654,
  [SMALL_STATE(550)] = 11658,
  [SMALL_STATE(551)] = 11662,
  [SMALL_STATE(552)] = 11666,
  [SMALL_STATE(553)] = 11670,
  [SMALL_STATE(554)] = 11674,
  [SMALL_STATE(555)] = 11678,
  [SMALL_STATE(556)] = 11682,
  [SMALL_STATE(557)] = 11686,
  [SMALL_STATE(558)] = 11690,
  [SMALL_STATE(559)] = 11694,
  [SMALL_STATE(560)] = 11698,
  [SMALL_STATE(561)] = 11702,
  [SMALL_STATE(562)] = 11706,
  [SMALL_STATE(563)] = 11710,
  [SMALL_STATE(564)] = 11714,
  [SMALL_STATE(565)] = 11718,
  [SMALL_STATE(566)] = 11722,
  [SMALL_STATE(567)] = 11726,
  [SMALL_STATE(568)] = 11730,
  [SMALL_STATE(569)] = 11734,
  [SMALL_STATE(570)] = 11738,
  [SMALL_STATE(571)] = 11742,
  [SMALL_STATE(572)] = 11746,
  [SMALL_STATE(573)] = 11750,
  [SMALL_STATE(574)] = 11754,
  [SMALL_STATE(575)] = 11758,
  [SMALL_STATE(576)] = 11762,
  [SMALL_STATE(577)] = 11766,
  [SMALL_STATE(578)] = 11770,
  [SMALL_STATE(579)] = 11774,
  [SMALL_STATE(580)] = 11778,
  [SMALL_STATE(581)] = 11782,
  [SMALL_STATE(582)] = 11786,
  [SMALL_STATE(583)] = 11790,
  [SMALL_STATE(584)] = 11794,
  [SMALL_STATE(585)] = 11798,
  [SMALL_STATE(586)] = 11802,
  [SMALL_STATE(587)] = 11806,
  [SMALL_STATE(588)] = 11810,
  [SMALL_STATE(589)] = 11814,
  [SMALL_STATE(590)] = 11818,
  [SMALL_STATE(591)] = 11822,
  [SMALL_STATE(592)] = 11826,
  [SMALL_STATE(593)] = 11830,
  [SMALL_STATE(594)] = 11834,
  [SMALL_STATE(595)] = 11838,
  [SMALL_STATE(596)] = 11842,
  [SMALL_STATE(597)] = 11846,
  [SMALL_STATE(598)] = 11850,
  [SMALL_STATE(599)] = 11854,
  [SMALL_STATE(600)] = 11858,
  [SMALL_STATE(601)] = 11862,
  [SMALL_STATE(602)] = 11866,
  [SMALL_STATE(603)] = 11870,
  [SMALL_STATE(604)] = 11874,
  [SMALL_STATE(605)] = 11878,
  [SMALL_STATE(606)] = 11882,
  [SMALL_STATE(607)] = 11886,
  [SMALL_STATE(608)] = 11890,
  [SMALL_STATE(609)] = 11894,
  [SMALL_STATE(610)] = 11898,
  [SMALL_STATE(611)] = 11902,
  [SMALL_STATE(612)] = 11906,
  [SMALL_STATE(613)] = 11910,
  [SMALL_STATE(614)] = 11914,
  [SMALL_STATE(615)] = 11918,
  [SMALL_STATE(616)] = 11922,
  [SMALL_STATE(617)] = 11926,
  [SMALL_STATE(618)] = 11930,
  [SMALL_STATE(619)] = 11934,
  [SMALL_STATE(620)] = 11938,
  [SMALL_STATE(621)] = 11942,
  [SMALL_STATE(622)] = 11946,
  [SMALL_STATE(623)] = 11950,
  [SMALL_STATE(624)] = 11954,
  [SMALL_STATE(625)] = 11958,
  [SMALL_STATE(626)] = 11962,
  [SMALL_STATE(627)] = 11966,
  [SMALL_STATE(628)] = 11970,
  [SMALL_STATE(629)] = 11974,
  [SMALL_STATE(630)] = 11978,
  [SMALL_STATE(631)] = 11982,
  [SMALL_STATE(632)] = 11986,
  [SMALL_STATE(633)] = 11990,
  [SMALL_STATE(634)] = 11994,
  [SMALL_STATE(635)] = 11998,
  [SMALL_STATE(636)] = 12002,
  [SMALL_STATE(637)] = 12006,
  [SMALL_STATE(638)] = 12010,
  [SMALL_STATE(639)] = 12014,
  [SMALL_STATE(640)] = 12018,
  [SMALL_STATE(641)] = 12022,
  [SMALL_STATE(642)] = 12026,
  [SMALL_STATE(643)] = 12030,
  [SMALL_STATE(644)] = 12034,
  [SMALL_STATE(645)] = 12038,
  [SMALL_STATE(646)] = 12042,
  [SMALL_STATE(647)] = 12046,
  [SMALL_STATE(648)] = 12050,
  [SMALL_STATE(649)] = 12054,
  [SMALL_STATE(650)] = 12058,
  [SMALL_STATE(651)] = 12062,
  [SMALL_STATE(652)] = 12066,
  [SMALL_STATE(653)] = 12070,
  [SMALL_STATE(654)] = 12074,
  [SMALL_STATE(655)] = 12078,
  [SMALL_STATE(656)] = 12082,
  [SMALL_STATE(657)] = 12086,
  [SMALL_STATE(658)] = 12090,
  [SMALL_STATE(659)] = 12094,
  [SMALL_STATE(660)] = 12098,
  [SMALL_STATE(661)] = 12102,
  [SMALL_STATE(662)] = 12106,
  [SMALL_STATE(663)] = 12110,
  [SMALL_STATE(664)] = 12114,
  [SMALL_STATE(665)] = 12118,
  [SMALL_STATE(666)] = 12122,
  [SMALL_STATE(667)] = 12126,
  [SMALL_STATE(668)] = 12130,
  [SMALL_STATE(669)] = 12134,
  [SMALL_STATE(670)] = 12138,
  [SMALL_STATE(671)] = 12142,
  [SMALL_STATE(672)] = 12146,
  [SMALL_STATE(673)] = 12150,
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
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(358),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(358),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(452),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(330),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(373),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 107),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 107),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 92),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 92),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, .production_id = 136),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, .production_id = 136),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 135),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 135),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 134),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 134),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 133),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 133),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 132),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 132),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 131),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 131),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 130),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 130),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 129),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 129),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 128),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 128),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 118),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 118),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list, 2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 127),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 127),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 126),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 126),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 125),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 125),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 124),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 124),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 123),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 123),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 122),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 122),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 121),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 121),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 119),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 119),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 106),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 106),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 118),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 118),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 117),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 117),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 105),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 105),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 116),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 116),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 115),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 115),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 114),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 114),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 113),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 113),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 112),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 112),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 102),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 102),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 111),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 111),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 110),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 110),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 106),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 106),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 105),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 105),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 67),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 67),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 104),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 104),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 92),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 92),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 103),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 103),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 3, .production_id = 68),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 3, .production_id = 68),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 91),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 91),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_line, 3),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_line, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 102),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 102),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list, 3, .production_id = 68),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list, 3, .production_id = 68),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 101),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 101),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 90),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 90),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 67),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 67),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 89),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 89),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 90),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 90),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 97),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 97),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 91),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 91),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 96),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 96),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_popmeta, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushmeta, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poptag, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushtag, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 1, .production_id = 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1, .production_id = 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 1),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 5),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 16),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4, .production_id = 16),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 4),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 4, .production_id = 17),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 4, .production_id = 17),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_key_value_repeat1, 2),
  [975] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_currency_key_value_repeat1, 2), SHIFT_REPEAT(331),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 88),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 88),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 1, .production_id = 4),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(528),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 1),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2), SHIFT_REPEAT(410),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2), SHIFT_REPEAT(395),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 2, .production_id = 12),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2), SHIFT_REPEAT(300),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 1),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 1),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 2),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 100),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 100),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_key_value_repeat1, 2), SHIFT_REPEAT(430),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 99),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 99),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 109),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 109),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 108),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 108),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 87),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 87),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 98),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 98),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 120),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 120),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_currency, 1),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 15),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1643] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_stars, 2),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4, .production_id = 41),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
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

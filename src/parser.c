#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOLLAR = 1,
  aux_sym_variable_literal_token1 = 2,
  sym_comment = 3,
  anon_sym_IF = 4,
  anon_sym_ENDIF = 5,
  anon_sym_ELSEIF = 6,
  sym_fail_token = 7,
  sym_neq_token = 8,
  sym_equ_token = 9,
  sym_matches_token = 10,
  anon_sym_RRM = 11,
  anon_sym_COPY = 12,
  anon_sym_REDIRFILE = 13,
  anon_sym_LOADEXEC = 14,
  anon_sym_ADDWIDGET = 15,
  anon_sym_EXIT = 16,
  anon_sym_SET = 17,
  anon_sym_MESSAGE = 18,
  anon_sym_ECHO = 19,
  anon_sym_RETURN = 20,
  anon_sym_GOTO = 21,
  anon_sym_COLON = 22,
  aux_sym_label_token1 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_literal_token1 = 25,
  aux_sym_pattern_literal_token1 = 26,
  anon_sym_QMARK = 27,
  anon_sym_STAR = 28,
  sym_int_literal = 29,
  aux_sym__whitespace_token1 = 30,
  sym__horizontal_whitespace = 31,
  sym_source_file = 32,
  sym__line = 33,
  sym__statement = 34,
  sym_variable_literal = 35,
  sym_if_statement = 36,
  sym_elseif = 37,
  sym__if_fail = 38,
  sym__if_neq = 39,
  sym__if_equ = 40,
  sym__if_matches = 41,
  sym__statement_block = 42,
  sym__file_statement = 43,
  sym_rrm_statement = 44,
  sym_copy_statement = 45,
  sym_redirfile_statement = 46,
  sym_loadexec_statement = 47,
  sym_add_widget_statement = 48,
  sym_exit_statement = 49,
  sym_set_statement = 50,
  sym_message_statement = 51,
  sym_echo_statement = 52,
  sym_return_statement = 53,
  sym_goto_statement = 54,
  sym__parameter = 55,
  sym_label = 56,
  sym_string_literal = 57,
  sym_pattern_literal = 58,
  sym_pattern_wildcard = 59,
  aux_sym__whitespace = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym__statement_block_repeat1 = 62,
  aux_sym_loadexec_statement_repeat1 = 63,
  aux_sym_string_literal_repeat1 = 64,
  aux_sym_pattern_literal_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_literal_token1] = "variable_literal_token1",
  [sym_comment] = "comment",
  [anon_sym_IF] = "IF",
  [anon_sym_ENDIF] = "ENDIF",
  [anon_sym_ELSEIF] = "ELSEIF",
  [sym_fail_token] = "fail_token",
  [sym_neq_token] = "neq_token",
  [sym_equ_token] = "equ_token",
  [sym_matches_token] = "matches_token",
  [anon_sym_RRM] = "RRM",
  [anon_sym_COPY] = "COPY",
  [anon_sym_REDIRFILE] = "REDIRFILE",
  [anon_sym_LOADEXEC] = "LOADEXEC",
  [anon_sym_ADDWIDGET] = "ADDWIDGET",
  [anon_sym_EXIT] = "EXIT",
  [anon_sym_SET] = "SET",
  [anon_sym_MESSAGE] = "MESSAGE",
  [anon_sym_ECHO] = "ECHO",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_GOTO] = "GOTO",
  [anon_sym_COLON] = ":",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_pattern_literal_token1] = "pattern_literal_token1",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [sym_int_literal] = "int_literal",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__horizontal_whitespace] = "_horizontal_whitespace",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_variable_literal] = "variable_literal",
  [sym_if_statement] = "if_statement",
  [sym_elseif] = "elseif",
  [sym__if_fail] = "_if_fail",
  [sym__if_neq] = "_if_neq",
  [sym__if_equ] = "_if_equ",
  [sym__if_matches] = "_if_matches",
  [sym__statement_block] = "_statement_block",
  [sym__file_statement] = "_file_statement",
  [sym_rrm_statement] = "rrm_statement",
  [sym_copy_statement] = "copy_statement",
  [sym_redirfile_statement] = "redirfile_statement",
  [sym_loadexec_statement] = "loadexec_statement",
  [sym_add_widget_statement] = "add_widget_statement",
  [sym_exit_statement] = "exit_statement",
  [sym_set_statement] = "set_statement",
  [sym_message_statement] = "message_statement",
  [sym_echo_statement] = "echo_statement",
  [sym_return_statement] = "return_statement",
  [sym_goto_statement] = "goto_statement",
  [sym__parameter] = "_parameter",
  [sym_label] = "label",
  [sym_string_literal] = "string_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_pattern_wildcard] = "pattern_wildcard",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__statement_block_repeat1] = "_statement_block_repeat1",
  [aux_sym_loadexec_statement_repeat1] = "loadexec_statement_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_pattern_literal_repeat1] = "pattern_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_literal_token1] = aux_sym_variable_literal_token1,
  [sym_comment] = sym_comment,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ENDIF] = anon_sym_ENDIF,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [sym_fail_token] = sym_fail_token,
  [sym_neq_token] = sym_neq_token,
  [sym_equ_token] = sym_equ_token,
  [sym_matches_token] = sym_matches_token,
  [anon_sym_RRM] = anon_sym_RRM,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_REDIRFILE] = anon_sym_REDIRFILE,
  [anon_sym_LOADEXEC] = anon_sym_LOADEXEC,
  [anon_sym_ADDWIDGET] = anon_sym_ADDWIDGET,
  [anon_sym_EXIT] = anon_sym_EXIT,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_MESSAGE] = anon_sym_MESSAGE,
  [anon_sym_ECHO] = anon_sym_ECHO,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_GOTO] = anon_sym_GOTO,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_pattern_literal_token1] = aux_sym_pattern_literal_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_int_literal] = sym_int_literal,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__horizontal_whitespace] = sym__horizontal_whitespace,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_variable_literal] = sym_variable_literal,
  [sym_if_statement] = sym_if_statement,
  [sym_elseif] = sym_elseif,
  [sym__if_fail] = sym__if_fail,
  [sym__if_neq] = sym__if_neq,
  [sym__if_equ] = sym__if_equ,
  [sym__if_matches] = sym__if_matches,
  [sym__statement_block] = sym__statement_block,
  [sym__file_statement] = sym__file_statement,
  [sym_rrm_statement] = sym_rrm_statement,
  [sym_copy_statement] = sym_copy_statement,
  [sym_redirfile_statement] = sym_redirfile_statement,
  [sym_loadexec_statement] = sym_loadexec_statement,
  [sym_add_widget_statement] = sym_add_widget_statement,
  [sym_exit_statement] = sym_exit_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_message_statement] = sym_message_statement,
  [sym_echo_statement] = sym_echo_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_goto_statement] = sym_goto_statement,
  [sym__parameter] = sym__parameter,
  [sym_label] = sym_label,
  [sym_string_literal] = sym_string_literal,
  [sym_pattern_literal] = sym_pattern_literal,
  [sym_pattern_wildcard] = sym_pattern_wildcard,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__statement_block_repeat1] = aux_sym__statement_block_repeat1,
  [aux_sym_loadexec_statement_repeat1] = aux_sym_loadexec_statement_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_pattern_literal_repeat1] = aux_sym_pattern_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [sym_fail_token] = {
    .visible = true,
    .named = true,
  },
  [sym_neq_token] = {
    .visible = true,
    .named = true,
  },
  [sym_equ_token] = {
    .visible = true,
    .named = true,
  },
  [sym_matches_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RRM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REDIRFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOADEXEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDWIDGET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MESSAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ECHO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GOTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__horizontal_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [sym__if_fail] = {
    .visible = false,
    .named = true,
  },
  [sym__if_neq] = {
    .visible = false,
    .named = true,
  },
  [sym__if_equ] = {
    .visible = false,
    .named = true,
  },
  [sym__if_matches] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_block] = {
    .visible = false,
    .named = true,
  },
  [sym__file_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_rrm_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_redirfile_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loadexec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_add_widget_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_message_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_goto_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_wildcard] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loadexec_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 42,
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
  [83] = 68,
  [84] = 68,
  [85] = 77,
  [86] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      ADVANCE_MAP(
        '"', 98,
        '#', 72,
        '$', 70,
        '*', 106,
        '-', 68,
        ':', 96,
        '?', 105,
        'A', 11,
        'C', 45,
        'E', 7,
        'F', 4,
        'G', 46,
        'I', 26,
        'L', 49,
        'M', 5,
        'N', 16,
        'R', 17,
        'S', 22,
        '\t', 109,
        ' ', 109,
        '\n', 108,
        '\r', 108,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(32);
      if (lookahead == 'L') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'Q') ADVANCE(63);
      if (lookahead == 'X') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'F') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'F') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'F') ADVANCE(80);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'G') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'H') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'Q') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(3);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'U') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 65:
      if (lookahead == 'W') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'X') ADVANCE(21);
      END_STATE();
    case 67:
      if (lookahead == 'Y') ADVANCE(86);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_literal_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '$') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '?') ADVANCE(104);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ENDIF);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_fail_token);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_neq_token);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_equ_token);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_matches_token);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RRM);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_REDIRFILE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LOADEXEC);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ADDWIDGET);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EXIT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_MESSAGE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ECHO);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GOTO);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_pattern_literal_token1);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_pattern_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '?') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_pattern_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '*' &&
          lookahead != '?') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__horizontal_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 102},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 102},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 99},
  [45] = {.lex_state = 99},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 99},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ENDIF] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [sym_fail_token] = ACTIONS(1),
    [sym_neq_token] = ACTIONS(1),
    [sym_equ_token] = ACTIONS(1),
    [sym_matches_token] = ACTIONS(1),
    [anon_sym_RRM] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_REDIRFILE] = ACTIONS(1),
    [anon_sym_LOADEXEC] = ACTIONS(1),
    [anon_sym_ADDWIDGET] = ACTIONS(1),
    [anon_sym_EXIT] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_MESSAGE] = ACTIONS(1),
    [anon_sym_ECHO] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_GOTO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym__line] = STATE(57),
    [sym__statement] = STATE(57),
    [sym_if_statement] = STATE(57),
    [sym__file_statement] = STATE(57),
    [sym_rrm_statement] = STATE(57),
    [sym_copy_statement] = STATE(57),
    [sym_redirfile_statement] = STATE(57),
    [sym_loadexec_statement] = STATE(57),
    [sym_add_widget_statement] = STATE(57),
    [sym_exit_statement] = STATE(57),
    [sym_set_statement] = STATE(57),
    [sym_message_statement] = STATE(57),
    [sym_echo_statement] = STATE(57),
    [sym_return_statement] = STATE(57),
    [sym_goto_statement] = STATE(57),
    [sym_label] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IF] = ACTIONS(7),
    [anon_sym_RRM] = ACTIONS(9),
    [anon_sym_COPY] = ACTIONS(11),
    [anon_sym_REDIRFILE] = ACTIONS(13),
    [anon_sym_LOADEXEC] = ACTIONS(15),
    [anon_sym_ADDWIDGET] = ACTIONS(17),
    [anon_sym_EXIT] = ACTIONS(19),
    [anon_sym_SET] = ACTIONS(21),
    [anon_sym_MESSAGE] = ACTIONS(23),
    [anon_sym_ECHO] = ACTIONS(25),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_GOTO] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(7), 1,
      anon_sym_IF,
    ACTIONS(9), 1,
      anon_sym_RRM,
    ACTIONS(11), 1,
      anon_sym_COPY,
    ACTIONS(13), 1,
      anon_sym_REDIRFILE,
    ACTIONS(15), 1,
      anon_sym_LOADEXEC,
    ACTIONS(17), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(19), 1,
      anon_sym_EXIT,
    ACTIONS(21), 1,
      anon_sym_SET,
    ACTIONS(23), 1,
      anon_sym_MESSAGE,
    ACTIONS(25), 1,
      anon_sym_ECHO,
    ACTIONS(27), 1,
      anon_sym_RETURN,
    ACTIONS(29), 1,
      anon_sym_GOTO,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(57), 16,
      sym__line,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
      sym_label,
  [68] = 17,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(40), 1,
      anon_sym_RRM,
    ACTIONS(43), 1,
      anon_sym_COPY,
    ACTIONS(46), 1,
      anon_sym_REDIRFILE,
    ACTIONS(49), 1,
      anon_sym_LOADEXEC,
    ACTIONS(52), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(55), 1,
      anon_sym_EXIT,
    ACTIONS(58), 1,
      anon_sym_SET,
    ACTIONS(61), 1,
      anon_sym_MESSAGE,
    ACTIONS(64), 1,
      anon_sym_ECHO,
    ACTIONS(67), 1,
      anon_sym_RETURN,
    ACTIONS(70), 1,
      anon_sym_GOTO,
    ACTIONS(73), 1,
      anon_sym_COLON,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(57), 16,
      sym__line,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
      sym_label,
  [136] = 18,
    ACTIONS(7), 1,
      anon_sym_IF,
    ACTIONS(9), 1,
      anon_sym_RRM,
    ACTIONS(11), 1,
      anon_sym_COPY,
    ACTIONS(13), 1,
      anon_sym_REDIRFILE,
    ACTIONS(15), 1,
      anon_sym_LOADEXEC,
    ACTIONS(17), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(19), 1,
      anon_sym_EXIT,
    ACTIONS(21), 1,
      anon_sym_SET,
    ACTIONS(23), 1,
      anon_sym_MESSAGE,
    ACTIONS(25), 1,
      anon_sym_ECHO,
    ACTIONS(27), 1,
      anon_sym_RETURN,
    ACTIONS(29), 1,
      anon_sym_GOTO,
    ACTIONS(76), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__statement_block_repeat1,
    STATE(13), 1,
      aux_sym__whitespace,
    STATE(59), 1,
      sym__statement_block,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(61), 14,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
  [205] = 18,
    ACTIONS(7), 1,
      anon_sym_IF,
    ACTIONS(9), 1,
      anon_sym_RRM,
    ACTIONS(11), 1,
      anon_sym_COPY,
    ACTIONS(13), 1,
      anon_sym_REDIRFILE,
    ACTIONS(15), 1,
      anon_sym_LOADEXEC,
    ACTIONS(17), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(19), 1,
      anon_sym_EXIT,
    ACTIONS(21), 1,
      anon_sym_SET,
    ACTIONS(23), 1,
      anon_sym_MESSAGE,
    ACTIONS(25), 1,
      anon_sym_ECHO,
    ACTIONS(27), 1,
      anon_sym_RETURN,
    ACTIONS(29), 1,
      anon_sym_GOTO,
    ACTIONS(76), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__statement_block_repeat1,
    STATE(13), 1,
      aux_sym__whitespace,
    STATE(63), 1,
      sym__statement_block,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(61), 14,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
  [274] = 18,
    ACTIONS(7), 1,
      anon_sym_IF,
    ACTIONS(9), 1,
      anon_sym_RRM,
    ACTIONS(11), 1,
      anon_sym_COPY,
    ACTIONS(13), 1,
      anon_sym_REDIRFILE,
    ACTIONS(15), 1,
      anon_sym_LOADEXEC,
    ACTIONS(17), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(19), 1,
      anon_sym_EXIT,
    ACTIONS(21), 1,
      anon_sym_SET,
    ACTIONS(23), 1,
      anon_sym_MESSAGE,
    ACTIONS(25), 1,
      anon_sym_ECHO,
    ACTIONS(27), 1,
      anon_sym_RETURN,
    ACTIONS(29), 1,
      anon_sym_GOTO,
    ACTIONS(76), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__statement_block_repeat1,
    STATE(13), 1,
      aux_sym__whitespace,
    STATE(62), 1,
      sym__statement_block,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(61), 14,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
  [343] = 18,
    ACTIONS(7), 1,
      anon_sym_IF,
    ACTIONS(9), 1,
      anon_sym_RRM,
    ACTIONS(11), 1,
      anon_sym_COPY,
    ACTIONS(13), 1,
      anon_sym_REDIRFILE,
    ACTIONS(15), 1,
      anon_sym_LOADEXEC,
    ACTIONS(17), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(19), 1,
      anon_sym_EXIT,
    ACTIONS(21), 1,
      anon_sym_SET,
    ACTIONS(23), 1,
      anon_sym_MESSAGE,
    ACTIONS(25), 1,
      anon_sym_ECHO,
    ACTIONS(27), 1,
      anon_sym_RETURN,
    ACTIONS(29), 1,
      anon_sym_GOTO,
    ACTIONS(76), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__statement_block_repeat1,
    STATE(13), 1,
      aux_sym__whitespace,
    STATE(64), 1,
      sym__statement_block,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(61), 14,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
  [412] = 16,
    ACTIONS(7), 1,
      anon_sym_IF,
    ACTIONS(9), 1,
      anon_sym_RRM,
    ACTIONS(11), 1,
      anon_sym_COPY,
    ACTIONS(13), 1,
      anon_sym_REDIRFILE,
    ACTIONS(15), 1,
      anon_sym_LOADEXEC,
    ACTIONS(17), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(19), 1,
      anon_sym_EXIT,
    ACTIONS(21), 1,
      anon_sym_SET,
    ACTIONS(23), 1,
      anon_sym_MESSAGE,
    ACTIONS(25), 1,
      anon_sym_ECHO,
    ACTIONS(27), 1,
      anon_sym_RETURN,
    ACTIONS(29), 1,
      anon_sym_GOTO,
    STATE(9), 1,
      aux_sym__statement_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(78), 2,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
    STATE(61), 14,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
  [476] = 16,
    ACTIONS(80), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_RRM,
    ACTIONS(88), 1,
      anon_sym_COPY,
    ACTIONS(91), 1,
      anon_sym_REDIRFILE,
    ACTIONS(94), 1,
      anon_sym_LOADEXEC,
    ACTIONS(97), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(100), 1,
      anon_sym_EXIT,
    ACTIONS(103), 1,
      anon_sym_SET,
    ACTIONS(106), 1,
      anon_sym_MESSAGE,
    ACTIONS(109), 1,
      anon_sym_ECHO,
    ACTIONS(112), 1,
      anon_sym_RETURN,
    ACTIONS(115), 1,
      anon_sym_GOTO,
    STATE(9), 1,
      aux_sym__statement_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(83), 2,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
    STATE(61), 14,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
  [540] = 14,
    ACTIONS(7), 1,
      anon_sym_IF,
    ACTIONS(9), 1,
      anon_sym_RRM,
    ACTIONS(11), 1,
      anon_sym_COPY,
    ACTIONS(13), 1,
      anon_sym_REDIRFILE,
    ACTIONS(15), 1,
      anon_sym_LOADEXEC,
    ACTIONS(17), 1,
      anon_sym_ADDWIDGET,
    ACTIONS(19), 1,
      anon_sym_EXIT,
    ACTIONS(21), 1,
      anon_sym_SET,
    ACTIONS(23), 1,
      anon_sym_MESSAGE,
    ACTIONS(25), 1,
      anon_sym_ECHO,
    ACTIONS(27), 1,
      anon_sym_RETURN,
    ACTIONS(29), 1,
      anon_sym_GOTO,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(58), 14,
      sym__statement,
      sym_if_statement,
      sym__file_statement,
      sym_rrm_statement,
      sym_copy_statement,
      sym_redirfile_statement,
      sym_loadexec_statement,
      sym_add_widget_statement,
      sym_exit_statement,
      sym_set_statement,
      sym_message_statement,
      sym_echo_statement,
      sym_return_statement,
      sym_goto_statement,
  [597] = 4,
    ACTIONS(120), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(118), 16,
      ts_builtin_sym_end,
      anon_sym_IF,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
      anon_sym_RRM,
      anon_sym_COPY,
      anon_sym_REDIRFILE,
      anon_sym_LOADEXEC,
      anon_sym_ADDWIDGET,
      anon_sym_EXIT,
      anon_sym_SET,
      anon_sym_MESSAGE,
      anon_sym_ECHO,
      anon_sym_RETURN,
      anon_sym_GOTO,
      anon_sym_COLON,
  [626] = 4,
    ACTIONS(123), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(35), 14,
      ts_builtin_sym_end,
      anon_sym_IF,
      anon_sym_RRM,
      anon_sym_COPY,
      anon_sym_REDIRFILE,
      anon_sym_LOADEXEC,
      anon_sym_ADDWIDGET,
      anon_sym_EXIT,
      anon_sym_SET,
      anon_sym_MESSAGE,
      anon_sym_ECHO,
      anon_sym_RETURN,
      anon_sym_GOTO,
      anon_sym_COLON,
  [653] = 5,
    ACTIONS(120), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(78), 2,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
    ACTIONS(118), 12,
      anon_sym_IF,
      anon_sym_RRM,
      anon_sym_COPY,
      anon_sym_REDIRFILE,
      anon_sym_LOADEXEC,
      anon_sym_ADDWIDGET,
      anon_sym_EXIT,
      anon_sym_SET,
      anon_sym_MESSAGE,
      anon_sym_ECHO,
      anon_sym_RETURN,
      anon_sym_GOTO,
  [682] = 4,
    ACTIONS(123), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(83), 14,
      anon_sym_IF,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
      anon_sym_RRM,
      anon_sym_COPY,
      anon_sym_REDIRFILE,
      anon_sym_LOADEXEC,
      anon_sym_ADDWIDGET,
      anon_sym_EXIT,
      anon_sym_SET,
      anon_sym_MESSAGE,
      anon_sym_ECHO,
      anon_sym_RETURN,
      anon_sym_GOTO,
  [709] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    ACTIONS(131), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(21), 4,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
      aux_sym_loadexec_statement_repeat1,
  [732] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    ACTIONS(133), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(21), 4,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
      aux_sym_loadexec_statement_repeat1,
  [755] = 6,
    ACTIONS(135), 1,
      sym_fail_token,
    ACTIONS(137), 1,
      sym_neq_token,
    ACTIONS(139), 1,
      sym_equ_token,
    ACTIONS(141), 1,
      sym_matches_token,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(50), 4,
      sym__if_fail,
      sym__if_neq,
      sym__if_equ,
      sym__if_matches,
  [778] = 6,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_pattern_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(151), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    STATE(20), 3,
      sym_variable_literal,
      sym_pattern_wildcard,
      aux_sym_pattern_literal_repeat1,
  [801] = 6,
    ACTIONS(135), 1,
      sym_fail_token,
    ACTIONS(137), 1,
      sym_neq_token,
    ACTIONS(139), 1,
      sym_equ_token,
    ACTIONS(141), 1,
      sym_matches_token,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(65), 4,
      sym__if_fail,
      sym__if_neq,
      sym__if_equ,
      sym__if_matches,
  [824] = 6,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_pattern_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(151), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    STATE(22), 3,
      sym_variable_literal,
      sym_pattern_wildcard,
      aux_sym_pattern_literal_repeat1,
  [847] = 6,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_int_literal,
    ACTIONS(166), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(21), 4,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
      aux_sym_loadexec_statement_repeat1,
  [870] = 6,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      aux_sym_pattern_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(176), 2,
      anon_sym_QMARK,
      anon_sym_STAR,
    STATE(22), 3,
      sym_variable_literal,
      sym_pattern_wildcard,
      aux_sym_pattern_literal_repeat1,
  [893] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(15), 4,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
      aux_sym_loadexec_statement_repeat1,
  [913] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(16), 4,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
      aux_sym_loadexec_statement_repeat1,
  [933] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(32), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [952] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(73), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [971] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(76), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [990] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(78), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1009] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(81), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1028] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(80), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1047] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(55), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1066] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(54), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1085] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(71), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1104] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(56), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1123] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(72), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1142] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(74), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1161] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(66), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1180] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(26), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1199] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(27), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1218] = 5,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 3,
      sym_variable_literal,
      sym__parameter,
      sym_string_literal,
  [1237] = 5,
    ACTIONS(215), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(44), 2,
      sym_variable_literal,
      aux_sym_string_literal_repeat1,
  [1255] = 3,
    ACTIONS(223), 1,
      aux_sym_pattern_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(221), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      anon_sym_STAR,
  [1269] = 3,
    ACTIONS(227), 1,
      aux_sym_pattern_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(225), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_QMARK,
      anon_sym_STAR,
  [1283] = 5,
    ACTIONS(215), 1,
      anon_sym_DOLLAR,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(45), 2,
      sym_variable_literal,
      aux_sym_string_literal_repeat1,
  [1301] = 5,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(45), 2,
      sym_variable_literal,
      aux_sym_string_literal_repeat1,
  [1319] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(241), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym__whitespace_token1,
  [1330] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(221), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym__whitespace_token1,
  [1341] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(243), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym__whitespace_token1,
  [1352] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(245), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
  [1362] = 4,
    ACTIONS(247), 1,
      anon_sym_ENDIF,
    ACTIONS(249), 1,
      anon_sym_ELSEIF,
    STATE(82), 1,
      sym_elseif,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1376] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
  [1386] = 3,
    ACTIONS(223), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(221), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [1398] = 3,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1409] = 3,
    ACTIONS(253), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1420] = 3,
    ACTIONS(255), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1431] = 3,
    ACTIONS(257), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1442] = 3,
    ACTIONS(259), 1,
      aux_sym__whitespace_token1,
    STATE(12), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1453] = 3,
    ACTIONS(261), 1,
      aux_sym__whitespace_token1,
    STATE(4), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1464] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(263), 2,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
  [1473] = 3,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_pattern_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1484] = 3,
    ACTIONS(267), 1,
      aux_sym__whitespace_token1,
    STATE(14), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1495] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(269), 2,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
  [1504] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(271), 2,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
  [1513] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_ENDIF,
      anon_sym_ELSEIF,
  [1522] = 2,
    ACTIONS(275), 1,
      anon_sym_ENDIF,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1530] = 2,
    ACTIONS(277), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1538] = 2,
    ACTIONS(279), 1,
      aux_sym_label_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1546] = 2,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1554] = 2,
    ACTIONS(283), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1562] = 2,
    ACTIONS(285), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1570] = 2,
    ACTIONS(287), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1578] = 2,
    ACTIONS(289), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1586] = 2,
    ACTIONS(291), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1594] = 2,
    ACTIONS(293), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1602] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1610] = 2,
    ACTIONS(297), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1618] = 2,
    ACTIONS(299), 1,
      aux_sym_variable_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1626] = 2,
    ACTIONS(301), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1634] = 2,
    ACTIONS(303), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1642] = 2,
    ACTIONS(305), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1650] = 2,
    ACTIONS(307), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1658] = 2,
    ACTIONS(309), 1,
      anon_sym_ENDIF,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1666] = 2,
    ACTIONS(311), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1674] = 2,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1682] = 2,
    ACTIONS(315), 1,
      aux_sym_variable_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [1690] = 2,
    ACTIONS(317), 1,
      aux_sym_variable_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 205,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 343,
  [SMALL_STATE(8)] = 412,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 540,
  [SMALL_STATE(11)] = 597,
  [SMALL_STATE(12)] = 626,
  [SMALL_STATE(13)] = 653,
  [SMALL_STATE(14)] = 682,
  [SMALL_STATE(15)] = 709,
  [SMALL_STATE(16)] = 732,
  [SMALL_STATE(17)] = 755,
  [SMALL_STATE(18)] = 778,
  [SMALL_STATE(19)] = 801,
  [SMALL_STATE(20)] = 824,
  [SMALL_STATE(21)] = 847,
  [SMALL_STATE(22)] = 870,
  [SMALL_STATE(23)] = 893,
  [SMALL_STATE(24)] = 913,
  [SMALL_STATE(25)] = 933,
  [SMALL_STATE(26)] = 952,
  [SMALL_STATE(27)] = 971,
  [SMALL_STATE(28)] = 990,
  [SMALL_STATE(29)] = 1009,
  [SMALL_STATE(30)] = 1028,
  [SMALL_STATE(31)] = 1047,
  [SMALL_STATE(32)] = 1066,
  [SMALL_STATE(33)] = 1085,
  [SMALL_STATE(34)] = 1104,
  [SMALL_STATE(35)] = 1123,
  [SMALL_STATE(36)] = 1142,
  [SMALL_STATE(37)] = 1161,
  [SMALL_STATE(38)] = 1180,
  [SMALL_STATE(39)] = 1199,
  [SMALL_STATE(40)] = 1218,
  [SMALL_STATE(41)] = 1237,
  [SMALL_STATE(42)] = 1255,
  [SMALL_STATE(43)] = 1269,
  [SMALL_STATE(44)] = 1283,
  [SMALL_STATE(45)] = 1301,
  [SMALL_STATE(46)] = 1319,
  [SMALL_STATE(47)] = 1330,
  [SMALL_STATE(48)] = 1341,
  [SMALL_STATE(49)] = 1352,
  [SMALL_STATE(50)] = 1362,
  [SMALL_STATE(51)] = 1376,
  [SMALL_STATE(52)] = 1386,
  [SMALL_STATE(53)] = 1398,
  [SMALL_STATE(54)] = 1409,
  [SMALL_STATE(55)] = 1420,
  [SMALL_STATE(56)] = 1431,
  [SMALL_STATE(57)] = 1442,
  [SMALL_STATE(58)] = 1453,
  [SMALL_STATE(59)] = 1464,
  [SMALL_STATE(60)] = 1473,
  [SMALL_STATE(61)] = 1484,
  [SMALL_STATE(62)] = 1495,
  [SMALL_STATE(63)] = 1504,
  [SMALL_STATE(64)] = 1513,
  [SMALL_STATE(65)] = 1522,
  [SMALL_STATE(66)] = 1530,
  [SMALL_STATE(67)] = 1538,
  [SMALL_STATE(68)] = 1546,
  [SMALL_STATE(69)] = 1554,
  [SMALL_STATE(70)] = 1562,
  [SMALL_STATE(71)] = 1570,
  [SMALL_STATE(72)] = 1578,
  [SMALL_STATE(73)] = 1586,
  [SMALL_STATE(74)] = 1594,
  [SMALL_STATE(75)] = 1602,
  [SMALL_STATE(76)] = 1610,
  [SMALL_STATE(77)] = 1618,
  [SMALL_STATE(78)] = 1626,
  [SMALL_STATE(79)] = 1634,
  [SMALL_STATE(80)] = 1642,
  [SMALL_STATE(81)] = 1650,
  [SMALL_STATE(82)] = 1658,
  [SMALL_STATE(83)] = 1666,
  [SMALL_STATE(84)] = 1674,
  [SMALL_STATE(85)] = 1682,
  [SMALL_STATE(86)] = 1690,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_block, 1, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(11),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_widget_statement, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loadexec_statement, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_literal_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_literal, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_literal, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_wildcard, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_wildcard, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_literal, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_literal, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_fail, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_neq, 5, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_equ, 5, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_matches, 5, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_statement, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_statement, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirfile_statement, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rrm_statement, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pbat(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

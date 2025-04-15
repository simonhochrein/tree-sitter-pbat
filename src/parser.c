#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOLLAR = 1,
  aux_sym_variable_literal_token1 = 2,
  sym_comment = 3,
  anon_sym_IF = 4,
  anon_sym_FAIL = 5,
  anon_sym_ENDIF = 6,
  anon_sym_RRM = 7,
  anon_sym_COPY = 8,
  anon_sym_REDIRFILE = 9,
  anon_sym_LOADEXEC = 10,
  anon_sym_ADDWIDGET = 11,
  anon_sym_EXIT = 12,
  anon_sym_SET = 13,
  anon_sym_MESSAGE = 14,
  anon_sym_ECHO = 15,
  anon_sym_RETURN = 16,
  anon_sym_GOTO = 17,
  anon_sym_COLON = 18,
  aux_sym_label_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_literal_token1 = 21,
  sym_int_literal = 22,
  aux_sym__whitespace_token1 = 23,
  sym__horizontal_whitespace = 24,
  sym_source_file = 25,
  sym__line = 26,
  sym__statement = 27,
  sym_variable_literal = 28,
  sym_condition = 29,
  sym_if_fail = 30,
  sym__file_statement = 31,
  sym_rrm_statement = 32,
  sym_copy_statement = 33,
  sym_redirfile_statement = 34,
  sym_loadexec_statement = 35,
  sym_add_widget_statement = 36,
  sym_exit_statement = 37,
  sym_set_statement = 38,
  sym_message_statement = 39,
  sym_echo_statement = 40,
  sym_return_statement = 41,
  sym_goto_statement = 42,
  sym_parameter = 43,
  sym_label = 44,
  sym_string_literal = 45,
  aux_sym__whitespace = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_if_fail_repeat1 = 48,
  aux_sym_loadexec_statement_repeat1 = 49,
  aux_sym_string_literal_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_literal_token1] = "variable_literal_token1",
  [sym_comment] = "comment",
  [anon_sym_IF] = "IF",
  [anon_sym_FAIL] = "FAIL",
  [anon_sym_ENDIF] = "ENDIF",
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
  [sym_int_literal] = "int_literal",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__horizontal_whitespace] = "_horizontal_whitespace",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_variable_literal] = "variable_literal",
  [sym_condition] = "condition",
  [sym_if_fail] = "if_fail",
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
  [sym_parameter] = "parameter",
  [sym_label] = "label",
  [sym_string_literal] = "string_literal",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_fail_repeat1] = "if_fail_repeat1",
  [aux_sym_loadexec_statement_repeat1] = "loadexec_statement_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_literal_token1] = aux_sym_variable_literal_token1,
  [sym_comment] = sym_comment,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_FAIL] = anon_sym_FAIL,
  [anon_sym_ENDIF] = anon_sym_ENDIF,
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
  [sym_int_literal] = sym_int_literal,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__horizontal_whitespace] = sym__horizontal_whitespace,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_variable_literal] = sym_variable_literal,
  [sym_condition] = sym_condition,
  [sym_if_fail] = sym_if_fail,
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
  [sym_parameter] = sym_parameter,
  [sym_label] = sym_label,
  [sym_string_literal] = sym_string_literal,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_fail_repeat1] = aux_sym_if_fail_repeat1,
  [aux_sym_loadexec_statement_repeat1] = aux_sym_loadexec_statement_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [anon_sym_FAIL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDIF] = {
    .visible = true,
    .named = false,
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
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_if_fail] = {
    .visible = true,
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
  [sym_parameter] = {
    .visible = true,
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
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_fail_repeat1] = {
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
  [34] = 33,
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
  [57] = 45,
  [58] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '"', 80,
        '#', 60,
        '$', 58,
        '-', 56,
        ':', 78,
        'A', 9,
        'C', 38,
        'E', 6,
        'F', 4,
        'G', 39,
        'I', 22,
        'L', 42,
        'M', 14,
        'R', 15,
        'S', 20,
        '\t', 86,
        ' ', 86,
        '\n', 85,
        '\r', 85,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'X') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'F') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'F') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'F') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'G') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'G') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(3);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'W') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'X') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 'Y') ADVANCE(68);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_variable_literal_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '"' ||
          lookahead == '$') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_FAIL);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ENDIF);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RRM);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_REDIRFILE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LOADEXEC);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ADDWIDGET);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EXIT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_MESSAGE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ECHO);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GOTO);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__horizontal_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(86);
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 81},
  [28] = {.lex_state = 81},
  [29] = {.lex_state = 81},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 81},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_FAIL] = ACTIONS(1),
    [anon_sym_ENDIF] = ACTIONS(1),
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
    [sym_int_literal] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__line] = STATE(38),
    [sym__statement] = STATE(38),
    [sym_condition] = STATE(38),
    [sym_if_fail] = STATE(56),
    [sym__file_statement] = STATE(38),
    [sym_rrm_statement] = STATE(38),
    [sym_copy_statement] = STATE(38),
    [sym_redirfile_statement] = STATE(38),
    [sym_loadexec_statement] = STATE(38),
    [sym_add_widget_statement] = STATE(38),
    [sym_exit_statement] = STATE(38),
    [sym_set_statement] = STATE(38),
    [sym_message_statement] = STATE(38),
    [sym_echo_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_goto_statement] = STATE(38),
    [sym_label] = STATE(38),
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
  [2] = {
    [sym__line] = STATE(38),
    [sym__statement] = STATE(38),
    [sym_condition] = STATE(38),
    [sym_if_fail] = STATE(56),
    [sym__file_statement] = STATE(38),
    [sym_rrm_statement] = STATE(38),
    [sym_copy_statement] = STATE(38),
    [sym_redirfile_statement] = STATE(38),
    [sym_loadexec_statement] = STATE(38),
    [sym_add_widget_statement] = STATE(38),
    [sym_exit_statement] = STATE(38),
    [sym_set_statement] = STATE(38),
    [sym_message_statement] = STATE(38),
    [sym_echo_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_goto_statement] = STATE(38),
    [sym_label] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
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
  [3] = {
    [sym__line] = STATE(38),
    [sym__statement] = STATE(38),
    [sym_condition] = STATE(38),
    [sym_if_fail] = STATE(56),
    [sym__file_statement] = STATE(38),
    [sym_rrm_statement] = STATE(38),
    [sym_copy_statement] = STATE(38),
    [sym_redirfile_statement] = STATE(38),
    [sym_loadexec_statement] = STATE(38),
    [sym_add_widget_statement] = STATE(38),
    [sym_exit_statement] = STATE(38),
    [sym_set_statement] = STATE(38),
    [sym_message_statement] = STATE(38),
    [sym_echo_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_goto_statement] = STATE(38),
    [sym_label] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IF] = ACTIONS(37),
    [anon_sym_RRM] = ACTIONS(40),
    [anon_sym_COPY] = ACTIONS(43),
    [anon_sym_REDIRFILE] = ACTIONS(46),
    [anon_sym_LOADEXEC] = ACTIONS(49),
    [anon_sym_ADDWIDGET] = ACTIONS(52),
    [anon_sym_EXIT] = ACTIONS(55),
    [anon_sym_SET] = ACTIONS(58),
    [anon_sym_MESSAGE] = ACTIONS(61),
    [anon_sym_ECHO] = ACTIONS(64),
    [anon_sym_RETURN] = ACTIONS(67),
    [anon_sym_GOTO] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(73),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(37),
    [sym_condition] = STATE(37),
    [sym_if_fail] = STATE(56),
    [sym__file_statement] = STATE(37),
    [sym_rrm_statement] = STATE(37),
    [sym_copy_statement] = STATE(37),
    [sym_redirfile_statement] = STATE(37),
    [sym_loadexec_statement] = STATE(37),
    [sym_add_widget_statement] = STATE(37),
    [sym_exit_statement] = STATE(37),
    [sym_set_statement] = STATE(37),
    [sym_message_statement] = STATE(37),
    [sym_echo_statement] = STATE(37),
    [sym_return_statement] = STATE(37),
    [sym_goto_statement] = STATE(37),
    [aux_sym__whitespace] = STATE(8),
    [aux_sym_if_fail_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IF] = ACTIONS(7),
    [anon_sym_ENDIF] = ACTIONS(76),
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
    [aux_sym__whitespace_token1] = ACTIONS(78),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(37),
    [sym_condition] = STATE(37),
    [sym_if_fail] = STATE(56),
    [sym__file_statement] = STATE(37),
    [sym_rrm_statement] = STATE(37),
    [sym_copy_statement] = STATE(37),
    [sym_redirfile_statement] = STATE(37),
    [sym_loadexec_statement] = STATE(37),
    [sym_add_widget_statement] = STATE(37),
    [sym_exit_statement] = STATE(37),
    [sym_set_statement] = STATE(37),
    [sym_message_statement] = STATE(37),
    [sym_echo_statement] = STATE(37),
    [sym_return_statement] = STATE(37),
    [sym_goto_statement] = STATE(37),
    [aux_sym_if_fail_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IF] = ACTIONS(7),
    [anon_sym_ENDIF] = ACTIONS(80),
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
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [6] = {
    [sym__statement] = STATE(37),
    [sym_condition] = STATE(37),
    [sym_if_fail] = STATE(56),
    [sym__file_statement] = STATE(37),
    [sym_rrm_statement] = STATE(37),
    [sym_copy_statement] = STATE(37),
    [sym_redirfile_statement] = STATE(37),
    [sym_loadexec_statement] = STATE(37),
    [sym_add_widget_statement] = STATE(37),
    [sym_exit_statement] = STATE(37),
    [sym_set_statement] = STATE(37),
    [sym_message_statement] = STATE(37),
    [sym_echo_statement] = STATE(37),
    [sym_return_statement] = STATE(37),
    [sym_goto_statement] = STATE(37),
    [aux_sym_if_fail_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_IF] = ACTIONS(82),
    [anon_sym_ENDIF] = ACTIONS(85),
    [anon_sym_RRM] = ACTIONS(87),
    [anon_sym_COPY] = ACTIONS(90),
    [anon_sym_REDIRFILE] = ACTIONS(93),
    [anon_sym_LOADEXEC] = ACTIONS(96),
    [anon_sym_ADDWIDGET] = ACTIONS(99),
    [anon_sym_EXIT] = ACTIONS(102),
    [anon_sym_SET] = ACTIONS(105),
    [anon_sym_MESSAGE] = ACTIONS(108),
    [anon_sym_ECHO] = ACTIONS(111),
    [anon_sym_RETURN] = ACTIONS(114),
    [anon_sym_GOTO] = ACTIONS(117),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [7] = {
    [sym__statement] = STATE(35),
    [sym_condition] = STATE(35),
    [sym_if_fail] = STATE(56),
    [sym__file_statement] = STATE(35),
    [sym_rrm_statement] = STATE(35),
    [sym_copy_statement] = STATE(35),
    [sym_redirfile_statement] = STATE(35),
    [sym_loadexec_statement] = STATE(35),
    [sym_add_widget_statement] = STATE(35),
    [sym_exit_statement] = STATE(35),
    [sym_set_statement] = STATE(35),
    [sym_message_statement] = STATE(35),
    [sym_echo_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_goto_statement] = STATE(35),
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
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(120), 15,
      ts_builtin_sym_end,
      anon_sym_IF,
      anon_sym_ENDIF,
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
  [28] = 4,
    ACTIONS(78), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
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
  [55] = 4,
    ACTIONS(78), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(85), 13,
      anon_sym_IF,
      anon_sym_ENDIF,
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
  [81] = 7,
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
    STATE(12), 2,
      sym_parameter,
      aux_sym_loadexec_statement_repeat1,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [106] = 7,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_int_literal,
    ACTIONS(142), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(12), 2,
      sym_parameter,
      aux_sym_loadexec_statement_repeat1,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [131] = 7,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    ACTIONS(144), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(12), 2,
      sym_parameter,
      aux_sym_loadexec_statement_repeat1,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [156] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(13), 2,
      sym_parameter,
      aux_sym_loadexec_statement_repeat1,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [178] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(11), 2,
      sym_parameter,
      aux_sym_loadexec_statement_repeat1,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [200] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(50), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [221] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(26), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [242] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(44), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [263] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(24), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [284] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(47), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [305] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(39), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [326] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(42), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [347] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(46), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [368] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(49), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [389] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(54), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [410] = 6,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_int_literal,
    STATE(48), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(31), 2,
      sym_variable_literal,
      sym_string_literal,
  [431] = 5,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_string_literal_token1,
    ACTIONS(149), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(27), 2,
      sym_variable_literal,
      aux_sym_string_literal_repeat1,
  [449] = 5,
    ACTIONS(156), 1,
      anon_sym_DOLLAR,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      aux_sym_string_literal_token1,
    ACTIONS(149), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(27), 2,
      sym_variable_literal,
      aux_sym_string_literal_repeat1,
  [467] = 5,
    ACTIONS(156), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(149), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(28), 2,
      sym_variable_literal,
      aux_sym_string_literal_repeat1,
  [485] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(166), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym__whitespace_token1,
  [496] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(168), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym__whitespace_token1,
  [507] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym__whitespace_token1,
  [518] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 4,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_int_literal,
      aux_sym__whitespace_token1,
  [529] = 3,
    ACTIONS(174), 1,
      aux_sym_string_literal_token1,
    ACTIONS(149), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [541] = 3,
    ACTIONS(176), 1,
      aux_sym__whitespace_token1,
    STATE(4), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [552] = 3,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [563] = 3,
    ACTIONS(178), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [574] = 3,
    ACTIONS(180), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [585] = 2,
    ACTIONS(182), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [593] = 2,
    ACTIONS(184), 1,
      anon_sym_FAIL,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [601] = 2,
    ACTIONS(186), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [609] = 2,
    ACTIONS(188), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [617] = 2,
    ACTIONS(190), 1,
      aux_sym_variable_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [625] = 2,
    ACTIONS(192), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [633] = 2,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [641] = 2,
    ACTIONS(196), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [649] = 2,
    ACTIONS(198), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [657] = 2,
    ACTIONS(200), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [665] = 2,
    ACTIONS(202), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [673] = 2,
    ACTIONS(204), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [681] = 2,
    ACTIONS(206), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [689] = 2,
    ACTIONS(208), 1,
      aux_sym_label_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [697] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [705] = 2,
    ACTIONS(212), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [713] = 2,
    ACTIONS(214), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [721] = 2,
    ACTIONS(216), 1,
      aux_sym__whitespace_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [729] = 2,
    ACTIONS(218), 1,
      anon_sym_DOLLAR,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [737] = 2,
    ACTIONS(220), 1,
      aux_sym_variable_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 28,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 131,
  [SMALL_STATE(14)] = 156,
  [SMALL_STATE(15)] = 178,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 263,
  [SMALL_STATE(20)] = 284,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 326,
  [SMALL_STATE(23)] = 347,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 431,
  [SMALL_STATE(28)] = 449,
  [SMALL_STATE(29)] = 467,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 496,
  [SMALL_STATE(32)] = 507,
  [SMALL_STATE(33)] = 518,
  [SMALL_STATE(34)] = 529,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 552,
  [SMALL_STATE(37)] = 563,
  [SMALL_STATE(38)] = 574,
  [SMALL_STATE(39)] = 585,
  [SMALL_STATE(40)] = 593,
  [SMALL_STATE(41)] = 601,
  [SMALL_STATE(42)] = 609,
  [SMALL_STATE(43)] = 617,
  [SMALL_STATE(44)] = 625,
  [SMALL_STATE(45)] = 633,
  [SMALL_STATE(46)] = 641,
  [SMALL_STATE(47)] = 649,
  [SMALL_STATE(48)] = 657,
  [SMALL_STATE(49)] = 665,
  [SMALL_STATE(50)] = 673,
  [SMALL_STATE(51)] = 681,
  [SMALL_STATE(52)] = 689,
  [SMALL_STATE(53)] = 697,
  [SMALL_STATE(54)] = 705,
  [SMALL_STATE(55)] = 713,
  [SMALL_STATE(56)] = 721,
  [SMALL_STATE(57)] = 729,
  [SMALL_STATE(58)] = 737,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_fail_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_widget_statement, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loadexec_statement_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loadexec_statement, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_literal, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_literal, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_statement, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_statement, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirfile_statement, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rrm_statement, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_fail, 5, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [210] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_fail, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_BEGIN = 1,
  anon_sym_SPACE = 2,
  anon_sym_END = 3,
  aux_sym_data_token1 = 4,
  sym_label = 5,
  sym_dashes = 6,
  sym_comment = 7,
  sym_pem = 8,
  sym_content = 9,
  sym_header = 10,
  sym_footer = 11,
  sym_data = 12,
  aux_sym_pem_repeat1 = 13,
  aux_sym_data_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_SPACE] = " ",
  [anon_sym_END] = "END",
  [aux_sym_data_token1] = "data_token1",
  [sym_label] = "label",
  [sym_dashes] = "dashes",
  [sym_comment] = "comment",
  [sym_pem] = "pem",
  [sym_content] = "content",
  [sym_header] = "header",
  [sym_footer] = "footer",
  [sym_data] = "data",
  [aux_sym_pem_repeat1] = "pem_repeat1",
  [aux_sym_data_repeat1] = "data_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_END] = anon_sym_END,
  [aux_sym_data_token1] = aux_sym_data_token1,
  [sym_label] = sym_label,
  [sym_dashes] = sym_dashes,
  [sym_comment] = sym_comment,
  [sym_pem] = sym_pem,
  [sym_content] = sym_content,
  [sym_header] = sym_header,
  [sym_footer] = sym_footer,
  [sym_data] = sym_data,
  [aux_sym_pem_repeat1] = aux_sym_pem_repeat1,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pem] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_footer] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pem_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(27);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == 'B') ADVANCE(12);
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'G') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_data_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(29);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_dashes);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') SKIP(1)
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [aux_sym_data_token1] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
  },
  [1] = {
    [sym_pem] = STATE(11),
    [sym_content] = STATE(2),
    [sym_header] = STATE(4),
    [aux_sym_pem_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_dashes] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_dashes,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(4), 1,
      sym_header,
    STATE(3), 2,
      sym_content,
      aux_sym_pem_repeat1,
  [17] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_dashes,
    ACTIONS(18), 1,
      sym_comment,
    STATE(4), 1,
      sym_header,
    STATE(3), 2,
      sym_content,
      aux_sym_pem_repeat1,
  [34] = 3,
    ACTIONS(21), 1,
      aux_sym_data_token1,
    STATE(5), 1,
      aux_sym_data_repeat1,
    STATE(9), 1,
      sym_data,
  [44] = 3,
    ACTIONS(23), 1,
      aux_sym_data_token1,
    ACTIONS(25), 1,
      sym_dashes,
    STATE(7), 1,
      aux_sym_data_repeat1,
  [54] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 2,
      sym_dashes,
      sym_comment,
  [62] = 3,
    ACTIONS(31), 1,
      aux_sym_data_token1,
    ACTIONS(34), 1,
      sym_dashes,
    STATE(7), 1,
      aux_sym_data_repeat1,
  [72] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      sym_dashes,
      sym_comment,
  [80] = 2,
    ACTIONS(40), 1,
      sym_dashes,
    STATE(6), 1,
      sym_footer,
  [87] = 1,
    ACTIONS(42), 1,
      anon_sym_BEGIN,
  [91] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
  [95] = 1,
    ACTIONS(46), 1,
      anon_sym_SPACE,
  [99] = 1,
    ACTIONS(48), 1,
      sym_label,
  [103] = 1,
    ACTIONS(50), 1,
      anon_sym_END,
  [107] = 1,
    ACTIONS(52), 1,
      sym_dashes,
  [111] = 1,
    ACTIONS(54), 1,
      anon_sym_SPACE,
  [115] = 1,
    ACTIONS(56), 1,
      aux_sym_data_token1,
  [119] = 1,
    ACTIONS(58), 1,
      sym_label,
  [123] = 1,
    ACTIONS(60), 1,
      sym_dashes,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 91,
  [SMALL_STATE(12)] = 95,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 107,
  [SMALL_STATE(16)] = 111,
  [SMALL_STATE(17)] = 115,
  [SMALL_STATE(18)] = 119,
  [SMALL_STATE(19)] = 123,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pem, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pem, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pem_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pem_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pem_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 5),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footer, 5),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pem(void) {
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_ADD = 1,
  anon_sym_SUB = 2,
  anon_sym_MUL = 3,
  anon_sym_DIV = 4,
  sym_number = 5,
  sym_source_file = 6,
  sym__definition = 7,
  sym_add = 8,
  sym_sub = 9,
  sym_mul = 10,
  sym_div = 11,
  aux_sym_source_file_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ADD] = "ADD",
  [anon_sym_SUB] = "SUB",
  [anon_sym_MUL] = "MUL",
  [anon_sym_DIV] = "DIV",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_MUL] = anon_sym_MUL,
  [anon_sym_DIV] = anon_sym_DIV,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_add] = sym_add,
  [sym_sub] = sym_sub,
  [sym_mul] = sym_mul,
  [sym_div] = sym_div,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIV] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == 'A') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'M') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == 'B') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_MUL);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DIV);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_MUL] = ACTIONS(1),
    [anon_sym_DIV] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__definition] = STATE(2),
    [sym_add] = STATE(2),
    [sym_sub] = STATE(2),
    [sym_mul] = STATE(2),
    [sym_div] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ADD] = ACTIONS(5),
    [anon_sym_SUB] = ACTIONS(7),
    [anon_sym_MUL] = ACTIONS(9),
    [anon_sym_DIV] = ACTIONS(11),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_add] = STATE(3),
    [sym_sub] = STATE(3),
    [sym_mul] = STATE(3),
    [sym_div] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_ADD] = ACTIONS(5),
    [anon_sym_SUB] = ACTIONS(7),
    [anon_sym_MUL] = ACTIONS(9),
    [anon_sym_DIV] = ACTIONS(11),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_add] = STATE(3),
    [sym_sub] = STATE(3),
    [sym_mul] = STATE(3),
    [sym_div] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_ADD] = ACTIONS(17),
    [anon_sym_SUB] = ACTIONS(20),
    [anon_sym_MUL] = ACTIONS(23),
    [anon_sym_DIV] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
  [8] = 1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
  [16] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
  [24] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
  [32] = 1,
    ACTIONS(37), 1,
      sym_number,
  [36] = 1,
    ACTIONS(39), 1,
      sym_number,
  [40] = 1,
    ACTIONS(41), 1,
      sym_number,
  [44] = 1,
    ACTIONS(43), 1,
      sym_number,
  [48] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 8,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 36,
  [SMALL_STATE(10)] = 40,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 48,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_vue() {
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

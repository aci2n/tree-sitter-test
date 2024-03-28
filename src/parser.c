#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_ADD = 2,
  anon_sym_SUB = 3,
  anon_sym_MUL = 4,
  anon_sym_DIV = 5,
  sym__number = 6,
  sym_source_file = 7,
  sym__definition = 8,
  sym_operation = 9,
  sym_operator = 10,
  sym_operand = 11,
  aux_sym_source_file_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_ADD] = "ADD",
  [anon_sym_SUB] = "SUB",
  [anon_sym_MUL] = "MUL",
  [anon_sym_DIV] = "DIV",
  [sym__number] = "_number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_operation] = "operation",
  [sym_operator] = "operator",
  [sym_operand] = "operand",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_MUL] = anon_sym_MUL,
  [anon_sym_DIV] = anon_sym_DIV,
  [sym__number] = sym__number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_operation] = sym_operation,
  [sym_operator] = sym_operator,
  [sym_operand] = sym_operand,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [sym__number] = {
    .visible = false,
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
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(4);
      if (lookahead == 'D') ADVANCE(5);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'S') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'B') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'U') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'V') ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_MUL);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DIV);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_MUL] = ACTIONS(1),
    [anon_sym_DIV] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym__definition] = STATE(2),
    [sym_operation] = STATE(2),
    [sym_operator] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_ADD] = ACTIONS(7),
    [anon_sym_SUB] = ACTIONS(7),
    [anon_sym_MUL] = ACTIONS(7),
    [anon_sym_DIV] = ACTIONS(7),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_operation] = STATE(3),
    [sym_operator] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_ADD] = ACTIONS(7),
    [anon_sym_SUB] = ACTIONS(7),
    [anon_sym_MUL] = ACTIONS(7),
    [anon_sym_DIV] = ACTIONS(7),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_operation] = STATE(3),
    [sym_operator] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_ADD] = ACTIONS(18),
    [anon_sym_SUB] = ACTIONS(18),
    [anon_sym_MUL] = ACTIONS(18),
    [anon_sym_DIV] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
  [9] = 1,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
  [18] = 2,
    ACTIONS(25), 1,
      sym__number,
    STATE(5), 1,
      sym_operand,
  [25] = 1,
    ACTIONS(27), 1,
      sym__number,
  [29] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 9,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 25,
  [SMALL_STATE(8)] = 29,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_test() {
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

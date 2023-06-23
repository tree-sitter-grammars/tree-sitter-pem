#include <tree_sitter/parser.h>

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

enum {
  anon_sym_BEGIN = 1,
  anon_sym_ = 2,
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
  [anon_sym_] = " ",
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
  [anon_sym_] = anon_sym_,
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
  [anon_sym_] = {
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
      if (eof) ADVANCE(163);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(161)
      if (lookahead == ' ') ADVANCE(166);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(224);
      if (lookahead == 'B') ADVANCE(203);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'D') ADVANCE(214);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == 'N') ADVANCE(204);
      if (lookahead == 'P') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(235);
      if (lookahead == 'S') ADVANCE(222);
      if (lookahead == 'T') ADVANCE(227);
      if (lookahead == 'X') ADVANCE(186);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'B') ADVANCE(72);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(125);
      if (lookahead == 'X') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '7') ADVANCE(250);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(6);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == '5') ADVANCE(28);
      if (lookahead == '9') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == '7') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == '9') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(250);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'K') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(145);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(146);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(148);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == 'D') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(251);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == 'M') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 'F') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'G') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'H') ADVANCE(6);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(156);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'K') ADVANCE(66);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(250);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 106:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(164);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(159);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(121);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(153);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'Q') ADVANCE(155);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(93);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(45);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(250);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 153:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 154:
      if (lookahead == 'U') ADVANCE(140);
      END_STATE();
    case 155:
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 156:
      if (lookahead == 'V') ADVANCE(41);
      END_STATE();
    case 157:
      if (lookahead == 'W') ADVANCE(7);
      END_STATE();
    case 158:
      if (lookahead == 'Y') ADVANCE(250);
      END_STATE();
    case 159:
      if (lookahead == 'Y') ADVANCE(14);
      END_STATE();
    case 160:
      if (lookahead == 'Y') ADVANCE(119);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '\n') SKIP(162)
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_data_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '7') ADVANCE(248);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'D') ADVANCE(236);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '0') ADVANCE(187);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '2') ADVANCE(170);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '5') ADVANCE(184);
      if (lookahead == '9') ADVANCE(183);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '9') ADVANCE(176);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(231);
      if (lookahead == 'K') ADVANCE(197);
      if (lookahead == 'R') ADVANCE(215);
      if (lookahead == 'U') ADVANCE(195);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'B') ADVANCE(221);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'C') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'C') ADVANCE(230);
      if (lookahead == 'D') ADVANCE(168);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'C') ADVANCE(174);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'D') ADVANCE(182);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(202);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead == 'M') ADVANCE(232);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'F') ADVANCE(219);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'G') ADVANCE(217);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'H') ADVANCE(170);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(225);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(199);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'I') ADVANCE(200);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'M') ADVANCE(185);
      if (lookahead == 'S') ADVANCE(220);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'N') ADVANCE(247);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'P') ADVANCE(240);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(243);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(188);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(248);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(173);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(238);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(192);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(216);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(209);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(210);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'V') ADVANCE(190);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'W') ADVANCE(171);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'Y') ADVANCE(226);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == 'Y') ADVANCE(177);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_dashes);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') SKIP(1)
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 162},
  [2] = {.lex_state = 162},
  [3] = {.lex_state = 162},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 162},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 162},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [aux_sym_data_token1] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
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
      anon_sym_,
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
      anon_sym_,
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

/*
 * asmz80.c - Z80 Assembler-related utility functions.
 *
 * Written by
 *  Andreas Boose <boose@linux.rz.fh-hannover.de>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#include "vice.h"

#include "asm.h"
#include "types.h"

static int addr_mode_size[] = {
    1, /* ASM_ADDR_MODE_IMPLIED */
    1, /* ASM_ADDR_MODE_ACCUMULATOR */
    2, /* ASM_ADDR_MODE_IMMEDIATE */
    2, /* ASM_ADDR_MODE_ZERO_PAGE */
    2, /* ASM_ADDR_MODE_ZERO_PAGE_X */
    2, /* ASM_ADDR_MODE_ZERO_PAGE_Y */
    3, /* ASM_ADDR_MODE_ABSOLUTE */
    3, /* ASM_ADDR_MODE_ABSOLUTE_X */
    3, /* ASM_ADDR_MODE_ABSOLUTE_Y */
    3, /* ASM_ADDR_MODE_ABS_INDIRECT */
    2, /* ASM_ADDR_MODE_INDIRECT_X */
    2, /* ASM_ADDR_MODE_INDIRECT_Y */
    2, /* ASM_ADDR_MODE_RELATIVE */
    3, /* ASM_ADDR_MODE_ABSOLUTE_A */
    3, /* ASM_ADDR_MODE_ABSOLUTE_HL */
    2, /* ASM_ADDR_MODE_ABS_INDIRECT_ZP */
    3, /* ASM_ADDR_MODE_IMMEDIATE_16 */
    1, /* ASM_ADDR_MODE_REG_B */
    1, /* ASM_ADDR_MODE_REG_C */
    1, /* ASM_ADDR_MODE_REG_D */
    1, /* ASM_ADDR_MODE_REG_E */
    1, /* ASM_ADDR_MODE_REG_H */
    1, /* ASM_ADDR_MODE_REG_L */
    1, /* ASM_ADDR_MODE_REG_AF */
    1, /* ASM_ADDR_MODE_REG_BC */
    1, /* ASM_ADDR_MODE_REG_DE */
    1, /* ASM_ADDR_MODE_REG_HL */
    1, /* ASM_ADDR_MODE_REG_SP */
    1, /* ASM_ADDR_MODE_REG_IND_BC */
    1, /* ASM_ADDR_MODE_REG_IND_DE */
    1, /* ASM_ADDR_MODE_REG_IND_HL */
    1  /* ASM_ADDR_MODE_REG_IND_SP */
};

static asm_opcode_info_t opcode_list[] = {
    /* 00 */ { "NOP",        ASM_ADDR_MODE_IMPLIED },
    /* 01 */ { "LD BC,",     ASM_ADDR_MODE_IMMEDIATE_16 },
    /* 02 */ { "LD (BC),A",  ASM_ADDR_MODE_IMPLIED },
    /* 03 */ { "INC",        ASM_ADDR_MODE_REG_BC },
    /* 04 */ { "INC",        ASM_ADDR_MODE_REG_B },
    /* 05 */ { "DEC",        ASM_ADDR_MODE_REG_B },
    /* 06 */ { "LD B,",      ASM_ADDR_MODE_IMMEDIATE },
    /* 07 */ { "RLCA",       ASM_ADDR_MODE_IMPLIED },
    /* 08 */ { "EX AF,AF'",  ASM_ADDR_MODE_IMPLIED },
    /* 09 */ { "ADD HL,BC",  ASM_ADDR_MODE_IMPLIED },
    /* 0a */ { "LD A,(BC)",  ASM_ADDR_MODE_IMPLIED },
    /* 0b */ { "DEC",        ASM_ADDR_MODE_REG_BC },
    /* 0c */ { "INC",        ASM_ADDR_MODE_REG_C },
    /* 0d */ { "DEC",        ASM_ADDR_MODE_REG_C },
    /* 0e */ { "LD C,",      ASM_ADDR_MODE_IMMEDIATE },
    /* 0f */ { "RRCA",       ASM_ADDR_MODE_IMPLIED },
    /* 10 */ { "DJNZ",       ASM_ADDR_MODE_RELATIVE },
    /* 11 */ { "LD DE,",     ASM_ADDR_MODE_IMMEDIATE_16 },
    /* 12 */ { "LD (DE),A",  ASM_ADDR_MODE_IMPLIED },
    /* 13 */ { "INC",        ASM_ADDR_MODE_REG_DE },
    /* 14 */ { "INC",        ASM_ADDR_MODE_REG_D },
    /* 15 */ { "DEC",        ASM_ADDR_MODE_REG_D },
    /* 16 */ { "LD D,",      ASM_ADDR_MODE_IMMEDIATE },
    /* 17 */ { "RLA",        ASM_ADDR_MODE_IMPLIED },
    /* 18 */ { "JR",         ASM_ADDR_MODE_RELATIVE },
    /* 19 */ { "ADD HL,DE",  ASM_ADDR_MODE_IMPLIED },
    /* 1a */ { "LD A,(DE)",  ASM_ADDR_MODE_IMPLIED },
    /* 1b */ { "DEC",        ASM_ADDR_MODE_REG_DE },
    /* 1c */ { "INC",        ASM_ADDR_MODE_REG_E },
    /* 1d */ { "DEC",        ASM_ADDR_MODE_REG_E },
    /* 1e */ { "LD E,",      ASM_ADDR_MODE_IMMEDIATE },
    /* 1f */ { "RRA",        ASM_ADDR_MODE_IMPLIED },
    /* 20 */ { "JR NZ,",     ASM_ADDR_MODE_RELATIVE },
    /* 21 */ { "LD HL,",     ASM_ADDR_MODE_IMMEDIATE_16 },
    /* 22 */ { "LD",         ASM_ADDR_MODE_ABSOLUTE_HL },
    /* 23 */ { "INC",        ASM_ADDR_MODE_REG_HL },
    /* 24 */ { "INC",        ASM_ADDR_MODE_REG_H },
    /* 25 */ { "DEC",        ASM_ADDR_MODE_REG_H },
    /* 26 */ { "LD H,",      ASM_ADDR_MODE_IMMEDIATE },
    /* 27 */ { "DAA",        ASM_ADDR_MODE_IMPLIED },
    /* 28 */ { "JR Z,",      ASM_ADDR_MODE_RELATIVE },
    /* 29 */ { "ADD HL,HL",  ASM_ADDR_MODE_IMPLIED },
    /* 2a */ { "LD HL,",     ASM_ADDR_MODE_ABS_INDIRECT },
    /* 2b */ { "DEC",        ASM_ADDR_MODE_REG_HL },
    /* 2c */ { "INC",        ASM_ADDR_MODE_REG_L },
    /* 2d */ { "DEC",        ASM_ADDR_MODE_REG_L },
    /* 2e */ { "LD L,",      ASM_ADDR_MODE_IMMEDIATE },
    /* 2f */ { "CPL",        ASM_ADDR_MODE_IMPLIED },
    /* 30 */ { "JR NC,",     ASM_ADDR_MODE_RELATIVE },
    /* 31 */ { "LD SP,",     ASM_ADDR_MODE_IMMEDIATE_16 },
    /* 32 */ { "LD",         ASM_ADDR_MODE_ABSOLUTE_A },
    /* 33 */ { "INC",        ASM_ADDR_MODE_REG_SP },
    /* 34 */ { "INC",        ASM_ADDR_MODE_REG_IND_HL },
    /* 35 */ { "DEC",        ASM_ADDR_MODE_REG_IND_HL },
    /* 36 */ { "LD (HL),",   ASM_ADDR_MODE_IMMEDIATE },
    /* 37 */ { "SCF",        ASM_ADDR_MODE_IMPLIED },
    /* 38 */ { "JR C,",      ASM_ADDR_MODE_RELATIVE },
    /* 39 */ { "ADD HL,SP",  ASM_ADDR_MODE_IMPLIED },
    /* 3a */ { "LD A,",      ASM_ADDR_MODE_ABS_INDIRECT },
    /* 3b */ { "DEC",        ASM_ADDR_MODE_REG_SP },
    /* 3c */ { "INC",        ASM_ADDR_MODE_ACCUMULATOR },
    /* 3d */ { "DEC",        ASM_ADDR_MODE_ACCUMULATOR },
    /* 3e */ { "LD A,",      ASM_ADDR_MODE_IMMEDIATE },
    /* 3f */ { "CCF",        ASM_ADDR_MODE_IMPLIED },
    /* 40 */ { "LD B,B",     ASM_ADDR_MODE_IMPLIED },
    /* 41 */ { "LD B,C",     ASM_ADDR_MODE_IMPLIED },
    /* 42 */ { "LD B,D",     ASM_ADDR_MODE_IMPLIED },
    /* 43 */ { "LD B,E",     ASM_ADDR_MODE_IMPLIED },
    /* 44 */ { "LD B,H",     ASM_ADDR_MODE_IMPLIED },
    /* 45 */ { "LD B,L",     ASM_ADDR_MODE_IMPLIED },
    /* 46 */ { "LD B,(HL)",  ASM_ADDR_MODE_IMPLIED },
    /* 47 */ { "LD B,A",     ASM_ADDR_MODE_IMPLIED },
    /* 48 */ { "LD C,B",     ASM_ADDR_MODE_IMPLIED },
    /* 49 */ { "LD C,C",     ASM_ADDR_MODE_IMPLIED },
    /* 4a */ { "LD C,D",     ASM_ADDR_MODE_IMPLIED },
    /* 4b */ { "LD C,E",     ASM_ADDR_MODE_IMPLIED },
    /* 4c */ { "LD C,H",     ASM_ADDR_MODE_IMPLIED },
    /* 4d */ { "LD C,L",     ASM_ADDR_MODE_IMPLIED },
    /* 4e */ { "LD C,(HL)",  ASM_ADDR_MODE_IMPLIED },
    /* 4f */ { "LD C,A",     ASM_ADDR_MODE_IMPLIED },
    /* 50 */ { "LD D,B",     ASM_ADDR_MODE_IMPLIED },
    /* 51 */ { "LD D,C",     ASM_ADDR_MODE_IMPLIED },
    /* 52 */ { "LD D,D",     ASM_ADDR_MODE_IMPLIED },
    /* 53 */ { "LD D,E",     ASM_ADDR_MODE_IMPLIED },
    /* 54 */ { "LD D,H",     ASM_ADDR_MODE_IMPLIED },
    /* 55 */ { "LD D,L",     ASM_ADDR_MODE_IMPLIED },
    /* 56 */ { "LD D,(HL)",  ASM_ADDR_MODE_IMPLIED },
    /* 57 */ { "LD D,A",     ASM_ADDR_MODE_IMPLIED },
    /* 58 */ { "LD E,B",     ASM_ADDR_MODE_IMPLIED },
    /* 59 */ { "LD E,C",     ASM_ADDR_MODE_IMPLIED },
    /* 5a */ { "LD E,D",     ASM_ADDR_MODE_IMPLIED },
    /* 5b */ { "LD E,E",     ASM_ADDR_MODE_IMPLIED },
    /* 5c */ { "LD E,H",     ASM_ADDR_MODE_IMPLIED },
    /* 5d */ { "LD E,L",     ASM_ADDR_MODE_IMPLIED },
    /* 5e */ { "LD E,(HL)",  ASM_ADDR_MODE_IMPLIED },
    /* 5f */ { "LD E,A",     ASM_ADDR_MODE_IMPLIED },
    /* 60 */ { "LD H,B",     ASM_ADDR_MODE_IMPLIED },
    /* 61 */ { "LD H,C",     ASM_ADDR_MODE_IMPLIED },
    /* 62 */ { "LD H,D",     ASM_ADDR_MODE_IMPLIED },
    /* 63 */ { "LD H,E",     ASM_ADDR_MODE_IMPLIED },
    /* 64 */ { "LD H,H",     ASM_ADDR_MODE_IMPLIED },
    /* 65 */ { "LD H,L",     ASM_ADDR_MODE_IMPLIED },
    /* 66 */ { "LD H,(HL)",  ASM_ADDR_MODE_IMPLIED },
    /* 67 */ { "LD H,A",     ASM_ADDR_MODE_IMPLIED },
    /* 68 */ { "LD L,B",     ASM_ADDR_MODE_IMPLIED },
    /* 69 */ { "LD L,C",     ASM_ADDR_MODE_IMPLIED },
    /* 6a */ { "LD L,D",     ASM_ADDR_MODE_IMPLIED },
    /* 6b */ { "LD L,E",     ASM_ADDR_MODE_IMPLIED },
    /* 6c */ { "LD L,H",     ASM_ADDR_MODE_IMPLIED },
    /* 6d */ { "LD L,L",     ASM_ADDR_MODE_IMPLIED },
    /* 6e */ { "LD L,(HL)",  ASM_ADDR_MODE_IMPLIED },
    /* 6f */ { "LD L,A",     ASM_ADDR_MODE_IMPLIED },
    /* 70 */ { "LD (HL),B",  ASM_ADDR_MODE_IMPLIED },
    /* 71 */ { "LD (HL),C",  ASM_ADDR_MODE_IMPLIED },
    /* 72 */ { "LD (HL),D",  ASM_ADDR_MODE_IMPLIED },
    /* 73 */ { "LD (HL),E",  ASM_ADDR_MODE_IMPLIED },
    /* 74 */ { "LD (HL),H",  ASM_ADDR_MODE_IMPLIED },
    /* 75 */ { "LD (HL),L",  ASM_ADDR_MODE_IMPLIED },
    /* 76 */ { "HALT",       ASM_ADDR_MODE_IMPLIED },
    /* 77 */ { "LD (HL),A",  ASM_ADDR_MODE_IMPLIED },
    /* 78 */ { "LD A,B",     ASM_ADDR_MODE_IMPLIED },
    /* 79 */ { "LD A,C",     ASM_ADDR_MODE_IMPLIED },
    /* 7a */ { "LD A,D",     ASM_ADDR_MODE_IMPLIED },
    /* 7b */ { "LD A,E",     ASM_ADDR_MODE_IMPLIED },
    /* 7c */ { "LD A,H",     ASM_ADDR_MODE_IMPLIED },
    /* 7d */ { "LD A,L",     ASM_ADDR_MODE_IMPLIED },
    /* 7e */ { "LD A,(HL)",  ASM_ADDR_MODE_IMPLIED },
    /* 7f */ { "LD A,A",     ASM_ADDR_MODE_IMPLIED },
    /* 80 */ { "ADD",        ASM_ADDR_MODE_REG_B },
    /* 81 */ { "ADD",        ASM_ADDR_MODE_REG_C },
    /* 82 */ { "ADD",        ASM_ADDR_MODE_REG_D },
    /* 83 */ { "ADD",        ASM_ADDR_MODE_REG_E },
    /* 84 */ { "ADD",        ASM_ADDR_MODE_REG_H },
    /* 85 */ { "ADD",        ASM_ADDR_MODE_REG_L },
    /* 86 */ { "ADD",        ASM_ADDR_MODE_REG_IND_HL },
    /* 87 */ { "ADD",        ASM_ADDR_MODE_ACCUMULATOR },
    /* 88 */ { "ADC",        ASM_ADDR_MODE_REG_B },
    /* 89 */ { "ADC",        ASM_ADDR_MODE_REG_C },
    /* 8a */ { "ADC",        ASM_ADDR_MODE_REG_D },
    /* 8b */ { "ADC",        ASM_ADDR_MODE_REG_E },
    /* 8c */ { "ADC",        ASM_ADDR_MODE_REG_H },
    /* 8d */ { "ADC",        ASM_ADDR_MODE_REG_L },
    /* 8e */ { "ADC",        ASM_ADDR_MODE_REG_IND_HL },
    /* 8f */ { "ADC",        ASM_ADDR_MODE_ACCUMULATOR },
    /* 90 */ { "SUB",        ASM_ADDR_MODE_REG_B },
    /* 91 */ { "SUB",        ASM_ADDR_MODE_REG_C },
    /* 92 */ { "SUB",        ASM_ADDR_MODE_REG_D },
    /* 93 */ { "SUB",        ASM_ADDR_MODE_REG_E },
    /* 94 */ { "SUB",        ASM_ADDR_MODE_REG_H },
    /* 95 */ { "SUB",        ASM_ADDR_MODE_REG_L },
    /* 96 */ { "SUB",        ASM_ADDR_MODE_REG_IND_HL },
    /* 97 */ { "SUB",        ASM_ADDR_MODE_ACCUMULATOR },
    /* 98 */ { "SBC",        ASM_ADDR_MODE_REG_B },
    /* 99 */ { "SBC",        ASM_ADDR_MODE_REG_C },
    /* 9a */ { "SBC",        ASM_ADDR_MODE_REG_D },
    /* 9b */ { "SBC",        ASM_ADDR_MODE_REG_E },
    /* 9c */ { "SBC",        ASM_ADDR_MODE_REG_H },
    /* 9d */ { "SBC",        ASM_ADDR_MODE_REG_L },
    /* 9e */ { "SBC",        ASM_ADDR_MODE_REG_IND_HL },
    /* 9f */ { "SBC",        ASM_ADDR_MODE_ACCUMULATOR },
    /* a0 */ { "AND",        ASM_ADDR_MODE_REG_B },
    /* a1 */ { "AND",        ASM_ADDR_MODE_REG_C },
    /* a2 */ { "AND",        ASM_ADDR_MODE_REG_D },
    /* a3 */ { "AND",        ASM_ADDR_MODE_REG_E },
    /* a4 */ { "AND",        ASM_ADDR_MODE_REG_H },
    /* a5 */ { "AND",        ASM_ADDR_MODE_REG_L },
    /* a6 */ { "AND",        ASM_ADDR_MODE_REG_IND_HL },
    /* a7 */ { "AND",        ASM_ADDR_MODE_ACCUMULATOR },
    /* a8 */ { "XOR",        ASM_ADDR_MODE_REG_B },
    /* a9 */ { "XOR",        ASM_ADDR_MODE_REG_C },
    /* aa */ { "XOR",        ASM_ADDR_MODE_REG_D },
    /* ab */ { "XOR",        ASM_ADDR_MODE_REG_E },
    /* ac */ { "XOR",        ASM_ADDR_MODE_REG_H },
    /* ad */ { "XOR",        ASM_ADDR_MODE_REG_L },
    /* ae */ { "XOR",        ASM_ADDR_MODE_REG_IND_HL },
    /* af */ { "XOR",        ASM_ADDR_MODE_ACCUMULATOR },
    /* b0 */ { "OR",         ASM_ADDR_MODE_REG_B },
    /* b1 */ { "OR",         ASM_ADDR_MODE_REG_C },
    /* b2 */ { "OR",         ASM_ADDR_MODE_REG_D },
    /* b3 */ { "OR",         ASM_ADDR_MODE_REG_E },
    /* b4 */ { "OR",         ASM_ADDR_MODE_REG_H },
    /* b5 */ { "OR",         ASM_ADDR_MODE_REG_L },
    /* b6 */ { "OR",         ASM_ADDR_MODE_REG_IND_HL },
    /* b7 */ { "OR",         ASM_ADDR_MODE_ACCUMULATOR },
    /* b8 */ { "CP",         ASM_ADDR_MODE_REG_B },
    /* b9 */ { "CP",         ASM_ADDR_MODE_REG_C },
    /* ba */ { "CP",         ASM_ADDR_MODE_REG_D },
    /* bb */ { "CP",         ASM_ADDR_MODE_REG_E },
    /* bc */ { "CP",         ASM_ADDR_MODE_REG_H },
    /* bd */ { "CP",         ASM_ADDR_MODE_REG_L },
    /* be */ { "CP",         ASM_ADDR_MODE_REG_IND_HL },
    /* bf */ { "CP",         ASM_ADDR_MODE_ACCUMULATOR },
    /* c0 */ { "RET NZ",     ASM_ADDR_MODE_IMPLIED },
    /* c1 */ { "POP",        ASM_ADDR_MODE_REG_BC },
    /* c2 */ { "JP NZ,",     ASM_ADDR_MODE_ABSOLUTE },
    /* c3 */ { "JP",         ASM_ADDR_MODE_ABSOLUTE },
    /* c4 */ { "CALL NZ,",   ASM_ADDR_MODE_ABSOLUTE },
    /* c5 */ { "PUSH",       ASM_ADDR_MODE_REG_BC },
    /* c6 */ { "ADD",        ASM_ADDR_MODE_IMMEDIATE },
    /* c7 */ { "RST 00",     ASM_ADDR_MODE_IMPLIED },
    /* c8 */ { "RET Z",      ASM_ADDR_MODE_IMPLIED },
    /* c9 */ { "RET",        ASM_ADDR_MODE_IMPLIED },
    /* ca */ { "JP Z,",      ASM_ADDR_MODE_ABSOLUTE },
    /* cb */ { "PFX_CB",     ASM_ADDR_MODE_IMPLIED },
    /* cc */ { "CALL Z,",    ASM_ADDR_MODE_ABSOLUTE },
    /* cd */ { "CALL",       ASM_ADDR_MODE_ABSOLUTE },
    /* ce */ { "ADC",        ASM_ADDR_MODE_IMMEDIATE },
    /* cf */ { "RST 08",     ASM_ADDR_MODE_IMPLIED },
    /* d0 */ { "RET NC",     ASM_ADDR_MODE_IMPLIED },
    /* d1 */ { "POP",        ASM_ADDR_MODE_REG_DE },
    /* d2 */ { "JP NC,",     ASM_ADDR_MODE_ABSOLUTE },
    /* d3 */ { "OUTA",       ASM_ADDR_MODE_ZERO_PAGE },
    /* d4 */ { "CALL NC,",   ASM_ADDR_MODE_ABSOLUTE },
    /* d5 */ { "PUSH",       ASM_ADDR_MODE_REG_DE },
    /* d6 */ { "SUB",        ASM_ADDR_MODE_IMMEDIATE },
    /* d7 */ { "RST 10",     ASM_ADDR_MODE_IMPLIED },
    /* d8 */ { "RET C",      ASM_ADDR_MODE_IMPLIED },
    /* d9 */ { "EXX",        ASM_ADDR_MODE_IMPLIED },
    /* da */ { "JP C,",      ASM_ADDR_MODE_ABSOLUTE },
    /* db */ { "INA",        ASM_ADDR_MODE_ZERO_PAGE },
    /* dc */ { "CALL C,",    ASM_ADDR_MODE_ABSOLUTE },
    /* dd */ { "PFX_DD",     ASM_ADDR_MODE_IMPLIED },
    /* de */ { "SBC",        ASM_ADDR_MODE_IMMEDIATE },
    /* df */ { "RST 18",     ASM_ADDR_MODE_IMPLIED },
    /* e0 */ { "RET PO",     ASM_ADDR_MODE_IMPLIED },
    /* e1 */ { "POP",        ASM_ADDR_MODE_REG_HL },
    /* e2 */ { "JP PO,",     ASM_ADDR_MODE_ABSOLUTE },
    /* e3 */ { "EX HL,(SP)", ASM_ADDR_MODE_IMPLIED },
    /* e4 */ { "CALL PO,",   ASM_ADDR_MODE_ABSOLUTE },
    /* e5 */ { "PUSH",       ASM_ADDR_MODE_REG_HL },
    /* e6 */ { "AND",        ASM_ADDR_MODE_IMMEDIATE },
    /* e7 */ { "RST 20",     ASM_ADDR_MODE_IMPLIED },
    /* e8 */ { "RET PE",     ASM_ADDR_MODE_IMPLIED },
    /* e9 */ { "LD PC,HL",   ASM_ADDR_MODE_IMPLIED },
    /* ea */ { "JP PE,",     ASM_ADDR_MODE_ABSOLUTE },
    /* eb */ { "EX DE,HL",   ASM_ADDR_MODE_IMPLIED },
    /* ec */ { "CALL PE,",   ASM_ADDR_MODE_ABSOLUTE },
    /* ed */ { "PFX_ED",     ASM_ADDR_MODE_IMPLIED },
    /* ee */ { "XOR",        ASM_ADDR_MODE_IMMEDIATE },
    /* ef */ { "RST 28",     ASM_ADDR_MODE_IMPLIED },
    /* f0 */ { "RET P",      ASM_ADDR_MODE_IMPLIED },
    /* f1 */ { "POP",        ASM_ADDR_MODE_REG_AF },
    /* f2 */ { "JP P,",      ASM_ADDR_MODE_ABSOLUTE },
    /* f3 */ { "DI",         ASM_ADDR_MODE_IMPLIED },
    /* f4 */ { "CALL P,",    ASM_ADDR_MODE_ABSOLUTE },
    /* f5 */ { "PUSH",       ASM_ADDR_MODE_REG_AF },
    /* f6 */ { "OR",         ASM_ADDR_MODE_IMMEDIATE },
    /* f7 */ { "RST 30",     ASM_ADDR_MODE_IMPLIED },
    /* f8 */ { "RET M",      ASM_ADDR_MODE_IMPLIED },
    /* f9 */ { "LD SP,HL",   ASM_ADDR_MODE_IMPLIED },
    /* fa */ { "JP M,",      ASM_ADDR_MODE_ABSOLUTE },
    /* fb */ { "EI",         ASM_ADDR_MODE_IMPLIED },
    /* fc */ { "CALL M,",    ASM_ADDR_MODE_ABSOLUTE },
    /* fd */ { "PFX_FD",     ASM_ADDR_MODE_IMPLIED },
    /* fe */ { "CP",         ASM_ADDR_MODE_IMMEDIATE },
    /* ff */ { "RST 38",     ASM_ADDR_MODE_IMPLIED }
};

static asm_opcode_info_t opcode_list_ed[] = {
    /* 00 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 01 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 02 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 03 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 04 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 05 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 06 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 07 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 08 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 09 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 0a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 0b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 0c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 0d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 0e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 0f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 10 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 11 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 12 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 13 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 14 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 15 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 16 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 17 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 18 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 19 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 1a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 1b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 1c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 1d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 1e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 1f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 20 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 21 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 22 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 23 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 24 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 25 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 26 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 27 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 28 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 29 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 2a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 2b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 2c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 2d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 2e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 2f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 30 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 31 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 32 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 33 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 34 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 35 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 36 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 37 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 38 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 39 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 3a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 3b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 3c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 3d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 3e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 3f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 40 */ { "IN B,(BC)",  ASM_ADDR_MODE_IMPLIED },
    /* 41 */ { "OUT (BC),B", ASM_ADDR_MODE_IMPLIED },
    /* 42 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 43 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 44 */ { "NEG",        ASM_ADDR_MODE_IMPLIED },
    /* 45 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 46 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 47 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 48 */ { "IN C,BC",    ASM_ADDR_MODE_IMPLIED },
    /* 49 */ { "OUT BC,C",   ASM_ADDR_MODE_IMPLIED },
    /* 4a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 4b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 4c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 4d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 4e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 4f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 50 */ { "IN D,BC",    ASM_ADDR_MODE_IMPLIED },
    /* 51 */ { "OUT BC,D",   ASM_ADDR_MODE_IMPLIED },
    /* 52 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 53 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 54 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 55 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 56 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 57 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 58 */ { "IN E,BC",    ASM_ADDR_MODE_IMPLIED },
    /* 59 */ { "OUT BC,E",   ASM_ADDR_MODE_IMPLIED },
    /* 5a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 5b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 5c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 5d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 5e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 5f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 60 */ { "IN H,BC",    ASM_ADDR_MODE_IMPLIED },
    /* 61 */ { "OUT BC,H",   ASM_ADDR_MODE_IMPLIED },
    /* 62 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 63 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 64 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 65 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 66 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 67 */ { "RRD",        ASM_ADDR_MODE_IMPLIED },
    /* 68 */ { "IN L,BC",    ASM_ADDR_MODE_IMPLIED },
    /* 69 */ { "OUT BC,L",   ASM_ADDR_MODE_IMPLIED },
    /* 6a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 6b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 6c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 6d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 6e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 6f */ { "RLD",        ASM_ADDR_MODE_IMPLIED },
    /* 70 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 71 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 72 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 73 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 74 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 75 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 76 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 77 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 78 */ { "IN A,BC",    ASM_ADDR_MODE_IMPLIED },
    /* 79 */ { "OUT BC,A",   ASM_ADDR_MODE_IMPLIED },
    /* 7a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 7b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 7c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 7d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 7e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 7f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 80 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 81 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 82 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 83 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 84 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 85 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 86 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 87 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 88 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 89 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 8a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 8b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 8c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 8d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 8e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 8f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 90 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 91 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 92 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 93 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 94 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 95 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 96 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 97 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 98 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 99 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 9a */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 9b */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 9c */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 9d */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 9e */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* 9f */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* a0 */ { "LDI",        ASM_ADDR_MODE_IMPLIED },
    /* a1 */ { "CPI",        ASM_ADDR_MODE_IMPLIED },
    /* a2 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* a3 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* a4 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* a5 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* a6 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* a7 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* a8 */ { "LDD",        ASM_ADDR_MODE_IMPLIED },
    /* a9 */ { "CPD",        ASM_ADDR_MODE_IMPLIED },
    /* aa */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ab */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ac */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ad */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ae */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* af */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* b0 */ { "LDIR",       ASM_ADDR_MODE_IMPLIED },
    /* b1 */ { "CPIR",       ASM_ADDR_MODE_IMPLIED },
    /* b2 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* b3 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* b4 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* b5 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* b6 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* b7 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* b8 */ { "LDDR",       ASM_ADDR_MODE_IMPLIED },
    /* b9 */ { "CPDR",       ASM_ADDR_MODE_IMPLIED },
    /* ba */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* bb */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* bc */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* bd */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* be */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* bf */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c0 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c1 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c2 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c3 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c4 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c5 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c6 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c7 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c8 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* c9 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ca */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* cb */ { "NOP",        ASM_ADDR_MODE_IMPLIED },
    /* cc */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* cd */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ce */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* cf */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d0 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d1 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d2 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d3 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d4 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d5 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d6 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d7 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d8 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* d9 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* da */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* db */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* dc */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* dd */ { "NOP",        ASM_ADDR_MODE_IMPLIED },
    /* de */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* df */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e0 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e1 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e2 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e3 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e4 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e5 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e6 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e7 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e8 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* e9 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ea */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* eb */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ec */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ed */ { "NOP",        ASM_ADDR_MODE_IMPLIED },
    /* ee */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ef */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f0 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f1 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f2 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f3 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f4 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f5 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f6 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f7 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f8 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* f9 */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* fa */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* fb */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* fc */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* fd */ { "NOP",        ASM_ADDR_MODE_IMPLIED },
    /* fe */ { "",           ASM_ADDR_MODE_IMPLIED },
    /* ff */ { "",           ASM_ADDR_MODE_IMPLIED }
};



asm_opcode_info_t *asm_opcode_info_get_z80(BYTE p0, BYTE p1, BYTE p2)
{
    if (p0 == 0xed)
        return opcode_list_ed + (unsigned int) p1;
    return opcode_list + (unsigned int) p0;
}

unsigned int asm_addr_mode_get_size_z80(asm_addr_mode_t mode, BYTE p0, BYTE p1)
{
    if (p0 == 0xed)
        return addr_mode_size[(unsigned int) mode] + 1;
    return addr_mode_size[(unsigned int) mode];
}

void asmz80_init(monitor_cpu_type_t *monitor_cpu_type)
{
    monitor_cpu_type->cpu_type = CPU_Z80;
    monitor_cpu_type->asm_addr_mode_get_size = asm_addr_mode_get_size_z80;
    monitor_cpu_type->asm_opcode_info_get = asm_opcode_info_get_z80;
}


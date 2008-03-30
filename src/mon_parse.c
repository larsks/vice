
/*  A Bison parser, made from ../../vice-0.15.0.15+/src/mon_parse.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	H_NUMBER	258
#define	D_NUMBER	259
#define	O_NUMBER	260
#define	B_NUMBER	261
#define	CONVERT_OP	262
#define	B_DATA	263
#define	TRAIL	264
#define	BAD_CMD	265
#define	MEM_OP	266
#define	IF	267
#define	MEM_COMP	268
#define	MEM_DISK	269
#define	CMD_SEP	270
#define	REG_ASGN_SEP	271
#define	EQUALS	272
#define	CMD_SIDEFX	273
#define	CMD_RETURN	274
#define	CMD_BLOCK_READ	275
#define	CMD_BLOCK_WRITE	276
#define	CMD_UP	277
#define	CMD_DOWN	278
#define	CMD_LOAD	279
#define	CMD_SAVE	280
#define	CMD_VERIFY	281
#define	CMD_IGNORE	282
#define	CMD_HUNT	283
#define	CMD_FILL	284
#define	CMD_MOVE	285
#define	CMD_GOTO	286
#define	CMD_REGISTERS	287
#define	CMD_READSPACE	288
#define	CMD_WRITESPACE	289
#define	CMD_RADIX	290
#define	CMD_MEM_DISPLAY	291
#define	CMD_BREAK	292
#define	CMD_TRACE	293
#define	CMD_IO	294
#define	CMD_BRMON	295
#define	CMD_COMPARE	296
#define	CMD_DUMP	297
#define	CMD_UNDUMP	298
#define	CMD_EXIT	299
#define	CMD_DELETE	300
#define	CMD_CONDITION	301
#define	CMD_COMMAND	302
#define	CMD_ASSEMBLE	303
#define	CMD_DISASSEMBLE	304
#define	CMD_NEXT	305
#define	CMD_STEP	306
#define	CMD_PRINT	307
#define	CMD_DEVICE	308
#define	CMD_HELP	309
#define	CMD_WATCH	310
#define	CMD_DISK	311
#define	CMD_SYSTEM	312
#define	CMD_QUIT	313
#define	CMD_CHDIR	314
#define	CMD_BANK	315
#define	CMD_LOAD_LABELS	316
#define	CMD_SAVE_LABELS	317
#define	CMD_ADD_LABEL	318
#define	CMD_DEL_LABEL	319
#define	CMD_SHOW_LABELS	320
#define	CMD_RECORD	321
#define	CMD_STOP	322
#define	CMD_PLAYBACK	323
#define	CMD_CHAR_DISPLAY	324
#define	CMD_SPRITE_DISPLAY	325
#define	CMD_TEXT_DISPLAY	326
#define	CMD_ENTER_DATA	327
#define	CMD_ENTER_BIN_DATA	328
#define	CMD_BLOAD	329
#define	CMD_BSAVE	330
#define	L_PAREN	331
#define	R_PAREN	332
#define	ARG_IMMEDIATE	333
#define	REG_A	334
#define	REG_X	335
#define	REG_Y	336
#define	COMMA	337
#define	INST_SEP	338
#define	STRING	339
#define	FILENAME	340
#define	R_O_L	341
#define	OPCODE	342
#define	LABEL	343
#define	BANKNAME	344
#define	REGISTER	345
#define	COMPARE_OP	346
#define	RADIX_TYPE	347
#define	INPUT_SPEC	348
#define	CMD_CHECKPT_ONOFF	349
#define	TOGGLE	350

#line 28 "../../vice-0.15.0.15+/src/mon_parse.y"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "vice.h"
#include "types.h"
#include "asm.h"
#include "utils.h"
#include "mon.h"

#define join_ints(x,y) (LO16_TO_HI16(x)|y)
#define separate_int1(x) (HI16_TO_LO16(x))
#define separate_int2(x) (LO16(x))

static int yyerror(char *s);
static int temp;

/* Defined in the lexer */
extern int new_cmd, opt_asm;
extern void free_buffer(void);
extern void make_buffer(char *str);
extern int yylex(void);
extern int cur_len, last_len;

#define ERR_ILLEGAL_INPUT 1     /* Generic error as returned by yacc.  */
#define ERR_RANGE_BAD_START 2
#define ERR_RANGE_BAD_END 3
#define ERR_BAD_CMD 4
#define ERR_EXPECT_BRKNUM 5
#define ERR_EXPECT_END_CMD 6
#define ERR_MISSING_CLOSE_PAREN 7
#define ERR_INCOMPLETE_COMPARE_OP 8
#define ERR_EXPECT_FILENAME 9
#define ERR_ADDR_TOO_BIG 10
#define ERR_IMM_TOO_BIG 11

#define BAD_ADDR (new_addr(e_invalid_space, 0))
#define CHECK_ADDR(x) ((x) == LO16(x))


#line 69 "../../vice-0.15.0.15+/src/mon_parse.y"
typedef union {
	MON_ADDR a;
        int i;
        REG_ID reg;
        CONDITIONAL cond_op;
        CONDITIONAL_NODE *cond_node;
        RADIXTYPE rt;
        ACTION action;
        char *str;
} YYSTYPE;
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		334
#define	YYFLAG		-32768
#define	YYNTBASE	102

#define YYTRANSLATE(x) ((unsigned)(x) <= 350 ? yytranslate[x] : 145)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   100,
   101,    98,    96,     2,    97,     2,    99,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     7,     9,    12,    14,    16,    18,    20,
    22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
    42,    47,    51,    54,    57,    60,    63,    67,    71,    75,
    79,    81,    84,    88,    92,    97,   102,   107,   112,   116,
   117,   123,   127,   132,   135,   141,   147,   153,   159,   165,
   170,   173,   178,   181,   186,   189,   194,   197,   202,   209,
   215,   220,   223,   226,   229,   233,   238,   242,   245,   251,
   256,   260,   263,   267,   270,   274,   277,   280,   284,   288,
   291,   295,   299,   303,   307,   312,   317,   323,   329,   334,
   340,   346,   350,   353,   357,   362,   365,   367,   369,   370,
   372,   374,   376,   377,   379,   382,   386,   388,   392,   394,
   395,   397,   399,   401,   402,   404,   407,   409,   410,   412,
   414,   416,   418,   422,   426,   430,   434,   438,   442,   444,
   448,   452,   456,   460,   462,   464,   466,   469,   471,   473,
   475,   477,   479,   481,   483,   485,   487,   491,   495,   498,
   500,   502,   505,   507,   511,   515,   519,   525,   531,   532
};

static const short yyrhs[] = {   103,
     0,   142,     9,     0,     9,     0,   105,     0,   103,   105,
     0,    15,     0,     9,     0,     1,     0,   106,     0,   108,
     0,   111,     0,   109,     0,   112,     0,   113,     0,   114,
     0,   115,     0,   116,     0,   117,     0,   118,     0,    10,
     0,    60,   130,   120,   104,     0,    31,   129,   104,     0,
    39,   104,     0,    19,   104,     0,    42,   104,     0,    43,
   104,     0,    51,   126,   104,     0,    50,   126,   104,     0,
    22,   126,   104,     0,    23,   126,   104,     0,   107,     0,
    32,   104,     0,    32,   131,   104,     0,    32,   124,   104,
     0,    61,   130,   121,   104,     0,    62,   130,   121,   104,
     0,    63,   129,    88,   104,     0,    64,   130,    88,   104,
     0,    65,   130,   104,     0,     0,    48,   129,   110,   143,
   104,     0,    48,   129,   104,     0,    49,   129,   128,   104,
     0,    49,   104,     0,    30,   129,   129,   129,   104,     0,
    41,   129,   129,   129,   104,     0,    29,   129,   129,   137,
   104,     0,    28,   129,   129,   137,   104,     0,    36,    92,
   129,   128,   104,     0,    36,   129,   128,   104,     0,    36,
   104,     0,    69,   129,   128,   104,     0,    69,   104,     0,
    70,   129,   128,   104,     0,    70,   104,     0,    71,   129,
   128,   104,     0,    71,   104,     0,    37,   129,   128,   104,
     0,    37,   129,   128,    12,   135,   104,     0,    55,   122,
   129,   128,   104,     0,    38,   129,   128,   104,     0,    37,
   104,     0,    38,   104,     0,    55,   104,     0,    94,   127,
   104,     0,    27,   127,   126,   104,     0,    45,   127,   104,
     0,    45,   104,     0,    46,   127,    12,   135,   104,     0,
    47,   127,    84,   104,     0,    18,    95,   104,     0,    18,
   104,     0,    35,    92,   104,     0,    35,   104,     0,    53,
   131,   104,     0,    58,   104,     0,    44,   104,     0,    56,
   119,   104,     0,    52,   134,   104,     0,    54,   104,     0,
    54,   119,   104,     0,    57,   119,   104,     0,     7,   134,
   104,     0,    59,   119,   104,     0,    24,   121,   129,   104,
     0,    74,   121,   129,   104,     0,    25,   121,   129,   129,
   104,     0,    75,   121,   129,   129,   104,     0,    26,   121,
   129,   104,     0,    20,   134,   134,   128,   104,     0,    21,
   134,   134,   129,   104,     0,    66,   121,   104,     0,    67,
   104,     0,    68,   121,   104,     0,    72,   129,   137,   104,
     0,    73,   104,     0,    86,     0,    89,     0,     0,    85,
     0,     1,     0,    11,     0,     0,    90,     0,   131,    90,
     0,   124,    16,   125,     0,   125,     0,   123,    17,   140,
     0,   134,     0,     0,   140,     0,     1,     0,   129,     0,
     0,   132,     0,   131,   132,     0,   131,     0,     0,    13,
     0,    14,     0,   133,     0,   140,     0,   134,    96,   134,
     0,   134,    97,   134,     0,   134,    98,   134,     0,   134,
    99,   134,     0,   100,   134,   101,     0,   100,   134,     1,
     0,   139,     0,   135,    91,   135,     0,   135,    91,     1,
     0,    76,   135,    77,     0,    76,   135,     1,     0,   136,
     0,   123,     0,   140,     0,   137,   138,     0,   138,     0,
   140,     0,    84,     0,   140,     0,   123,     0,     3,     0,
     4,     0,     5,     0,     6,     0,   141,    83,   142,     0,
   142,    83,   142,     0,    87,   144,     0,   142,     0,   141,
     0,    78,   140,     0,   140,     0,   140,    82,    80,     0,
   140,    82,    81,     0,    76,   140,    77,     0,    76,   140,
    82,    80,    77,     0,    76,   140,    77,    82,    81,     0,
     0,    79,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   119,   120,   121,   124,   125,   128,   129,   130,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   160,   161,   162,   165,   166,   167,   168,   169,   172,
   172,   173,   174,   175,   178,   179,   180,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   193,   194,   197,
   199,   200,   201,   202,   206,   207,   208,   209,   210,   211,
   214,   215,   216,   217,   235,   237,   238,   241,   242,   243,
   244,   245,   246,   247,   250,   251,   252,   253,   254,   255,
   256,   259,   260,   261,   264,   265,   268,   271,   272,   275,
   276,   279,   280,   283,   284,   287,   288,   291,   294,   295,
   298,   299,   302,   303,   306,   307,   310,   311,   314,   315,
   318,   321,   323,   324,   325,   326,   327,   328,   329,   332,
   334,   335,   336,   337,   340,   342,   346,   347,   350,   351,
   354,   355,   358,   359,   360,   361,   364,   365,   368,   378,
   379,   382,   384,   389,   394,   399,   400,   401,   402,   403
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","H_NUMBER",
"D_NUMBER","O_NUMBER","B_NUMBER","CONVERT_OP","B_DATA","TRAIL","BAD_CMD","MEM_OP",
"IF","MEM_COMP","MEM_DISK","CMD_SEP","REG_ASGN_SEP","EQUALS","CMD_SIDEFX","CMD_RETURN",
"CMD_BLOCK_READ","CMD_BLOCK_WRITE","CMD_UP","CMD_DOWN","CMD_LOAD","CMD_SAVE",
"CMD_VERIFY","CMD_IGNORE","CMD_HUNT","CMD_FILL","CMD_MOVE","CMD_GOTO","CMD_REGISTERS",
"CMD_READSPACE","CMD_WRITESPACE","CMD_RADIX","CMD_MEM_DISPLAY","CMD_BREAK","CMD_TRACE",
"CMD_IO","CMD_BRMON","CMD_COMPARE","CMD_DUMP","CMD_UNDUMP","CMD_EXIT","CMD_DELETE",
"CMD_CONDITION","CMD_COMMAND","CMD_ASSEMBLE","CMD_DISASSEMBLE","CMD_NEXT","CMD_STEP",
"CMD_PRINT","CMD_DEVICE","CMD_HELP","CMD_WATCH","CMD_DISK","CMD_SYSTEM","CMD_QUIT",
"CMD_CHDIR","CMD_BANK","CMD_LOAD_LABELS","CMD_SAVE_LABELS","CMD_ADD_LABEL","CMD_DEL_LABEL",
"CMD_SHOW_LABELS","CMD_RECORD","CMD_STOP","CMD_PLAYBACK","CMD_CHAR_DISPLAY",
"CMD_SPRITE_DISPLAY","CMD_TEXT_DISPLAY","CMD_ENTER_DATA","CMD_ENTER_BIN_DATA",
"CMD_BLOAD","CMD_BSAVE","L_PAREN","R_PAREN","ARG_IMMEDIATE","REG_A","REG_X",
"REG_Y","COMMA","INST_SEP","STRING","FILENAME","R_O_L","OPCODE","LABEL","BANKNAME",
"REGISTER","COMPARE_OP","RADIX_TYPE","INPUT_SPEC","CMD_CHECKPT_ONOFF","TOGGLE",
"'+'","'-'","'*'","'/'","'('","')'","top_level","command_list","end_cmd","command",
"machine_state_rules","register_mod","symbol_table_rules","asm_rules","@1","memory_rules",
"checkpoint_rules","checkpoint_control_rules","monitor_state_rules","monitor_misc_rules",
"disk_rules","cmd_file_rules","data_entry_rules","rest_of_line","opt_bankname",
"filename","opt_mem_op","register","reg_list","reg_asgn","opt_count","breakpt_num",
"opt_address","address","opt_memspace","memspace","memloc","memaddr","expression",
"cond_expr","compare_operand","data_list","data_element","value","number","assembly_instr_list",
"assembly_instruction","post_assemble","asm_operand_mode", NULL
};
#endif

static const short yyr1[] = {     0,
   102,   102,   102,   103,   103,   104,   104,   104,   105,   105,
   105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
   106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
   106,   107,   107,   107,   108,   108,   108,   108,   108,   110,
   109,   109,   109,   109,   111,   111,   111,   111,   111,   111,
   111,   111,   111,   111,   111,   111,   111,   112,   112,   112,
   112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
   114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
   115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
   116,   117,   117,   117,   118,   118,   119,   120,   120,   121,
   121,   122,   122,   123,   123,   124,   124,   125,   126,   126,
   127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
   132,   133,   134,   134,   134,   134,   134,   134,   134,   135,
   135,   135,   135,   135,   136,   136,   137,   137,   138,   138,
   139,   139,   140,   140,   140,   140,   141,   141,   142,   143,
   143,   144,   144,   144,   144,   144,   144,   144,   144,   144
};

static const short yyr2[] = {     0,
     1,     2,     1,     1,     2,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     4,     3,     2,     2,     2,     2,     3,     3,     3,     3,
     1,     2,     3,     3,     4,     4,     4,     4,     3,     0,
     5,     3,     4,     2,     5,     5,     5,     5,     5,     4,
     2,     4,     2,     4,     2,     4,     2,     4,     6,     5,
     4,     2,     2,     2,     3,     4,     3,     2,     5,     4,
     3,     2,     3,     2,     3,     2,     2,     3,     3,     2,
     3,     3,     3,     3,     4,     4,     5,     5,     4,     5,
     5,     3,     2,     3,     4,     2,     1,     1,     0,     1,
     1,     1,     0,     1,     2,     3,     1,     3,     1,     0,
     1,     1,     1,     0,     1,     2,     1,     0,     1,     1,
     1,     1,     3,     3,     3,     3,     3,     3,     1,     3,
     3,     3,     3,     1,     1,     1,     2,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
     1,     2,     1,     3,     3,     3,     5,     5,     0,     1
};

static const short yydefact[] = {     0,
     0,     3,    20,     0,     0,     0,     0,   110,   110,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   110,   110,     0,     0,     0,     0,     0,     0,
     0,     0,   118,   118,   118,     0,   118,   118,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   159,     0,
     1,     4,     9,    31,    10,    12,    11,    13,    14,    15,
    16,    17,    18,    19,     0,   143,   144,   145,   146,   119,
   120,   104,     0,   142,     0,     0,   129,   141,     8,     7,
     6,     0,    72,    24,     0,     0,     0,   109,     0,   101,
   100,     0,     0,     0,   112,   110,   111,     0,     0,   115,
   121,   122,     0,     0,     0,    32,     0,     0,   107,     0,
     0,    74,     0,    51,   114,    62,   114,    63,   114,    23,
     0,    25,    26,    77,     8,    68,     0,     0,     0,     0,
    44,   114,     0,     0,     0,     0,    97,    80,     0,   102,
    64,     0,     0,     0,    76,     0,    99,   117,     0,     0,
     0,     0,     0,     0,    93,     0,    53,   114,    55,   114,
    57,   114,     0,    96,     0,     0,     0,     0,   160,   153,
   149,     0,     5,     2,     0,   105,     0,     0,     0,     0,
    83,    71,   114,     0,    29,    30,     0,     0,     0,     0,
     0,   116,     0,     0,    22,     0,     0,    34,    33,    73,
   114,     0,   113,     0,     0,     0,    67,     0,     0,    42,
     0,     0,    28,    27,    79,    75,    81,   114,    78,    82,
    84,    98,     0,     0,     0,     0,     0,    39,    92,    94,
     0,     0,     0,   140,     0,   138,   139,     0,     0,     0,
   152,     0,    65,   128,   127,   123,   124,   125,   126,     0,
     0,    85,     0,    89,    66,     0,     0,     0,   108,   106,
     0,    50,     0,    58,    61,     0,     0,   135,     0,   134,
   136,    70,   151,   150,     0,    43,     0,    21,    35,    36,
    37,    38,    52,    54,    56,    95,   137,    86,     0,   156,
     0,   154,   155,    90,    91,    87,    48,    47,    45,    49,
     0,    46,     0,     0,    69,     0,     0,    41,    60,    88,
     0,     0,    59,   133,   132,   131,   130,   147,   148,   158,
   157,     0,     0,     0
};

static const short yydefgoto[] = {   332,
    61,    93,    62,    63,    64,    65,    66,   221,    67,    68,
    69,    70,    71,    72,    73,    74,   149,   233,   102,   152,
    84,   118,   119,    97,   106,   212,   213,   157,   109,   110,
   111,    98,   279,   280,   245,   246,    87,   112,   283,    75,
   285,   181
};

static const short yypact[] = {   762,
    60,-32768,-32768,    68,   210,    60,    60,    60,    60,     1,
     1,     1,   399,   393,   393,   393,   393,   152,    10,   303,
   370,   370,   210,   393,   210,   210,   210,   349,   399,   399,
   393,   370,    60,    60,    60,   132,   198,   334,   -82,   -82,
   210,   -82,   132,   132,   132,   393,   132,   132,     1,   210,
     1,   370,   370,   370,   393,   210,     1,     1,   284,   399,
   840,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    37,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    60,-32768,   -69,    30,-32768,-32768,-32768,-32768,
-32768,   210,-32768,-32768,   134,   134,   210,   270,   210,-32768,
-32768,   393,   393,   393,-32768,    60,-32768,   393,   427,-32768,
-32768,-32768,   393,   393,   210,-32768,    40,   238,-32768,     9,
   210,-32768,   393,-32768,   393,-32768,   393,-32768,   393,-32768,
   393,-32768,-32768,-32768,   258,-32768,   210,    42,   -12,   228,
-32768,   393,   210,   210,    30,   210,-32768,-32768,   210,-32768,
-32768,   393,   210,   210,-32768,   210,   -14,-32768,     1,     1,
    -7,    -3,   210,   210,-32768,   210,-32768,   393,-32768,   393,
-32768,   393,   119,-32768,   393,   393,   427,   427,-32768,    15,
-32768,   210,-32768,-32768,    12,-32768,    60,    60,    60,    60,
-32768,-32768,   165,   165,-32768,-32768,   210,   393,   210,   210,
   119,-32768,   119,   393,-32768,   427,    74,-32768,-32768,-32768,
   393,   210,-32768,   226,   210,   393,-32768,   128,   210,-32768,
     3,   210,-32768,-32768,-32768,-32768,-32768,   393,-32768,-32768,
-32768,-32768,   210,   210,   210,   210,   210,-32768,-32768,-32768,
   210,   210,   210,-32768,   327,-32768,-32768,   210,   393,     7,
-32768,    93,-32768,-32768,-32768,   147,   147,-32768,-32768,   210,
   210,-32768,   210,-32768,-32768,   327,   327,   210,-32768,-32768,
   210,-32768,   128,-32768,-32768,   210,   128,-32768,    21,-32768,
-32768,-32768,    35,    47,   210,-32768,   210,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   210,    53,
    63,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    21,-32768,     2,   179,-32768,     3,     3,-32768,-32768,-32768,
    11,    72,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   159,   162,-32768
};

static const short yypgoto[] = {-32768,
-32768,   273,   114,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   235,-32768,    49,-32768,
   -17,-32768,   -26,    14,   192,   -92,   547,   107,     8,    82,
-32768,    61,  -156,-32768,  -163,  -196,-32768,    -1,-32768,  -201,
-32768,-32768
};


#define	YYLAST		934


static const short yytable[] = {    88,
   117,   100,   324,   147,    88,    88,    88,    88,    85,    89,
    89,   107,   254,    85,    85,    85,    85,    90,    90,   284,
   186,    89,    99,    91,    91,   120,   107,   107,   107,    90,
    89,    88,    88,    88,   214,    91,   215,   266,    90,   267,
    85,    85,    85,   146,    91,   184,   143,   144,   297,   222,
   158,   158,   158,   218,   158,   158,   206,   180,   107,   103,
   104,    86,    76,    77,    78,    79,    95,    96,    89,   297,
   297,   219,    80,    81,   232,   241,    90,   242,   325,   243,
   236,    88,    91,   300,   237,   101,    80,    81,   301,    59,
    85,   330,   314,    88,    88,   145,   252,   164,   186,   166,
   260,   121,    85,    85,    88,   175,   176,   187,   188,   189,
   190,   314,   255,    85,   328,   329,   311,   316,   271,   200,
   313,    76,    77,    78,    79,   187,   188,   189,   190,   317,
    76,    77,    78,    79,   321,   287,    76,    77,    78,    79,
    80,    81,   322,   185,    80,    81,    80,    81,   331,    82,
   159,   160,    89,   162,   163,   193,   194,   327,   333,    83,
    90,   334,    92,    82,    80,    81,    91,    76,    77,    78,
    79,   247,   302,   303,   183,   250,   251,    80,    81,   326,
   270,    76,    77,    78,    79,    88,    88,    88,    88,   117,
   202,    80,    81,     0,    85,    85,    85,    85,    89,   247,
   278,   247,   244,   277,   269,     0,    90,   234,   235,     0,
    89,     0,    91,     0,    85,     0,   281,    82,    90,   137,
   138,   139,     0,    82,    91,    85,    89,     0,    89,   187,
   188,   189,   190,    83,    90,     0,    90,   273,    89,     0,
    91,    82,    91,   247,   189,   190,    90,   256,   257,   258,
   259,   182,    91,   207,   277,   278,     0,     0,  -112,   278,
   187,   188,   189,   190,   247,   247,  -112,     0,    82,     0,
     0,   281,  -112,   153,   154,   281,   156,    94,     0,     0,
    85,     0,     0,   147,    85,     0,    76,    77,    78,    79,
   116,   122,   124,   126,   128,   130,   278,   132,   133,   134,
   136,     0,     0,    89,   141,    76,    77,    78,    79,   148,
   151,    90,   281,   155,   -40,    80,    81,    91,     0,     0,
     0,    85,   165,     0,   167,   169,   171,    89,   174,    76,
    77,    78,    79,     0,    89,    90,  -103,  -103,  -103,  -103,
     0,    91,    90,     0,   150,     0,  -103,  -103,    91,   135,
     0,    76,    77,    78,    79,     0,     0,    90,   191,   177,
     0,   178,   179,    91,   192,   187,   188,   189,   190,   195,
    89,   196,    76,    77,    78,    79,     0,     0,    90,     0,
     0,     0,    80,    81,    91,     0,     0,   205,     0,     0,
   208,     0,   209,   210,   123,    76,    77,    78,    79,   105,
     0,    76,    77,    78,    79,    80,    81,     0,     0,   217,
   244,     0,   220,     0,     0,   223,   224,   225,   226,     0,
     0,   227,     0,     0,     0,   229,   230,     0,   231,    76,
    77,    78,    79,     0,     0,   238,   239,     0,   240,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   253,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   262,
     0,   264,   265,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   272,     0,   274,   275,     0,     0,
     0,   282,     0,     0,   286,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   288,   289,   290,   291,   292,
     0,     0,     0,   293,   294,   295,     0,   296,     0,     0,
   298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   304,   305,     0,   306,     0,     0,   307,   308,
   309,     0,     0,   310,     0,     0,     0,     0,   312,     0,
     0,   315,     0,     0,     0,     0,     0,   318,     0,   319,
   108,   113,   114,   115,     0,     0,   125,   127,   129,     0,
   131,   320,     0,     0,     0,     0,     0,   140,   142,     0,
     0,     0,     0,   323,     0,     0,     0,     0,     0,     0,
     0,     0,   161,     0,     0,     0,     0,     0,   168,   170,
   172,   173,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
   199,     0,     0,     0,   201,     0,     0,     0,     0,   203,
   204,     0,     0,     0,     0,     0,     0,     0,     0,   211,
     0,     0,     0,     0,     0,     0,     0,   216,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   228,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   248,   249,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   261,     0,     0,     0,   263,     0,     0,     0,     0,     0,
   268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   276,     0,     0,     0,     0,     0,     1,     0,
     2,     3,     0,     0,     0,     0,     0,     0,     0,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,     0,   299,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     1,     0,    59,     3,
     0,     0,     0,     0,     0,    60,     0,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,     0,     0,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    60
};

static const short yycheck[] = {     1,
    18,     1,     1,    86,     6,     7,     8,     9,     1,     1,
     1,    13,     1,     6,     7,     8,     9,     9,     9,   221,
    90,     1,     9,    15,    15,    18,    28,    29,    30,     9,
     1,    33,    34,    35,   127,    15,   129,   201,     9,   203,
    33,    34,    35,    36,    15,     9,    33,    34,   245,   142,
    43,    44,    45,    12,    47,    48,    17,    59,    60,    11,
    12,     1,     3,     4,     5,     6,     6,     7,     1,   266,
   267,    84,    13,    14,    89,   168,     9,   170,    77,   172,
    88,    83,    15,    77,    88,    85,    13,    14,    82,    87,
    83,    81,    91,    95,    96,    35,    82,    49,    90,    51,
   193,    92,    95,    96,   106,    57,    58,    96,    97,    98,
    99,    91,   101,   106,   316,   317,   273,    83,   211,   106,
   277,     3,     4,     5,     6,    96,    97,    98,    99,    83,
     3,     4,     5,     6,    82,   228,     3,     4,     5,     6,
    13,    14,    80,    83,    13,    14,    13,    14,    77,    90,
    44,    45,     1,    47,    48,    95,    96,   314,     0,   100,
     9,     0,    95,    90,    13,    14,    15,     3,     4,     5,
     6,   173,    80,    81,    61,   177,   178,    13,    14,     1,
   207,     3,     4,     5,     6,   187,   188,   189,   190,   207,
   109,    13,    14,    -1,   187,   188,   189,   190,     1,   201,
   218,   203,    84,    76,   206,    -1,     9,   159,   160,    -1,
     1,    -1,    15,    -1,   207,    -1,   218,    90,     9,    28,
    29,    30,    -1,    90,    15,   218,     1,    -1,     1,    96,
    97,    98,    99,   100,     9,    -1,     9,    12,     1,    -1,
    15,    90,    15,   245,    98,    99,     9,   187,   188,   189,
   190,    60,    15,    16,    76,   273,    -1,    -1,     1,   277,
    96,    97,    98,    99,   266,   267,     9,    -1,    90,    -1,
    -1,   273,    15,    39,    40,   277,    42,     5,    -1,    -1,
   273,    -1,    -1,    86,   277,    -1,     3,     4,     5,     6,
    18,    19,    20,    21,    22,    23,   314,    25,    26,    27,
    28,    -1,    -1,     1,    32,     3,     4,     5,     6,    37,
    38,     9,   314,    41,    87,    13,    14,    15,    -1,    -1,
    -1,   314,    50,    -1,    52,    53,    54,     1,    56,     3,
     4,     5,     6,    -1,     1,     9,     3,     4,     5,     6,
    -1,    15,     9,    -1,    11,    -1,    13,    14,    15,     1,
    -1,     3,     4,     5,     6,    -1,    -1,     9,    86,    76,
    -1,    78,    79,    15,    92,    96,    97,    98,    99,    97,
     1,    99,     3,     4,     5,     6,    -1,    -1,     9,    -1,
    -1,    -1,    13,    14,    15,    -1,    -1,   115,    -1,    -1,
   118,    -1,   120,   121,    92,     3,     4,     5,     6,     1,
    -1,     3,     4,     5,     6,    13,    14,    -1,    -1,   137,
    84,    -1,   140,    -1,    -1,   143,   144,   145,   146,    -1,
    -1,   149,    -1,    -1,    -1,   153,   154,    -1,   156,     3,
     4,     5,     6,    -1,    -1,   163,   164,    -1,   166,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
    -1,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   212,    -1,   214,   215,    -1,    -1,
    -1,   219,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   233,   234,   235,   236,   237,
    -1,    -1,    -1,   241,   242,   243,    -1,   245,    -1,    -1,
   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   260,   261,    -1,   263,    -1,    -1,   266,   267,
   268,    -1,    -1,   271,    -1,    -1,    -1,    -1,   276,    -1,
    -1,   279,    -1,    -1,    -1,    -1,    -1,   285,    -1,   287,
    14,    15,    16,    17,    -1,    -1,    20,    21,    22,    -1,
    24,   299,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    53,
    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
   104,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,   113,
   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   194,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,     7,    -1,
     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    -1,   249,    35,    36,    37,    38,
    39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    87,    10,
    -1,    -1,    -1,    -1,    -1,    94,    -1,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    -1,    -1,    35,    36,    37,    38,    39,    -1,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    94
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

#ifndef YYPARSE_RETURN_TYPE
#define YYPARSE_RETURN_TYPE int
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
YYPARSE_RETURN_TYPE yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/usr/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

YYPARSE_RETURN_TYPE
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 119 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = 0; ;
    break;}
case 2:
#line 120 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = 0; ;
    break;}
case 3:
#line 121 "../../vice-0.15.0.15+/src/mon_parse.y"
{ new_cmd = 1; asm_mode = 0;  yyval.i = 0; ;
    break;}
case 8:
#line 130 "../../vice-0.15.0.15+/src/mon_parse.y"
{ return ERR_EXPECT_END_CMD; ;
    break;}
case 20:
#line 144 "../../vice-0.15.0.15+/src/mon_parse.y"
{ return ERR_BAD_CMD; ;
    break;}
case 21:
#line 147 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_bank(yyvsp[-2].i,yyvsp[-1].str); ;
    break;}
case 22:
#line 148 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_jump(yyvsp[-1].a); ;
    break;}
case 23:
#line 149 "../../vice-0.15.0.15+/src/mon_parse.y"
{ fprintf(mon_output, "Display IO registers\n"); ;
    break;}
case 24:
#line 150 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_instruction_return(); ;
    break;}
case 25:
#line 151 "../../vice-0.15.0.15+/src/mon_parse.y"
{ puts("Dump machine state."); ;
    break;}
case 26:
#line 152 "../../vice-0.15.0.15+/src/mon_parse.y"
{ puts("Undump machine state."); ;
    break;}
case 27:
#line 153 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_instructions_step(yyvsp[-1].i); ;
    break;}
case 28:
#line 154 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_instructions_next(yyvsp[-1].i); ;
    break;}
case 29:
#line 155 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_stack_up(yyvsp[-1].i); ;
    break;}
case 30:
#line 156 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_stack_down(yyvsp[-1].i); ;
    break;}
case 32:
#line 160 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_registers(default_memspace); ;
    break;}
case 33:
#line 161 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_registers(yyvsp[-1].i); ;
    break;}
case 35:
#line 165 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_load_symbols(yyvsp[-2].i, yyvsp[-1].str); ;
    break;}
case 36:
#line 166 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_save_symbols(yyvsp[-2].i, yyvsp[-1].str); ;
    break;}
case 37:
#line 167 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_add_name_to_symbol_table(yyvsp[-2].a, yyvsp[-1].str); ;
    break;}
case 38:
#line 168 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_remove_name_from_symbol_table(yyvsp[-2].i, yyvsp[-1].str); ;
    break;}
case 39:
#line 169 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_symbol_table(yyvsp[-1].i); ;
    break;}
case 40:
#line 172 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_start_assemble_mode(yyvsp[0].a, NULL); ;
    break;}
case 42:
#line 173 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_start_assemble_mode(yyvsp[-1].a, NULL); ;
    break;}
case 43:
#line 174 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_disassemble_lines(yyvsp[-2].a,yyvsp[-1].a); ;
    break;}
case 44:
#line 175 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_disassemble_lines(BAD_ADDR, BAD_ADDR); ;
    break;}
case 45:
#line 178 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_move_memory(yyvsp[-3].a, yyvsp[-2].a, yyvsp[-1].a); ;
    break;}
case 46:
#line 179 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_compare_memory(yyvsp[-3].a, yyvsp[-2].a, yyvsp[-1].a); ;
    break;}
case 47:
#line 180 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_fill_memory(yyvsp[-3].a, yyvsp[-2].a, yyvsp[-1].str); ;
    break;}
case 48:
#line 181 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_hunt_memory(yyvsp[-3].a, yyvsp[-2].a, yyvsp[-1].str); ;
    break;}
case 49:
#line 182 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_memory(yyvsp[-3].rt, yyvsp[-2].a, yyvsp[-1].a); ;
    break;}
case 50:
#line 183 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_memory(default_radix, yyvsp[-2].a, yyvsp[-1].a); ;
    break;}
case 51:
#line 184 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_memory(default_radix, BAD_ADDR, BAD_ADDR); ;
    break;}
case 52:
#line 185 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_data(yyvsp[-2].a, yyvsp[-1].a, 8, 8); ;
    break;}
case 53:
#line 186 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_data(BAD_ADDR, BAD_ADDR, 8, 8); ;
    break;}
case 54:
#line 187 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_data(yyvsp[-2].a, yyvsp[-1].a, 24, 21); ;
    break;}
case 55:
#line 188 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_data(BAD_ADDR, BAD_ADDR, 24, 21); ;
    break;}
case 56:
#line 189 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_memory(0, yyvsp[-2].a, yyvsp[-1].a); ;
    break;}
case 57:
#line 190 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_display_memory(0, BAD_ADDR, BAD_ADDR); ;
    break;}
case 58:
#line 193 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_add_checkpoint(yyvsp[-2].a, yyvsp[-1].a, FALSE, FALSE, FALSE); ;
    break;}
case 59:
#line 194 "../../vice-0.15.0.15+/src/mon_parse.y"
{
                          temp = mon_add_checkpoint(yyvsp[-4].a, yyvsp[-3].a, FALSE, FALSE, FALSE);
                          mon_set_checkpoint_condition(temp, yyvsp[-1].cond_node); ;
    break;}
case 60:
#line 197 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_add_checkpoint(yyvsp[-2].a, yyvsp[-1].a, FALSE,
                              (yyvsp[-3].i == e_load || yyvsp[-3].i == e_load_store), (yyvsp[-3].i == e_store || yyvsp[-3].i == e_load_store)); ;
    break;}
case 61:
#line 199 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_add_checkpoint(yyvsp[-2].a, yyvsp[-1].a, TRUE, FALSE, FALSE); ;
    break;}
case 62:
#line 200 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_checkpoints(); ;
    break;}
case 63:
#line 201 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_checkpoints(); ;
    break;}
case 64:
#line 202 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_checkpoints(); ;
    break;}
case 65:
#line 206 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_switch_checkpoint(yyvsp[-2].action, yyvsp[-1].i); ;
    break;}
case 66:
#line 207 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_set_ignore_count(yyvsp[-2].i, yyvsp[-1].i); ;
    break;}
case 67:
#line 208 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_delete_checkpoint(yyvsp[-1].i); ;
    break;}
case 68:
#line 209 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_delete_checkpoint(-1); ;
    break;}
case 69:
#line 210 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_set_checkpoint_condition(yyvsp[-3].i, yyvsp[-1].cond_node); ;
    break;}
case 70:
#line 211 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_set_checkpoint_command(yyvsp[-2].i, yyvsp[-1].str); ;
    break;}
case 71:
#line 214 "../../vice-0.15.0.15+/src/mon_parse.y"
{ sidefx = ((yyvsp[-1].action==e_TOGGLE)?(sidefx^1):yyvsp[-1].action); ;
    break;}
case 72:
#line 215 "../../vice-0.15.0.15+/src/mon_parse.y"
{ fprintf(mon_output, "I/O side effects are %s\n",sidefx ? "enabled" : "disabled"); ;
    break;}
case 73:
#line 216 "../../vice-0.15.0.15+/src/mon_parse.y"
{ default_radix = yyvsp[-1].rt; ;
    break;}
case 74:
#line 218 "../../vice-0.15.0.15+/src/mon_parse.y"
{
                         const char *p;

                         if (default_radix == e_hexadecimal)
                             p = "Hexadecimal";
                         else if (default_radix == e_decimal)
                             p = "Decimal";
                         else if (default_radix == e_octal)
                             p = "Octal";
                         else if (default_radix == e_binary)
                             p = "Binary";
                         else
                             p = "Unknown";

                         fprintf(mon_output, "Default radix is %s\n", p);
                     ;
    break;}
case 75:
#line 235 "../../vice-0.15.0.15+/src/mon_parse.y"
{ fprintf(mon_output,"Setting default device to `%s'\n",
                                                         _mon_space_strings[(int) yyvsp[-1].i]); default_memspace = yyvsp[-1].i; ;
    break;}
case 76:
#line 237 "../../vice-0.15.0.15+/src/mon_parse.y"
{ exit_mon = 2; YYACCEPT; ;
    break;}
case 77:
#line 238 "../../vice-0.15.0.15+/src/mon_parse.y"
{ exit_mon = 1; YYACCEPT; ;
    break;}
case 78:
#line 241 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_execute_disk_command(yyvsp[-1].str); ;
    break;}
case 79:
#line 242 "../../vice-0.15.0.15+/src/mon_parse.y"
{ fprintf(mon_output, "\t%d\n",yyvsp[-1].i); ;
    break;}
case 80:
#line 243 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_help(NULL); ;
    break;}
case 81:
#line 244 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_help(yyvsp[-1].str); ;
    break;}
case 82:
#line 245 "../../vice-0.15.0.15+/src/mon_parse.y"
{ printf("SYSTEM COMMAND: %s\n",yyvsp[-1].str); ;
    break;}
case 83:
#line 246 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_print_convert(yyvsp[-1].i); ;
    break;}
case 84:
#line 247 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_change_dir(yyvsp[-1].str); ;
    break;}
case 85:
#line 250 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_load_file(yyvsp[-2].str,yyvsp[-1].a); ;
    break;}
case 86:
#line 251 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_bload_file(yyvsp[-2].str,yyvsp[-1].a); ;
    break;}
case 87:
#line 252 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_save_file(yyvsp[-3].str,yyvsp[-2].a,yyvsp[-1].a); ;
    break;}
case 88:
#line 253 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_bsave_file(yyvsp[-3].str,yyvsp[-2].a,yyvsp[-1].a); ;
    break;}
case 89:
#line 254 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_verify_file(yyvsp[-2].str,yyvsp[-1].a); ;
    break;}
case 90:
#line 255 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_block_cmd(0,yyvsp[-3].i,yyvsp[-2].i,yyvsp[-1].a); ;
    break;}
case 91:
#line 256 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_block_cmd(1,yyvsp[-3].i,yyvsp[-2].i,yyvsp[-1].a); ;
    break;}
case 92:
#line 259 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_record_commands(yyvsp[-1].str); ;
    break;}
case 93:
#line 260 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_end_recording(); ;
    break;}
case 94:
#line 261 "../../vice-0.15.0.15+/src/mon_parse.y"
{ playback=TRUE; playback_name = yyvsp[-1].str; ;
    break;}
case 95:
#line 264 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_fill_memory(yyvsp[-2].a, BAD_ADDR, yyvsp[-1].str); ;
    break;}
case 96:
#line 265 "../../vice-0.15.0.15+/src/mon_parse.y"
{ printf("Not yet.\n"); ;
    break;}
case 97:
#line 268 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.str = yyvsp[0].str; ;
    break;}
case 99:
#line 272 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.str = NULL; ;
    break;}
case 101:
#line 276 "../../vice-0.15.0.15+/src/mon_parse.y"
{ return ERR_EXPECT_FILENAME; ;
    break;}
case 102:
#line 279 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 103:
#line 280 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = e_load_store; ;
    break;}
case 104:
#line 283 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = new_reg(default_memspace, yyvsp[0].reg); ;
    break;}
case 105:
#line 284 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = new_reg(yyvsp[-1].i, yyvsp[0].reg); ;
    break;}
case 108:
#line 291 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_set_reg_val(reg_memspace(yyvsp[-2].i), reg_regid(yyvsp[-2].i), yyvsp[0].i); ;
    break;}
case 109:
#line 294 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 110:
#line 295 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = -1; ;
    break;}
case 111:
#line 298 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 112:
#line 299 "../../vice-0.15.0.15+/src/mon_parse.y"
{ return ERR_EXPECT_BRKNUM; ;
    break;}
case 113:
#line 302 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.a = yyvsp[0].a; ;
    break;}
case 114:
#line 303 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.a = BAD_ADDR; ;
    break;}
case 115:
#line 306 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.a = new_addr(e_default_space,yyvsp[0].i); if (opt_asm) new_cmd = asm_mode = 1; ;
    break;}
case 116:
#line 307 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.a = new_addr(yyvsp[-1].i,yyvsp[0].i); if (opt_asm) new_cmd = asm_mode = 1; ;
    break;}
case 117:
#line 310 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 118:
#line 311 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = e_default_space; ;
    break;}
case 119:
#line 314 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = e_comp_space; ;
    break;}
case 120:
#line 315 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = e_disk_space; ;
    break;}
case 121:
#line 318 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; if (!CHECK_ADDR(yyvsp[0].i)) return ERR_ADDR_TOO_BIG; ;
    break;}
case 122:
#line 321 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 123:
#line 323 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[-2].i + yyvsp[0].i; ;
    break;}
case 124:
#line 324 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[-2].i - yyvsp[0].i; ;
    break;}
case 125:
#line 325 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[-2].i * yyvsp[0].i; ;
    break;}
case 126:
#line 326 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = (yyvsp[0].i) ? (yyvsp[-2].i / yyvsp[0].i) : 1; ;
    break;}
case 127:
#line 327 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[-1].i; ;
    break;}
case 128:
#line 328 "../../vice-0.15.0.15+/src/mon_parse.y"
{ return ERR_MISSING_CLOSE_PAREN; ;
    break;}
case 129:
#line 329 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 130:
#line 332 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.cond_node = new_cond; yyval.cond_node->is_parenthized = FALSE;
                                            yyval.cond_node->child1 = yyvsp[-2].cond_node; yyval.cond_node->child2 = yyvsp[0].cond_node; yyval.cond_node->operation = yyvsp[-1].cond_op; ;
    break;}
case 131:
#line 334 "../../vice-0.15.0.15+/src/mon_parse.y"
{ return ERR_INCOMPLETE_COMPARE_OP; ;
    break;}
case 132:
#line 335 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.cond_node = yyvsp[-1].cond_node; yyval.cond_node->is_parenthized = TRUE; ;
    break;}
case 133:
#line 336 "../../vice-0.15.0.15+/src/mon_parse.y"
{ return ERR_MISSING_CLOSE_PAREN; ;
    break;}
case 134:
#line 337 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.cond_node = yyvsp[0].cond_node; ;
    break;}
case 135:
#line 340 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.cond_node = new_cond; yyval.cond_node->operation = e_INV; yyval.cond_node->is_parenthized = FALSE;
                            yyval.cond_node->reg_num = yyvsp[0].i; yyval.cond_node->is_reg = TRUE; ;
    break;}
case 136:
#line 342 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.cond_node = new_cond; yyval.cond_node->operation = e_INV; yyval.cond_node->is_parenthized = FALSE;
                            yyval.cond_node->value = yyvsp[0].i; yyval.cond_node->is_reg = FALSE; ;
    break;}
case 139:
#line 350 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_add_number_to_buffer(yyvsp[0].i); ;
    break;}
case 140:
#line 351 "../../vice-0.15.0.15+/src/mon_parse.y"
{ mon_add_string_to_buffer(yyvsp[0].str); ;
    break;}
case 141:
#line 354 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 142:
#line 355 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = mon_get_reg_val(reg_memspace(yyvsp[0].i), reg_regid(yyvsp[0].i)); ;
    break;}
case 143:
#line 358 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 144:
#line 359 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 145:
#line 360 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 146:
#line 361 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = yyvsp[0].i; ;
    break;}
case 149:
#line 368 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = 0;
                                                if (yyvsp[-1].str) {
                                                    mon_assemble_instr(yyvsp[-1].str, yyvsp[0].i);
                                                } else {
                                                    new_cmd = 1;
                                                    asm_mode = 0;
                                                }
                                                opt_asm = 0;
                                              ;
    break;}
case 151:
#line 379 "../../vice-0.15.0.15+/src/mon_parse.y"
{ asm_mode = 0; ;
    break;}
case 152:
#line 382 "../../vice-0.15.0.15+/src/mon_parse.y"
{ if (yyvsp[0].i > 0xff) return ERR_IMM_TOO_BIG;
                                         yyval.i = join_ints(IMMEDIATE,yyvsp[0].i); ;
    break;}
case 153:
#line 384 "../../vice-0.15.0.15+/src/mon_parse.y"
{ if (yyvsp[0].i < 0x100)
                              yyval.i = join_ints(ZERO_PAGE,yyvsp[0].i);
                           else
                              yyval.i = join_ints(ABSOLUTE,yyvsp[0].i);
                         ;
    break;}
case 154:
#line 389 "../../vice-0.15.0.15+/src/mon_parse.y"
{ if (yyvsp[-2].i < 0x100)
                                           yyval.i = join_ints(ZERO_PAGE_X,yyvsp[-2].i);
                                        else
                                           yyval.i = join_ints(ABSOLUTE_X,yyvsp[-2].i);
                                      ;
    break;}
case 155:
#line 394 "../../vice-0.15.0.15+/src/mon_parse.y"
{ if (yyvsp[-2].i < 0x100)
                                           yyval.i = join_ints(ZERO_PAGE_Y,yyvsp[-2].i);
                                        else
                                           yyval.i = join_ints(ABSOLUTE_Y,yyvsp[-2].i);
                                      ;
    break;}
case 156:
#line 399 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = join_ints(ABS_INDIRECT,yyvsp[-1].i); ;
    break;}
case 157:
#line 400 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = join_ints(INDIRECT_X,yyvsp[-3].i); ;
    break;}
case 158:
#line 401 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = join_ints(INDIRECT_Y,yyvsp[-3].i); ;
    break;}
case 159:
#line 402 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = join_ints(IMPLIED,0); ;
    break;}
case 160:
#line 403 "../../vice-0.15.0.15+/src/mon_parse.y"
{ yyval.i = join_ints(ACCUMULATOR,0); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/usr/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 407 "../../vice-0.15.0.15+/src/mon_parse.y"


void parse_and_execute_line(char *input)
{
   char *temp_buf;
   int i, rc;

   temp_buf = (char *) malloc(strlen(input)+3);
   strcpy(temp_buf,input);
   i = strlen(input);
   temp_buf[i++] = '\n';
   temp_buf[i++] = '\0';
   temp_buf[i++] = '\0';

   make_buffer(temp_buf);
   if ( (rc =yyparse()) != 0) {
       fprintf(mon_output, "ERROR -- ");
       switch(rc) {
           case ERR_BAD_CMD:
               fprintf(mon_output, "Bad command:\n");
               break;
           case ERR_RANGE_BAD_START:
               fprintf(mon_output, "Bad first address in range:\n");
               break;
           case ERR_RANGE_BAD_END:
               fprintf(mon_output, "Bad second address in range:\n");
               break;
           case ERR_EXPECT_BRKNUM:
               fprintf(mon_output, "Checkpoint number expected:\n");
               break;
           case ERR_EXPECT_END_CMD:
               fprintf(mon_output, "Unexpected token:\n");
               break;
           case ERR_MISSING_CLOSE_PAREN:
               fprintf(mon_output, "')' expected:\n");
               break;
           case ERR_INCOMPLETE_COMPARE_OP:
               fprintf(mon_output, "Compare operation missing an operand:\n");
               break;
           case ERR_EXPECT_FILENAME:
               fprintf(mon_output, "Expecting a filename:\n");
               break;
           case ERR_ADDR_TOO_BIG:
               fprintf(mon_output, "Address too large:\n");
               break;
           case ERR_IMM_TOO_BIG:
               fprintf(mon_output, "Immediate argument too large:\n");
               break;
           case ERR_ILLEGAL_INPUT:
           default:
               fprintf(mon_output, "Wrong syntax:\n");
       }
       fprintf(mon_output, "  %s\n", input);
       for (i = 0; i < last_len; i++)
           fprintf(mon_output, " ");
       fprintf(mon_output, "  ^\n");
       asm_mode = 0;
       new_cmd = 1;
   }
   free_buffer();
}

static int yyerror(char *s)
{
   YYABORT;
   fprintf(stderr, "ERR:%s\n",s);
   return 0;
}


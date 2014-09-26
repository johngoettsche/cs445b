/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 34 "parser.y"

#include <stdio.h>
#include "errors.h"
#include "token.h"

extern int line_num;



/* Line 189 of yacc.c  */
#line 82 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     ICON = 259,
     FCON = 260,
     CCON = 261,
     STRING = 262,
     TYPEDEF_NAME = 263,
     NAMESPACE_NAME = 264,
     CLASS_NAME = 265,
     ENUM_NAME = 266,
     TEMPLATE_NAME = 267,
     ELIPSIS = 268,
     COLONCOLON = 269,
     PLASN = 270,
     MIASN = 271,
     MUASN = 272,
     DIASN = 273,
     MOASN = 274,
     ANASN = 275,
     ORASN = 276,
     SHL = 277,
     SHR = 278,
     EQ = 279,
     NE = 280,
     LE = 281,
     GE = 282,
     ANDAND = 283,
     OROR = 284,
     INCOP = 285,
     DECOP = 286,
     FOLLOW = 287,
     AUTO = 288,
     BOOL = 289,
     BREAK = 290,
     CASE = 291,
     CHAR = 292,
     CLASS = 293,
     CONST = 294,
     CONTINUE = 295,
     DEFAULT = 296,
     DELETE = 297,
     DO = 298,
     DOUBLE = 299,
     ELSE = 300,
     ENUM = 301,
     EXTERN = 302,
     FALSE = 303,
     FLOAT = 304,
     FOR = 305,
     GOTO = 306,
     IF = 307,
     INT = 308,
     LONG = 309,
     NAMESPACE = 310,
     NEW = 311,
     PRIVATE = 312,
     PUBLIC = 313,
     REGISTER = 314,
     RETURN = 315,
     SHORT = 316,
     SIGNED = 317,
     SIZEOF = 318,
     STATIC = 319,
     STRUCT = 320,
     SWITCH = 321,
     TRUE = 322,
     TYPEDEF = 323,
     UNION = 324,
     UNSIGNED = 325,
     USING = 326,
     VOID = 327,
     VOLATILE = 328,
     WHILE = 329,
     ERASN = 330,
     SM = 331,
     LC = 332,
     RC = 333,
     CM = 334,
     COLON = 335,
     ASN = 336,
     LP = 337,
     RP = 338,
     LB = 339,
     RB = 340,
     DOT = 341,
     AND = 342,
     BANG = 343,
     NOT = 344,
     MINUS = 345,
     PLUS = 346,
     MUL = 347,
     DIV = 348,
     MOD = 349,
     LT = 350,
     GT = 351,
     ER = 352,
     OR = 353,
     QUEST = 354,
     PDEFINE = 355
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  105
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4694

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  375
/* YYNRULES -- Number of states.  */
#define YYNSTATES  634

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   101,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   102,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    44,    46,    48,    51,    55,    57,    59,
      61,    64,    66,    70,    73,    75,    77,    79,    84,    89,
      93,    98,   102,   106,   110,   113,   116,   120,   122,   129,
     135,   141,   146,   151,   155,   159,   162,   164,   167,   170,
     173,   176,   181,   183,   185,   187,   189,   191,   193,   195,
     197,   203,   208,   213,   217,   222,   226,   230,   233,   241,
     248,   255,   261,   268,   274,   280,   285,   289,   292,   294,
     297,   299,   301,   305,   310,   314,   317,   321,   324,   330,
     335,   337,   342,   344,   346,   350,   354,   358,   360,   364,
     368,   370,   374,   378,   380,   384,   388,   392,   396,   398,
     402,   406,   408,   412,   414,   418,   420,   424,   426,   430,
     432,   436,   438,   444,   446,   450,   452,   454,   456,   458,
     460,   462,   464,   466,   468,   472,   474,   476,   478,   480,
     482,   484,   486,   488,   492,   497,   501,   504,   506,   512,
     514,   517,   523,   531,   537,   539,   544,   550,   558,   567,
     575,   583,   590,   592,   594,   597,   600,   604,   607,   611,
     613,   615,   618,   620,   622,   624,   626,   629,   632,   635,
     638,   641,   643,   645,   647,   649,   651,   654,   656,   658,
     660,   662,   664,   666,   668,   670,   672,   674,   678,   681,
     684,   686,   688,   690,   692,   694,   696,   698,   700,   702,
     704,   706,   708,   710,   712,   717,   721,   725,   728,   733,
     737,   741,   744,   750,   755,   760,   764,   766,   770,   772,
     776,   778,   780,   782,   784,   786,   788,   790,   792,   798,
     804,   809,   810,   812,   814,   819,   823,   826,   829,   831,
     835,   841,   846,   851,   855,   861,   866,   870,   872,   876,
     879,   881,   883,   886,   888,   893,   897,   901,   904,   906,
     908,   913,   917,   921,   924,   927,   929,   931,   933,   936,
     938,   942,   945,   948,   950,   953,   955,   958,   960,   963,
     965,   967,   972,   976,   980,   983,   987,   992,   996,  1000,
    1003,  1005,  1008,  1012,  1014,  1019,  1023,  1026,  1028,  1032,
    1037,  1041,  1045,  1048,  1051,  1056,  1060,  1062,  1064,  1066,
    1068,  1071,  1073,  1077,  1080,  1084,  1087,  1090,  1092,  1095,
    1097,  1099,  1101,  1105,  1108,  1111,  1113,  1117,  1120,  1123,
    1126,  1129,  1131,  1135,  1139,  1142,  1145,  1147,  1149,  1151,
    1154,  1156,  1160,  1165,  1169,  1173,  1176,  1179,  1181,  1183,
    1188,  1190,  1192,  1196,  1198,  1200
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     118,     0,    -1,     8,    -1,   106,    -1,   107,    -1,     9,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,     3,
      -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,   117,
      -1,     4,    -1,     6,    -1,     5,    -1,     7,    -1,    67,
      -1,    48,    -1,    -1,   164,    -1,   112,    -1,    14,   111,
      -1,    82,   151,    83,    -1,   120,    -1,   121,    -1,   111,
      -1,    89,   108,    -1,   224,    -1,   123,    14,   122,    -1,
     123,    14,    -1,   108,    -1,   105,    -1,   119,    -1,   124,
      84,   151,    85,    -1,   124,    82,   125,    83,    -1,   124,
      82,    83,    -1,   172,    82,   125,    83,    -1,   172,    82,
      83,    -1,   124,    86,   126,    -1,   124,    32,   126,    -1,
     124,    30,    -1,   124,    31,    -1,   125,    79,   149,    -1,
     149,    -1,    14,   122,   173,    14,    89,   173,    -1,    14,
     173,    14,    89,   173,    -1,   122,   173,    14,    89,   173,
      -1,   173,    14,    89,   173,    -1,    14,   122,    89,   173,
      -1,    14,    89,   173,    -1,   122,    89,   173,    -1,    89,
     173,    -1,   124,    -1,    30,   136,    -1,    31,   136,    -1,
     128,   136,    -1,    63,   127,    -1,    63,    82,   198,    83,
      -1,   129,    -1,   135,    -1,    92,    -1,    99,    -1,    91,
      -1,    90,    -1,    88,    -1,    89,    -1,    14,    56,   130,
     131,   134,    -1,    56,   130,   131,   134,    -1,    14,    56,
     131,   134,    -1,    56,   131,   134,    -1,    14,    56,   130,
     131,    -1,    56,   130,   131,    -1,    14,    56,   131,    -1,
      56,   131,    -1,    14,    56,   130,    82,   198,    83,   134,
      -1,    56,   130,    82,   198,    83,   134,    -1,    14,    56,
      82,   198,    83,   134,    -1,    56,    82,   198,    83,   134,
      -1,    14,    56,   130,    82,   198,    83,    -1,    56,   130,
      82,   198,    83,    -1,    14,    56,    82,   198,    83,    -1,
      56,    82,   198,    83,    -1,    82,   125,    83,    -1,   199,
     132,    -1,   199,    -1,   194,   132,    -1,   194,    -1,   133,
      -1,    84,   151,    85,    -1,   133,    84,   152,    85,    -1,
      82,   125,    83,    -1,    82,    83,    -1,    14,    42,   136,
      -1,    42,   136,    -1,    14,    42,    84,    85,   136,    -1,
      42,    84,    85,   136,    -1,   127,    -1,    82,   198,    83,
     136,    -1,   136,    -1,   137,    -1,   138,    92,   137,    -1,
     138,    93,   137,    -1,   138,    94,   137,    -1,   138,    -1,
     139,    91,   138,    -1,   139,    90,   138,    -1,   139,    -1,
     140,    22,   139,    -1,   140,    23,   139,    -1,   140,    -1,
     141,    95,   140,    -1,   141,    96,   140,    -1,   141,    26,
     140,    -1,   141,    27,   140,    -1,   141,    -1,   142,    24,
     141,    -1,   142,    25,   141,    -1,   142,    -1,   143,    99,
     142,    -1,   143,    -1,   144,    97,   143,    -1,   144,    -1,
     145,    98,   144,    -1,   145,    -1,   146,    28,   145,    -1,
     146,    -1,   147,    29,   146,    -1,   147,    -1,   147,    99,
     151,    80,   149,    -1,   148,    -1,   147,   150,   149,    -1,
      81,    -1,    17,    -1,    18,    -1,    19,    -1,    15,    -1,
      16,    -1,    20,    -1,    21,    -1,   149,    -1,   151,    79,
     149,    -1,   148,    -1,   154,    -1,   155,    -1,   156,    -1,
     158,    -1,   160,    -1,   162,    -1,   163,    -1,   111,    80,
     153,    -1,    36,   152,    80,   153,    -1,    41,    80,   153,
      -1,   151,    76,    -1,    76,    -1,    77,   157,    78,    77,
      78,    -1,   153,    -1,   157,   153,    -1,    52,    82,   159,
      83,   153,    -1,    52,    82,   159,    83,   153,    45,   153,
      -1,    66,    82,   159,    83,   153,    -1,   151,    -1,   199,
     192,    81,   149,    -1,    74,    82,   159,    83,   153,    -1,
      43,   153,    74,    82,   151,    83,    76,    -1,    50,    82,
     161,   159,    76,   151,    83,   153,    -1,    50,    82,   161,
     159,    76,    83,   153,    -1,    50,    82,   161,    76,   151,
      83,   153,    -1,    50,    82,   161,    76,    83,   153,    -1,
     155,    -1,   167,    -1,    35,    76,    -1,    40,    76,    -1,
      60,   151,    76,    -1,    60,    76,    -1,    51,   111,    76,
      -1,   166,    -1,   165,    -1,   164,   165,    -1,   166,    -1,
     202,    -1,   189,    -1,   179,    -1,   167,    76,    -1,   185,
      76,    -1,   187,    76,    -1,   188,    76,    -1,   169,   190,
      -1,   190,    -1,   169,    -1,   170,    -1,   171,    -1,    68,
      -1,   169,   168,    -1,   168,    -1,    33,    -1,    59,    -1,
      64,    -1,    47,    -1,   172,    -1,   207,    -1,   175,    -1,
     174,    -1,   196,    -1,    14,   122,   173,    -1,    14,   173,
      -1,   122,   173,    -1,   173,    -1,    37,    -1,    34,    -1,
      61,    -1,    53,    -1,    54,    -1,    62,    -1,    70,    -1,
      49,    -1,    44,    -1,    72,    -1,   108,    -1,   109,    -1,
     104,    -1,   209,    14,   122,   111,    -1,   209,    14,   111,
      -1,   209,   122,   111,    -1,   209,   111,    -1,    46,    14,
     122,   111,    -1,    46,    14,   111,    -1,    46,   122,   111,
      -1,    46,   111,    -1,    46,   111,    77,   176,    78,    -1,
      46,    77,   176,    78,    -1,    46,   111,    77,    78,    -1,
      46,    77,    78,    -1,   177,    -1,   176,    79,   177,    -1,
     178,    -1,   178,    81,   152,    -1,   111,    -1,   106,    -1,
     107,    -1,   111,    -1,   180,    -1,   183,    -1,   181,    -1,
     182,    -1,    55,   111,    77,   184,    78,    -1,    55,   106,
      77,   184,    78,    -1,    55,    77,   184,    78,    -1,    -1,
     164,    -1,   111,    -1,    55,   111,    81,   186,    -1,    14,
     122,   105,    -1,    14,   105,    -1,   122,   105,    -1,   105,
      -1,    71,    14,   121,    -1,    71,    55,    14,   122,   105,
      -1,    71,    55,    14,   105,    -1,    71,    55,   122,   105,
      -1,    71,    55,   105,    -1,    47,   116,    77,   164,    78,
      -1,    47,   116,    77,    78,    -1,    47,   116,   165,    -1,
     191,    -1,   190,    79,   191,    -1,   192,   204,    -1,   192,
      -1,   193,    -1,   194,   192,    -1,   197,    -1,   193,    84,
     152,    85,    -1,   193,    84,    85,    -1,    82,   192,    83,
      -1,    92,   195,    -1,    92,    -1,    99,    -1,    14,   122,
      92,   195,    -1,   122,    92,   195,    -1,    14,   122,    92,
      -1,   122,    92,    -1,   196,   195,    -1,   196,    -1,    39,
      -1,    73,    -1,    14,   120,    -1,   120,    -1,    14,   122,
     173,    -1,    14,   173,    -1,   122,   173,    -1,   173,    -1,
     199,   200,    -1,   199,    -1,   171,   199,    -1,   171,    -1,
     194,   200,    -1,   194,    -1,   201,    -1,   201,    84,   152,
      85,    -1,   201,    84,    85,    -1,    84,   152,    85,    -1,
      84,    85,    -1,    82,   200,    83,    -1,   169,   192,   220,
     203,    -1,   192,   220,   203,    -1,   169,   192,   203,    -1,
     192,   203,    -1,   156,    -1,    81,   205,    -1,    82,   125,
      83,    -1,   149,    -1,    77,   206,    79,    78,    -1,    77,
     206,    78,    -1,    77,    78,    -1,   205,    -1,   206,    79,
     205,    -1,   208,    77,   210,    78,    -1,   208,    77,    78,
      -1,   209,   111,   216,    -1,   209,   111,    -1,   209,   216,
      -1,   209,   122,   111,   216,    -1,   209,   122,   111,    -1,
     209,    -1,    38,    -1,    65,    -1,    69,    -1,   211,   210,
      -1,   211,    -1,   219,    80,   210,    -1,   219,    80,    -1,
     169,   212,    76,    -1,   212,    76,    -1,   169,    76,    -1,
      76,    -1,   202,    76,    -1,   202,    -1,   187,    -1,   213,
      -1,   212,    79,   213,    -1,   192,   214,    -1,   192,   215,
      -1,   192,    -1,   111,    80,   152,    -1,    80,   152,    -1,
      81,   101,    -1,    81,   152,    -1,    80,   217,    -1,   218,
      -1,   217,    79,   218,    -1,    14,   122,   108,    -1,    14,
     108,    -1,   122,   108,    -1,   108,    -1,    57,    -1,    58,
      -1,    80,   221,    -1,   222,    -1,   222,    79,   221,    -1,
     223,    82,   125,    83,    -1,   223,    82,    83,    -1,    14,
     122,   108,    -1,    14,   108,    -1,   122,   108,    -1,   108,
      -1,   111,    -1,   110,    95,   225,    96,    -1,   111,    -1,
     226,    -1,   225,    79,   226,    -1,   149,    -1,   198,    -1,
     110,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    80,    81,    86,    91,    96,   102,   107,
     115,   119,   120,   121,   122,   123,   127,   131,   135,   139,
     143,   144,   151,   153,   161,   162,   163,   164,   168,   172,
     173,   174,   178,   179,   183,   184,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   201,   202,   206,   207,
     208,   209,   210,   211,   212,   213,   217,   218,   219,   220,
     221,   222,   223,   224,   228,   229,   230,   231,   232,   233,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   256,   260,   261,   265,
     266,   267,   271,   272,   276,   277,   281,   282,   283,   284,
     288,   289,   293,   297,   298,   299,   300,   304,   305,   306,
     310,   311,   312,   316,   317,   318,   319,   320,   324,   325,
     326,   330,   331,   335,   336,   340,   341,   345,   346,   350,
     351,   355,   356,   360,   361,   365,   366,   367,   368,   369,
     370,   371,   372,   376,   377,   381,   389,   390,   391,   392,
     393,   394,   395,   399,   400,   401,   405,   406,   410,   415,
     416,   420,   421,   422,   426,   427,   431,   432,   433,   434,
     435,   436,   440,   441,   445,   446,   447,   448,   449,   453,
     461,   462,   466,   467,   468,   469,   473,   474,   475,   476,
     488,   489,   490,   502,   503,   504,   508,   509,   513,   514,
     515,   516,   520,   521,   522,   523,   524,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   545,   546,   547,   551,   552,   553,   554,   555,   556,
     557,   558,   562,   563,   564,   565,   569,   570,   574,   575,
     579,   584,   585,   589,   593,   594,   598,   599,   603,   607,
     611,   614,   616,   621,   625,   633,   634,   635,   636,   640,
     648,   649,   650,   651,   662,   663,   664,   672,   673,   677,
     678,   682,   683,   687,   688,   689,   690,   694,   695,   696,
     697,   698,   699,   700,   704,   705,   709,   710,   714,   715,
     716,   717,   718,   719,   723,   724,   728,   729,   733,   734,
     735,   739,   740,   741,   742,   743,   768,   769,   770,   771,
     775,   779,   780,   784,   785,   786,   787,   791,   792,   800,
     801,   805,   806,   807,   808,   809,   810,   814,   815,   816,
     820,   821,   822,   823,   827,   828,   829,   830,   831,   832,
     833,   837,   838,   842,   843,   844,   845,   846,   855,   859,
     867,   871,   872,   876,   877,   878,   879,   883,   884,   901,
     905,   906,   910,   911,   915,   916,   917,   918,   919,   987,
     992,   996,   997,  1001,  1002,  1003
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "ICON", "FCON", "CCON",
  "STRING", "TYPEDEF_NAME", "NAMESPACE_NAME", "CLASS_NAME", "ENUM_NAME",
  "TEMPLATE_NAME", "ELIPSIS", "COLONCOLON", "PLASN", "MIASN", "MUASN",
  "DIASN", "MOASN", "ANASN", "ORASN", "SHL", "SHR", "EQ", "NE", "LE", "GE",
  "ANDAND", "OROR", "INCOP", "DECOP", "FOLLOW", "AUTO", "BOOL", "BREAK",
  "CASE", "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DELETE", "DO",
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "FALSE", "FLOAT", "FOR", "GOTO",
  "IF", "INT", "LONG", "NAMESPACE", "NEW", "PRIVATE", "PUBLIC", "REGISTER",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TRUE", "TYPEDEF", "UNION", "UNSIGNED", "USING", "VOID", "VOLATILE",
  "WHILE", "ERASN", "SM", "LC", "RC", "CM", "COLON", "ASN", "LP", "RP",
  "LB", "RB", "DOT", "AND", "BANG", "NOT", "MINUS", "PLUS", "MUL", "DIV",
  "MOD", "LT", "GT", "ER", "OR", "QUEST", "PDEFINE", "'0'", "'_'",
  "$accept", "typedef_name", "namespace_name", "original_namespace_name",
  "namespace_alias", "class_name", "enum_name", "template_name",
  "identifier", "literal", "integer_literal", "character_literal",
  "floating_literal", "string_literal", "boolean_literal",
  "translation_unit", "primary_expression", "id_expression",
  "unqualified_id", "nested_name_specifier", "class_or_namespace_name",
  "postfix_expression", "expression_list", "pseudo_destructor_name",
  "unary_expression", "unary_operator", "new_expression", "new_placement",
  "new_type_id", "new_declarator", "direct_new_declarator",
  "new_initializer", "delete_expression", "cast_expression",
  "pm_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_seq",
  "selection_statement", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "declaration_seq", "declaration", "block_declaration",
  "simple_declaration", "decl_specifier", "decl_specifier_seq",
  "storage_class_specifier", "type_specifier", "simple_type_specifier",
  "type_name", "elaborated_type_specifier", "enum_specifier",
  "enumerator_list", "enumerator_definition", "enumerator",
  "namespace_definition", "named_namespace_definition",
  "original_namespace_definition", "extension_namespace_definition",
  "unnamed_namespace_definition", "namespace_body",
  "namespace_alias_definition", "qualified_namespace_specifier",
  "using_declaration", "using_directive", "linkage_specification",
  "init_declarator_list", "init_declarator", "declarator",
  "direct_declarator", "ptr_operator", "cv_qualifier_seq", "cv_qualifier",
  "declarator_id", "type_id", "type_specifier_seq", "abstract_declarator",
  "direct_abstract_declarator", "function_definition", "function_body",
  "initializer", "initializer_clause", "initializer_list",
  "class_specifier", "class_head", "class_key", "member_specification",
  "member_declaration", "member_declarator_list", "member_declarator",
  "pure_specifier", "constant_initializer", "base_clause",
  "base_specifier_list", "base_specifier", "access_specifier",
  "ctor_initializer", "mem_initializer_list", "mem_initializer",
  "mem_initializer_id", "template_id", "template_argument_list",
  "template_argument", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    48,    95
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   107,   108,   109,   110,
     111,   112,   112,   112,   112,   112,   113,   114,   115,   116,
     117,   117,   118,   118,   119,   119,   119,   119,   120,   121,
     121,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   128,   128,   128,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   131,   131,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   135,
     136,   136,   137,   138,   138,   138,   138,   139,   139,   139,
     140,   140,   140,   141,   141,   141,   141,   141,   142,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   152,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   154,   155,   155,   156,   157,
     157,   158,   158,   158,   159,   159,   160,   160,   160,   160,
     160,   160,   161,   161,   162,   162,   162,   162,   162,   163,
     164,   164,   165,   165,   165,   165,   166,   166,   166,   166,
     167,   167,   167,   168,   168,   168,   169,   169,   170,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   173,   173,   173,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   175,   175,   176,   176,   177,   177,
     178,   105,   105,   106,   179,   179,   180,   180,   181,   182,
     183,   184,   184,   107,   185,   186,   186,   186,   186,   187,
     188,   188,   188,   188,   189,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   193,   193,   194,   194,   194,
     194,   194,   194,   194,   195,   195,   196,   196,   197,   197,
     197,   197,   197,   197,   198,   198,   199,   199,   200,   200,
     200,   201,   201,   201,   201,   201,   202,   202,   202,   202,
     203,   204,   204,   205,   205,   205,   205,   206,   206,   207,
     207,   208,   208,   208,   208,   208,   208,   209,   209,   209,
     210,   210,   210,   210,   211,   211,   211,   211,   211,   211,
     211,   212,   212,   213,   213,   213,   213,   213,   214,   215,
     216,   217,   217,   218,   218,   218,   218,   219,   219,   220,
     221,   221,   222,   222,   223,   223,   223,   223,   223,   224,
     110,   225,   225,   226,   226,   226
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     2,     3,     1,     1,     1,
       2,     1,     3,     2,     1,     1,     1,     4,     4,     3,
       4,     3,     3,     3,     2,     2,     3,     1,     6,     5,
       5,     4,     4,     3,     3,     2,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     4,     3,     4,     3,     3,     2,     7,     6,
       6,     5,     6,     5,     5,     4,     3,     2,     1,     2,
       1,     1,     3,     4,     3,     2,     3,     2,     5,     4,
       1,     4,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     1,     5,     1,
       2,     5,     7,     5,     1,     4,     5,     7,     8,     7,
       7,     6,     1,     1,     2,     2,     3,     2,     3,     1,
       1,     2,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     3,     2,     4,     3,
       3,     2,     5,     4,     4,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       4,     0,     1,     1,     4,     3,     2,     2,     1,     3,
       5,     4,     4,     3,     5,     4,     3,     1,     3,     2,
       1,     1,     2,     1,     4,     3,     3,     2,     1,     1,
       4,     3,     3,     2,     2,     1,     1,     1,     2,     1,
       3,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     4,     3,     3,     2,     3,     4,     3,     3,     2,
       1,     2,     3,     1,     4,     3,     2,     1,     3,     4,
       3,     3,     2,     2,     4,     3,     1,     1,     1,     1,
       2,     1,     3,     2,     3,     2,     2,     1,     2,     1,
       1,     1,     3,     2,     2,     1,     3,     2,     2,     2,
       2,     1,     3,     3,     2,     2,     1,     1,     1,     2,
       1,     3,     4,     3,     3,     2,     2,     1,     1,     4,
       1,     1,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      22,    10,     2,     5,     7,     8,     9,     0,   198,   212,
     211,   327,   286,   219,     0,   201,   218,   214,   215,     0,
     199,   213,   216,   200,   328,   195,   329,   217,     0,   220,
     287,     0,     0,   278,   279,   223,    35,     3,     4,   221,
     222,     0,    29,     0,   289,    28,     0,     0,    23,   180,
     182,     0,   197,   192,   193,   194,   202,   210,   205,   204,
     185,   244,   246,   247,   245,     0,     0,     0,   184,   191,
     267,   270,   271,     0,   206,   273,   183,   203,     0,   326,
      31,   288,     0,   208,     0,     0,    34,   231,     0,    19,
       0,     5,   251,     0,     0,     0,     0,     0,     0,   293,
       0,    30,   277,   285,     0,     1,   283,   221,   209,    33,
     181,   186,   201,   196,   190,   270,   187,   188,   189,     0,
       0,     0,     0,     0,   310,   309,   269,     0,     0,   272,
       0,     0,     0,   227,     0,   323,   282,   207,   229,     0,
     235,   240,     0,   236,   238,     0,   230,     0,   266,   252,
       0,   251,   251,     0,    29,   259,     0,    35,   243,     0,
       0,   291,   292,   276,   284,    16,    18,    17,     0,     0,
       0,     0,    21,     0,     0,    20,     0,    68,    69,    67,
      66,    64,    65,   375,    24,    11,    12,    13,    14,    15,
      36,    27,     0,    56,   100,     0,    62,    63,   102,   103,
     107,   110,   113,   118,   121,   123,   125,   127,   129,   131,
     133,   373,   297,   202,   210,   374,   295,     0,   371,   281,
      32,   308,     0,   268,   270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
      64,    65,    29,    27,   143,     0,   159,   146,   147,   148,
       0,   149,   150,   151,   152,   179,   192,     0,    34,   243,
       0,   359,   360,     0,     0,   313,     0,   311,     0,    47,
     307,   275,   131,   145,     0,   357,   358,     0,   337,   320,
       0,    29,     0,   340,   345,   339,     0,   331,     0,   341,
       0,   225,     0,     0,   356,     0,   350,   351,   321,   226,
     280,   228,   233,     0,     0,   234,     0,   265,     0,   250,
       0,     0,     0,    35,     0,   254,    35,     0,   262,   290,
       0,     0,    25,     0,   208,    57,    58,     0,    97,     0,
       0,     0,    77,    88,     0,    60,     0,     0,   209,    44,
      45,     0,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   136,   137,   138,   141,   142,
       0,   135,     0,     0,   296,     0,     0,     0,     0,     0,
     299,   294,   300,     0,   369,   306,    25,   174,     0,   175,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   156,     0,     0,   160,    34,     0,   366,     0,     0,
     316,   317,     0,     0,   312,   274,   347,     0,   336,   345,
       0,     0,   343,   344,   338,   319,   330,   335,     0,   333,
     224,   354,     0,   355,     0,   324,   237,   239,   232,   264,
     249,   248,    35,     0,   257,   260,     0,    96,     0,     0,
      76,   207,     0,     0,     0,     0,    75,     0,    73,     0,
      87,    91,    90,     0,    26,     0,     0,     0,     0,    43,
       0,    39,     0,     0,    42,   104,   105,   106,   109,   108,
     111,   112,   116,   117,   114,   115,   119,   120,   122,   124,
     126,   128,   130,     0,   134,    41,     0,     0,     0,   304,
       0,   298,     0,   372,     0,   155,     0,   172,     0,   173,
     178,   164,     0,     0,   176,     0,     0,   153,   144,     0,
     364,   361,   363,     0,   315,     0,    46,   346,   334,   348,
     349,   345,   342,   332,   353,   352,   255,     0,     0,     0,
      74,    72,    99,    86,    85,     0,    71,    95,     0,     0,
       0,    89,    61,   101,     0,     0,     0,    55,     0,     0,
       0,    38,    37,     0,    40,   305,   303,   302,     0,   154,
       0,     0,     0,     0,     0,     0,     0,   158,   362,   314,
     318,    98,    84,     0,    70,    81,    83,    94,    92,     0,
      53,     0,     0,     0,    54,     0,     0,   132,   301,     0,
       0,     0,     0,   161,     0,   163,   166,    80,    82,    79,
      93,    52,     0,     0,     0,    51,     0,   171,     0,     0,
       0,     0,   165,    78,     0,    49,    50,   167,   170,   169,
       0,   162,    48,   168
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,    36,    37,    38,    39,    40,    41,    42,   184,
     185,   186,   187,   188,   189,    43,   190,   191,    45,   192,
      47,   193,   453,   469,   194,   195,   196,   331,   332,   460,
     461,   458,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   244,   373,   245,   274,
     246,   247,   248,   249,   250,   251,   512,   252,   508,   253,
     254,   149,    49,   255,    51,    52,   256,    54,    55,   266,
     214,    58,    59,   142,   143,   144,    60,    61,    62,    63,
      64,   150,    65,   315,    66,    67,    68,    69,    70,   224,
      72,    73,   102,    74,    75,   215,   216,   381,   382,    76,
     125,   126,   267,   412,    77,    78,    79,   286,   287,   288,
     289,   422,   423,   135,   296,   297,   290,   127,   261,   262,
     263,    80,   217,   218
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -402
static const yytype_int16 yypact[] =
{
    4113,  -402,  -402,  -402,  -402,  -402,  -402,   386,  -402,  -402,
    -402,  -402,  -402,  -402,   429,    20,  -402,  -402,  -402,    97,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,    15,  -402,
    -402,   682,    32,    39,  -402,  -402,  -402,  -402,  -402,    60,
    -402,    -1,  -402,    87,  -402,  -402,    46,    85,  4113,  -402,
    -402,    59,  -402,  4189,  -402,  -402,  -402,   198,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,    78,    96,   116,  -402,    99,
    -402,   301,   124,   682,  -402,  -402,  -402,  -402,   136,    66,
    -402,  -402,    53,   211,   200,    10,  -402,   156,   235,  -402,
    3659,  -402,  4113,   168,   -30,    21,   186,   386,    46,  -402,
     177,  -402,  -402,    39,  1944,  -402,    39,  -402,   246,   200,
    -402,  -402,  -402,  -402,    99,   301,  -402,  -402,  -402,   682,
    1653,   252,  2403,  3756,  -402,  -402,  -402,   190,  2500,  -402,
    2133,   200,   447,   163,   235,  -402,    39,   279,  -402,   235,
    -402,  -402,    29,  -402,   191,    13,  -402,  3848,  -402,  4113,
     206,  4113,  4113,   477,   216,  -402,   200,   241,  -402,    63,
      53,  -402,  -402,  -402,  -402,  -402,  -402,  -402,   723,  3756,
    3756,  2597,  -402,  4425,  3945,  -402,  1944,  -402,    32,  -402,
    -402,  -402,  -402,    -1,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,   466,   484,  -402,  3756,  -402,  -402,  -402,  -402,
     245,   133,   325,    19,   483,   223,   249,   272,   344,   695,
    -402,  -402,  4621,   320,  -402,  -402,   244,   -29,  -402,  -402,
    -402,  -402,   190,  -402,   436,   810,   328,  3756,   336,   351,
    1653,   362,   235,   364,   235,  2694,   366,   371,  -402,  2041,
      39,  -402,    -3,  4286,  -402,   219,  -402,  -402,  -402,  -402,
    1497,  -402,  -402,  -402,  -402,  -402,  4189,   200,   373,   378,
      32,  -402,   405,   410,  1395,  -402,   320,  -402,   -21,  -402,
    -402,  -402,    72,  -402,   413,  -402,  -402,   487,  -402,  -402,
    3756,    23,  1193,  -402,   333,   427,   433,  2209,   308,  -402,
     425,  -402,   235,   200,    60,    32,   441,  -402,  -402,   356,
    -402,  -402,  -402,   235,  3756,  -402,   453,  -402,  4037,  -402,
     444,   456,   200,   468,    63,  -402,   471,    63,  -402,  -402,
    2791,  4474,  -402,   466,  -402,  -402,  -402,   465,  -402,   532,
    1944,  4523,   470,   232,  1944,  -402,     3,   476,  -402,  -402,
    -402,   485,  2888,  3756,   485,  -402,  3756,  3756,  3756,  3756,
    3756,  3756,  3756,  3756,  3756,  3756,  3756,  3756,  3756,  3756,
    3756,  3756,  3756,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    3756,  -402,  3756,  3756,  -402,  2985,   200,   244,  3082,   492,
     244,  -402,   493,  1944,  -402,  -402,  4357,  -402,   499,  -402,
    1653,   516,  1750,   518,  1944,   521,  -402,   388,  1944,  1944,
    1653,  -402,  3756,   522,  -402,   524,    32,  -402,   252,  3179,
    -402,  -402,   503,  3756,  -402,  -402,  -402,  3756,  -402,   333,
     393,  1294,  -402,  -402,  -402,  -402,  -402,  -402,   577,  2209,
    -402,    60,    32,  -402,   447,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,   528,    63,  -402,  -402,   527,  -402,  1944,  4572,
     470,  -402,  3756,    58,   543,  4621,   470,  3276,  -402,  3756,
    -402,   544,   232,   546,  -402,  3756,   545,   466,    28,  -402,
     622,  -402,   107,     4,  -402,  -402,  -402,  -402,   245,   245,
     133,   133,   325,   325,   325,   325,    19,    19,   483,   223,
     249,   272,   344,   513,  -402,  -402,   270,   548,   554,  -402,
     553,  -402,  3373,  -402,  1653,  -402,   559,  -402,  1847,  -402,
    -402,   564,   562,   682,  -402,   563,   565,  -402,  -402,   569,
    -402,  -402,  -402,   292,  -402,  2306,  -402,  -402,  -402,  -402,
    -402,   570,  -402,  -402,  -402,  -402,  -402,  3756,   572,  4621,
     470,  -402,  -402,  -402,   470,   575,  -402,  -402,   324,    48,
    3756,  -402,  -402,  -402,   466,   226,   638,  -402,   466,   647,
     573,  -402,  -402,  3756,  -402,  -402,  -402,  -402,   582,  -402,
    3756,  3470,   592,  1653,   590,  1653,  1653,  -402,  -402,  -402,
    -402,  -402,   470,   589,  -402,  -402,   470,  -402,  -402,   588,
    -402,   466,   661,   597,  -402,   599,   466,  -402,  -402,   338,
    1653,   340,  3567,   633,  3756,  -402,  -402,  -402,   470,  -402,
    -402,  -402,   600,   466,   466,  -402,   619,  -402,  1653,  1653,
     343,  1653,  -402,  -402,   466,  -402,  -402,  -402,  -402,  -402,
    1653,  -402,  -402,  -402
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -402,  -402,    38,   678,  -402,  1058,  -402,  -100,   744,  -402,
    -402,  -402,  -402,   683,  -402,  -402,  -402,   530,   604,     0,
    -402,  -402,   -10,   357,   526,  -402,  -402,   382,  -299,   247,
    -402,  -401,  -402,  -151,   180,   213,   265,  -230,   266,   347,
     348,   346,   355,   352,   -87,   -60,    76,  -402,   166,  -199,
      35,  -402,   326,   -56,  -402,  -402,  -364,  -402,  -402,  -402,
    -402,     8,   -38,   420,   329,   -51,   122,  -402,   631,   215,
     129,  -402,  -402,   585,   424,  -402,  -402,  -402,  -402,  -402,
    -402,   480,  -402,  -402,  -129,  -402,  -402,   -27,   620,    12,
    -402,  -176,    70,    -8,  -402,  -146,   -25,   102,  -402,  -125,
    -106,  -402,  -261,  -402,  -402,  -402,  -402,  -264,  -402,   458,
     310,  -402,  -402,  -116,  -402,   307,  -402,  -109,   337,  -402,
    -402,  -402,  -402,   361
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -371
static const yytype_int16 yytable[] =
{
      46,   283,   113,   411,   183,   285,   222,    82,    48,   221,
     110,  -243,    71,     1,    88,   124,     1,   298,   325,   326,
     328,   270,   450,   426,     1,   103,   114,    89,   388,    95,
     337,    98,   456,     6,   515,   516,     2,  -243,     4,     5,
     380,   272,     4,   100,   345,   353,   354,   152,    46,   541,
     383,   153,   148,    46,     2,   546,     4,     5,   413,   124,
      71,     2,   414,     4,     5,   115,     1,   384,   273,     1,
      96,   124,     3,    98,   -34,     3,     4,   400,    12,   134,
     131,   416,   402,   402,   139,   129,   464,   105,   140,   562,
      46,   305,    46,   337,   104,   103,   159,   160,   103,   109,
       1,   370,    71,   417,    71,   437,    91,   302,   303,   220,
      32,   110,    30,   268,   355,   356,   385,   558,  -370,    98,
      46,   260,    53,   482,   483,   484,   485,   402,   103,    57,
      46,   292,   295,   588,   157,   111,    83,   413,   106,   584,
     272,   543,   284,   585,   572,   136,   132,    46,   333,    46,
     540,    46,    46,   314,   116,   308,   317,   462,   283,    71,
      99,    71,   285,    71,    71,   533,   124,   273,   323,   447,
      53,   372,   117,   164,    92,   108,   219,    57,   119,   500,
     211,   607,    57,   435,   454,   609,   413,   374,   463,     1,
     561,   313,   118,   272,   316,     3,     4,   318,   265,   269,
     156,   380,    99,     1,   380,   113,   300,   623,   128,     3,
       4,   137,    53,   130,    53,    56,   379,   272,   527,    57,
     273,    57,   530,   349,   350,    82,   161,   162,   124,   114,
      46,   113,   103,   145,     2,     1,     4,     5,     1,    46,
    -322,     3,     4,   132,   273,   151,   376,     1,    99,    57,
      46,   100,   282,     3,     4,     1,    46,   406,   376,    57,
     163,     3,     4,    56,   580,   391,   257,   120,    56,    53,
     110,    53,   304,    53,    53,  -293,    57,  -293,    57,  -293,
      57,    57,    46,   183,   309,   404,   462,    46,  -291,   319,
    -291,   272,  -291,   432,   419,   401,   333,   324,   402,   284,
     283,   542,   538,   568,   285,    56,   333,    56,    46,   545,
     222,  -370,   443,   221,   553,   591,   459,  -263,   273,   213,
      71,   338,   359,  -292,    33,  -292,   377,  -292,   378,   323,
     272,    34,   472,   379,   272,   213,    33,   346,   347,   348,
     265,   468,   336,    34,   468,    56,   360,   351,   352,   413,
     442,   589,   444,   564,    83,   445,  -290,   273,  -290,    57,
    -290,   273,    56,   124,    56,   496,    56,    56,    57,   513,
     361,   413,   362,   513,   513,   578,   497,   379,   120,    57,
     379,   121,   122,   123,   427,    57,   581,   428,    56,     1,
      46,   213,    46,   583,     2,     3,     4,     5,     6,   523,
      46,   397,   375,   413,   387,   336,   269,   587,   260,   282,
     120,    57,   389,   121,   421,   272,    57,   402,   269,   402,
      50,   616,   402,   618,   333,   505,   630,    56,    98,    46,
      53,   390,     1,  -325,   295,   517,   132,    57,     3,     4,
     531,   284,   273,    84,   392,   213,   394,   548,   398,   494,
       1,   269,   451,   399,   213,  -367,     3,     4,   324,   211,
    -368,   293,   379,   272,   514,   213,   555,   402,    50,   528,
     470,    56,   428,   470,     2,    32,     4,     5,   518,   498,
       1,   536,   501,   513,   408,   269,     3,     4,     1,   526,
     273,   312,   409,     2,     3,     4,     5,    56,   415,   466,
     336,    95,    56,   424,    46,   429,    85,   357,   358,   473,
      50,   425,    50,    98,   339,   340,   341,   122,   123,    57,
     434,    57,   440,    56,   269,   574,   475,   476,   477,    57,
      44,   438,   303,   269,   441,     1,    56,    81,   493,   569,
       2,     3,     4,     5,  -258,   213,    56,  -261,     1,   213,
     452,   282,   457,     2,     3,     4,     5,    99,    57,   465,
     511,    44,   478,   479,   511,   511,   342,    50,   343,    50,
     344,    50,    50,    46,   467,    46,    46,   502,    44,   504,
       1,   524,   525,    44,   106,     2,     3,     4,     5,     6,
     506,    97,   402,   563,   510,   556,   557,   559,   213,   519,
      46,   265,   153,    44,  -256,   213,  -365,   213,   603,   213,
     605,   606,   537,   213,   213,   213,   480,   481,    46,    46,
      44,    46,    44,   486,   487,   549,   544,    81,   550,   552,
      46,   310,   311,    57,   554,   617,   560,   565,   566,   597,
     136,   570,    99,   402,    56,   573,   575,   577,   576,    44,
     243,   421,   593,   628,   629,   582,   631,   280,   586,    31,
      44,   595,   596,   213,    56,   633,    32,   598,   602,    33,
      56,   604,   608,   610,   511,   612,    34,    44,   621,    44,
     622,    44,    44,   590,   592,     1,   613,   594,   614,   624,
       2,     3,     4,     5,     6,   627,    97,    93,    90,   155,
     335,   474,    57,   449,    57,    57,   488,   490,   489,   551,
     363,   364,   365,   366,   367,   368,   369,   491,   507,   213,
     611,   509,   492,   213,   370,   615,     1,   436,    50,    57,
     306,     2,     3,     4,     5,   212,   599,   601,   532,   223,
     420,   535,   625,   626,   503,   521,     0,    57,    57,     0,
      57,     0,     0,   632,    56,    81,     0,     0,    87,    57,
     243,     0,     0,    94,    31,   320,     0,     0,   620,   243,
       0,    32,     0,     0,    33,     0,   371,     0,     0,   321,
     243,    34,     0,     0,     0,     0,    44,     0,   213,     0,
     213,   213,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,     0,     0,   212,     0,     0,
       0,     0,    44,     1,     0,   213,     0,    44,     2,     3,
       4,     5,     6,   133,     0,     0,     0,     0,   138,   141,
       0,     0,   146,   213,   213,     0,   213,     0,    44,   154,
     158,     0,     0,   212,     0,   213,     0,     0,     0,     0,
       0,     0,   320,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,   259,   321,     0,     0,     0,
     212,     0,     0,     0,   281,   291,   158,     0,   299,     0,
       0,     0,     0,   301,     0,     0,     0,     0,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   158,     0,    32,
     158,     0,     0,   158,     0,     0,     0,     0,     0,     0,
       0,     0,   322,     0,     0,     0,     0,   158,     0,     0,
     243,     0,   243,     0,     0,     0,     0,     0,     0,     0,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,     0,     0,     0,   158,     0,    44,    44,
     158,   212,   212,     0,     0,   212,     0,     0,     0,   386,
       0,     0,     0,     0,   242,     0,   393,     0,   395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   212,   281,     0,     0,   212,
     212,   281,     0,     0,   243,     0,   430,   158,     0,     0,
       0,     0,     0,    44,     0,     0,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,   158,     0,
       0,   158,     0,     0,     0,   158,     0,     0,     0,     0,
       0,     0,    86,   158,     0,   158,     0,   158,     0,   212,
     212,     0,     0,     0,     0,   158,   212,     0,   158,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   107,   243,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,   158,     0,     0,   158,     0,     0,     0,     0,     0,
     243,     0,     0,     0,   242,     0,     0,    86,     0,   212,
     107,     0,    86,     0,   242,     0,     0,     0,   243,   243,
       0,   243,   259,     0,    86,     0,   107,     0,     0,     0,
     243,     0,     0,     0,     0,     0,     0,    86,     0,     0,
     212,     0,   281,   281,     0,     0,     0,     0,   158,   258,
       0,     0,     0,     0,     0,     0,     0,   158,     0,    86,
     294,     0,     0,   158,     0,     0,     1,     0,     0,   158,
       0,     2,     3,     4,     5,     6,   158,     7,     0,     0,
     158,    86,     0,     0,    86,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
      10,    11,    12,     0,     0,     0,   101,    13,     0,    14,
     112,     0,    16,     0,     0,     0,    17,    18,   242,     0,
     107,     0,    20,     0,    21,    22,     0,    23,    24,     0,
       0,    25,    26,    27,     0,    29,    30,     0,     0,   418,
       0,     0,     0,   280,    86,    31,     0,     0,     0,     0,
       0,     0,    32,   158,     0,    33,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     1,   165,   166,
     167,    89,     2,     3,     4,     5,     6,     0,   168,     0,
       0,     0,     0,     0,     0,   405,     0,   242,   407,   242,
     242,     0,     0,     0,   169,   170,     0,     0,     9,     0,
       0,    10,     0,     0,     0,     0,   171,     0,    13,     0,
       0,     0,   172,    16,   242,     0,     0,    17,    18,     0,
     173,   431,     0,   433,     0,    21,    22,   174,     0,     0,
       0,   175,   242,   242,    27,   242,    29,     0,     0,     0,
      86,     0,     0,     0,   242,     0,   176,     0,     0,     0,
       0,   107,   177,   178,   179,   180,   181,     0,     0,     0,
       0,    86,     0,   182,     0,   529,     0,     0,     1,   165,
     166,   167,    89,     2,     3,     4,     5,     6,     0,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,     0,     0,     9,
       0,     0,    10,     0,    86,    86,     0,   171,    86,    13,
       0,     0,     0,   172,    16,     0,     0,     0,    17,    18,
       0,   173,     0,     0,     0,     0,    21,    22,   174,     0,
       0,     0,   175,     0,   520,    27,   258,    29,     0,     0,
       0,     0,   264,   410,     0,     0,     0,   176,     0,     0,
       0,     0,     0,   177,   178,   179,   180,   181,     0,     0,
     534,     0,   294,     0,   182,     0,     0,     0,     0,     0,
       1,   165,   166,   167,    89,     2,     3,     4,     5,     6,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,   107,   107,   169,   170,     0,
       8,     9,   226,   227,    10,    11,    12,   228,   229,   171,
     230,    13,     0,    14,   112,   172,    16,   231,   232,   233,
      17,    18,   234,   173,     0,     0,    20,   235,    21,    22,
     174,    23,    24,   236,   175,    25,    26,    27,    28,    29,
      30,   237,     0,   238,   120,   403,     0,     0,     0,   239,
       0,     0,     0,     0,     0,   177,   178,   179,   180,   240,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   107,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   107,     0,     1,   165,   166,   167,
      89,     2,     3,     4,     5,     6,     0,   225,     0,     0,
       0,   107,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   169,   170,     0,     8,     9,   226,   227,
      10,    11,    12,   228,   229,   171,   230,    13,     0,    14,
     112,   172,    16,   231,   232,   233,    17,    18,   234,   173,
       0,     0,    20,   235,    21,    22,   174,    23,    24,   236,
     175,    25,    26,    27,    28,    29,    30,   237,     0,   238,
     120,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       0,   177,   178,   179,   180,   240,     0,     0,     0,     0,
       0,     0,   241,     1,   165,   166,   167,    89,     2,     3,
       4,     5,     6,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,   170,     0,     8,     9,     0,     0,    10,    11,    12,
       0,     0,   171,     0,    13,     0,    14,   112,   172,    16,
       0,     0,     0,    17,    18,     0,   173,     0,     0,    20,
       0,    21,    22,   174,    23,    24,     0,   175,    25,    26,
      27,     0,    29,    30,     0,     0,   238,     0,     0,     0,
       0,     0,   239,     0,     0,     0,     0,     0,   177,   178,
     179,   180,   240,     0,     0,     0,     0,     0,     0,   241,
       1,   165,   166,   167,    89,     2,     3,     4,     5,     6,
       0,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,     0,
       0,     9,     0,     0,    10,    11,    12,     0,     0,   171,
       0,    13,     0,    14,     0,   172,    16,     0,     0,     0,
      17,    18,     0,   173,     0,     0,     0,     0,    21,    22,
     174,     0,    24,     0,   175,     0,    26,    27,     0,    29,
      30,     0,     0,   571,     0,     0,     0,     0,     0,   176,
       0,     0,     0,     0,     0,   177,   178,   179,   180,   181,
       0,     0,     0,     0,     0,     0,   182,     1,   165,   166,
     167,    89,     2,     3,     4,     5,     6,     0,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   170,     0,     0,     9,     0,
       0,    10,    11,    12,     0,     0,   171,     0,    13,     0,
      14,     0,   172,    16,     0,     0,     0,    17,    18,     0,
     173,     0,     0,     0,     0,    21,    22,   174,     0,    24,
       0,   175,     0,    26,    27,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,   176,     0,     0,     0,
       0,     0,   177,   178,   179,   180,   181,     0,     0,     0,
       0,     0,     0,   182,     1,   165,   166,   167,    89,     2,
       3,     4,     5,     6,     0,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   170,     0,     0,     9,     0,     0,    10,    11,
      12,     0,     0,   171,     0,    13,     0,    14,     0,   172,
      16,     0,     0,     0,    17,    18,     0,   173,     0,     0,
       0,     0,    21,    22,   174,     0,    24,     0,   175,     0,
      26,    27,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,     0,     0,     0,   177,
     178,   179,   180,   240,     0,     0,     1,     0,     0,     0,
     241,     2,     3,     4,     5,     6,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
     112,     0,    16,     0,     0,     0,    17,    18,     0,     0,
     275,   276,    20,     0,    21,    22,     0,    23,    24,     0,
       0,    25,    26,    27,   277,    29,    30,     0,     0,   278,
       0,   279,     1,   280,     0,    31,     0,     2,     3,     4,
       5,     6,    32,     7,     0,    33,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,   112,     0,    16,     0,
       0,     0,    17,    18,     0,     0,   275,   276,    20,     0,
      21,    22,     0,    23,    24,     0,     0,    25,    26,    27,
     277,    29,    30,     0,     0,   278,     0,     0,     0,   280,
       0,    31,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,     0,     0,     0,    34,     1,
     165,   166,   167,    89,     2,     3,     4,     5,     6,     0,
     168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,   171,     0,
      13,     0,     0,     0,   172,    16,     0,     0,     0,    17,
      18,     0,   173,     0,     0,     0,     0,    21,    22,   174,
       0,     0,     0,   175,     0,     0,    27,     0,    29,     0,
       0,     0,     0,   264,   579,     0,     0,     0,   176,     0,
       0,     0,     0,     0,   177,   178,   179,   180,   181,     0,
       0,     0,     0,     0,     0,   182,     1,   165,   166,   167,
      89,     2,     3,     4,     5,     6,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,   171,     0,    13,     0,     0,
       0,   172,    16,     0,     0,     0,    17,    18,     0,   173,
       0,     0,     0,     0,    21,    22,   174,     0,     0,     0,
     175,     0,     0,    27,     0,    29,     0,     0,     0,     0,
     264,     0,     0,     0,     0,   176,     0,     0,     0,     0,
       0,   177,   178,   179,   180,   181,     0,     0,     0,     0,
       0,     0,   182,     1,   165,   166,   167,    89,     2,     3,
       4,     5,     6,     0,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,   170,     0,     0,     9,     0,     0,    10,     0,     0,
       0,     0,   171,     0,    13,     0,     0,     0,   172,    16,
       0,     0,     0,    17,    18,     0,   173,     0,     0,     0,
       0,    21,    22,   174,     0,     0,     0,   175,     0,     0,
      27,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,     0,     0,   271,     0,     0,   177,   178,
     179,   180,   181,     0,     0,     0,     0,     0,     0,   182,
       1,   165,   166,   167,    89,     2,     3,     4,     5,     6,
       0,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,   171,
       0,    13,     0,     0,     0,   172,    16,     0,     0,     0,
      17,    18,     0,   173,     0,     0,     0,     0,    21,    22,
     174,     0,     0,     0,   175,     0,     0,    27,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,   327,     0,     0,     0,   177,   178,   179,   180,   181,
       0,     0,     0,     0,     0,     0,   182,     1,   165,   166,
     167,    89,     2,     3,     4,     5,     6,     0,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   170,     0,     0,     9,     0,
       0,    10,     0,     0,     0,     0,   171,     0,    13,     0,
       0,     0,   172,    16,     0,     0,     0,    17,    18,     0,
     173,     0,     0,     0,     0,    21,    22,   174,     0,     0,
       0,   175,     0,     0,    27,     0,    29,     0,     0,     0,
     396,     0,     0,     0,     0,     0,   176,     0,     0,     0,
       0,     0,   177,   178,   179,   180,   181,     0,     0,     0,
       0,     0,     0,   182,     1,   165,   166,   167,    89,     2,
       3,     4,     5,     6,     0,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   170,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,   171,     0,    13,     0,     0,     0,   172,
      16,     0,     0,     0,    17,    18,     0,   173,     0,     0,
       0,     0,    21,    22,   174,     0,     0,     0,   175,     0,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,   446,     0,     0,     0,   177,
     178,   179,   180,   181,     0,     0,     0,     0,     0,     0,
     182,     1,   165,   166,   167,    89,     2,     3,     4,     5,
       6,     0,   168,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   170,
       0,     0,     9,     0,     0,    10,     0,     0,     0,     0,
     171,     0,    13,     0,     0,     0,   172,    16,     0,     0,
       0,    17,    18,     0,   173,     0,     0,     0,     0,    21,
      22,   174,     0,     0,     0,   175,     0,     0,    27,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   471,     0,     0,     0,     0,   177,   178,   179,   180,
     181,     0,     0,     0,     0,     0,     0,   182,     1,   165,
     166,   167,    89,     2,     3,     4,     5,     6,     0,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,     0,     0,     9,
       0,     0,    10,     0,     0,     0,     0,   171,     0,    13,
       0,     0,     0,   172,    16,     0,     0,     0,    17,    18,
       0,   173,     0,     0,     0,     0,    21,    22,   174,     0,
       0,     0,   175,     0,     0,    27,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   495,     0,
       0,     0,     0,   177,   178,   179,   180,   181,     0,     0,
       0,     0,     0,     0,   182,     1,   165,   166,   167,    89,
       2,     3,     4,     5,     6,     0,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,     0,     0,     9,     0,     0,    10,
       0,     0,     0,     0,   171,     0,    13,     0,     0,     0,
     172,    16,     0,     0,     0,    17,    18,     0,   173,     0,
       0,     0,     0,    21,    22,   174,     0,     0,     0,   175,
       0,     0,    27,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,     0,     0,   499,     0,     0,
     177,   178,   179,   180,   181,     0,     0,     0,     0,     0,
       0,   182,     1,   165,   166,   167,    89,     2,     3,     4,
       5,     6,     0,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     170,     0,     0,     9,     0,     0,    10,     0,     0,     0,
       0,   171,     0,    13,     0,     0,     0,   172,    16,     0,
       0,     0,    17,    18,     0,   173,     0,     0,     0,     0,
      21,    22,   174,     0,     0,     0,   175,     0,     0,    27,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,   522,     0,     0,     0,     0,   177,   178,   179,
     180,   181,     0,     0,     0,     0,     0,     0,   182,     1,
     165,   166,   167,    89,     2,     3,     4,     5,     6,     0,
     168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,   171,     0,
      13,     0,     0,     0,   172,    16,     0,     0,     0,    17,
      18,     0,   173,     0,     0,     0,     0,    21,    22,   174,
       0,     0,     0,   175,     0,     0,    27,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   547,
       0,     0,     0,     0,   177,   178,   179,   180,   181,     0,
       0,     0,     0,     0,     0,   182,     1,   165,   166,   167,
      89,     2,     3,     4,     5,     6,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,   171,     0,    13,     0,     0,
       0,   172,    16,     0,     0,     0,    17,    18,     0,   173,
       0,     0,     0,     0,    21,    22,   174,     0,     0,     0,
     175,     0,     0,    27,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,     0,     0,   567,     0,
       0,   177,   178,   179,   180,   181,     0,     0,     0,     0,
       0,     0,   182,     1,   165,   166,   167,    89,     2,     3,
       4,     5,     6,     0,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,   170,     0,     0,     9,     0,     0,    10,     0,     0,
       0,     0,   171,     0,    13,     0,     0,     0,   172,    16,
       0,     0,     0,    17,    18,     0,   173,     0,     0,     0,
       0,    21,    22,   174,     0,     0,     0,   175,     0,     0,
      27,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,   600,     0,     0,     0,     0,   177,   178,
     179,   180,   181,     0,     0,     0,     0,     0,     0,   182,
       1,   165,   166,   167,    89,     2,     3,     4,     5,     6,
       0,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,   171,
       0,    13,     0,     0,     0,   172,    16,     0,     0,     0,
      17,    18,     0,   173,     0,     0,     0,     0,    21,    22,
     174,     0,     0,     0,   175,     0,     0,    27,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     619,     0,     0,     0,     0,   177,   178,   179,   180,   181,
       0,     0,     1,     0,     0,     0,   182,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,     0,    16,     0,
       0,     0,    17,    18,    19,     0,     0,     0,    20,     0,
      21,    22,     0,    23,    24,     0,     0,    25,    26,    27,
      28,    29,    30,     0,     0,     0,   147,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,     0,     0,     0,    34,     1,
     165,   166,   167,    89,     2,     3,     4,     5,     6,     0,
     168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,   171,     0,
      13,     0,     0,     0,   172,    16,     0,     0,     0,    17,
      18,     0,   173,     0,     0,     0,     0,    21,    22,   174,
       0,     0,     0,   175,     0,     0,    27,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,     0,   177,   178,   179,   180,   181,     0,
       0,     1,     0,     0,     0,   182,     2,     3,     4,     5,
       6,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,    10,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,     0,    16,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    20,     0,    21,
      22,     0,    23,    24,     0,     0,    25,    26,    27,    28,
      29,    30,     0,     0,     0,     0,   307,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,    32,     0,     0,
      33,     0,     0,     0,     0,     0,     0,    34,     1,   165,
     166,   167,    89,     2,     3,     4,     5,     6,     0,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,     0,     0,     9,
       0,     0,    10,     0,     0,     0,     0,   171,     0,    13,
       0,     0,     0,   172,    16,     0,     0,     0,    17,    18,
       0,   173,     0,     0,     0,     0,    21,    22,   174,     0,
       0,     0,   175,     0,     0,    27,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   334,     0,     0,
       0,     0,     0,   177,   178,   179,   180,   181,     0,     0,
       1,     0,     0,     0,   182,     2,     3,     4,     5,     6,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,     0,     0,    10,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,     0,    16,     0,     0,     0,
      17,    18,    19,     0,     0,     0,    20,     0,    21,    22,
       0,    23,    24,     0,     0,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,   439,     1,     0,     0,    31,
       0,     2,     3,     4,     5,     6,    32,     7,     0,    33,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,     0,    16,     0,     0,     0,    17,    18,    19,     0,
       0,     0,    20,     0,    21,    22,     0,    23,    24,     0,
       0,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     1,     0,     0,    31,     0,     2,     3,     4,
       5,     6,    32,     7,     0,    33,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,   112,     0,    16,     0,
       0,     0,    17,    18,     0,     0,     0,     0,    20,     0,
      21,    22,     0,    23,    24,     0,     0,    25,    26,    27,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,     0,     0,     0,    34,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,  -289,     0,
    -289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -289,     0,     0,  -289,  -289,  -289,     0,     0,  -289,     0,
    -289,     0,  -289,     0,  -289,  -289,     0,     0,     0,  -289,
    -289,     0,  -289,     0,     0,     0,     0,  -289,  -289,  -289,
       0,  -289,     0,  -289,     0,  -289,  -289,     0,  -289,  -289,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,     0,  -289,  -289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,     0,     0,   -29,   -29,   -29,     0,     0,   -29,
       0,   -29,     0,   -29,     0,   -29,   -29,     0,     0,     0,
     -29,   -29,     0,   -29,     0,     0,     0,     0,   -29,   -29,
     -29,     0,   -29,     0,   -29,     0,   -29,   -29,     1,   -29,
     -29,     0,     0,     2,     3,     4,     5,     0,     0,   329,
       0,     0,     0,     0,     0,   -29,   -29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,    10,    11,    12,     0,     0,     0,     0,    13,
       0,    14,     0,     0,    16,     0,     0,     1,    17,    18,
       0,     0,     2,     3,     4,     5,    21,    22,   329,     0,
      24,     0,     0,     0,    26,    27,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,   330,     9,     0,
       0,    10,    11,    12,     0,     0,     0,     0,    13,     0,
      14,     0,     0,    16,     0,     0,     1,    17,    18,     0,
       0,     2,     3,     4,     5,    21,    22,   329,     0,    24,
       0,     0,     0,    26,    27,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,   448,     9,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
       0,     0,    16,     0,     0,     1,    17,    18,     0,     0,
       2,     3,     4,     5,    21,    22,   329,     0,    24,     0,
       0,     0,    26,    27,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,   455,     9,     0,     0,    10,
      11,    12,     0,     0,     0,     0,    13,     0,    14,     0,
       0,    16,     0,     0,     1,    17,    18,     0,     0,     2,
       3,     4,     5,    21,    22,   329,     0,    24,     0,     0,
       0,    26,    27,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,   539,     9,     0,     0,    10,    11,
      12,     0,     0,     0,     0,    13,     0,    14,     0,     0,
      16,     0,     0,     0,    17,    18,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,    24,     0,     0,     0,
      26,    27,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       0,   130,    53,   264,   104,   130,   115,     7,     0,   115,
      48,    14,     0,     3,    14,    71,     3,   133,   169,   170,
     171,   127,   321,   287,     3,    33,    53,     7,   227,    14,
     176,    31,   331,    12,   398,   399,     8,    14,    10,    11,
     216,   128,    10,    31,   195,    26,    27,    77,    48,   450,
      79,    81,    90,    53,     8,   456,    10,    11,    79,   115,
      48,     8,    83,    10,    11,    53,     3,    96,   128,     3,
      55,   127,     9,    73,    14,     9,    10,    80,    39,    79,
      14,   280,    79,    79,    84,    73,    83,     0,    78,    85,
      90,    78,    92,   239,    95,   103,    96,    97,   106,    14,
       3,    29,    90,    80,    92,   304,     9,    78,    79,   109,
      89,   149,    73,   123,    95,    96,   222,    89,    95,   119,
     120,   121,     0,   353,   354,   355,   356,    79,   136,     0,
     130,   131,   132,    85,    96,    76,     7,    79,    92,   540,
     227,    83,   130,   544,   508,    92,    80,   147,   173,   149,
     449,   151,   152,   153,    76,   147,   156,   333,   287,   147,
      31,   149,   287,   151,   152,   429,   222,   227,   168,   320,
      48,    99,    76,   103,    77,    46,   106,    48,    79,   378,
     104,   582,    53,   299,   330,   586,    79,   212,   334,     3,
      83,   153,    76,   280,   156,     9,    10,   159,   122,   123,
      14,   377,    73,     3,   380,   256,   136,   608,    84,     9,
      10,    82,    90,    77,    92,     0,   216,   304,   417,    90,
     280,    92,   421,    90,    91,   225,    97,    98,   284,   256,
     230,   282,   240,    77,     8,     3,    10,    11,     3,   239,
      77,     9,    10,    80,   304,    77,    14,     3,   119,   120,
     250,   239,   130,     9,    10,     3,   256,   257,    14,   130,
      83,     9,    10,    48,   525,   230,    14,    77,    53,   147,
     308,   149,    81,   151,   152,    77,   147,    79,   149,    81,
     151,   152,   282,   383,    78,   250,   462,   287,    77,   160,
      79,   378,    81,   293,   282,    76,   321,   168,    79,   287,
     429,   452,   448,   502,   429,    90,   331,    92,   308,   455,
     419,    95,   312,   419,   465,    89,    84,    76,   378,   104,
     308,   192,    99,    77,    92,    79,    82,    81,    84,   329,
     417,    99,   342,   333,   421,   120,    92,    92,    93,    94,
     264,   341,   176,    99,   344,   130,    97,    22,    23,    79,
     312,   550,   314,    83,   225,   317,    77,   417,    79,   230,
      81,   421,   147,   419,   149,   375,   151,   152,   239,   394,
      98,    79,    28,   398,   399,    83,   376,   377,    77,   250,
     380,    80,    81,    82,    76,   256,   537,    79,   173,     3,
     390,   176,   392,   539,     8,     9,    10,    11,    12,   409,
     400,   235,    82,    79,    76,   239,   330,    83,   408,   287,
      77,   282,    76,    80,    81,   502,   287,    79,   342,    79,
       0,    83,    79,    83,   449,   390,    83,   212,   428,   429,
     308,    80,     3,    77,   434,   400,    80,   308,     9,    10,
     428,   429,   502,    14,    82,   230,    82,   457,    82,   373,
       3,   375,   323,    82,   239,    82,     9,    10,   329,   383,
      82,    14,   462,   550,    76,   250,   466,    79,    48,    76,
     341,   256,    79,   344,     8,    89,    10,    11,   402,   377,
       3,   443,   380,   508,    79,   409,     9,    10,     3,   413,
     550,    14,    82,     8,     9,    10,    11,   282,    85,    14,
     334,    14,   287,    76,   504,    80,    77,    24,    25,   343,
      90,    78,    92,   513,    30,    31,    32,    81,    82,   390,
      79,   392,    78,   308,   448,   513,   346,   347,   348,   400,
       0,    78,    79,   457,    78,     3,   321,     7,   372,   504,
       8,     9,    10,    11,    76,   330,   331,    76,     3,   334,
      85,   429,    82,     8,     9,    10,    11,   428,   429,    83,
     394,    31,   349,   350,   398,   399,    82,   147,    84,   149,
      86,   151,   152,   573,    89,   575,   576,    84,    48,    80,
       3,    78,    79,    53,    92,     8,     9,    10,    11,    12,
      74,    14,    79,    80,    76,   466,   467,   468,   383,    77,
     600,   525,    81,    73,    76,   390,    82,   392,   573,   394,
     575,   576,    85,   398,   399,   400,   351,   352,   618,   619,
      90,   621,    92,   357,   358,   459,    83,    97,    84,    83,
     630,   151,   152,   504,    89,   600,    14,    83,    85,   563,
      92,    82,   513,    79,   429,    83,    83,    78,    83,   119,
     120,    81,    14,   618,   619,    83,   621,    80,    83,    82,
     130,    14,    89,   448,   449,   630,    89,    85,    76,    92,
     455,    81,    83,    85,   508,    14,    99,   147,    45,   149,
     604,   151,   152,   554,   555,     3,    89,   558,    89,    89,
       8,     9,    10,    11,    12,    76,    14,    19,    15,    95,
     174,   344,   573,   321,   575,   576,   359,   361,   360,   462,
      15,    16,    17,    18,    19,    20,    21,   362,   392,   504,
     591,   392,   370,   508,    29,   596,     3,   303,   308,   600,
     145,     8,     9,    10,    11,   104,   570,   571,   428,   119,
     282,   434,   613,   614,   383,   408,    -1,   618,   619,    -1,
     621,    -1,    -1,   624,   539,   225,    -1,    -1,    14,   630,
     230,    -1,    -1,    19,    82,    42,    -1,    -1,   602,   239,
      -1,    89,    -1,    -1,    92,    -1,    81,    -1,    -1,    56,
     250,    99,    -1,    -1,    -1,    -1,   256,    -1,   573,    -1,
     575,   576,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   282,     3,    -1,   600,    -1,   287,     8,     9,
      10,    11,    12,    79,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    88,   618,   619,    -1,   621,    -1,   308,    95,
      96,    -1,    -1,   212,    -1,   630,    -1,    -1,    -1,    -1,
      -1,    -1,    42,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,   121,    56,    -1,    -1,    -1,
     239,    -1,    -1,    -1,   130,   131,   132,    -1,   134,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    89,
     156,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,   173,    -1,    -1,
     390,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     400,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,    -1,    -1,    -1,   212,    -1,   428,   429,
     216,   330,   331,    -1,    -1,   334,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,   230,    -1,   232,    -1,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   394,   282,    -1,    -1,   398,
     399,   287,    -1,    -1,   504,    -1,   292,   293,    -1,    -1,
      -1,    -1,    -1,   513,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,   314,    -1,
      -1,   317,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    14,   329,    -1,   331,    -1,   333,    -1,   448,
     449,    -1,    -1,    -1,    -1,   341,   455,    -1,   344,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   573,    46,   575,   576,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     376,   377,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,
     600,    -1,    -1,    -1,   390,    -1,    -1,    79,    -1,   508,
      82,    -1,    84,    -1,   400,    -1,    -1,    -1,   618,   619,
      -1,   621,   408,    -1,    96,    -1,    98,    -1,    -1,    -1,
     630,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
     539,    -1,   428,   429,    -1,    -1,    -1,    -1,   434,   121,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   443,    -1,   131,
     132,    -1,    -1,   449,    -1,    -1,     3,    -1,    -1,   455,
      -1,     8,     9,    10,    11,    12,   462,    14,    -1,    -1,
     466,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,   178,    44,    -1,    46,
      47,    -1,    49,    -1,    -1,    -1,    53,    54,   504,    -1,
     192,    -1,    59,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    69,    70,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    80,   216,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,   539,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,   257,    -1,   573,   260,   575,
     576,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,   600,    -1,    -1,    53,    54,    -1,
      56,   293,    -1,   295,    -1,    61,    62,    63,    -1,    -1,
      -1,    67,   618,   619,    70,   621,    72,    -1,    -1,    -1,
     312,    -1,    -1,    -1,   630,    -1,    82,    -1,    -1,    -1,
      -1,   323,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,   333,    -1,    99,    -1,   101,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    37,    -1,   376,   377,    -1,    42,   380,    44,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    67,    -1,   406,    70,   408,    72,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
     432,    -1,   434,    -1,    99,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     462,    -1,    -1,    -1,    -1,   467,   468,    30,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   554,   555,    -1,    -1,   558,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   591,
      -1,    -1,    -1,    -1,   596,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,   613,   614,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   624,    30,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    33,    34,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    44,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    38,    39,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    65,    -1,    67,    -1,    69,    70,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    -1,    -1,    42,    -1,    44,    -1,
      46,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    65,
      -1,    67,    -1,    69,    70,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    63,    -1,    65,    -1,    67,    -1,
      69,    70,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,     3,    -1,    -1,    -1,
      99,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    59,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    78,     3,    80,    -1,    82,    -1,     8,     9,    10,
      11,    12,    89,    14,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    46,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      67,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    84,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    67,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      99,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    99,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    99,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      67,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,     3,    -1,    -1,    -1,    99,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    46,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,     3,    -1,    -1,    -1,    99,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,    -1,    46,    47,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    -1,    -1,    -1,    59,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
       3,    -1,    -1,    -1,    99,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    -1,    49,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    59,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    78,     3,    -1,    -1,    82,
      -1,     8,     9,    10,    11,    12,    89,    14,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    -1,    49,    -1,    -1,    -1,    53,    54,    55,    -1,
      -1,    -1,    59,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    82,    -1,     8,     9,    10,
      11,    12,    89,    14,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    46,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    69,    70,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      44,    -1,    46,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    65,    -1,    67,    -1,    69,    70,    -1,    72,    73,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    38,    39,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    65,    -1,    67,    -1,    69,    70,     3,    72,
      73,    -1,    -1,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,     3,    53,    54,
      -1,    -1,     8,     9,    10,    11,    61,    62,    14,    -1,
      65,    -1,    -1,    -1,    69,    70,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    34,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,
      46,    -1,    -1,    49,    -1,    -1,     3,    53,    54,    -1,
      -1,     8,     9,    10,    11,    61,    62,    14,    -1,    65,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,     3,    53,    54,    -1,    -1,
       8,     9,    10,    11,    61,    62,    14,    -1,    65,    -1,
      -1,    -1,    69,    70,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    34,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,
      -1,    49,    -1,    -1,     3,    53,    54,    -1,    -1,     8,
       9,    10,    11,    61,    62,    14,    -1,    65,    -1,    -1,
      -1,    69,    70,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    34,    -1,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    65,    -1,    -1,    -1,
      69,    70,    -1,    72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    10,    11,    12,    14,    33,    34,
      37,    38,    39,    44,    46,    47,    49,    53,    54,    55,
      59,    61,    62,    64,    65,    68,    69,    70,    71,    72,
      73,    82,    89,    92,    99,   104,   105,   106,   107,   108,
     109,   110,   111,   118,   120,   121,   122,   123,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     179,   180,   181,   182,   183,   185,   187,   188,   189,   190,
     191,   192,   193,   194,   196,   197,   202,   207,   208,   209,
     224,   120,   122,   173,    14,    77,   108,   111,   122,     7,
     116,     9,    77,   106,   111,    14,    55,    14,   122,   173,
     192,   108,   195,   196,    95,     0,    92,   108,   173,    14,
     165,    76,    47,   168,   190,   192,    76,    76,    76,    79,
      77,    80,    81,    82,   156,   203,   204,   220,    84,   192,
      77,    14,    80,   111,   122,   216,    92,   173,   111,   122,
      78,   111,   176,   177,   178,    77,   111,    77,   165,   164,
     184,    77,    77,    81,   111,   121,    14,   105,   111,   122,
     122,   173,   173,    83,   195,     4,     5,     6,    14,    30,
      31,    42,    48,    56,    63,    67,    82,    88,    89,    90,
      91,    92,    99,   110,   112,   113,   114,   115,   116,   117,
     119,   120,   122,   124,   127,   128,   129,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   171,   172,   173,   198,   199,   225,   226,   195,
     122,   203,   220,   191,   192,    14,    35,    36,    40,    41,
      43,    50,    51,    52,    55,    60,    66,    74,    76,    82,
      92,    99,   111,   120,   149,   151,   153,   154,   155,   156,
     157,   158,   160,   162,   163,   166,   169,    14,   108,   111,
     122,   221,   222,   223,    77,   149,   172,   205,   125,   149,
     203,    85,   147,   148,   152,    57,    58,    71,    76,    78,
      80,   111,   169,   187,   192,   202,   210,   211,   212,   213,
     219,   111,   122,    14,   108,   122,   217,   218,   216,   111,
     195,   111,    78,    79,    81,    78,   176,    78,   164,    78,
     184,   184,    14,   105,   122,   186,   105,   122,   105,   173,
      42,    56,   111,   122,   173,   136,   136,    84,   136,    14,
      82,   130,   131,   199,    82,   127,   151,   198,   173,    30,
      31,    32,    82,    84,    86,   136,    92,    93,    94,    90,
      91,    22,    23,    26,    27,    95,    96,    24,    25,    99,
      97,    98,    28,    15,    16,    17,    18,    19,    20,    21,
      29,    81,    99,   150,   199,    82,    14,    82,    84,   122,
     194,   200,   201,    79,    96,   203,   111,    76,   152,    76,
      80,   153,    82,   111,    82,   111,    76,   151,    82,    82,
      80,    76,    79,    78,   153,   108,   122,   108,    79,    82,
      78,   205,   206,    79,    83,    85,   152,    80,    76,   192,
     212,    81,   214,   215,    76,    78,   210,    76,    79,    80,
     111,   108,   122,   108,    79,   216,   177,   152,    78,    78,
      78,    78,   105,   122,   105,   105,    84,   136,    82,   130,
     131,   173,    85,   125,   198,    82,   131,    82,   134,    84,
     132,   133,   194,   198,    83,    83,    14,    89,   122,   126,
     173,    83,   125,   151,   126,   137,   137,   137,   138,   138,
     139,   139,   140,   140,   140,   140,   141,   141,   142,   143,
     144,   145,   146,   151,   149,    83,   125,   122,   200,    85,
     152,   200,    84,   226,    80,   153,    74,   155,   161,   167,
      76,   151,   159,   199,    76,   159,   159,   153,   149,    77,
     108,   221,    83,   125,    78,    79,   149,   152,    76,   101,
     152,   192,   213,   210,   108,   218,   105,    85,   198,    82,
     131,   134,   136,    83,    83,   198,   134,    83,   125,   151,
      84,   132,    83,   136,    89,   122,   173,   173,    89,   173,
      14,    83,    85,    80,    83,    83,    85,    85,   152,   153,
      82,    76,   159,    83,   192,    83,    83,    78,    83,    78,
     205,   136,    83,   198,   134,   134,    83,    83,    85,   152,
     173,    89,   173,    14,   173,    14,    89,   149,    85,   151,
      83,   151,    76,   153,    81,   153,   153,   134,    83,   134,
      85,   173,    14,    89,    89,   173,    83,   153,    83,    83,
     151,    45,   149,   134,    89,   173,   173,    76,   153,   153,
      83,   153,   173,   153
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1464 of yacc.c  */
#line 2901 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 1021 "parser.y"



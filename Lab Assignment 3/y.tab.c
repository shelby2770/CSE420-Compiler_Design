/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "23341065.y"


#include"symbol_info.h"
#include "symbol_table.h"

#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);

extern FILE *yyin;
extern YYSTYPE yylval;

ofstream outlog, errorlog;

int lines=1, error_cnt=0;
bool found_void=false;
// Symbol table related variables
symbol_table st(10, &outlog);
vector<symbol_info *> params;
int param_count = 0;

string current_function_name;
vector<string> error;
// declare any other variables or functions needed here

void yyerror(char *s)
	{
		cerr << "Syntax error: " << s << " at line " << lines << endl;
	}


/* Line 371 of yacc.c  */
#line 101 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     WHILE = 261,
     DO = 262,
     BREAK = 263,
     CONTINUE = 264,
     RETURN = 265,
     INT = 266,
     FLOAT = 267,
     CHAR = 268,
     VOID = 269,
     DOUBLE = 270,
     SWITCH = 271,
     CASE = 272,
     DEFAULT = 273,
     PRINTLN = 274,
     COLON = 275,
     GOTO = 276,
     ADDOP = 277,
     MULOP = 278,
     INCOP = 279,
     DECOP = 280,
     RELOP = 281,
     ASSIGNOP = 282,
     LOGICOP = 283,
     NOT = 284,
     LPAREN = 285,
     RPAREN = 286,
     LCURL = 287,
     RCURL = 288,
     LTHIRD = 289,
     RTHIRD = 290,
     SEMICOLON = 291,
     COMMA = 292,
     ID = 293,
     CONST_INT = 294,
     CONST_FLOAT = 295
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define CONTINUE 264
#define RETURN 265
#define INT 266
#define FLOAT 267
#define CHAR 268
#define VOID 269
#define DOUBLE 270
#define SWITCH 271
#define CASE 272
#define DEFAULT 273
#define PRINTLN 274
#define COLON 275
#define GOTO 276
#define ADDOP 277
#define MULOP 278
#define INCOP 279
#define DECOP 280
#define RELOP 281
#define ASSIGNOP 282
#define LOGICOP 283
#define NOT 284
#define LPAREN 285
#define RPAREN 286
#define LCURL 287
#define RCURL 288
#define LTHIRD 289
#define RTHIRD 290
#define SEMICOLON 291
#define COMMA 292
#define ID 293
#define CONST_INT 294
#define CONST_FLOAT 295



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 247 "y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  118

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    15,    23,
      24,    31,    36,    40,    43,    45,    46,    51,    54,    58,
      60,    62,    64,    68,    75,    77,    82,    84,    87,    89,
      91,    93,   101,   107,   115,   121,   127,   131,   133,   136,
     138,   143,   145,   149,   151,   155,   157,   161,   163,   167,
     169,   173,   176,   179,   181,   183,   188,   192,   194,   196,
     199,   202,   204,   205,   209
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    43,    -1,    43,    44,    -1,    44,    -1,
      51,    -1,    45,    -1,    -1,    52,    38,    30,    48,    31,
      46,    49,    -1,    -1,    52,    38,    30,    31,    47,    49,
      -1,    48,    37,    52,    38,    -1,    48,    37,    52,    -1,
      52,    38,    -1,    52,    -1,    -1,    32,    50,    54,    33,
      -1,    32,    33,    -1,    52,    53,    36,    -1,    11,    -1,
      12,    -1,    14,    -1,    53,    37,    38,    -1,    53,    37,
      38,    34,    39,    35,    -1,    38,    -1,    38,    34,    39,
      35,    -1,    55,    -1,    54,    55,    -1,    51,    -1,    56,
      -1,    49,    -1,     5,    30,    56,    56,    58,    31,    55,
      -1,     3,    30,    58,    31,    55,    -1,     3,    30,    58,
      31,    55,     4,    55,    -1,     6,    30,    58,    31,    55,
      -1,    19,    30,    38,    31,    36,    -1,    10,    58,    36,
      -1,    36,    -1,    58,    36,    -1,    38,    -1,    38,    34,
      58,    35,    -1,    59,    -1,    57,    27,    59,    -1,    60,
      -1,    60,    28,    60,    -1,    61,    -1,    61,    26,    61,
      -1,    62,    -1,    61,    22,    62,    -1,    63,    -1,    62,
      23,    63,    -1,    22,    63,    -1,    29,    63,    -1,    64,
      -1,    57,    -1,    38,    30,    65,    31,    -1,    30,    58,
      31,    -1,    39,    -1,    40,    -1,    57,    24,    -1,    57,
      25,    -1,    66,    -1,    -1,    66,    37,    59,    -1,    59,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    49,    56,    65,    71,    80,    79,   114,
     113,   136,   156,   162,   173,   182,   181,   202,   210,   255,
     261,   267,   275,   281,   287,   293,   301,   307,   315,   321,
     327,   333,   340,   346,   352,   358,   371,   379,   385,   394,
     400,   428,   434,   482,   488,   496,   502,   510,   516,   524,
     530,   553,   559,   565,   573,   579,   673,   679,   685,   691,
     704,   719,   726,   732,   738
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BREAK", "CONTINUE", "RETURN", "INT", "FLOAT", "CHAR", "VOID", "DOUBLE",
  "SWITCH", "CASE", "DEFAULT", "PRINTLN", "COLON", "GOTO", "ADDOP",
  "MULOP", "INCOP", "DECOP", "RELOP", "ASSIGNOP", "LOGICOP", "NOT",
  "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON",
  "COMMA", "ID", "CONST_INT", "CONST_FLOAT", "$accept", "start", "program",
  "unit", "func_definition", "$@1", "$@2", "parameter_list",
  "compound_statement", "$@3", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", "arguments", YY_NULL
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
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    46,    45,    47,
      45,    48,    48,    48,    48,    50,    49,    49,    51,    52,
      52,    52,    53,    53,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     0,     7,     0,
       6,     4,     3,     2,     1,     0,     4,     2,     3,     1,
       1,     1,     3,     6,     1,     4,     1,     2,     1,     1,
       1,     7,     5,     7,     5,     5,     3,     1,     2,     1,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     2,     2,     1,     1,     4,     3,     1,     1,     2,
       2,     1,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    20,    21,     0,     2,     4,     6,     5,     0,
       1,     3,    24,     0,     0,     0,    18,     0,     9,     0,
      14,     0,    22,     0,     7,     0,    13,    25,     0,    15,
      10,     0,    12,     0,    17,     0,     8,    11,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    39,    57,
      58,    30,    28,     0,     0,    26,    29,    54,     0,    41,
      43,    45,    47,    49,    53,     0,     0,     0,     0,     0,
      54,    51,    52,     0,    62,     0,    24,    16,    27,    59,
      60,     0,    38,     0,     0,     0,     0,     0,     0,     0,
      36,     0,    56,    64,     0,    61,     0,    42,    44,    48,
      46,    50,     0,     0,     0,     0,    55,     0,    40,    32,
       0,    34,    35,    63,     0,     0,    33,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    31,    23,    19,    51,    35,
      52,    53,    13,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    94,    95
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int8 yypact[] =
{
      45,   -65,   -65,   -65,     4,    45,   -65,   -65,   -65,   -19,
     -65,   -65,    -9,    10,     2,   -37,   -65,   -16,   -65,   -13,
      -3,    -6,    14,    36,   -65,    45,   -65,   -65,    -1,    21,
     -65,    36,    33,    52,   -65,   102,   -65,   -65,   -65,    55,
      65,    68,    50,    69,    50,    50,    50,   -65,    15,   -65,
     -65,   -65,   -65,    63,    64,   -65,   -65,    57,    70,   -65,
      81,    51,    87,   -65,   -65,    50,    22,    50,    75,    77,
      67,   -65,   -65,    86,    50,    50,    84,   -65,   -65,   -65,
     -65,    50,   -65,    50,    50,    50,    50,    88,    22,    89,
     -65,    91,   -65,   -65,    92,    90,    93,   -65,   -65,    87,
     103,   -65,   102,    50,   102,    94,   -65,    50,   -65,   122,
      98,   -65,   -65,   -65,   102,   102,   -65,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   -65,   128,   -65,   -65,   -65,   -65,    -8,   -65,
      27,     6,   -65,   -65,   -49,   -54,   -44,   -39,   -64,    53,
      54,    59,   -36,   -65,   -65,   -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      70,    70,    21,    68,    10,    78,     9,    73,    71,    72,
      93,     9,    88,     1,     2,    30,     3,    97,    24,    12,
      20,    14,    22,    36,    25,    15,    87,     8,    89,    27,
      70,    32,     8,    18,   103,    26,    96,    70,    33,    70,
      70,    70,    70,   113,    44,    74,    16,    17,    28,    75,
     101,    45,    46,   109,    34,   111,     1,     2,    47,     3,
      48,    49,    50,    70,   110,   116,   117,    39,    29,    40,
      41,    37,    44,    84,    42,     1,     2,    85,     3,    45,
      46,    79,    80,    43,    81,    65,    44,    38,    48,    49,
      50,    79,    80,    45,    46,    66,    29,    77,    67,    69,
      47,    76,    48,    49,    50,    39,    82,    40,    41,    83,
      86,    90,    42,     1,     2,    91,     3,    92,    15,   102,
     104,    43,   105,   106,    44,    84,   114,   107,   108,   115,
     112,    45,    46,    11,    29,     0,    98,     0,    47,   100,
      48,    49,    50,    99
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-65)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      44,    45,    39,    42,     0,    54,     0,    46,    44,    45,
      74,     5,    66,    11,    12,    23,    14,    81,    31,    38,
      14,    30,    38,    31,    37,    34,    65,     0,    67,    35,
      74,    25,     5,    31,    88,    38,    75,    81,    39,    83,
      84,    85,    86,   107,    22,    30,    36,    37,    34,    34,
      86,    29,    30,   102,    33,   104,    11,    12,    36,    14,
      38,    39,    40,   107,   103,   114,   115,     3,    32,     5,
       6,    38,    22,    22,    10,    11,    12,    26,    14,    29,
      30,    24,    25,    19,    27,    30,    22,    35,    38,    39,
      40,    24,    25,    29,    30,    30,    32,    33,    30,    30,
      36,    38,    38,    39,    40,     3,    36,     5,     6,    28,
      23,    36,    10,    11,    12,    38,    14,    31,    34,    31,
      31,    19,    31,    31,    22,    22,     4,    37,    35,    31,
      36,    29,    30,     5,    32,    -1,    83,    -1,    36,    85,
      38,    39,    40,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    14,    42,    43,    44,    45,    51,    52,
       0,    44,    38,    53,    30,    34,    36,    37,    31,    48,
      52,    39,    38,    47,    31,    37,    38,    35,    34,    32,
      49,    46,    52,    39,    33,    50,    49,    38,    35,     3,
       5,     6,    10,    19,    22,    29,    30,    36,    38,    39,
      40,    49,    51,    52,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    30,    30,    30,    58,    30,
      57,    63,    63,    58,    30,    34,    38,    33,    55,    24,
      25,    27,    36,    28,    22,    26,    23,    58,    56,    58,
      36,    38,    31,    59,    65,    66,    58,    59,    60,    62,
      61,    63,    31,    56,    31,    31,    31,    37,    35,    55,
      58,    55,    36,    59,     4,    31,    55,    55
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
/* Line 1792 of yacc.c  */
#line 41 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" start : program "<<endl<<endl;
		outlog << "Symbol Table" << endl << endl;
		// Print your whole symbol table here
		st.print_all_scopes();
	}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 50 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()+"\n"+(yyvsp[(2) - (2)])->getname()<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+"\n"+(yyvsp[(2) - (2)])->getname(),"program");
	}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 57 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" program : unit "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"program");

	}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 66 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" unit : var_declaration "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"unit");
	}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 72 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" unit : func_definition "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"unit");
	}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 80 "23341065.y"
    {	
		//check duplicate function declaration
		symbol_info *temp = new symbol_info((yyvsp[(2) - (5)])->getname(), "Function Definition");
		if (st.lookup(temp) != NULL) {
			errorlog << "At line no: " << lines << " Multiple declaration of function " << (yyvsp[(2) - (5)])->getname() << endl<<endl;
			error_cnt++;
		}
		delete temp;

		(yyvsp[(2) - (5)])->set_symbol_type("Function Definition");
		(yyvsp[(2) - (5)])->set_return_type((yyvsp[(1) - (5)])->getname());

		for (auto &err:error){
			errorlog<< err<<(yyvsp[(2) - (5)])->getname()<<endl<<endl;
			error_cnt++;
		}
		error.clear();

		stringstream ss((yyvsp[(4) - (5)])->getname());
		string token;

		while (getline(ss, token, ',')) {
        	(yyvsp[(2) - (5)])->add_param_type(token);
    	}
		st.insert((yyvsp[(2) - (5)]));
	}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 107 "23341065.y"
    {	
		outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (7)])->getname()<<" "<<(yyvsp[(2) - (7)])->getname()<<"("<<(yyvsp[(4) - (7)])->getname()<<")\n"<<(yyvsp[(7) - (7)])->getname()<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (7)])->getname()+" "+(yyvsp[(2) - (7)])->getname()+"("+(yyvsp[(4) - (7)])->getname()+")\n"+(yyvsp[(7) - (7)])->getname(),"func_definition");
	}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 114 "23341065.y"
    {
		//check duplicate function declaration
		symbol_info *temp = new symbol_info((yyvsp[(2) - (4)])->getname(), "Function Definition");
		if (st.lookup(temp) != NULL) {
			errorlog << "At line no: " << lines << " Multiple declaration of function " << (yyvsp[(2) - (4)])->getname() << endl<<endl;
			error_cnt++;
		}
		delete temp;

		(yyvsp[(2) - (4)])->set_symbol_type("Function Definition");
		(yyvsp[(2) - (4)])->set_return_type((yyvsp[(1) - (4)])->getname());
		st.insert((yyvsp[(2) - (4)]));
	}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 128 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN RPAREN compound_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (6)])->getname()<<" "<<(yyvsp[(2) - (6)])->getname()<<"()\n"<<(yyvsp[(6) - (6)])->getname()<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (6)])->getname()+" "+(yyvsp[(2) - (6)])->getname()+"()\n"+(yyvsp[(6) - (6)])->getname(),"func_definition");	
	}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 137 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier ID "<<endl<<endl;
		outlog<<(yyvsp[(1) - (4)])->getname()<<","<<(yyvsp[(3) - (4)])->getname()<<" "<<(yyvsp[(4) - (4)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+","+(yyvsp[(3) - (4)])->getname()+" "+(yyvsp[(4) - (4)])->getname(),"parameter_list");

		//check duplicate parameter names
		for (auto param : params) {
			if (param->getname() == (yyvsp[(4) - (4)])->getname()) {
				string err_msg = "At line no: " + to_string(lines) + " Multiple declaration of variable " + (yyvsp[(4) - (4)])->getname() 
						+ " in parameter of ";
				error.push_back(err_msg);
			}
		}

		(yyvsp[(4) - (4)])->set_symbol_type("Variable");
		(yyvsp[(4) - (4)])->set_return_type((yyvsp[(3) - (4)])->getname());
		params.push_back((yyvsp[(4) - (4)]));
		param_count++;
	}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 157 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<","<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+","+(yyvsp[(3) - (3)])->getname(),"parameter_list");
	}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 163 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" parameter_list : type_specifier ID "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<" "<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+" "+(yyvsp[(2) - (2)])->getname(),"parameter_list");

		(yyvsp[(2) - (2)])->set_symbol_type("Variable");
		(yyvsp[(2) - (2)])->set_return_type((yyvsp[(1) - (2)])->getname());
		params.push_back((yyvsp[(2) - (2)]));
		param_count++;
	}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 174 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" parameter_list : type_specifier "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"parameter_list");
	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 182 "23341065.y"
    {
		st.enter_scope();
	}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 186 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" compound_statement : LCURL statements RCURL "<<endl<<endl;
		outlog<<"{\n"<<(yyvsp[(3) - (4)])->getname()<<"}\n"<<endl;
		(yyval) = new symbol_info("{\n"+(yyvsp[(3) - (4)])->getname()+"}\n","compound_statement");

		if (param_count > 0) {
			for (auto param : params) {
				st.insert(param);
			}
			param_count = 0;
			params.clear();
		}

		st.print_all_scopes();
		st.exit_scope();
	}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 203 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" compound_statement : LCURL RCURL "<<endl<<endl;
		outlog<<"{\n}\n"<<endl;
		(yyval) = new symbol_info("{\n}\n","compound_statement");
	}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 211 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" var_declaration : type_specifier declaration_list SEMICOLON "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<" "<<(yyvsp[(2) - (3)])->getname()<<";\n"<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+(yyvsp[(2) - (3)])->getname()+";\n","var_declaration");

		//void type checking
		if ((yyvsp[(1) - (3)])->getname() == "void") {
			errorlog << "At line no: " << lines << " variable type can not be void" << endl << endl;
			error_cnt++;
		}

		stringstream ss_var((yyvsp[(2) - (3)])->getname());
		string token_var;
		while (getline(ss_var, token_var, ',')) {
			symbol_info *func = new symbol_info(token_var, "ID");

			size_t index_lthird = token_var.find("[");
			size_t index_rthird = token_var.find("]");
			if (index_lthird != string::npos) {
				func->set_name(token_var.substr(0, index_lthird));
				func->set_symbol_type("Array");
				func->set_return_type((yyvsp[(1) - (3)])->getname());

				string s = token_var.substr(index_lthird + 1, index_rthird - index_lthird - 1);
				func->set_size(stoi(s));
			} else {
				func->set_symbol_type("Variable");
				func->set_return_type((yyvsp[(1) - (3)])->getname());
			}

			//duplicate variable declaration (current scope check only)
			symbol_info *temp = new symbol_info(func->getname(), func->get_symbol_type());
			symbol_info *found = st.lookup_in_current_scope(temp);
			if (found != NULL) {
				errorlog << "At line no: " << lines << " Multiple declaration of variable " << func->getname() << endl << endl;
				error_cnt++;
			}
			delete temp;

			st.insert(func);
    	}
	}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 256 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" type_specifier : INT "<<endl<<endl;
		outlog<<"int"<<endl<<endl;
		(yyval) = new symbol_info("int","type_specifier");
	}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 262 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" type_specifier : FLOAT "<<endl<<endl;
		outlog<<"float"<<endl<<endl;
		(yyval) = new symbol_info("float","type_specifier");
	}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 268 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" type_specifier : VOID "<<endl<<endl;
		outlog<<"void"<<endl<<endl;
		(yyval) = new symbol_info("void","type_specifier");
	}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 276 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" declaration_list : declaration_list COMMA ID "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<","<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+","+(yyvsp[(3) - (3)])->getname(),"declaration_list");
	}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 282 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD "<<endl<<endl;
		outlog<<(yyvsp[(1) - (6)])->getname()<<","<<(yyvsp[(3) - (6)])->getname()<<"["<<(yyvsp[(5) - (6)])->getname()<<"]"<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (6)])->getname()+","+(yyvsp[(3) - (6)])->getname()+"["+(yyvsp[(5) - (6)])->getname()+"]","declaration_list");
	}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 288 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" declaration_list : ID "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"declaration_list");
	}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 294 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" declaration_list : ID LTHIRD CONST_INT RTHIRD "<<endl<<endl;
		outlog<<(yyvsp[(1) - (4)])->getname()<<"["<<(yyvsp[(3) - (4)])->getname()<<"]"<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+"["+(yyvsp[(3) - (4)])->getname()+"]","declaration_list");
	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 302 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statements : statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"statements");
	}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 308 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statements : statements statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<(yyvsp[(2) - (2)])->getname()<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+(yyvsp[(2) - (2)])->getname(),"statements");
	}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 316 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : var_declaration "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"statement");
	}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 322 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : expression_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"statement");
	}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 328 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : compound_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"statement");
	}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 334 "23341065.y"
    {
	    	outlog<<"At line no: "<<lines<<" statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement "<<endl<<endl;
			outlog<<"for("<<(yyvsp[(3) - (7)])->getname()<<(yyvsp[(4) - (7)])->getname()<<(yyvsp[(5) - (7)])->getname()<<")\n"<<(yyvsp[(7) - (7)])->getname()<<endl<<endl;
			
			(yyval) = new symbol_info("for("+(yyvsp[(3) - (7)])->getname()+(yyvsp[(4) - (7)])->getname()+(yyvsp[(5) - (7)])->getname()+")\n"+(yyvsp[(7) - (7)])->getname(),"statement");
	}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 341 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement "<<endl<<endl;
		outlog<<"if("<<(yyvsp[(3) - (5)])->getname()<<")\n"<<(yyvsp[(5) - (5)])->getname()<<endl;
		(yyval) = new symbol_info("if("+(yyvsp[(3) - (5)])->getname()+")\n"+(yyvsp[(5) - (5)])->getname(),"statement");		
	}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 347 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement ELSE statement "<<endl<<endl;
		outlog<<"if("<<(yyvsp[(3) - (7)])->getname()<<")\n"<<(yyvsp[(5) - (7)])->getname()<<"else\n"<<(yyvsp[(7) - (7)])->getname()<<endl;
		(yyval) = new symbol_info("if("+(yyvsp[(3) - (7)])->getname()+")\n"+(yyvsp[(5) - (7)])->getname()+"else\n"+(yyvsp[(7) - (7)])->getname(),"statement");
	}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 353 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : WHILE LPAREN expression RPAREN statement "<<endl<<endl;
		outlog<<"while("<<(yyvsp[(3) - (5)])->getname()<<")\n"<<(yyvsp[(5) - (5)])->getname()<<endl;
		(yyval) = new symbol_info("while("+(yyvsp[(3) - (5)])->getname()+")\n"+(yyvsp[(5) - (5)])->getname(),"statement");
	}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 359 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : PRINTLN LPAREN ID RPAREN SEMICOLON "<<endl<<endl;
		outlog<<"printf("<<(yyvsp[(3) - (5)])->getname()<<");\n"<<endl;
		(yyval) = new symbol_info("printf("+(yyvsp[(3) - (5)])->getname()+");\n","statement");

		//check if variable is declared
		symbol_info *var = st.lookup((yyvsp[(3) - (5)]));
		if (var == NULL) {
			errorlog << "At line no: " << lines << " Undeclared variable " << (yyvsp[(3) - (5)])->getname() << endl << endl;
			error_cnt++;
		}
	}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 372 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" statement : RETURN expression SEMICOLON "<<endl<<endl;
		outlog<<"return "<<(yyvsp[(2) - (3)])->getname()<<";\n"<<endl;
		(yyval) = new symbol_info("return "+(yyvsp[(2) - (3)])->getname()+";\n","statement");
	}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 380 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" expression_statement : SEMICOLON "<<endl<<endl;
		outlog<<";\n"<<endl;
		(yyval) = new symbol_info(";","expression_statement");
	}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 386 "23341065.y"
    {
		found_void= false;
		outlog<<"At line no: "<<lines<<" expression_statement : expression SEMICOLON "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<";\n"<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+";\n","expression_statement");
	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 395 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" variable : ID "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "variable");
	}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 401 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" variable : ID LTHIRD expression RTHIRD "<<endl<<endl;
		outlog<<(yyvsp[(1) - (4)])->getname()<<"["<<(yyvsp[(3) - (4)])->getname()<<"]"<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+"["+(yyvsp[(3) - (4)])->getname()+"]","variable");

		//check if base variable is declared
		symbol_info *base_var = st.lookup((yyvsp[(1) - (4)]));
		if (base_var == NULL) {
			errorlog << "At line no: " << lines << " Undeclared variable " << (yyvsp[(1) - (4)])->getname() << endl << endl;
			error_cnt++;
		}
		//check if it's actually an array
		else if (base_var->get_symbol_type() != "Array") {
			errorlog << "At line no: " << lines << " variable is not of array type : " << (yyvsp[(1) - (4)])->getname() << endl << endl;
			error_cnt++;
		}
		//check if index is integer
		else {
			symbol_info *index = st.lookup((yyvsp[(3) - (4)]));
			if (index != NULL && index->get_return_type() != "int") {
				errorlog << "At line no: " << lines << " array index is not of integer type : " << (yyvsp[(1) - (4)])->getname() << endl << endl;
				error_cnt++;
			}
		}
	}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 429 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" expression : logic_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "expression");
	}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 435 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" expression : variable ASSIGNOP logic_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<"="<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+"="+(yyvsp[(3) - (3)])->getname(), "expression");

		//check if base variable is declared  (int a[100]; here base variable is a)
		string base_var_name = (yyvsp[(1) - (3)])->getname();
		size_t bracket_pos = base_var_name.find('[');
		if (bracket_pos != string::npos) {
			base_var_name = base_var_name.substr(0, bracket_pos);
		}
		symbol_info *base_var = st.lookup(new symbol_info(base_var_name, "ID"));
		if (base_var == NULL) {
			errorlog << "At line no: " << lines << " Undeclared variable " << base_var_name << endl << endl;
			error_cnt++;
		}
		//check if variable is an array
		else if (base_var->get_symbol_type() == "Array" && bracket_pos == string::npos) {
			errorlog << "At line no: " << lines << " variable is of array type : " << base_var_name << endl << endl;
			error_cnt++;
		}
		//check if array index is integer
		else if (bracket_pos != string::npos) {
			string index_expr = (yyvsp[(1) - (3)])->getname().substr(bracket_pos + 1);
			index_expr = index_expr.substr(0, index_expr.find(']'));
			if (index_expr.find('.') != string::npos) {
				errorlog << "At line no: " << lines << " array index is not of integer type : " << base_var_name << endl << endl;
				error_cnt++;
			}
			//check if float is assigned to integer array element
			else if (base_var->get_return_type() == "int" && (yyvsp[(3) - (3)])->getname().find('.') != string::npos && (yyvsp[(3) - (3)])->getname().find('%') == string::npos) {
				errorlog << "At line no: " << lines << " Warning: Assignment of float value into variable of integer type" << endl << endl;
				error_cnt++;
			}
		}
		//check if float is assigned to integer
		else if (base_var->get_return_type() == "int" && (yyvsp[(3) - (3)])->getname().find('.') != string::npos && (yyvsp[(3) - (3)])->getname().find('%') == string::npos) {
			errorlog << "At line no: " << lines << " Warning: Assignment of float value into variable of integer type" << endl << endl;
			error_cnt++;
		}
		if (found_void) {
			error_cnt++;
			errorlog << "At line no: " << lines << " operation on void type" << endl << endl;
		}
	}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 483 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" logic_expression : rel_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "logic_expression");
	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 489 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" logic_expression : rel_expression LOGICOP rel_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+(yyvsp[(2) - (3)])->getname()+(yyvsp[(3) - (3)])->getname(), "logic_expression");
	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 497 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" rel_expression : simple_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "rel_expression");
	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 503 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" rel_expression : simple_expression RELOP simple_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+(yyvsp[(2) - (3)])->getname()+(yyvsp[(3) - (3)])->getname(), "rel_expression");
	}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 511 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" simple_expression : term "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "simple_expression");
	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 517 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" simple_expression : simple_expression ADDOP term "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+(yyvsp[(2) - (3)])->getname()+(yyvsp[(3) - (3)])->getname(), "simple_expression");
	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 525 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" term : unary_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "term");
	}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 531 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" term : term MULOP unary_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+(yyvsp[(2) - (3)])->getname()+(yyvsp[(3) - (3)])->getname(), "term");

		//check for division or modulus by zero
		if ((yyvsp[(2) - (3)])->getname() == "/" || (yyvsp[(2) - (3)])->getname() == "%") {
			if ((yyvsp[(3) - (3)])->getname() == "0") {
				errorlog << "At line no: " << lines << " Modulus by 0" << endl << endl;
				error_cnt++;
			}
		}
		//check for modulus on non-integer type
		if ((yyvsp[(2) - (3)])->getname() == "%") {
			if ((yyvsp[(3) - (3)])->getname().find('.') != string::npos) {
				errorlog << "At line no: " << lines << " Modulus operator on non integer type" << endl << endl;
				error_cnt++;
			}
		}
	}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 554 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" unary_expression : ADDOP unary_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+(yyvsp[(2) - (2)])->getname(), "unary_expression");
	}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 560 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" unary_expression : NOT unary_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+(yyvsp[(2) - (2)])->getname(), "unary_expression");
	}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 566 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" unary_expression : factor "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "unary_expression");
	}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 574 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" factor : variable "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "factor");
	}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 580 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" factor : ID LPAREN argument_list RPAREN "<<endl<<endl;
		outlog<<(yyvsp[(1) - (4)])->getname()<<"("<<(yyvsp[(3) - (4)])->getname()<<")"<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+"("+(yyvsp[(3) - (4)])->getname()+")","factor");

		bool skip = false;
		//check function call argument types
		symbol_info *func = st.lookup((yyvsp[(1) - (4)]));
		if (func==NULL){
			errorlog << "At line no: " << lines << " Undeclared function " << (yyvsp[(1) - (4)])->getname() << endl << endl;
			error_cnt++;
			skip = true;
		}
		if (!skip && func != NULL && func->get_symbol_type() == "Function Definition") {
			//check if void type function is assigned
			if (func->get_return_type() == "void") {
				found_void=true;
				//errorlog << "At line no: " << lines << " operation on void type" << endl << endl;
				//error_cnt++;
				//skip = true;
			}

			if (!skip) {
				vector<string> param_types = func->get_param_types();
				stringstream ss_args((yyvsp[(3) - (4)])->getname());
				string arg;
				int arg_count = 0;

				while (getline(ss_args, arg, ',')) {
					if (arg_count < param_types.size()) {
						//check if argument is a variable/array
						symbol_info *arg_symbol = new symbol_info(arg, "ID");
						symbol_info *found_arg = st.lookup(arg_symbol);
						delete arg_symbol;

						if (found_arg != NULL) {
							//check if argument is an array
							if (found_arg->get_symbol_type() == "Array") {
								errorlog << "At line no: " << lines << " variable is of array type : " << found_arg->getname() << endl << endl;
								error_cnt++;
							}
							//argument is variable/array; type checking
							else {
								string param_type = param_types[arg_count];
								size_t space_pos = param_type.find(' ');
								if (space_pos != string::npos) {
									param_type = param_type.substr(0, space_pos);
								}

								if (found_arg->get_return_type() != param_type) {
									errorlog << "At line no: " << lines << " argument " << (arg_count + 1) 
											<< " type mismatch in function call: " << (yyvsp[(1) - (4)])->getname() << endl << endl;
									error_cnt++;
								}
							}
						} else {
							//argument is constant, checking if float or int
							string param_type = param_types[arg_count];
							size_t space_pos = param_type.find(' ');
							if (space_pos != string::npos) {
								param_type = param_type.substr(0, space_pos);
							}

							if (arg.find('.') != string::npos) {
								//constant float
								if (param_type != "float") {
									errorlog << "At line no: " << lines << " argument " << (arg_count + 1) 
											<< " type mismatch in function call: " << (yyvsp[(1) - (4)])->getname() << endl << endl;
									error_cnt++;
								}
							} else {
								//constant int
								if (param_type != "int") {
									errorlog<<param_type<<endl<<lines<<endl;
									errorlog << "At line no: " << lines << " argument " << (arg_count + 1) 
											<< " type mismatch in function call: " << (yyvsp[(1) - (4)])->getname() << endl << endl;
									error_cnt++;
								}
							}
						}
					}
					arg_count++;
				}

				//check if number of arguments matches
				if (arg_count != param_types.size()) {
					errorlog << "At line no: " << lines << " Inconsistencies in number of arguments in function call: " 
							<< (yyvsp[(1) - (4)])->getname() << endl << endl;
					error_cnt++;
				}
			}
		}
	}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 674 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" factor : LPAREN expression RPAREN "<<endl<<endl;
		outlog<<"("<<(yyvsp[(2) - (3)])->getname()<<")"<<endl<<endl;
		(yyval) = new symbol_info("("+(yyvsp[(2) - (3)])->getname()+")","factor");
	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 680 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" factor : CONST_INT "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "factor");
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 686 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" factor : CONST_FLOAT "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "factor");
	}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 692 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" factor : variable INCOP "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<"++"<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+"++","factor");

		//check if variable is an array
		symbol_info *var = st.lookup((yyvsp[(1) - (2)]));
		if (var != NULL && var->get_symbol_type() == "Array") {
			errorlog << "At line no: " << lines << " variable is of array type : " << (yyvsp[(1) - (2)])->getname() << endl << endl;
			error_cnt++;
		}
	}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 705 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" factor : variable DECOP "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<"--"<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+"--","factor");

		//check if variable is an array
		symbol_info *var = st.lookup((yyvsp[(1) - (2)]));
		if (var != NULL && var->get_symbol_type() == "Array") {
			errorlog << "At line no: " << lines << " variable is of array type : " << (yyvsp[(1) - (2)])->getname() << endl << endl;
			error_cnt++;
		}
	}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 720 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" argument_list : arguments "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "argument_list");
	}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 726 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" argument_list : epsilon "<<endl<<endl;
		(yyval) = new symbol_info("epsilon","argument_list");
	}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 733 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" arguments : arguments COMMA logic_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<","<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+","+(yyvsp[(3) - (3)])->getname(), "arguments");
	}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 739 "23341065.y"
    {
		outlog<<"At line no: "<<lines<<" arguments : logic_expression "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "arguments");
	}
    break;


/* Line 1792 of yacc.c  */
#line 2464 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 746 "23341065.y"


int main(int argc, char *argv[])
{
	if(argc != 2) 
	{
		// check if filename given
		cout<<"Please input file name"<<endl;
		return 0;
	}
	yyin = fopen(argv[1], "r");
	outlog.open("23341065_log.txt", ios::trunc);
	errorlog.open("23341065_error.txt", ios::trunc);
	st.enter_scope();
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<<endl;
		return 0;
	}
    
	yyparse();
	
	//print number of lines
	outlog << endl << "Total lines: " << lines << endl;
	errorlog<<endl<<"Total errors: "<<error_cnt<<endl;
	outlog.close();
	errorlog.close();
	fclose(yyin);
	
	return 0;
}
/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parse.y" /* yacc.c:339  */

/* bison -y -oparse.c parse.y */
#define YYERROR_VERBOSE 1
#define YYDEBUG 1
#define YYENABLE_NLS 1
#define YYLEX_PARAM &yylval, &yylloc

#include <stddef.h>

#include "latino.h"
#include "ast.h"
#include "lex.h"

#ifdef __linux
#include <libintl.h>
#define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#endif

int yyerror(struct YYLTYPE *yylloc_param, void *scanner, struct ast **root, const char *s);
int yylex (YYSTYPE * yylval_param,YYLTYPE * yylloc_param ,yyscan_t yyscanner);


#line 89 "parse.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "parse.h".  */
#ifndef YY_YY_PARSE_H_INCLUDED
# define YY_YY_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TTRUE = 258,
    TFALSE = 259,
    TINT = 260,
    TLIT = 261,
    TNUMBER = 262,
    TSTRING = 263,
    TIDENTIFIER = 264,
    TCONSTANT = 265,
    TFUNC = 266,
    KIF = 267,
    KEND = 268,
    KELSE = 269,
    KWHILE = 270,
    KDO = 271,
    KBREAK = 272,
    KCONTINUE = 273,
    KWHEN = 274,
    KFUNCTION = 275,
    KFROM = 276,
    KBOOL = 277,
    KRETURN = 278,
    KINCLUDE = 279,
    OP_GT = 280,
    OP_LT = 281,
    OP_GE = 282,
    OP_LE = 283,
    OP_EQ = 284,
    OP_NEQ = 285,
    OP_AND = 286,
    OP_OR = 287,
    OP_INCR = 288,
    OP_DECR = 289,
    OP_CONCAT = 290,
    OP_CONCAT_IGUAL = 291
  };
#endif

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (ast **root, void *scanner);

#endif /* !YY_YY_PARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 185 "parse.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   984

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,    42,     2,     2,
      46,    47,    40,    38,    53,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    52,
       2,    37,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   103,   104,   105,   109,   110,   111,
     112,   116,   117,   118,   123,   124,   125,   129,   130,   134,
     135,   136,   137,   141,   142,   146,   150,   154,   155,   159,
     160,   161,   162,   163,   164,   165,   166,   170,   174,   180,
     185,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     203,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   221,   223,   228,   230,   232,   234,   236,   242,
     246,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   269,   272,   273,   274,   277,
     278,   279,   283,   287,   290,   291,   292,   295,   296,   297,
     301,   305,   306,   310,   314,   315,   316,   317
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TTRUE", "TFALSE", "TINT", "TLIT",
  "TNUMBER", "TSTRING", "TIDENTIFIER", "TCONSTANT", "TFUNC", "KIF", "KEND",
  "KELSE", "KWHILE", "KDO", "KBREAK", "KCONTINUE", "KWHEN", "KFUNCTION",
  "KFROM", "KBOOL", "KRETURN", "KINCLUDE", "OP_GT", "OP_LT", "OP_GE",
  "OP_LE", "OP_EQ", "OP_NEQ", "OP_AND", "OP_OR", "OP_INCR", "OP_DECR",
  "OP_CONCAT", "OP_CONCAT_IGUAL", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "'?'", "':'", "'('", "')'", "'['", "']'", "'{'", "'}'", "';'",
  "','", "$accept", "primary_expression", "constant_expression",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_not_expression",
  "logical_and_expression", "logical_or_expression", "ternary_expression",
  "concat_expression", "program", "statement_list", "statement",
  "include_declaration", "declaration", "selection_statement",
  "iteration_statement", "jump_statement", "function_definition",
  "expression", "function_call", "argument_expression_list",
  "identifier_list", "list_new", "dict_new", "list_items", "dict_items",
  "dict_item", "key", "value", "list_get_item", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    61,    43,    45,
      42,    47,    37,    33,    63,    58,    40,    41,    91,    93,
     123,   125,    59,    44
};
# endif

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     684,  -113,  -113,  -113,  -113,  -113,  -113,   202,   -34,   176,
     327,   684,    14,   -22,   176,   -16,   176,   176,   176,   176,
       4,  -113,  -113,   834,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,    32,   684,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,   816,   852,  -113,  -113,  -113,  -113,  -113,   176,   375,
     176,    49,    70,    -7,  -113,  -113,   252,  -113,   176,   252,
     348,    -3,     5,   816,    37,    57,    57,   747,   816,   -28,
    -113,  -113,    -1,     8,    23,  -113,  -113,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   870,   176,   176,     4,     9,    26,    36,    46,  -113,
     816,   710,    44,    43,    53,    58,    59,  -113,   167,   176,
     300,   770,   396,   423,    84,   -17,   -34,  -113,    54,    62,
    -113,  -113,   176,  -113,     4,   151,  -113,  -113,  -113,  -113,
    -113,  -113,    95,    95,   942,   942,   942,    57,    57,    57,
      64,    67,    68,    69,   -11,    79,   151,   151,   151,   151,
     176,  -113,    81,    94,   109,   112,   101,   102,   118,   125,
      57,  -113,   684,   444,  -113,   176,   816,  -113,   -25,   186,
     176,  -113,   816,  -113,  -113,  -113,  -113,   134,   143,   144,
     149,   888,   906,   153,   155,   156,   157,  -113,   176,   176,
     176,   176,  -113,  -113,  -113,  -113,   492,   540,   793,   684,
     198,   159,   160,   161,   162,   729,   151,   151,   151,   151,
     151,   151,   151,   151,   816,   816,   816,   816,  -113,  -113,
     924,   588,  -113,    81,    94,   109,   112,     5,   168,   169,
     172,   173,  -113,  -113,  -113,  -113,  -113,   165,   151,   151,
     151,   151,   684,  -113,  -113,  -113,  -113,   636,  -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      41,     4,     5,     7,     9,     8,    10,     2,     3,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    94,
      97,    74,     6,    61,    76,    77,    75,    78,    72,    27,
      73,    80,     0,    38,    40,    42,    43,    44,    45,    46,
      47,    49,    48,    82,    84,    83,    11,    12,     0,     0,
      86,     0,     0,     2,     3,    79,    41,    81,     0,    41,
       0,     0,     0,    69,     0,    13,    25,     0,    96,     0,
     101,   102,     0,    99,     0,     1,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,     0,    94,    97,    75,    78,    72,    73,    52,
      51,    87,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,    89,     0,     0,    61,     0,     0,
      71,    92,     0,    93,     0,     0,    19,    20,    21,    22,
      24,    23,    26,    28,    37,    17,    18,    14,    15,    16,
      75,    78,    72,    73,     0,     0,     0,     0,     0,     0,
      86,    85,   106,   105,   104,   107,     0,     0,     0,     0,
      13,    62,    41,    71,    65,     0,    67,    90,     0,     0,
       0,    50,    95,    98,     2,   103,   100,     0,     0,     0,
       0,    53,    54,     0,     0,     0,     0,    88,     0,     0,
       0,     0,   106,   105,   104,   107,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    57,    58,    56,    63,    64,
      66,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    33,    35,    29,    70,     0,     0,     0,
       0,     0,    41,    32,    34,    36,    30,     0,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -112,   171,     0,  -113,  -113,   -45,   -44,   -41,  -113,
     -40,  -113,  -113,  -113,   -10,   -31,  -113,   -56,  -113,  -113,
    -113,  -113,    55,     7,    80,  -113,  -113,  -113,   136,   137,
     110,  -113,  -113,  -113
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    55,    24,    25,    26,    27,    28,    29,
      30,    99,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    57,   102,   168,    43,    44,    69,    72,
      73,    74,   176,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    60,    76,    52,    95,    96,   118,    42,    97,    98,
      70,    23,    71,   175,   115,   116,    46,    47,    42,    48,
      49,   121,   199,    61,    62,   122,    46,    47,   200,    76,
      64,   169,    75,    23,   183,   184,   185,   186,   181,    50,
      42,   108,   122,   114,    16,   119,   110,   140,   141,   112,
     123,   142,   143,   146,   103,   104,    23,   105,   106,    23,
      23,   124,   117,    42,    56,    59,    42,    42,   125,    63,
     147,    65,    66,    67,    68,     3,     4,     5,     6,    76,
     148,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     149,   151,   152,   167,   228,   229,   230,   231,   232,   233,
     234,   235,   153,    91,   100,   101,   170,   154,   155,   171,
      23,   177,    23,   111,   178,   179,   180,    42,   188,    42,
      77,    78,    79,    80,    81,    82,   243,   244,   245,   246,
     182,   189,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   190,    67,    68,   191,
     192,   193,   196,   197,     1,     2,     3,     4,     5,     6,
     174,    54,    23,    23,   160,    76,    76,   194,   166,    42,
      42,   237,   156,   157,   195,   158,   159,   172,   206,     1,
       2,     3,     4,     5,     6,    53,    54,   207,   208,   221,
      76,   201,   202,   209,   203,   204,    23,    23,   210,    23,
     211,   212,   213,    42,    42,   101,    42,   222,   223,   224,
     225,   226,   242,   238,   239,    16,    76,   240,   241,    17,
     198,    23,    18,   107,    19,   205,    20,   117,    42,   144,
     187,   145,   247,     0,   173,    46,    47,     0,    48,    49,
       0,     0,    23,   214,   215,   216,   217,    23,    50,    42,
      51,     0,     0,     0,    42,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,     0,     0,    10,    11,     0,
       0,     0,    12,    13,     0,    14,    15,    77,    78,    79,
      80,    81,    82,    83,    84,     0,     0,    85,     0,     0,
      86,   109,    88,    89,    90,    17,     0,     0,    18,     0,
      19,     0,    20,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,   161,   162,    10,    11,     0,     0,     0,
      12,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,    53,    54,     0,    16,
       0,     0,     0,    17,     0,     0,    18,     0,    19,     0,
      20,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,     0,     0,    10,    11,     0,    16,   113,    12,    13,
      17,    14,    15,    58,     0,    19,     0,    20,     1,     2,
       3,     4,     5,     6,    53,    54,     0,    16,     0,     0,
       0,    17,     0,     0,    18,     0,    19,     0,    20,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,   164,
       0,    10,    11,     0,    16,     0,    12,    13,    17,    14,
      15,    92,     0,    93,     0,    94,     1,     2,     3,     4,
       5,     6,    53,    54,     0,    16,     0,     0,     0,    17,
       0,     0,    18,     0,    19,     0,    20,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,   -41,     0,    10,
      11,     0,    16,     0,    12,    13,    17,    14,    15,   165,
       0,    19,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,    17,     0,     0,
      18,     0,    19,     0,    20,     1,     2,     3,     4,     5,
       6,     7,     8,     0,     9,   218,     0,    10,    11,     0,
       0,     0,    12,    13,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,    17,     0,     0,    18,     0,
      19,     0,    20,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,   219,     0,    10,    11,     0,     0,     0,
      12,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,    17,     0,     0,    18,     0,    19,     0,
      20,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,   236,     0,    10,    11,     0,     0,     0,    12,    13,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,    17,     0,     0,    18,     0,    19,     0,    20,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,   248,
       0,    10,    11,     0,     0,     0,    12,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,    17,
       0,     0,    18,     0,    19,     0,    20,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,     0,     0,    10,
      11,     0,     0,     0,    12,    13,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,    17,     0,     0,
      18,     0,    19,     0,    20,    77,    78,    79,    80,    81,
      82,    83,    84,     0,     0,    85,     0,     0,    86,    87,
      88,    89,    90,     0,    77,    78,    79,    80,    81,    82,
      83,    84,     0,   150,    85,     0,     0,    86,    87,    88,
      89,    90,    77,    78,    79,    80,    81,    82,    83,    84,
       0,   227,    85,     0,     0,    86,    87,    88,    89,    90,
       0,     0,     0,     0,   120,    77,    78,    79,    80,    81,
      82,    83,    84,     0,     0,    85,     0,     0,    86,    87,
      88,    89,    90,     0,     0,     0,     0,   163,    77,    78,
      79,    80,    81,    82,    83,    84,     0,     0,    85,     0,
       0,    86,    87,    88,    89,    90,     0,     0,     0,     0,
     220,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,    85,     0,     0,    86,    87,    88,    89,    90,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -79,
       0,     0,   -79,     0,   -79,   -79,   -79,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,     0,
     -81,     0,   -81,   -81,   -81,    77,    78,    79,    80,    81,
      82,    83,    84,     0,     0,    85,     0,     0,    86,     0,
      88,    89,    90,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,   -92,     0,     0,   -92,     0,   -92,   -92,
     -92,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
       0,   -93,     0,     0,   -93,     0,   -93,   -93,   -93,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,
       0,     0,   -71,     0,   -71,   -71,   -71,    77,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
       0,    11,    33,    37,    49,    49,    62,     0,    49,    49,
       6,    11,     8,   125,     9,    10,    33,    34,    11,    36,
      37,    49,    47,     9,    46,    53,    33,    34,    53,    60,
      46,    48,     0,    33,   146,   147,   148,   149,    49,    46,
      33,    48,    53,    46,    39,     8,    56,    92,    92,    59,
      51,    92,    92,    44,     5,     6,    56,     8,     9,    59,
      60,    53,    62,    56,     9,    10,    59,    60,    45,    14,
      44,    16,    17,    18,    19,     5,     6,     7,     8,   110,
      44,   112,    25,    26,    27,    28,    29,    30,    31,    32,
      44,    47,    49,     9,   206,   207,   208,   209,   210,   211,
     212,   213,    49,    48,    49,    50,    52,    49,    49,    47,
     110,    47,   112,    58,    47,    47,    47,   110,    37,   112,
      25,    26,    27,    28,    29,    30,   238,   239,   240,   241,
      51,    37,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    37,    92,    93,    37,
      49,    49,   162,   163,     3,     4,     5,     6,     7,     8,
       9,    10,   162,   163,   109,   196,   197,    49,   113,   162,
     163,   227,     5,     6,    49,     8,     9,   122,    44,     3,
       4,     5,     6,     7,     8,     9,    10,    44,    44,   199,
     221,     5,     6,    44,     8,     9,   196,   197,    45,   199,
      45,    45,    45,   196,   197,   150,   199,     9,    49,    49,
      49,    49,    47,    45,    45,    39,   247,    45,    45,    43,
     165,   221,    46,    52,    48,   170,    50,   227,   221,    93,
     150,    94,   242,    -1,   124,    33,    34,    -1,    36,    37,
      -1,    -1,   242,   188,   189,   190,   191,   247,    46,   242,
      48,    -1,    -1,    -1,   247,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    -1,
      48,    -1,    50,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    39,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,
      50,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    15,    16,    -1,    39,    19,    20,    21,
      43,    23,    24,    46,    -1,    48,    -1,    50,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    50,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    15,    16,    -1,    39,    -1,    20,    21,    43,    23,
      24,    46,    -1,    48,    -1,    50,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    39,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    -1,    50,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    15,
      16,    -1,    39,    -1,    20,    21,    43,    23,    24,    46,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    48,    -1,    50,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,
      48,    -1,    50,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,
      50,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    15,    16,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    50,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    -1,    50,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    48,    -1,    50,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    53,    35,    -1,    -1,    38,    39,    40,
      41,    42,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    52,    35,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    47,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    47,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    -1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      47,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    39,    40,    41,    42,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    12,
      15,    16,    20,    21,    23,    24,    39,    43,    46,    48,
      50,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    80,    81,    87,    33,    34,    36,    37,
      46,    48,    37,     9,    10,    57,    76,    77,    46,    76,
      68,     9,    46,    76,    46,    76,    76,    76,    76,    82,
       6,     8,    83,    84,    85,     0,    69,    25,    26,    27,
      28,    29,    30,    31,    32,    35,    38,    39,    40,    41,
      42,    76,    46,    48,    50,    60,    61,    62,    64,    65,
      76,    76,    78,     5,     6,     8,     9,    56,    48,    39,
      68,    76,    68,    19,    46,     9,    10,    57,    71,     8,
      47,    49,    53,    51,    53,    45,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      60,    61,    62,    64,    82,    83,    44,    44,    44,    44,
      53,    47,    49,    49,    49,    49,     5,     6,     8,     9,
      76,    13,    14,    47,    13,    46,    76,     9,    79,    48,
      52,    47,    76,    84,     9,    55,    86,    47,    47,    47,
      47,    49,    51,    55,    55,    55,    55,    78,    37,    37,
      37,    37,    49,    49,    49,    49,    68,    68,    76,    47,
      53,     5,     6,     8,     9,    76,    44,    44,    44,    44,
      45,    45,    45,    45,    76,    76,    76,    76,    13,    13,
      47,    68,     9,    49,    49,    49,    49,    52,    55,    55,
      55,    55,    55,    55,    55,    55,    13,    71,    45,    45,
      45,    45,    47,    55,    55,    55,    55,    68,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    55,    56,    56,    56,
      56,    57,    57,    57,    58,    58,    58,    59,    59,    60,
      60,    60,    60,    61,    61,    62,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    74,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    78,    78,    78,    79,
      79,    79,    80,    81,    82,    82,    82,    83,    83,    83,
      84,    85,    85,    86,    87,    87,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     3,     5,
       7,     5,     7,     5,     7,     5,     7,     3,     1,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     5,     5,     6,     6,     6,     6,     3,
       3,     1,     4,     6,     6,     4,     6,     4,    10,     2,
       7,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     0,     1,     3,     0,
       1,     3,     3,     3,     0,     3,     1,     0,     3,     1,
       3,     1,     1,     1,     4,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      yyerror (&yylloc, root, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, root, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ast **root, void *scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (root);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ast **root, void *scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, root, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ast **root, void *scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , root, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, root, scanner); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ast **root, void *scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (root);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ast **root, void *scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 101 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1683 "parse.c" /* yacc.c:1646  */
    break;

  case 3:
#line 102 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1689 "parse.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1695 "parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 104 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1701 "parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 105 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1707 "parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 109 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1713 "parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1719 "parse.c" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1725 "parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 112 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1731 "parse.c" /* yacc.c:1646  */
    break;

  case 11:
#line 116 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_INCREMENTO, (yyvsp[-1].node), NULL); }
#line 1737 "parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 117 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DECREMENTO, (yyvsp[-1].node), NULL); }
#line 1743 "parse.c" /* yacc.c:1646  */
    break;

  case 13:
#line 118 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_MENOS_UNARIO, (yyvsp[0].node), NULL); }
#line 1749 "parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 123 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_MULTIPLICACION, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1755 "parse.c" /* yacc.c:1646  */
    break;

  case 15:
#line 124 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DIVISION, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1761 "parse.c" /* yacc.c:1646  */
    break;

  case 16:
#line 125 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_MODULO, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1767 "parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 129 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_SUMA, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1773 "parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 130 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_RESTA, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1779 "parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_MAYOR_QUE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1785 "parse.c" /* yacc.c:1646  */
    break;

  case 20:
#line 135 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_MENOR_QUE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1791 "parse.c" /* yacc.c:1646  */
    break;

  case 21:
#line 136 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_MAYOR_IGUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1797 "parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 137 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_MENOR_IGUAL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1803 "parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DESIGUALDAD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1809 "parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_IGUALDAD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1815 "parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 146 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_NEGACION, (yyvsp[0].node), NULL); }
#line 1821 "parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 150 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_Y, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1827 "parse.c" /* yacc.c:1646  */
    break;

  case 28:
#line 155 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_O, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1833 "parse.c" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1839 "parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1845 "parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1851 "parse.c" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1857 "parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 163 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1863 "parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 164 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1869 "parse.c" /* yacc.c:1646  */
    break;

  case 35:
#line 165 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1875 "parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 166 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_si((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1881 "parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 170 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_CONCATENAR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1887 "parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "parse.y" /* yacc.c:1646  */
    {
        *root = (yyvsp[0].node);
    }
#line 1895 "parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 180 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[0].node)){
            (yyval.node) = nodo_nuevo(NODO_BLOQUE, (yyvsp[0].node), (yyvsp[-1].node));
        }
    }
#line 1905 "parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo(NODO_BLOQUE, (yyvsp[0].node), NULL);
    }
#line 1913 "parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 191 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1919 "parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 192 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1925 "parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1931 "parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 194 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1937 "parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 195 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1943 "parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 196 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1949 "parse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 197 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1955 "parse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1961 "parse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1967 "parse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 203 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_incluir((yyvsp[-1].node)); }
#line 1973 "parse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 207 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion((yyvsp[0].node), (yyvsp[-2].node)); }
#line 1979 "parse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 208 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion((yyvsp[0].node), (yyvsp[-2].node)); }
#line 1985 "parse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 209 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion(nodo_nuevo(NODO_LISTA, (yyvsp[-1].node), NULL), (yyvsp[-4].node)); }
#line 1991 "parse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 210 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion(nodo_nuevo(NODO_DICCIONARIO, (yyvsp[-1].node), NULL), (yyvsp[-4].node)); }
#line 1997 "parse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 211 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion_lista_elem((yyvsp[0].node), (yyvsp[-5].node), (yyvsp[-3].node)); }
#line 2003 "parse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 212 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion_lista_elem((yyvsp[0].node), (yyvsp[-5].node), (yyvsp[-3].node)); }
#line 2009 "parse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 213 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion_dicc_elem((yyvsp[0].node), (yyvsp[-5].node), (yyvsp[-3].node)); }
#line 2015 "parse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion_dicc_elem((yyvsp[0].node), (yyvsp[-5].node), (yyvsp[-3].node)); }
#line 2021 "parse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 215 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion((nodo_nuevo(NODO_CONCATENAR, (yyvsp[-2].node), (yyvsp[0].node))), (yyvsp[-2].node)); }
#line 2027 "parse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 216 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo_asignacion((yyvsp[0].node), (yyvsp[-2].node)); }
#line 2033 "parse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 217 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2039 "parse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_si((yyvsp[-2].node), (yyvsp[-1].node), NULL); }
#line 2046 "parse.c" /* yacc.c:1646  */
    break;

  case 63:
#line 223 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_si((yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2053 "parse.c" /* yacc.c:1646  */
    break;

  case 64:
#line 228 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_mientras((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2060 "parse.c" /* yacc.c:1646  */
    break;

  case 65:
#line 230 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_mientras((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2067 "parse.c" /* yacc.c:1646  */
    break;

  case 66:
#line 232 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_hacer((yyvsp[-1].node), (yyvsp[-4].node)); }
#line 2074 "parse.c" /* yacc.c:1646  */
    break;

  case 67:
#line 234 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_hacer((yyvsp[0].node), (yyvsp[-2].node)); }
#line 2081 "parse.c" /* yacc.c:1646  */
    break;

  case 68:
#line 237 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_desde((yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2088 "parse.c" /* yacc.c:1646  */
    break;

  case 69:
#line 242 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_RETORNO, (yyvsp[0].node), NULL); }
#line 2094 "parse.c" /* yacc.c:1646  */
    break;

  case 70:
#line 246 "parse.y" /* yacc.c:1646  */
    {
        (yyval.node) = nodo_nuevo_funcion((yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    }
#line 2102 "parse.c" /* yacc.c:1646  */
    break;

  case 71:
#line 252 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2108 "parse.c" /* yacc.c:1646  */
    break;

  case 85:
#line 269 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_FUNCION_LLAMADA, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2114 "parse.c" /* yacc.c:1646  */
    break;

  case 86:
#line 272 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2120 "parse.c" /* yacc.c:1646  */
    break;

  case 87:
#line 273 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_FUNCION_ARGUMENTOS, (yyvsp[0].node), NULL); }
#line 2126 "parse.c" /* yacc.c:1646  */
    break;

  case 88:
#line 274 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_FUNCION_ARGUMENTOS, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2132 "parse.c" /* yacc.c:1646  */
    break;

  case 89:
#line 277 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2138 "parse.c" /* yacc.c:1646  */
    break;

  case 90:
#line 278 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_PARAMETROS, (yyvsp[0].node), NULL); }
#line 2144 "parse.c" /* yacc.c:1646  */
    break;

  case 91:
#line 279 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_PARAMETROS, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 2150 "parse.c" /* yacc.c:1646  */
    break;

  case 92:
#line 283 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA, (yyvsp[-1].node), NULL); }
#line 2156 "parse.c" /* yacc.c:1646  */
    break;

  case 93:
#line 287 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICCIONARIO, (yyvsp[-1].node), NULL); }
#line 2162 "parse.c" /* yacc.c:1646  */
    break;

  case 94:
#line 290 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2168 "parse.c" /* yacc.c:1646  */
    break;

  case 95:
#line 291 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_AGREGAR_ELEMENTO, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 2174 "parse.c" /* yacc.c:1646  */
    break;

  case 96:
#line 292 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_AGREGAR_ELEMENTO, (yyvsp[0].node), NULL); }
#line 2180 "parse.c" /* yacc.c:1646  */
    break;

  case 97:
#line 295 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2186 "parse.c" /* yacc.c:1646  */
    break;

  case 98:
#line 296 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICC_AGREGAR_ELEMENTO, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 2192 "parse.c" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICC_AGREGAR_ELEMENTO, (yyvsp[0].node), NULL); }
#line 2198 "parse.c" /* yacc.c:1646  */
    break;

  case 100:
#line 301 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICC_ELEMENTO, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 2204 "parse.c" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2210 "parse.c" /* yacc.c:1646  */
    break;

  case 102:
#line 306 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2216 "parse.c" /* yacc.c:1646  */
    break;

  case 103:
#line 310 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2222 "parse.c" /* yacc.c:1646  */
    break;

  case 104:
#line 314 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICC_OBTENER_ELEMENTO, (yyvsp[-1].node), (yyvsp[-3].node)); }
#line 2228 "parse.c" /* yacc.c:1646  */
    break;

  case 105:
#line 315 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_DICC_OBTENER_ELEMENTO, (yyvsp[-1].node), (yyvsp[-3].node)); }
#line 2234 "parse.c" /* yacc.c:1646  */
    break;

  case 106:
#line 316 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_OBTENER_ELEMENTO, (yyvsp[-1].node), (yyvsp[-3].node)); }
#line 2240 "parse.c" /* yacc.c:1646  */
    break;

  case 107:
#line 317 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = nodo_nuevo(NODO_LISTA_OBTENER_ELEMENTO, (yyvsp[-1].node), (yyvsp[-3].node)); }
#line 2246 "parse.c" /* yacc.c:1646  */
    break;


#line 2250 "parse.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, root, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, root, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, root, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, root, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, root, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, root, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, root, scanner);
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
  return yyresult;
}
#line 320 "parse.y" /* yacc.c:1906  */


//se define para analisis sintactico (bison)
int yyerror(struct YYLTYPE *yylloc_param, void *scanner, struct ast **root,
            const char *s) {
  if(!analisis_silencioso){
      lat_registrar_error("Linea %d: %s", (yylloc_param->first_line + 1), s);
  }
  return 0;
}

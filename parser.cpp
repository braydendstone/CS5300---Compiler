/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <iostream>
#include <fstream>
#include "MainSpace.h"

extern int yylex();
void yyerror(const char*);

#line 75 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_HOME_BRAYDENDSTONE_DOCUMENTS_CS5300_OFFICIAL_PARSER_HPP_INCLUDED
# define YY_YY_HOME_BRAYDENDSTONE_DOCUMENTS_CS5300_OFFICIAL_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 10 "parser.y" /* yacc.c:355  */

#include <vector>
#include <string>
#include <utility>
#include <map>
#include <memory>
#include "Expression.h"
#include "Types.h"
#include "LValue.h"

#line 116 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARRAYSY = 258,
    ASSIGNSY = 259,
    BEGINSY = 260,
    CHARCONSTSY = 261,
    CHRSY = 262,
    COLONSY = 263,
    COMMASY = 264,
    CONSTSY = 265,
    DIVSY = 266,
    DOSY = 267,
    DOTSY = 268,
    DOWNTOSY = 269,
    ELSEIFSY = 270,
    ELSESY = 271,
    ENDSY = 272,
    EQSY = 273,
    FORSY = 274,
    FORWARDSY = 275,
    FUNCTIONSY = 276,
    GTESY = 277,
    GTSY = 278,
    IDENTSY = 279,
    IFSY = 280,
    INTSY = 281,
    LBRACKETSY = 282,
    LPARENSY = 283,
    LTESY = 284,
    LTSY = 285,
    MINUSSY = 286,
    MODSY = 287,
    MULTSY = 288,
    NOTSY = 289,
    OFSY = 290,
    ORDSY = 291,
    PLUSSY = 292,
    PREDSY = 293,
    PROCEDURESY = 294,
    RBRACKETSY = 295,
    READSY = 296,
    RECORDSY = 297,
    REFSY = 298,
    REPEATSY = 299,
    RETURNSY = 300,
    RPARENSY = 301,
    SCOLONSY = 302,
    STOPSY = 303,
    STRINGSY = 304,
    SUCCSY = 305,
    THENSY = 306,
    TOSY = 307,
    TYPESY = 308,
    UNTILSY = 309,
    VARSY = 310,
    WHILESY = 311,
    WRITESY = 312,
    ANDSY = 313,
    ORSY = 314,
    NEQSY = 315,
    UMINUSSY = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "parser.y" /* yacc.c:355  */

  char * str_val;
  int int_val;
  char char_val;
  Expression * expr;
  std::vector<Expression*>* exprList;
  std::vector<std::string>* identList;
  Types* type_val;
  LValue* lvalue;
  std::vector<std::pair<std::string, std::shared_ptr<Types>>>* paramPair;
  //std::pair<std::string, std::string> stringPair;

#line 203 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BRAYDENDSTONE_DOCUMENTS_CS5300_OFFICIAL_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 220 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   151,   153,   154,   157,   158,   161,   164,
     165,   166,   169,   170,   173,   176,   177,   180,   183,   184,
     187,   188,   191,   194,   195,   196,   200,   203,   206,   207,
     210,   211,   214,   215,   218,   221,   222,   223,   226,   229,
     232,   233,   236,   239,   240,   243,   246,   247,   250,   251,
     254,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   270,   273,   276,   279,   282,   283,   286,   289,
     290,   293,   296,   299,   301,   303,   305,   308,   311,   312,
     315,   318,   319,   323,   326,   327,   330,   333,   334,   337,
     339,   340,   342,   343,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   373,
     376,   377,   378
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARRAYSY", "ASSIGNSY", "BEGINSY",
  "CHARCONSTSY", "CHRSY", "COLONSY", "COMMASY", "CONSTSY", "DIVSY", "DOSY",
  "DOTSY", "DOWNTOSY", "ELSEIFSY", "ELSESY", "ENDSY", "EQSY", "FORSY",
  "FORWARDSY", "FUNCTIONSY", "GTESY", "GTSY", "IDENTSY", "IFSY", "INTSY",
  "LBRACKETSY", "LPARENSY", "LTESY", "LTSY", "MINUSSY", "MODSY", "MULTSY",
  "NOTSY", "OFSY", "ORDSY", "PLUSSY", "PREDSY", "PROCEDURESY",
  "RBRACKETSY", "READSY", "RECORDSY", "REFSY", "REPEATSY", "RETURNSY",
  "RPARENSY", "SCOLONSY", "STOPSY", "STRINGSY", "SUCCSY", "THENSY", "TOSY",
  "TYPESY", "UNTILSY", "VARSY", "WHILESY", "WRITESY", "ANDSY", "ORSY",
  "NEQSY", "UMINUSSY", "$accept", "Program", "ProgramHead",
  "OptConstDecls", "ConstDecls", "ConstDecl", "PFDecls", "ProcedureDecl",
  "PSignature", "FunctionDecl", "FSignature", "OptFormalParameters",
  "FormalParameters", "FormalParameter", "OptVar", "Body", "Block",
  "StatementList", "OptTypeDecls", "TypeDecls", "TypeDecl", "Type",
  "SimpleType", "RecordType", "FieldDecls", "FieldDecl", "IdentList",
  "ArrayType", "OptVarDecls", "VarDecls", "VarDecl", "Statement",
  "Assignment", "IfStatement", "IfHead", "ThenPart", "ElseIfList",
  "ElseIfHead", "ElseClause", "WhileStatement", "WhileHead", "WhileStart",
  "RepeatStatement", "RepeatStart", "ForStatement", "ForHead", "ToHead",
  "StopStatement", "ReturnStatement", "ReadStatement", "ReadArgs",
  "WriteStatement", "WriteArgs", "ProcedureCall", "OptArguments",
  "Arguments", "Expression", "FunctionCall", "LValue", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -179

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-179)))

#define YYTABLE_NINF -26

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-26)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,     0,    33,    47,   -16,    54,     0,  -179,  -179,   368,
      56,    50,    49,   411,  -179,   106,    48,   411,    74,  -179,
     411,  -179,  -179,   104,     6,  -179,  -179,  -179,    80,  -179,
     121,   411,  -179,   368,  -179,    -6,  -179,  -179,  -179,  -179,
    -179,    51,  -179,   117,    50,  -179,   110,  -179,  -179,   109,
     111,  -179,   411,   411,   411,   112,   113,  -179,   114,    89,
    -179,    32,   134,   411,   341,   119,   341,   411,  -179,   368,
     368,  -179,   368,   341,   -32,   411,   411,   138,   411,   122,
     411,     8,  -179,  -179,    52,   110,  -179,    78,   411,   411,
     133,  -179,   373,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,  -179,   411,   411,   411,
     411,   107,   143,   341,  -179,     3,    32,     5,   341,  -179,
     124,    93,    21,   411,   341,   341,   368,   341,  -179,   165,
     131,  -179,  -179,   125,  -179,  -179,  -179,     8,   136,  -179,
     137,   144,  -179,   126,  -179,   128,   189,   132,  -179,   221,
     253,   285,  -179,   397,   397,   397,   397,   397,    82,  -179,
    -179,    82,   373,   373,   397,   341,  -179,   411,   119,  -179,
     411,  -179,   411,   368,    80,   160,  -179,   341,    30,  -179,
     411,     2,  -179,   135,  -179,   152,   153,    96,   103,  -179,
    -179,  -179,  -179,  -179,   341,    32,   341,   341,   124,  -179,
    -179,  -179,    -2,  -179,  -179,   116,  -179,    -7,    -7,   139,
     -16,   142,   156,   157,   411,     8,  -179,  -179,   162,   159,
    -179,   110,   163,  -179,    49,  -179,  -179,  -179,   317,   166,
     176,   -30,   120,  -179,    47,   150,  -179,     8,  -179,     8,
    -179,     8,  -179,  -179,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,    31,     0,     4,     7,     1,    61,
       0,     0,    47,     0,     6,     0,   122,     0,     0,    75,
      82,    80,    73,     0,     0,    29,    51,    52,     0,    53,
       0,     0,    54,    61,    55,     0,    56,    57,    58,    59,
      60,     0,     2,     0,    30,    33,     0,    11,    94,     0,
     122,   110,     0,     0,     0,     0,     0,   117,     0,     0,
     109,   112,     0,    91,    64,     0,    81,     0,    27,    61,
      61,    67,    61,    72,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    44,     0,    46,    49,     3,     0,    91,
       0,   113,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,    90,    93,   122,     0,    85,     0,    88,    28,
      65,    70,     0,     0,    79,    78,    61,    62,   120,     0,
       0,    38,    41,     0,    35,    36,    37,     0,     0,    48,
       0,     0,     9,     0,    10,     0,     0,     0,   111,     0,
       0,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   108,    96,   107,   106,    77,    89,     0,     0,    83,
       0,    86,     0,    61,     0,     0,    71,    74,     0,   121,
       0,     0,    34,     0,    43,     0,     0,     5,     5,    95,
     119,   115,   116,   118,    92,    84,    87,    68,    69,    66,
      63,    76,     0,    39,    40,     0,    50,    19,    19,     0,
      31,     0,     0,     0,     0,     0,    24,    23,     0,    18,
      21,     0,     0,    12,    47,    13,    15,    16,     0,     0,
       0,    25,     0,    14,     0,     0,    42,     0,    20,     0,
      26,     0,    17,    22,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,   190,  -179,   193,  -179,  -179,  -179,  -179,
    -179,     7,  -179,   -21,  -179,    26,   -18,   -28,    17,  -179,
     173,  -136,  -179,  -179,  -179,  -179,  -178,  -179,     4,  -179,
     145,   164,  -179,  -179,  -179,    55,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,   147,  -179,   -13,  -179,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   210,     6,     7,    87,   142,   143,   144,
     145,   218,   219,   220,   221,   211,    10,    24,    12,    44,
      45,   133,   134,   135,   181,   204,    84,   136,    47,    85,
      86,    25,    26,    27,    28,    71,   121,   174,   175,    29,
      30,    31,    32,    33,    34,    35,    77,    36,    37,    38,
     115,    39,   117,    40,   111,   112,   113,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,   183,     1,   205,    64,    74,   214,    66,    75,    96,
      41,   130,   168,   216,   170,    69,    97,   -25,    73,   203,
      98,    99,   123,    68,     5,   217,    83,   100,   101,   102,
     103,   104,   131,     8,    41,   105,   216,    11,   176,    90,
      91,    92,   120,   232,   122,    79,    76,   201,   217,   169,
     132,   171,     9,    69,   118,    78,   107,   108,   109,    80,
     137,   138,   124,   125,    79,   127,   116,   129,    69,    42,
      41,    41,    13,    41,    43,   146,    63,    69,    80,   229,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,    96,   162,   163,   164,   165,   178,   140,
      96,   242,    65,   243,    46,   244,     1,    97,   172,   173,
     177,    98,    99,     1,   103,   104,   209,   141,   100,   101,
     102,   103,   104,   212,   215,   138,   105,    41,   239,   138,
      62,    70,    67,    72,    83,    81,   106,    88,   110,    89,
      93,    94,    95,   114,    96,   198,   128,   107,   108,   109,
     126,    97,   167,   166,   194,    98,    99,   196,   180,   197,
     184,   185,   100,   101,   102,   103,   104,   202,   186,   195,
     105,    69,   182,   187,    41,   188,    96,   200,   190,   148,
     207,   208,   206,    97,   237,   241,   223,    98,    99,   225,
       4,   107,   108,   109,   100,   101,   102,   103,   104,    14,
      96,   228,   105,   226,   227,   179,   231,    97,   230,   233,
     238,    98,    99,   236,   213,   222,   240,    82,   100,   101,
     102,   103,   104,   107,   108,   109,   105,   224,   234,   199,
     139,     0,    96,   119,     0,   189,   147,     0,     0,    97,
       0,     0,     0,    98,    99,     0,     0,   107,   108,   109,
     100,   101,   102,   103,   104,     0,     0,     0,   105,     0,
       0,     0,     0,     0,    96,     0,     0,   191,     0,     0,
       0,    97,     0,     0,     0,    98,    99,     0,     0,   107,
     108,   109,   100,   101,   102,   103,   104,     0,     0,     0,
     105,     0,     0,     0,     0,     0,    96,     0,     0,   192,
       0,     0,     0,    97,     0,     0,     0,    98,    99,     0,
       0,   107,   108,   109,   100,   101,   102,   103,   104,     0,
       0,     0,   105,     0,     0,     0,     0,     0,    96,     0,
       0,   193,     0,     0,     0,    97,     0,     0,     0,    98,
      99,     0,     0,   107,   108,   109,   100,   101,   102,   103,
     104,     0,    96,     0,   105,     0,     0,   235,     0,    97,
       0,     0,     0,    98,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   107,   108,   109,   105,     0,
       0,     0,     0,     0,    96,     0,     0,    15,     0,     0,
       0,    97,    16,    17,     0,    98,    99,     0,     0,   107,
     108,   109,   100,   101,   102,   103,   104,     0,    96,    18,
     105,     0,    19,    20,     0,   -26,    21,    48,    49,   -26,
     -26,     0,     0,     0,    22,    23,   -26,   -26,   102,   103,
     104,     0,     0,   109,   105,    50,     0,    51,     0,    52,
       0,     0,    53,     0,     0,    54,     0,    55,     0,    56,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,     0,
      57,    58
};

static const yytype_int16 yycheck[] =
{
      13,   137,    10,   181,    17,    33,     8,    20,    14,    11,
       9,     3,     9,    43,     9,    47,    18,    24,    31,    17,
      22,    23,    54,    17,    24,    55,    24,    29,    30,    31,
      32,    33,    24,     0,    33,    37,    43,    53,    17,    52,
      53,    54,    70,   221,    72,    13,    52,    17,    55,    46,
      42,    46,     5,    47,    67,     4,    58,    59,    60,    27,
       8,     9,    75,    76,    13,    78,    65,    80,    47,    13,
      69,    70,    18,    72,    24,    88,    28,    47,    27,   215,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    11,   107,   108,   109,   110,   126,    21,
      11,   237,    28,   239,    55,   241,    10,    18,    15,    16,
     123,    22,    23,    10,    32,    33,    20,    39,    29,    30,
      31,    32,    33,    20,     8,     9,    37,   126,     8,     9,
      24,    51,    28,    12,    24,    18,    47,    28,     4,    28,
      28,    28,    28,    24,    11,   173,    24,    58,    59,    60,
      12,    18,     9,    46,   167,    22,    23,   170,    27,   172,
      24,    24,    29,    30,    31,    32,    33,   180,    24,   168,
      37,    47,    47,    47,   173,    47,    11,    17,    46,    46,
      28,    28,    47,    18,     8,    35,    47,    22,    23,    47,
       0,    58,    59,    60,    29,    30,    31,    32,    33,     6,
      11,   214,    37,    47,    47,    40,    47,    18,    46,    46,
     231,    22,    23,    47,   188,   208,   234,    44,    29,    30,
      31,    32,    33,    58,    59,    60,    37,   210,   224,   174,
      85,    -1,    11,    69,    -1,    46,    89,    -1,    -1,    18,
      -1,    -1,    -1,    22,    23,    -1,    -1,    58,    59,    60,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    46,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    22,    23,    -1,    -1,    58,
      59,    60,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    46,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,
      -1,    58,    59,    60,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    46,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,
      23,    -1,    -1,    58,    59,    60,    29,    30,    31,    32,
      33,    -1,    11,    -1,    37,    -1,    -1,    40,    -1,    18,
      -1,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    58,    59,    60,    37,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    19,    -1,    -1,
      -1,    18,    24,    25,    -1,    22,    23,    -1,    -1,    58,
      59,    60,    29,    30,    31,    32,    33,    -1,    11,    41,
      37,    -1,    44,    45,    -1,    18,    48,     6,     7,    22,
      23,    -1,    -1,    -1,    56,    57,    29,    30,    31,    32,
      33,    -1,    -1,    60,    37,    24,    -1,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      49,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    63,    64,    65,    24,    66,    67,     0,     5,
      78,    53,    80,    18,    67,    19,    24,    25,    41,    44,
      45,    48,    56,    57,    79,    93,    94,    95,    96,   101,
     102,   103,   104,   105,   106,   107,   109,   110,   111,   113,
     115,   120,    13,    24,    81,    82,    55,    90,     6,     7,
      24,    26,    28,    31,    34,    36,    38,    49,    50,   118,
     119,   120,    24,    28,   118,    28,   118,    28,    17,    47,
      51,    97,    12,   118,    79,    14,    52,   108,     4,    13,
      27,    18,    82,    24,    88,    91,    92,    68,    28,    28,
     118,   118,   118,    28,    28,    28,    11,    18,    22,    23,
      29,    30,    31,    32,    33,    37,    47,    58,    59,    60,
       4,   116,   117,   118,    24,   112,   120,   114,   118,    93,
      79,    98,    79,    54,   118,   118,    12,   118,    24,   118,
       3,    24,    42,    83,    84,    85,    89,     8,     9,    92,
      21,    39,    69,    70,    71,    72,   118,   116,    46,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,    46,     9,     9,    46,
       9,    46,    15,    16,    99,   100,    17,   118,    79,    40,
      27,    86,    47,    83,    24,    24,    24,    47,    47,    46,
      46,    46,    46,    46,   118,   120,   118,   118,    79,    97,
      17,    17,   118,    17,    87,    88,    47,    28,    28,    20,
      65,    77,    20,    77,     8,     8,    43,    55,    73,    74,
      75,    76,    73,    47,    80,    47,    47,    47,   118,    83,
      46,    47,    88,    46,    90,    40,    47,     8,    75,     8,
      78,    35,    83,    83,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    65,    65,    66,    66,    67,    68,
      68,    68,    69,    69,    70,    71,    71,    72,    73,    73,
      74,    74,    75,    76,    76,    76,    77,    78,    79,    79,
      80,    80,    81,    81,    82,    83,    83,    83,    84,    85,
      86,    86,    87,    88,    88,    89,    90,    90,    91,    91,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    95,    96,    97,    98,    98,    99,   100,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   108,
     109,   110,   110,   111,   112,   112,   113,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   119,
     120,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     0,     2,     1,     4,     2,
       2,     0,     4,     4,     5,     4,     4,     7,     1,     0,
       3,     1,     4,     1,     1,     0,     4,     3,     3,     1,
       2,     0,     2,     1,     4,     1,     1,     1,     1,     3,
       2,     0,     4,     3,     1,     8,     2,     0,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     5,     2,     2,     3,     0,     2,     2,
       0,     4,     2,     1,     4,     1,     5,     4,     2,     2,
       1,     2,     1,     4,     3,     1,     4,     3,     1,     4,
       1,     0,     3,     1,     1,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     1,     2,     2,     4,     4,     1,     4,     4,
       3,     4,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 148 "parser.y" /* yacc.c:1646  */
    { MainSpace::start((yyvsp[-1].int_val)); }
#line 1527 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 161 "parser.y" /* yacc.c:1646  */
    { MainSpace::insertConst((yyvsp[-3].str_val), (yyvsp[-1].expr)); }
#line 1533 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 169 "parser.y" /* yacc.c:1646  */
    {}
#line 1539 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "parser.y" /* yacc.c:1646  */
    {}
#line 1545 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "parser.y" /* yacc.c:1646  */
    {}
#line 1551 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 176 "parser.y" /* yacc.c:1646  */
    {}
#line 1557 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 177 "parser.y" /* yacc.c:1646  */
    {}
#line 1563 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 180 "parser.y" /* yacc.c:1646  */
    {}
#line 1569 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "parser.y" /* yacc.c:1646  */
    {}
#line 1575 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "parser.y" /* yacc.c:1646  */
    {}
#line 1581 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 187 "parser.y" /* yacc.c:1646  */
    {}
#line 1587 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 188 "parser.y" /* yacc.c:1646  */
    {}
#line 1593 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 191 "parser.y" /* yacc.c:1646  */
    {}
#line 1599 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 194 "parser.y" /* yacc.c:1646  */
    {}
#line 1605 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "parser.y" /* yacc.c:1646  */
    {}
#line 1611 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 196 "parser.y" /* yacc.c:1646  */
    {}
#line 1617 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 200 "parser.y" /* yacc.c:1646  */
    {}
#line 1623 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval.int_val) = (yyvsp[-1].int_val); }
#line 1629 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 206 "parser.y" /* yacc.c:1646  */
    {}
#line 1635 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 207 "parser.y" /* yacc.c:1646  */
    {}
#line 1641 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 218 "parser.y" /* yacc.c:1646  */
    { MainSpace::insertType((yyvsp[-3].str_val), (yyvsp[-1].type_val)); }
#line 1647 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.type_val) = (yyvsp[0].type_val); }
#line 1653 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.type_val) = (yyvsp[0].type_val); }
#line 1659 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.type_val) = (yyvsp[0].type_val); }
#line 1665 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval.type_val) = MainSpace::simpleType((yyvsp[0].str_val)); }
#line 1671 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 229 "parser.y" /* yacc.c:1646  */
    { (yyval.type_val) = MainSpace::recordType((yyvsp[-1].paramPair)); }
#line 1677 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.paramPair) = MainSpace::addFieldList((yyvsp[-1].paramPair), (yyvsp[0].paramPair)); }
#line 1683 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.paramPair) = nullptr; }
#line 1689 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval.paramPair) = MainSpace::addField((yyvsp[-3].identList), (yyvsp[-1].type_val)); }
#line 1695 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval.identList) = MainSpace::identList((yyvsp[-2].identList), (yyvsp[0].str_val)); }
#line 1701 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval.identList) = MainSpace::identList(nullptr, (yyvsp[0].str_val));  }
#line 1707 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.type_val) = MainSpace::arrayType((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[0].type_val)); }
#line 1713 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 254 "parser.y" /* yacc.c:1646  */
    { MainSpace::insertVar((yyvsp[-3].identList), (yyvsp[-1].type_val)); }
#line 1719 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 257 "parser.y" /* yacc.c:1646  */
    {}
#line 1725 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 258 "parser.y" /* yacc.c:1646  */
    {}
#line 1731 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 259 "parser.y" /* yacc.c:1646  */
    {}
#line 1737 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 260 "parser.y" /* yacc.c:1646  */
    {}
#line 1743 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 261 "parser.y" /* yacc.c:1646  */
    {}
#line 1749 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 262 "parser.y" /* yacc.c:1646  */
    {}
#line 1755 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 263 "parser.y" /* yacc.c:1646  */
    {}
#line 1761 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 264 "parser.y" /* yacc.c:1646  */
    {}
#line 1767 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 265 "parser.y" /* yacc.c:1646  */
    {}
#line 1773 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 266 "parser.y" /* yacc.c:1646  */
    {}
#line 1779 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 267 "parser.y" /* yacc.c:1646  */
    {}
#line 1785 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 270 "parser.y" /* yacc.c:1646  */
    { MainSpace::assign((yyvsp[-2].lvalue), (yyvsp[0].expr)); }
#line 1791 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 273 "parser.y" /* yacc.c:1646  */
    { MainSpace::endIf((yyvsp[-4].int_val)); /* write out final label */ }
#line 1797 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 276 "parser.y" /* yacc.c:1646  */
    {  (yyval.int_val) = MainSpace::ifExpr((yyvsp[0].expr)); /* return a pair, the final label and else branch label, write out condition and "bne else", then conditions */ }
#line 1803 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 279 "parser.y" /* yacc.c:1646  */
    { /* $$ = MainSpace::ifExprEnd();  output a jump to the final label, make else label, return final label */ }
#line 1809 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 282 "parser.y" /* yacc.c:1646  */
    { /* write out statement list and j final, then next else if, return final label */}
#line 1815 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 283 "parser.y" /* yacc.c:1646  */
    {}
#line 1821 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 286 "parser.y" /* yacc.c:1646  */
    { /* write out condition and bne to final label, return the pair of final label and else */ }
#line 1827 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 289 "parser.y" /* yacc.c:1646  */
    { /* return the final label, write out the statement list and j final */ }
#line 1833 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 290 "parser.y" /* yacc.c:1646  */
    {}
#line 1839 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 293 "parser.y" /* yacc.c:1646  */
    { MainSpace::endWhile((yyvsp[-3].int_val)); /* print statements, jump, and then end label */ }
#line 1845 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.int_val) = MainSpace::whileHead((yyvsp[0].expr)); /* print condition and branch, return counter for end label */}
#line 1851 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 299 "parser.y" /* yacc.c:1646  */
    { MainSpace::startLoop(); }
#line 1857 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 301 "parser.y" /* yacc.c:1646  */
    { MainSpace::repeat((yyvsp[0].expr)); }
#line 1863 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 303 "parser.y" /* yacc.c:1646  */
    { MainSpace::startLoop(); }
#line 1869 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 305 "parser.y" /* yacc.c:1646  */
    {}
#line 1875 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 308 "parser.y" /* yacc.c:1646  */
    {}
#line 1881 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 311 "parser.y" /* yacc.c:1646  */
    {}
#line 1887 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 312 "parser.y" /* yacc.c:1646  */
    {}
#line 1893 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 315 "parser.y" /* yacc.c:1646  */
    { MainSpace::stopProgram(); }
#line 1899 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 318 "parser.y" /* yacc.c:1646  */
    {}
#line 1905 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 319 "parser.y" /* yacc.c:1646  */
    {}
#line 1911 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 323 "parser.y" /* yacc.c:1646  */
    { MainSpace::read((yyvsp[-1].exprList)); }
#line 1917 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = MainSpace::exprList((yyvsp[-2].exprList), (yyvsp[0].lvalue)); }
#line 1923 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = MainSpace::exprList(nullptr, (yyvsp[0].lvalue)); }
#line 1929 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 330 "parser.y" /* yacc.c:1646  */
    { MainSpace::write((yyvsp[-1].exprList)); }
#line 1935 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 333 "parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = MainSpace::exprList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 1941 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.exprList) = MainSpace::exprList(nullptr, (yyvsp[0].expr)); }
#line 1947 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 337 "parser.y" /* yacc.c:1646  */
    {}
#line 1953 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 339 "parser.y" /* yacc.c:1646  */
    {}
#line 1959 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 340 "parser.y" /* yacc.c:1646  */
    {}
#line 1965 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 342 "parser.y" /* yacc.c:1646  */
    {}
#line 1971 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 343 "parser.y" /* yacc.c:1646  */
    {}
#line 1977 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::charExpr((yyvsp[0].char_val)); }
#line 1983 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::chrConvert((yyvsp[-1].expr)); }
#line 1989 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("and", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1995 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("div", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2001 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 350 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("seq", (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2007 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 351 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("sge", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2013 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("sgt", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2019 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("sle", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2025 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("slt", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2031 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("sub", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2037 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("rem", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2043 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 357 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("mul", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2049 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("sne", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2055 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("or", (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2061 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::binaryop("add", (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2067 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 361 "parser.y" /* yacc.c:1646  */
    {}
#line 2073 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::intExpr((yyvsp[0].int_val)); }
#line 2079 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2085 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::lValToExpr((yyvsp[0].lvalue)); }
#line 2091 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 365 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::minusExpr((yyvsp[0].expr)); }
#line 2097 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 366 "parser.y" /* yacc.c:1646  */
    {}
#line 2103 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::ordConvert((yyvsp[-1].expr)); }
#line 2109 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 368 "parser.y" /* yacc.c:1646  */
    {}
#line 2115 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 369 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = MainSpace::strExpr((yyvsp[0].str_val)); }
#line 2121 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 370 "parser.y" /* yacc.c:1646  */
    {}
#line 2127 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 373 "parser.y" /* yacc.c:1646  */
    {}
#line 2133 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = MainSpace::lookupMember((yyvsp[-2].lvalue), (yyvsp[0].str_val)); }
#line 2139 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = MainSpace::lookupArray((yyvsp[-3].lvalue), (yyvsp[-1].expr)); }
#line 2145 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = MainSpace::lookup((yyvsp[0].str_val)); }
#line 2151 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
    break;


#line 2155 "/home/braydendstone/Documents/CS5300/official/parser.cpp" /* yacc.c:1646  */
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 380 "parser.y" /* yacc.c:1906  */


void yyerror(const char* msg)
{
  std::cerr << msg;
}

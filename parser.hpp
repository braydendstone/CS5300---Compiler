/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 10 "parser.y" /* yacc.c:1909  */

#include <vector>
#include <string>
#include <utility>
#include <map>
#include <memory>
#include "Expression.h"
#include "Types.h"
#include "LValue.h"

#line 55 "/home/braydendstone/Documents/CS5300/official/parser.hpp" /* yacc.c:1909  */

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
#line 22 "parser.y" /* yacc.c:1909  */

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

#line 142 "/home/braydendstone/Documents/CS5300/official/parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BRAYDENDSTONE_DOCUMENTS_CS5300_OFFICIAL_PARSER_HPP_INCLUDED  */

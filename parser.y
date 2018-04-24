%{
#include <iostream>
#include <fstream>
#include "MainSpace.h"

extern int yylex();
void yyerror(const char*);
%}

%code requires{
#include <vector>
#include <string>
#include <utility>
#include <map>
#include <memory>
#include "Expression.h"
#include "Types.h"
#include "LValue.h"
}

%union
{
  char * str_val;
  int int_val;
  char char_val;
  Expression * expr;
  std::vector<Expression*>* exprList;
  std::vector<std::string>* identList;
  std::vector<LValue*>* lValList;
  Types* type_val;
  LValue* lvalue;
  std::vector<std::pair<std::string, std::shared_ptr<Types>>>* paramList;
  //std::pair<std::string, std::string> stringPair;
}

%error-verbose
%token ARRAYSY 
%token ASSIGNSY 
%token BEGINSY 
%token CHARCONSTSY 
%token CHRSY 
%token COLONSY 
%token COMMASY 
%token CONSTSY 
%token DIVSY 
%token DOSY 
%token DOTSY 
%token DOWNTOSY 
%token ELSEIFSY 
%token ELSESY 
%token ENDSY 
%token EQSY 
%token FORSY 
%token FORWARDSY 
%token FUNCTIONSY 
%token GTESY 
%token GTSY 
%token IDENTSY
%token IFSY 
%token INTSY 
%token LBRACKETSY 
%token LPARENSY 
%token LTESY 
%token LTSY 
%token MINUSSY 
%token MODSY 
%token MULTSY
%token NOTSY 
%token OFSY
%token ORDSY 
%token PLUSSY 
%token PREDSY 
%token PROCEDURESY 
%token RBRACKETSY
%token READSY 
%token RECORDSY 
%token REFSY 
%token REPEATSY 
%token RETURNSY 
%token RPARENSY 
%token SCOLONSY 
%token STOPSY 
%token STRINGSY 
%token SUCCSY
%token THENSY 
%token TOSY 
%token TYPESY 
%token UNTILSY 
%token VARSY 
%token WHILESY 
%token WRITESY

%left ANDSY ORSY
%right NOTSY
%nonassoc EQSY LTESY GTESY GTSY LTSY NEQSY 
%left PLUSSY MINUSSY 
%left DIVSY MODSY MULTSY
%right UMINUSSY 

    %type <char_val> CHARCONSTSY
    %type <exprList> Arguments
    %type <type_val> ArrayType
%type <int_val> Assignment
%type <int_val> Block 
%type <int_val> Body
    %type <int_val> ElseStart
%type <int_val> ElseClause 
    %type <int_val> ElseIfHead
%type <int_val> ElseIfList 
    %type <expr> Expression
%type <int_val> FSignature 
    %type <paramList> FieldDecl
    %type <paramList> FieldDecls
%type <int_val> ForStatement
    %type <paramList> FormalParameter
    %type <paramList> FormalParameters
    %type <expr> FunctionCall
%type <int_val> INTSY 
    %type <identList> IdentList
%type <int_val> OptVar 
    %type <int_val> IfHead
%type <int_val> IfStatement 
    %type <lvalue> LValue
    %type <exprList> OptArguments
    %type <paramList> OptFormalParameters
%type <int_val> PSignature 
%type <int_val> ProcedureCall
    %type <lValList> ReadArgs
%type <int_val> ReadStatement 
    %type <type_val> RecordType
%type <int_val> RepeatStatement 
%type <int_val> ReturnStatement 
    %type <type_val> SimpleType
%type <int_val> Statement 
%type <int_val> StatementList 
%type <int_val> StopStatement 
    %type <str_val> ThenPart
    %type <type_val> Type
    %type <int_val> WhileHead
    %type <int_val> WhileStart
%type <int_val> WhileStatement 
    %type <exprList> WriteArgs
%type <int_val> WriteStatement
    %type <str_val> IDENTSY
    %type <str_val> STRINGSY
    %type <str_val> ForStart
    %type <str_val> ForDownToHead
    %type <str_val> ForToHead

%%
Program : ProgramHead Block DOTSY { MainSpace::end($2); }
				;

ProgramHead : OptConstDecls OptTypeDecls OptVarDecls PFDecls { MainSpace::start(); }
            ;
OptConstDecls : CONSTSY ConstDecls
							|
							;

ConstDecls : ConstDecls ConstDecl
					 | ConstDecl
					 ;

ConstDecl : IDENTSY EQSY Expression SCOLONSY { MainSpace::insertConst($1, $3); }
					;

PFDecls : PFDecls ProcedureDecl
        | PFDecls FunctionDecl
        |
        ;

ProcedureDecl : PSignature SCOLONSY FORWARDSY SCOLONSY {}
              | PSignature SCOLONSY Body SCOLONSY { MainSpace::endFunc(); }
			  ;

PSignature : PROCEDURESY IDENTSY LPARENSY OptFormalParameters RPARENSY { Function* f = MainSpace::createFunc($2, $4, nullptr); MainSpace::declareFunc(f); }
           ;

FunctionDecl : FSignature SCOLONSY FORWARDSY SCOLONSY {}
						 | FSignature SCOLONSY Body SCOLONSY {}
						 ;

FSignature : FUNCTIONSY IDENTSY LPARENSY OptFormalParameters RPARENSY COLONSY Type {}
           ;

OptFormalParameters : FormalParameters { $$ = $1; }
                    | { $$ = nullptr; }
                    ;

FormalParameters : FormalParameters SCOLONSY FormalParameter { $$ = MainSpace::paramList($1, $3); }
                 | FormalParameter { $$ = $1; }
                 ;

FormalParameter : OptVar IdentList COLONSY Type { $$ = MainSpace::addParameter($1, $2, $4); }
                ;

OptVar : VARSY { $$ = 0; }
       | REFSY { $$ = 1; }
       | { $$ = 0; }
       ;


Body : OptConstDecls OptTypeDecls OptVarDecls Block {}
     ;

Block : BEGINSY StatementList ENDSY { $$ = $2; }
      ;

StatementList : StatementList SCOLONSY Statement {}
              | Statement {}
              ;

OptTypeDecls : TYPESY TypeDecls
             |
             ;

TypeDecls    : TypeDecls TypeDecl
             | TypeDecl
             ;

TypeDecl : IDENTSY EQSY Type SCOLONSY { MainSpace::insertType($1, $3); }
         ;

Type : SimpleType { $$ = $1; }
     | RecordType { $$ = $1; }
     | ArrayType { $$ = $1; }
     ;

SimpleType : IDENTSY { $$ = MainSpace::simpleType($1); }
           ;

RecordType : RECORDSY FieldDecls ENDSY { $$ = MainSpace::recordType($2); }
           ;

FieldDecls : FieldDecls FieldDecl { $$ = MainSpace::addFieldList($1, $2); }
           | { $$ = nullptr; }
           ;

FieldDecl : IdentList COLONSY Type SCOLONSY { $$ = MainSpace::addField($1, $3); }
          ;

IdentList : IdentList COMMASY IDENTSY { $$ = MainSpace::identList($1, $3); }
          | IDENTSY { $$ = MainSpace::identList(nullptr, $1);  }
          ;

ArrayType : ARRAYSY LBRACKETSY Expression COLONSY Expression RBRACKETSY OFSY Type { $$ = MainSpace::arrayType($3, $5, $8); }
          ;

OptVarDecls : VARSY VarDecls
            |
            ;

VarDecls    : VarDecls VarDecl
            | VarDecl
            ;

VarDecl : IdentList COLONSY Type SCOLONSY { MainSpace::insertVar($1, $3); }
        ;

Statement : Assignment {}
          | IfStatement {}
          | WhileStatement {}
          | RepeatStatement {}
          | ForStatement {}
          | StopStatement {}
          | ReturnStatement {}
          | ReadStatement {}
          | WriteStatement {}
          | ProcedureCall {}
          | {}
          ;

Assignment : LValue ASSIGNSY Expression { MainSpace::assign($1, $3); }
           ;

IfStatement : IfHead ThenPart ElseIfList ElseClause ENDSY { MainSpace::endIf($1); /* write out final label */ }
            ;

IfHead : IFSY Expression {  $$ = MainSpace::ifExpr($2); /* return a pair, the final label and else branch label, write out condition and "bne else", then conditions */ }
       ;

ThenPart : THENSY StatementList { MainSpace::ifExprEnd(-1); /* output a jump to the final label, make else label, return final label */ }
         ;

ElseIfList : ElseIfList ElseIfHead ThenPart { /* write out statement list and j final, then next else if, return final label */}
           |{}
           ;

ElseIfHead : ElseIfStart Expression { $$ = MainSpace::ifExpr($2); /* write out condition and bne to final label, return the pair of final label and else */ }
           ;

ElseIfStart : ELSEIFSY { MainSpace::labelElseIf(true); }
            ;

ElseClause : ElseStart StatementList { MainSpace::ifExprEnd($1); /* return the final label, write out the statement list and j final */ }
           | { MainSpace::labelElseIf(false); }
           ;

ElseStart : ELSESY { $$ = MainSpace::labelElseIf(false); }

WhileStatement : WhileHead DOSY StatementList ENDSY { MainSpace::endWhile($1); /* print statements, jump, and then end label */ }
               ;

WhileHead : WhileStart Expression { $$ = MainSpace::whileHead($2); /* print condition and branch, return counter for end label */}
          ;

WhileStart : WHILESY { MainSpace::startLoop(); }

RepeatStatement : RepeatStart StatementList UNTILSY Expression { MainSpace::repeat($4); }

RepeatStart : REPEATSY { MainSpace::startLoop(); }

ForStatement : ForToStatement
             | ForDownToStatement
             ;

ForToStatement : ForToHead DOSY StatementList ENDSY { MainSpace::endForTo($1); }
        ;

ForDownToStatement : ForDownToHead DOSY StatementList ENDSY { MainSpace::endForDownTo($1); }
                   ;

ForToHead : ForStart TOSY Expression { $$ = MainSpace::forToHead($1, $3); }
          ;

ForDownToHead : ForStart DOWNTOSY Expression { $$ = MainSpace::forDownToHead($1, $3); }

ForStart : FORSY IDENTSY ASSIGNSY Expression { $$ = MainSpace::setupForLoop($2, $4); }
         ;

StopStatement : STOPSY { MainSpace::stopProgram(); }
              ;

ReturnStatement : RETURNSY Expression {}
                | RETURNSY {}
                ;


ReadStatement : READSY LPARENSY ReadArgs RPARENSY { MainSpace::read($3); }
              ;

ReadArgs : ReadArgs COMMASY LValue { $$ = MainSpace::lvalList($1, $3); }
         | LValue                  { $$ = MainSpace::lvalList(nullptr, $1); }
         ;

WriteStatement : WRITESY LPARENSY WriteArgs RPARENSY { MainSpace::write($3); }
               ;

WriteArgs : WriteArgs COMMASY Expression { $$ = MainSpace::exprList($1, $3); }
          | Expression                   { $$ = MainSpace::exprList(nullptr, $1); }
          ;

ProcedureCall : IDENTSY LPARENSY OptArguments RPARENSY { MainSpace::callFunc($1, $3); }
              ;
OptArguments : Arguments { $$ = $1; }
             |           { $$ = nullptr; }
             ;
Arguments : Arguments COMMASY Expression { $$ = MainSpace::exprList($1, $3); }
          | Expression                   { $$ = MainSpace::exprList(nullptr, $1); }
          ;

Expression : CHARCONSTSY                         { $$ = MainSpace::charExpr($1); }
           | CHRSY LPARENSY Expression RPARENSY  { $$ = MainSpace::chrConvert($3); }
           | Expression ANDSY Expression         { $$ = MainSpace::binaryop("and", $1, $3);}
           | Expression DIVSY Expression         { $$ = MainSpace::binaryop("div", $1, $3);}
           | Expression EQSY Expression          { $$ = MainSpace::binaryop("seq", $1, $3); }
           | Expression GTESY Expression         { $$ = MainSpace::binaryop("sge", $1, $3);}
           | Expression GTSY Expression          { $$ = MainSpace::binaryop("sgt", $1, $3);}
           | Expression LTESY Expression         { $$ = MainSpace::binaryop("sle", $1, $3);}
           | Expression LTSY Expression          { $$ = MainSpace::binaryop("slt", $1, $3);}
           | Expression MINUSSY Expression       { $$ = MainSpace::binaryop("sub", $1, $3);}
           | Expression MODSY Expression         { $$ = MainSpace::binaryop("rem", $1, $3);}
           | Expression MULTSY Expression        { $$ = MainSpace::binaryop("mul", $1, $3);}
           | Expression NEQSY Expression         { $$ = MainSpace::binaryop("sne", $1, $3);}
           | Expression ORSY Expression          { $$ = MainSpace::binaryop("or", $1, $3);}
           | Expression PLUSSY Expression        { $$ = MainSpace::binaryop("add", $1, $3); }
           | FunctionCall                        {}
           | INTSY                               { $$ = MainSpace::intExpr($1); }
           | LPARENSY Expression RPARENSY        { $$ = $2; }
           | LValue                              { $$ = MainSpace::lValToExpr($1); }
           | MINUSSY Expression %prec UMINUSSY   { $$ = MainSpace::minusExpr($2); }
           | NOTSY Expression                    {}
           | ORDSY LPARENSY Expression RPARENSY  { $$ = MainSpace::ordConvert($3); }
           | PREDSY LPARENSY Expression RPARENSY { $$ = MainSpace::pred($3); }
           | STRINGSY                            { $$ = MainSpace::strExpr($1); }
           | SUCCSY LPARENSY Expression RPARENSY { $$ = MainSpace::succ($3); }
           ;

FunctionCall : IDENTSY LPARENSY OptArguments RPARENSY { $$ = MainSpace::callFunc($1, $3); }
             ;

LValue : LValue DOTSY IDENTSY { $$ = MainSpace::lookupMember($1, $3); }
       | LValue LBRACKETSY Expression RBRACKETSY { $$ = MainSpace::lookupArray($1, $3); }
       | IDENTSY { $$ = MainSpace::lookup($1); }
       ;
%%

void yyerror(const char* msg)
{
  std::cerr << msg;
}

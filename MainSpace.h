//
// Created by braydendstone on 2/23/18.
//

#ifndef CPSL_MAINSPACE_H
#define CPSL_MAINSPACE_H

#include <string>
#include <memory>
#include "GlobalSymbolTable.h"
#include "Types.h"
#include "RegPool.h"
#include "LValue.h"
#include "Function.h"


class MainSpace {
private:
    static std::shared_ptr<GlobalSymbolTable> globalSymbolTable;
    static int whileCount;
    static int ifCount;
    static int forCount;
    static int elseCount;

public:
    static void setupProgram();
    static void start();
    static void end(int body);
    static std::shared_ptr<GlobalSymbolTable> initTable();

    static std::shared_ptr<GlobalSymbolTable> getSymbolTable();

    static void insertConst(std::string id, Expression* e);
    static void insertVar(std::vector<std::string>* list, Types* type);
    static void insertType(std::string id, Types* type);

    static Expression* strExpr(std::string);
    static Expression* intExpr(int i);
    static Expression* charExpr(char c);
    static Expression* minusExpr(Expression* e);
    static std::vector<std::string>* identList(std::vector<std::string>* list, std::string str);

    static Expression* lValToExpr(LValue* lval);

    static LValue* lookup(std::string id);
    static LValue* lookupArray(LValue* a, Expression* b);
    static void assign(LValue* a, Expression* b);
    static Expression* binaryop(std::string symbol, Expression* a, Expression* b);
    static Expression* constFold(std::string sym, Expression* a, Expression* b);

    static void read(std::vector<LValue*>* list);
    static void write(std::vector<Expression*>* list);
    static std::vector<LValue*>* lvalList(std::vector<LValue*>* list, LValue* e);
    static std::vector<Expression*>* exprList(std::vector<Expression*>* list, Expression* e);


    static Expression* chrConvert(Expression* e);
    static Expression* ordConvert(Expression* e);

    static Expression* succ(Expression* e);
    static Expression* pred(Expression* e);


    static void stopProgram();

    static Types* simpleType(std::string id);
    static Types* arrayType(Expression* lower, Expression* upper, Types* type);
    static Types* recordType(std::vector<std::pair<std::string, std::shared_ptr<Types>>>* fields);

    static LValue* lookupMember(LValue* lval, std::string id);
    static std::vector<std::pair<std::string, std::shared_ptr<Types>>>* addField(std::vector<std::string>* identList, Types* type);
    static std::vector<std::pair<std::string, std::shared_ptr<Types>>>* addFieldList(std::vector<std::pair<std::string, std::shared_ptr<Types>>>* decl, std::vector<std::pair<std::string, std::shared_ptr<Types>>>* decls);
    static void copy(std::string srcReg, std::string destReg, std::shared_ptr<Types> type);
    static void copy(std::string srcReg, std::string destReg, int index, std::shared_ptr<Types> type);

    static void endIf(int labelIndex);
    static int ifExpr(Expression* expr);
    static void ifExprEnd(int index);
    static int elseStart();
    static int labelElse();
    static int labelElseIf(bool isElseIf);

    static void startLoop();

    static int whileHead(Expression* expr);
    static void endWhile(int index);

    static void repeat(Expression* expr);

    static char* setupForLoop(char* id, Expression* expr);
    static char* forToHead(char* id, Expression* expr);
    static char* forDownToHead(char* id, Expression* expr);
    static void endForTo(std::string id);
    static void endForDownTo(std::string id);

    static Expression* callFunc(char* id, std::vector<Expression*>* args);
    static Function* createFunc(char* id, std::vector<std::pair<std::string, std::shared_ptr<Types>>>* params, Types* returnType);
    static void declareFunc(Function* func);
    static void endFunc();
    static std::vector<std::pair<std::string, std::shared_ptr<Types>>>* addParameter(int ref, std::vector<std::string>* identList, Types* type);
    static std::vector<std::pair<std::string, std::shared_ptr<Types>>>* paramList(std::vector<std::pair<std::string, std::shared_ptr<Types>>>* finalList, std::vector<std::pair<std::string, std::shared_ptr<Types>>>* list);
    static void returnFunc(Expression* expr);
};


#endif //CPSL_MAINSPACE_H

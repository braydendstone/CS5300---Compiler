//
// Created by braydendstone on 2/23/18.
//

#ifndef CPSL_GLOBALSYMBOLTABLE_H
#define CPSL_GLOBALSYMBOLTABLE_H

#include "SymbolTable.h"
#include "Function.h"
#include <memory>

class GlobalSymbolTable {
public:
    GlobalSymbolTable() : stringCounter(0), globalOffset(0) {};

    void storeConst(std::string id, std::shared_ptr<Expression> expression);
    void storeVariable(std::string id, std::shared_ptr<Types> type);
    void storeType(std::string id, std::shared_ptr<Types> type);
    void storeFunction(std::string id, std::shared_ptr<Function> func);
    void storeParam(std::string id, std::shared_ptr<Types> type);

    std::shared_ptr<Types> lookupType(std::string id);
    std::shared_ptr<Types> lookupAllType(std::string id);
    std::shared_ptr<Expression> lookupConst(std::string id);
    std::shared_ptr<Symbol> lookupVar(std::string id);
    std::shared_ptr<Function> lookupFunc(std::string id);
    std::shared_ptr<Types> lookupParam(std::string id);

    int storeString(std::string);

    void enter_scope();
    void exit_scope();

    void printStringList();
private:
    std::vector<SymbolTable> symbolTables;
    std::vector<std::string> stringList;
    int globalOffset;
    int stringCounter;
};

extern GlobalSymbolTable globalSymbolTable;

#endif //CPSL_GLOBALSYMBOLTABLE_H

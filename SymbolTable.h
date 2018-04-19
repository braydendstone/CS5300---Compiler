//
// Created by braydendstone on 2/22/18.
//

#ifndef CPSL_SYMBOLTABLE_H
#define CPSL_SYMBOLTABLE_H

#include <map>
#include <vector>
#include <memory>
#include "Expression.h"
#include "Types.h"
#include "Symbol.h"
#include "Function.h"


class SymbolTable
{
public:
    std::map<std::string, std::shared_ptr<Types>> types;
    std::map<std::string, std::shared_ptr<Expression>> consts;
    std::map<std::string, std::shared_ptr<Symbol>> variables;
    std::map<std::string, std::shared_ptr<Function>> functions;
    std::map<std::string, std::shared_ptr<Types>> params;
private:

};

extern SymbolTable symbol_table;

#endif

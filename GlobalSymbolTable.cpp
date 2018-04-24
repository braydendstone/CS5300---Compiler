//
// Created by braydendstone on 2/23/18.
//

#include <iostream>
#include <map>
#include "GlobalSymbolTable.h"

GlobalSymbolTable global_symbol_table;


void GlobalSymbolTable::storeConst(std::string id, std::shared_ptr<Expression> expression)
{
    auto found = symbolTables.rbegin()->consts.find(id);
    if(found == symbolTables.rbegin()->consts.end())
    {
        symbolTables.rbegin()->consts[id] = expression;
    }

}

void GlobalSymbolTable::storeVariable(std::string id, std::shared_ptr<Types> type)
{
    auto found = symbolTables.rbegin()->variables.find(id);
    if(found == symbolTables.rbegin()->variables.end())
    {
        std::string memLocation = "GLOBAL";
        if(symbolTables.size() > 1) memLocation = "STACK";
        symbolTables.rbegin()->variables[id] = std::make_shared<Symbol>(id, type, globalOffset, memLocation);
        globalOffset += type->getSize();
    }
}

void GlobalSymbolTable::storeType(std::string id, std::shared_ptr<Types> type)
{
    auto found = symbolTables.rbegin()->types.find(id);
    if(found == symbolTables.rbegin()->types.end())
    {
        symbolTables.rbegin()->types[id] = type;
    }
}

void GlobalSymbolTable::storeFunction(std::string id, std::shared_ptr<Function> func){
    auto found = symbolTables.rbegin()->types.find(id);
    if(found == symbolTables.rbegin()->types.end())
    {
        symbolTables.rbegin()->functions[id] = func;
    }
}

void GlobalSymbolTable::storeParam(std::string id, std::shared_ptr<Types> type) {
    auto found = symbolTables.rbegin()->types.find(id);
    if(found == symbolTables.rbegin()->types.end())
    {
        std::string memLocation = "GLOBAL";
        if(symbolTables.size() > 1) memLocation = "STACK";
        symbolTables.rbegin()->variables[id] = std::make_shared<Symbol>(id, type, paramOffset, memLocation);
        paramOffset += type->getSize();
    }
}

std::shared_ptr<Types> GlobalSymbolTable::lookupType(std::string id)
{
    //auto cur = symbolTables[0];
    for(auto cur = symbolTables.rbegin(); cur != symbolTables.rend(); cur++)
    {
        auto found = cur->types.find(id);
        if(found != cur->types.end())
        {
            return found->second;
        }
    }

    return nullptr;
//    throw std::runtime_error("unable to find type " + id);
}

std::shared_ptr<Types> GlobalSymbolTable::lookupAllType(std::string id)
{
    for(auto cur = symbolTables.rbegin(); cur != symbolTables.rend(); cur++)
    {
        auto found = cur->types.find(id);
        if(found != cur->types.end())
        {
        return found->second;
        }
    }
    return nullptr;
}

std::shared_ptr<Expression> GlobalSymbolTable::lookupConst(std::string id)
{
    for(auto cur = symbolTables.rbegin(); cur != symbolTables.rend(); cur++)
    {
        auto found = cur->consts.find(id);
        if(found != cur->consts.end())
        {
            return found->second;
        }
    }

    return nullptr;
//    throw std::runtime_error("unable to find const " + id);
}

std::shared_ptr<Symbol> GlobalSymbolTable::lookupVar(std::string id)
{
    for(auto cur = symbolTables.rbegin(); cur != symbolTables.rend(); cur++)
    {
        auto found = cur->variables.find(id);
        if(found != cur->variables.end())
        {
            return found->second;
        }
    }

    return nullptr;
//    throw std::runtime_error("unable to find variable " + id);
}

std::shared_ptr<Function> GlobalSymbolTable::lookupFunc(std::string id)
{
    for(auto cur = symbolTables.rbegin(); cur != symbolTables.rend(); cur++)
    {
        auto found = cur->functions.find(id);
        if(found != cur->functions.end())
        {
            return found->second;
        }
    }

    return nullptr;
}

std::shared_ptr<Types> GlobalSymbolTable::lookupParam(std::string id)
{
    for(auto cur = symbolTables.rbegin(); cur != symbolTables.rend(); cur++)
    {
        auto found = cur->params.find(id);
        if(found != cur->params.end())
        {
            return found->second;
        }
    }

    return nullptr;
}

int GlobalSymbolTable::storeString(std::string str)
{
    int temp = stringCounter;
    stringList.push_back(str);
    stringCounter++;
    return temp;
}

void GlobalSymbolTable::printStringList()
{
    for(int i = 0; i < stringList.size(); i++)
    {
        std::cout << "STR" << i << ": " << stringList[i] << std::endl;
    }
}

void GlobalSymbolTable::enter_scope()
{
    auto temp = SymbolTable();
    symbolTables.push_back(temp);
}

void GlobalSymbolTable::exit_scope()
{
    symbolTables.pop_back();
}
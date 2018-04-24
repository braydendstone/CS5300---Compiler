//
// Created by braydendstone on 2/27/18.
//

#ifndef CPSL_SYMBOL_H
#define CPSL_SYMBOL_H

#include <string>
#include "Types.h"

class Symbol {
public:
    Symbol(std::string id, std::shared_ptr<Types> type, int memOffset, std::string memLocation) : id(id), type(type), memOffset(memOffset), memLocation(memLocation)
    {}
    std::string getId() { return id; }
    std::shared_ptr<Types> getType() { return type; }
    int getMemOffset() { return memOffset; }
    std::string getMemLocation() { return memLocation; }

private:
    std::shared_ptr<Types> type = nullptr;
    int memOffset = 0;
    std::string id;
    std::string memLocation;
};

#endif //CPSL_SYMBOL_H

//
// Created by braydendstone on 2/25/18.
//

#ifndef CPSL_EXPRESSION_H
#define CPSL_EXPRESSION_H


#include "Types.h"
#include "RegPool.h"
#include <memory>
#include <iostream>

class LValue;

class Expression {

private:
    bool isConst = false;
    int value = 0;
    std::shared_ptr<Types> type = nullptr;
    std::string reg;
    int memOffset = 0;
    std::shared_ptr<LValue> lvalue = nullptr;

public:
    explicit Expression(std::shared_ptr<Types> type);
    Expression(std::shared_ptr<Types> type, int value, bool isConst, int offset = 0);
    Expression(std::shared_ptr<LValue> lval);
//    ~Expression(){ RegPool::returnReg(reg); }
    int getOffset() { return memOffset; }
    void setOffset(int newOffset) { memOffset = newOffset; }
    bool isExprConst() { return isConst; }
    int getVal() { return value; }
    std::string getReg() {
        if(reg == "")
        {
            reg = RegPool::allocate();

            if (type == GetTypes::boolType() || type == GetTypes::intType() || type == GetTypes::charType()) {
                std::cout << "lw " << reg << ", " << getOffset() << "($gp)" << std::endl;
            } else std::cout << "la " << reg << ", " << getOffset() << "($gp)" << std::endl;
        }
        return reg;
    }
    void setReg(std::string newReg) { reg = newReg; }
    std::shared_ptr<Types> getType() { return type; }
    void setType(std::shared_ptr<Types> newType) { type = newType; }
    void setVal(int newVal) { value = newVal; }

};


#endif //CPSL_EXPRESSION_H

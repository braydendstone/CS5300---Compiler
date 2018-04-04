//
// Created by braydendstone on 2/25/18.
//

#include "Expression.h"
#include "LValue.h"

Expression::Expression(std::shared_ptr<Types> type) : type(type)
{
    reg = RegPool::allocate();
    isConst = false;
}
Expression::Expression(std::shared_ptr<Types> type, int value, bool isConst, int offset) : type(type), value(value), isConst(isConst), memOffset(offset)
{}

Expression::Expression(std::shared_ptr<LValue> lval) : lvalue(lval) {
    reg = RegPool::allocate();
    type = lval->getType();
    isConst = false;
}
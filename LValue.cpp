//
// Created by braydendstone on 3/13/18.
//

#include "LValue.h"

std::shared_ptr<Expression> IdAccess::getAddress() const {
    auto var = symbolTable->lookupVar(id);
    if(!var)
    {
        throw std::runtime_error("invalid variable id");
    }
    auto offset = var->getMemOffset();
    auto tempReg = RegPool::allocate();

    std::cout << "move " << tempReg << ", $gp" << std::endl;
    std::cout << "addi " << tempReg << ", " << tempReg << ", " << offset << std::endl;

    auto returnExpr = std::make_shared<Expression>(var->getType(), 0, false, var->getMemOffset());
    returnExpr->setReg(tempReg);    auto temp = symbolTable->lookupConst(id);
    if(temp != nullptr) {
        return std::make_shared<Expression>(temp->getType(), 0, temp->isExprConst(), temp->getOffset());
    }
//    auto returnExpr = std::make_shared<Expression>(GetTypes::intType());
//    auto returnReg = returnExpr->getReg();
//    std::cout << "move " << returnReg << ", " << tempReg << std::endl;

//    RegPool::returnReg(tempReg);

    return returnExpr;
}

std::shared_ptr<Types> IdAccess::getType() const {
    if(isConst()) return symbolTable->lookupConst(id)->getType();
    auto var = symbolTable->lookupVar(id);
    if(!var)
    {
        throw std::runtime_error("invalid variable id");
    }
    return var->getType();
}

bool IdAccess::isConst() const {
    return (symbolTable->lookupConst(id) != nullptr);
}

std::shared_ptr<Expression> IdAccess::getValue() const {
    return symbolTable->lookupConst(id);
//    auto temp = symbolTable->lookupConst(id);
//    if(temp != nullptr) {
//        return std::make_shared<Expression>(temp->getType(), 0, temp->isExprConst(), temp->getOffset());
//    }
}

//std::shared_ptr<Expression> IdAccess::getAddress() const {
//    auto var = symbolTable->lookupVar(id);
//    if(!var)
//    {
//        throw std::runtime_error("invalid variable id");
//    }
//    auto offset = var->getMemOffset();
//    auto tempReg = RegPool::allocate();
//
//    std::cout << "move " << tempReg << ", $gp" << std::endl;
//    std::cout << "addi " << tempReg << ", " << tempReg << ", " << offset << std::endl;
//
//    auto returnExpr = std::make_shared<Expression>(var->getType(), 0, false, var->getMemOffset());
//    returnExpr->setReg(tempReg);
////    auto returnExpr = std::make_shared<Expression>(GetTypes::intType());
////    auto returnReg = returnExpr->getReg();
////    std::cout << "move " << returnReg << ", " << tempReg << std::endl;
//
////    RegPool::returnReg(tempReg);
//
//    return returnExpr;
//}

// **** RECORD ACCESS ****

std::shared_ptr<RecordType> MemberAccess::bType() const
{
    auto refType = std::dynamic_pointer_cast<ReferenceType>(base->getType());
    if(refType) {
        return std::dynamic_pointer_cast<RecordType>(refType->getBaseType());
    }
//    auto tempArray = dynamic_cast<ArrayType*>(base->getType().get());
//    auto tempRecord = dynamic_cast<RecordType*>(base->getType().get());
//    if(tempRecord)
//    {
//        return std::dynamic_pointer_cast<RecordType>(tempRecord->());
//    }
//
//    if(tempArray)
//    {
//        return std::dynamic_pointer_cast<RecordType>(tempArray->getBaseType());
//    }
    return std::dynamic_pointer_cast<RecordType>(base->getType());
}

std::shared_ptr<Types> MemberAccess::getType() const
{
    return bType()->getFieldType(field);
}

std::shared_ptr<Expression> MemberAccess::getAddress() const
{
    auto baseAddress = base->getAddress();
    auto offset = bType()->getFieldOffset(field);
    auto returnExpr = std::make_shared<Expression>(GetTypes::intType());

    auto returnReg = returnExpr->getReg();
    auto baseReg = baseAddress->getReg();

    std::cout << "addi " << returnReg << ", " << baseReg << ", " << offset << std::endl;
    return returnExpr;
}

bool MemberAccess::isConst() const
{
    return false;
}

std::shared_ptr<Expression> MemberAccess::getValue() const
{
    return nullptr;
}

// **** ARRAY ACCESS ****

std::shared_ptr<ArrayType> ArrayAccess::arrayType() const {
    auto refType = std::dynamic_pointer_cast<ReferenceType>(base->getType());
    if(refType) {
        return std::dynamic_pointer_cast<ArrayType>(refType->getBaseType());
    }
    return std::dynamic_pointer_cast<ArrayType>(base->getType());
}

std::shared_ptr<Expression> ArrayAccess::getAddress() const {
    auto baseAddress = base->getAddress();
    auto arrType = arrayType();
    if(expression->isExprConst())
    {
        int offset = arrType->getBaseType()->getSize() * (expression->getVal() - arrType->getLower());
        if(offset == 0) return baseAddress;
        else {
            auto returnExpr = std::make_shared<Expression>(GetTypes::intType());
            auto returnReg = returnExpr->getReg();
            auto srcReg = baseAddress->getReg();
            std::cout << "addi " << returnReg << ", " << srcReg << ", " << offset << std::endl;
            RegPool::returnReg(srcReg);
            return returnExpr;
        }
    }
    else {
        auto tempReg1 = RegPool::allocate();
        std::cout << "li " << tempReg1 << ", " << arrType->getLower() << std::endl;
        auto tempReg2 = RegPool::allocate();
        auto exprReg = expression->getReg();
        std::cout << "sub " << tempReg2 << ", " << exprReg << ", " << tempReg1 << std::endl;
        std::cout << "li " << tempReg1 << ", " << arrType->getBaseType()->getSize() << std::endl;
        auto tempReg3 = RegPool::allocate();
        std::cout << "mul " << tempReg3 << ", " << tempReg2 << ", " << tempReg1 << std::endl;
        auto returnExpr = std::make_shared<Expression>(GetTypes::intType());
        auto returnReg = returnExpr->getReg();
        auto srcReg = baseAddress->getReg();
        std::cout << "add " << returnReg << ", " << srcReg << ", " << tempReg3 << std::endl;

        RegPool::returnReg(tempReg1);
        RegPool::returnReg(tempReg2);
        RegPool::returnReg(tempReg3);

        return returnExpr;
    }
}

std::shared_ptr<Types> ArrayAccess::getType() const {
    return arrayType()->getBaseType();
}

bool ArrayAccess::isConst() const {
    return false;
}

std::shared_ptr<Expression> ArrayAccess::getValue() const {
    return expression;
}



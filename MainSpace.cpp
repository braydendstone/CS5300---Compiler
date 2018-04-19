//
// Created by braydendstone on 2/23/18.
//

#include <iostream>
#include "MainSpace.h"

std::shared_ptr<GlobalSymbolTable> MainSpace::globalSymbolTable;
int MainSpace::whileCount = 0;
int MainSpace::ifCount = 0;
int MainSpace::forCount = 0;
int MainSpace::elseCount = 0;

void MainSpace::setupProgram()
{
    std::cout << ".globl main" << std::endl;
    std::cout << ".code" << std::endl;
    std::cout << "main:" << std::endl;
//    std::cout << "main: la $gp, GA" << std::endl;
    std::cout << "j start" << std::endl;

//    Expression* expr = strExpr("hello");
//    insertConst("x", expr);
//    auto pr = writeExpr(nullptr, expr);
//    write(pr);



}

std::shared_ptr<GlobalSymbolTable> MainSpace::initTable()
{
    auto globalTable = std::make_shared<GlobalSymbolTable>();
    globalTable->enter_scope();

    // ***** INSTANTIATE AND INSERT PREDEFINED TYPES *****


    globalTable->storeType("integer", GetTypes::intType());
    globalTable->storeType("INTEGER", GetTypes::intType());
    globalTable->storeType("char", GetTypes::charType());
    globalTable->storeType("CHAR", GetTypes::charType());
    globalTable->storeType("string", GetTypes::strType());
    globalTable->storeType("STRING", GetTypes::strType());
    globalTable->storeType("boolean", GetTypes::boolType());
    globalTable->storeType("BOOLEAN", GetTypes::boolType());

    // TODO: add bool true = 1 false = 0

//    auto trueExpr = std::make_shared<Expression>(GetTypes::boolType(), true);
//    globalSymbolTable->storeConst("true", trueExpr);
//    globalSymbolTable->storeConst("TRUE", trueExpr);
//
//    auto falseExpr = std::make_shared<Expression>(GetTypes::boolType(), false);
//    globalSymbolTable->storeConst("false", falseExpr);
//    globalSymbolTable->storeConst("FALSE", falseExpr);

    globalTable->enter_scope(); //TODO: do this at BEGIN instead?

    RegPool::initialize();
    return globalTable;
}

void MainSpace::start() {
    std::cout << "start: " << std::endl;
}
void MainSpace::end(int body)
{
    std::cout << ".data" << std::endl;
    std::cout << ".asciiz" << std::endl;
    getSymbolTable()->printStringList();
//    std::cout << "GA:" << std::endl;
}

std::shared_ptr<GlobalSymbolTable> MainSpace::getSymbolTable()
{
    if(!globalSymbolTable) {
        globalSymbolTable = initTable();
        insertConst("true", new Expression(GetTypes::boolType(), 1, true));
        insertConst("TRUE", new Expression(GetTypes::boolType(), 1, true));
        insertConst("false", new Expression(GetTypes::boolType(), 0, true));
        insertConst("FALSE", new Expression(GetTypes::boolType(), 0, true));
    }
    return globalSymbolTable;
}

void MainSpace::insertConst(std::string id, Expression* e)
{
    getSymbolTable()->storeConst(id, std::make_shared<Expression>(e->getType(), e->getVal(), true));
}

void MainSpace::insertVar(std::vector<std::string>* list, Types* type)
{
    if (list == nullptr) {
        throw std::runtime_error("ERROR: Empty identifier list");
        return;
    }
    if (type == nullptr) {
        throw std::runtime_error("ERROR: Empty type");
        return;
    }
    if (type->getName().length() < 1) { //new array or record type
        if (dynamic_cast<ArrayType*>(type)) {
            auto arrayType = dynamic_cast<ArrayType*>(type);
            arrayType->setName("_TempArrayType");
            auto arrayTypeSharedPtr = std::make_shared<ArrayType>(*arrayType);
            getSymbolTable()->storeType(arrayTypeSharedPtr->getName(), arrayTypeSharedPtr);
        } else if (dynamic_cast<RecordType*>(type)) {
            auto recordType = dynamic_cast<RecordType*>(type);
            recordType->setName("_TempRecordType");
            auto recordTypeSharedPtr = std::make_shared<RecordType>(*recordType);
            getSymbolTable()->storeType(recordTypeSharedPtr->getName(), recordTypeSharedPtr);
        }
    }
    auto identType = getSymbolTable()->lookupType(type->getName());
    for (const auto& ident: *list) {
        getSymbolTable()->storeVariable(ident, identType);
        // cout << *getSymbolTable()->lookupVariable(ident) << endl;
    }

    delete list;
//    auto idType = getSymbolTable()->lookupType(type->getName());
//    for(auto v : *list)
//    {
//        if(type->getName().length() < 1) {
//            if(dynamic_cast<ArrayType*>(type)) {
//                auto arrayType = dynamic_cast<ArrayType*>(type);
//                auto arrayTypeShared = std::make_shared<ArrayType>(*arrayType);
//                getSymbolTable()->storeType(type->getName(), arrayTypeShared);
//                getSymbolTable()->storeVariable(v,arrayTypeShared);
//                return;
//            }
//            if(dynamic_cast<RecordType*>(type)) {
//                auto recordType = dynamic_cast<RecordType*>(type);
//                auto recordTypeShared = std::make_shared<RecordType>(*recordType);
//                getSymbolTable()->storeType(type->getName(), recordTypeShared);
//                getSymbolTable()->storeVariable(v, recordTypeShared);
//                return;
//            }
//        }
//        getSymbolTable()->storeVariable(v, idType);
//    }

}

void MainSpace::insertType(std::string id, Types* type)
{
    if(dynamic_cast<ArrayType*>(type)) {
        auto arrayType = dynamic_cast<ArrayType*>(type);
        auto arrayTypeShared = std::make_shared<ArrayType>(*arrayType);
        arrayTypeShared->setName(id);
        getSymbolTable()->storeType(id, arrayTypeShared);
        return;
    }
    if(dynamic_cast<RecordType*>(type))
    {
        auto recordType = dynamic_cast<RecordType*>(type);
        auto recordTypeShared = std::make_shared<RecordType>(*recordType);
        recordTypeShared->setName(id);
        getSymbolTable()->storeType(id, recordTypeShared);
        return;
    }
    else {
        auto idType = getSymbolTable()->lookupType(type->getName());
        getSymbolTable()->storeType(id, idType);
    }

}

Expression* MainSpace::strExpr(std::string str)
{
    int strId = getSymbolTable()->storeString(str);
    auto expression = new Expression(GetTypes::strType(), strId, true);
    return expression;
}

Expression* MainSpace::intExpr(int i)
{
    auto expression = new Expression(GetTypes::intType(), i, true);
    return expression;
}

Expression* MainSpace::charExpr(char c)
{
    auto expression = new Expression(GetTypes::charType(), int(c), true);
    return expression;
}

Expression* MainSpace::minusExpr(Expression* e)
{
    auto expression = new Expression(GetTypes::intType(), -(e->getVal()), true);
    return expression;
}

Expression* MainSpace::lValToExpr(LValue* lval)
{
    if(lval == nullptr)
    {
        throw std::runtime_error("something went wrong");
    }
    if(lval->isConst())
    {
        auto expr = new Expression(lval->getType(), lval->getValue()->getVal(), true);
        expr->setOffset(lval->getValue()->getOffset());
        return expr;
    } else{
//        auto expr = new Expression(lval->getType(), lval->getValue()->getVal(), false);
//        expr->setOffset(lval->getValue()->getOffset());
//        auto newReg = RegPool::allocate();
//        expr->setReg(newReg);
        auto expr = new Expression(std::shared_ptr<LValue>(lval));
        auto newReg = expr->getReg();
        auto fromReg = lval->getAddress()->getReg();
        if(std::dynamic_pointer_cast<IntegerType>(lval->getType()) || std::dynamic_pointer_cast<BooleanType>(lval->getType())
            || std::dynamic_pointer_cast<CharacterType>(lval->getType()) || std::dynamic_pointer_cast<StringType>(lval->getType()))
        {
            std::cout << "lw " << newReg << ", 0(" << fromReg << ")" << std::endl;
        }
        else {
            std::cout << "move " << newReg << ", " << fromReg << std::endl;
        }
        RegPool::returnReg(fromReg);
        return expr;
    }
}
LValue* MainSpace::lookup(std::string id)
{
    return new IdAccess(id, getSymbolTable());
//    auto tryConst = getSymbolTable()->lookupConst(id);
//    if(tryConst != nullptr) {
//        return tryConst.get();
//    }
//    else{
//        auto tryVar = getSymbolTable()->lookupVar(id);
//        if(tryVar != nullptr)
//        {
//            auto tryVarTranslate = tryVar.get();
//            return new Expression(tryVarTranslate->getType(), 0, false, tryVarTranslate->getMemOffset());
//        }
//        else {
//            return nullptr;
//        }
//    }

    //TODO: try function/proc

}


LValue* MainSpace::lookupArray(LValue* a, Expression* b)
{
    return new ArrayAccess(std::shared_ptr<LValue>(a), std::shared_ptr<Expression>(b), getSymbolTable());
}


void MainSpace::assign(LValue* lval, Expression* expr)
{
    if(lval->isConst())
    {
        throw std::runtime_error("cannot assign new value to const expression");
    }
    if(lval->getType() != expr->getType())
    {
        throw std::runtime_error("invalid assignment: types incompatible");
    }


    if(std::dynamic_pointer_cast<IntegerType>(lval->getType()) || std::dynamic_pointer_cast<BooleanType>(lval->getType())
       || std::dynamic_pointer_cast<CharacterType>(lval->getType()) || std::dynamic_pointer_cast<StringType>(lval->getType()))
    {
        if (expr->isExprConst()) {
            auto reg = RegPool::allocate();
            if (expr->getType() == GetTypes::strType()) {
                std::cout << "la " << reg << ", STR" << expr->getVal() << std::endl;
            } else {
                std::cout << "li " << reg << ", " << expr->getVal() << std::endl;
            }

            auto efroml = lval->getAddress();
            auto lvalReg = efroml->getReg();

            std::cout << "sw " << reg << ", 0(" << lvalReg << ")" << std::endl;

            RegPool::returnReg(reg);
            RegPool::returnReg(lvalReg);
        } else {
            auto reg = expr->getReg();
            auto efroml = lval->getAddress();
            auto lvalReg = efroml->getReg();

            std::cout << "sw " << reg << ", 0(" << lvalReg << ")" << std::endl;

            RegPool::returnReg(reg);
            RegPool::returnReg(lvalReg);
        }
    } else{
        auto reg = expr->getReg();
        auto efroml = lval->getAddress();
        auto lvalReg = efroml->getReg();

        copy(reg, lvalReg, lval->getType());

        RegPool::returnReg(reg);
        RegPool::returnReg(lvalReg);
    }


    delete lval;
    delete expr;
}


Expression* MainSpace::binaryop(std::string sym, Expression* a, Expression* b)
{
    Expression* result = nullptr;

    if(a->getType() != b->getType())
    {
        throw std::runtime_error("types not compatible");
    }
    if(a->isExprConst() && b->isExprConst())
    {
        return constFold(sym, a, b);
    }
    if(sym == "slt" || sym == "sgt" || sym == "sle" || sym == "sge" || sym == "seq" || sym == "sne")
    {
        result = new Expression(GetTypes::boolType());
    }
    else
    {
        result = new Expression(GetTypes::intType());
    }
    if(a->isExprConst() && !(b->isExprConst()))
    {
        auto reg = RegPool::allocate();
        auto reg2 = b->getReg();
        auto reg3 = result->getReg();
        std::cout << "li " << reg << ", " << a->getVal() << std::endl;
        std::cout << sym << " " << reg3 << ", " << reg << ", " << reg2 << std::endl;
        //std::cout << "sw " << reg3 << ", " << a->getOffset() << "($gp)" << std::endl;
        RegPool::returnReg(reg);
        RegPool::returnReg(reg2);
    }
    else if(!(a->isExprConst()) && b->isExprConst())
    {
        auto reg = a->getReg();
        auto reg2 = RegPool::allocate();
        auto reg3 = result->getReg();
        std::cout << "li " << reg2 << ", " << b->getVal() << std::endl;
        std::cout << sym << " " << reg3 << ", " << reg << ", " << reg2 << std::endl;
        //std::cout << "sw " << reg3 << ", " << a->getOffset() << "($gp)" << std::endl;
        RegPool::returnReg(reg);
        RegPool::returnReg(reg2);
    }
    else
    {
        auto reg = a->getReg();
        auto reg2 = b->getReg();
        auto reg3 = result->getReg();
        std::cout << sym << " " << reg3 << ", " << reg << ", " << reg2 << std::endl;
        //std::cout << "sw " << reg3 << ", " << a->getOffset() << "($gp)" << std::endl;
        RegPool::returnReg(reg);
        RegPool::returnReg(reg2);

        //TODO: it is storing it back in and it shouldn't be, need to load from register on print
    }

    return result;
}

Expression* MainSpace::constFold(std::string sym, Expression* a, Expression* b)
{
    Expression* result = nullptr;
    if(sym == "add")
    {
        result = new Expression(GetTypes::intType(), a->getVal() + b->getVal(), true);
    }
    if(sym == "sub")
    {
        result = new Expression(GetTypes::intType(), a->getVal() - b->getVal(), true);
    }
    if(sym == "mul")
    {
        result = new Expression(GetTypes::intType(), a->getVal() * b->getVal(), true);
    }
    if(sym == "div")
    {
        result = new Expression(GetTypes::intType(), a->getVal() / b->getVal(), true);
    }
    if(sym == "rem")
    {
        result = new Expression(GetTypes::intType(), a->getVal() % b->getVal(), true);
    }
    if(sym == "or")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() | b->getVal(), true);
    }
    if(sym == "and")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() & b->getVal(), true);
    }
    if(sym == "seq")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() == b->getVal(), true);
    }
    if(sym == "sne")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() != b->getVal(), true);
    }
    if(sym == "sle")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() <= b->getVal(), true);
    }
    if(sym == "sge")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() >= b->getVal(), true);
    }
    if(sym == "slt")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() < b->getVal(), true);
    }
    if(sym == "sgt")
    {
        result = new Expression(GetTypes::boolType(), a->getVal() > b->getVal(), true);
    }

    return result;
}

void MainSpace::read(std::vector<Expression*>* list)
{
    for(auto e: *list)
    {
        if(e->isExprConst())
        {
            throw std::runtime_error("cannot read value into const");
        }
        else {
            auto reg = e->getReg();
            if(e->getType() == GetTypes::intType())
            {
                std::cout << "li $v0, 5" << std::endl;
                std::cout << "syscall" << std::endl;
                std::cout << "sw $v0, " << reg << std::endl;
            }
            else if(e->getType() == GetTypes::charType())
            {
                std::cout << "li $v0, 12" << std::endl;
                std::cout << "syscall" << std::endl;
                std::cout << "sw $v0, " << reg << std::endl;
            } else{
                throw std::runtime_error("only integer and character types may be read");
            }
        }
    }
}

void MainSpace::write(std::vector<Expression*>* list) {

    for(auto e : *list)
    {
        if(e->getType() == GetTypes::intType())
        {
            if(e->isExprConst()) {
                std::cout << "li $a0, " << e->getVal() << std::endl;
            }
            else {
                auto reg = e->getReg();
                std::cout << "move $a0, " << reg << std::endl;
            }

            std::cout << "li $v0, 1" << std::endl;
        }
        else if(e->getType() == GetTypes::charType())
        {
            if(e->isExprConst()) {
                std::cout << "li $a0, " << e->getVal() << std::endl;
            }
            else {
                auto reg = e->getReg();
                std::cout << "lw $a0, 0(" << reg << ")" << std::endl;
            }
            std::cout << "li $v0, 11" << std::endl;

        }
        else if(e->getType() == GetTypes::strType())
        {
            if(e->isExprConst()) {
                std::cout << "la $a0, STR" << e->getVal() << std::endl;
            }
            else {
                auto reg = e->getReg();
                std::cout << "move $a0, " << reg << std::endl;
            }
            std::cout << "li $v0, 4" << std::endl; // TODO: GET THE RIGHT CODE

        }
        else if(e->getType() == GetTypes::boolType())
        {
            if(e->isExprConst()) {
                std::cout << "li $a0, " << e->getVal() << std::endl; //TODO: FIX THIS
            }
            else {
                auto reg = e->getReg();
                std::cout << "move $a0, " << reg << std::endl;
            }
            std::cout << "li $v0, 1" << std::endl;

        } else {
            throw std::runtime_error("Invalid type: cannot print");
        }

        std::cout << "syscall" << std::endl;
    }
}

std::vector<Expression*>* MainSpace::exprList(std::vector<Expression*>* list, LValue* e)
{
    if(list == nullptr)
    {
        list = new std::vector<Expression*>();
    }

    list->push_back(lValToExpr(e));
    return list;
}

std::vector<Expression*>* MainSpace::exprList(std::vector<Expression*>* list, Expression* e)
{
    if(list == nullptr)
    {
        list = new std::vector<Expression*>();
    }

    list->push_back(e);
    return list;
}

std::vector<std::string>* MainSpace::identList(std::vector<std::string>* list, std::string str)
{
    if(list == nullptr)
    {
        list = new std::vector<std::string>();
    }

    list->push_back(str);
    return list;
}

Expression* MainSpace::chrConvert(Expression* e)
{
    if(e->getType() != GetTypes::intType())
    {
        throw std::runtime_error("char conversion only valid for int type");
    }

    Expression* result = new Expression(GetTypes::charType(), e->getVal(), e->isExprConst());

    return result;
}

Expression* MainSpace::ordConvert(Expression* e)
{
    if(e->getType() != GetTypes::charType())
    {
        throw std::runtime_error("int conversion only valid for char type");
    }

    Expression* result = new Expression(GetTypes::intType(), e->getVal(), e->isExprConst());

    return result;
}

Expression* MainSpace::pred(Expression* e){
    if(e->getType() == GetTypes::intType()) {
        if(e->isExprConst()) {
            int val = e->getVal();
            e->setVal(val - 1);
        } else {
            auto reg = e->getReg();
            std::cout << "addi " << reg << ", " << reg << ", -1" << std::endl;
        }
        return e;
    }
}

Expression* MainSpace::succ(Expression* e){
    if(e->getType() == GetTypes::intType()) {
        if(e->isExprConst()) {
            int val = e->getVal();
            e->setVal(val + 1);
        } else {
            auto reg = e->getReg();
            std::cout << "addi " << reg << ", " << reg << ", 1" << std::endl;
        }
        return e;
    }
}

void MainSpace::stopProgram()
{
    std::cout << "li $v0, 10" << std::endl;
    std::cout << "syscall" << std::endl;
}

Types* MainSpace::simpleType(std::string id)
{
    auto type = getSymbolTable()->lookupAllType(id);
    if(type == nullptr)
    {
        throw std::runtime_error("undefined type " + id);
    }

    return type.get();
}

Types* MainSpace::arrayType(Expression* lower, Expression* upper, Types* type)
{
    if(!(lower->isExprConst()) || !(upper->isExprConst())) {
        throw std::runtime_error("invalid bounds for array type");
    }

    int low = lower->getVal();
    int high = upper->getVal();
//    if(type->getName() == "")
//    {
//        if(dynamic_cast<ArrayType*>(type))
//        {
//            std::cout << "array type in array type" << std::endl;
//
//            auto arrayType = dynamic_cast<ArrayType*>(type);
//            auto arrayTypeSharedPtr = std::make_shared<ArrayType>(*arrayType);
////            globalCount--;
////            auto typePointer = std::shared_ptr<ArrayType>(type);
////            globalCount++;
//
//            auto newType = new ArrayType(low, high, arrayTypeSharedPtr);
//            //getSymbolTable()->storeType(std::to_string(globalCount), std::shared_ptr<ArrayType>(newType));
//            return new ArrayType(low, high, arrayTypeSharedPtr);
//        }
//        if(dynamic_cast<RecordType*>(type))
//        {
//            std::cout << "record type in array type" << std::endl;
//
//            auto recordType = dynamic_cast<RecordType*>(type);
//            auto recordTypeSharedPtr = std::make_shared<RecordType>(*recordType);
////            globalCount--;
////            auto typePointer = std::shared_ptr<RecordType>(type);
////            globalCount++;
//            auto newType = new ArrayType(low, high, recordTypeSharedPtr);
//            auto newType = new ArrayType(low, high, recordTypeSharedPtr);
//            //getSymbolTable()->storeType(std::to_string(globalCount), std::shared_ptr<ArrayType>(newType));
//            return new ArrayType(low, high, recordTypeSharedPtr);
//        }
//    }
    //
//    auto typePointer = getSymbolTable()->lookupAllType(type->getName());
    auto typePointer = std::shared_ptr<Types>(type);
//    auto newType = new ArrayType(low, high, typePointer);
//    getSymbolTable()->storeType(std::to_string(globalCount), std::shared_ptr<ArrayType>(newType));
//    globalCount++;
    return new ArrayType(low, high, typePointer);
}

Types* MainSpace::recordType(std::vector<std::pair<std::string, std::shared_ptr<Types>>>* fields)
{
    auto record = new RecordType();
    for(auto item : *fields)
    {
        record->addField(item.first, item.second);
    }
    //getSymbolTable()->storeType(std::to_string(globalCount), std::shared_ptr<RecordType>(record));
//    globalCount++;
    return record;
}

LValue* MainSpace::lookupMember(LValue* lval, std::string id)
{
    return new MemberAccess(std::shared_ptr<LValue>(lval), id, getSymbolTable());
}

std::vector<std::pair<std::string, std::shared_ptr<Types>>>* MainSpace::addField(std::vector<std::string>* identList, Types* type)
{
    auto returnObj = new std::vector<std::pair<std::string, std::shared_ptr<Types>>>();
//    if(type->getName() == "")
//    {
//        if(dynamic_cast<ArrayType*>(type))
//        {
//            std::cout << "array type in addfield type" << std::endl;
//            auto arrayType = dynamic_cast<ArrayType*>(type);
//            auto arrayTypeSharedPtr = std::make_shared<ArrayType>(*arrayType);
//            for(auto id : *identList)
//            {
//                returnObj->push_back(std::make_pair(id, arrayTypeSharedPtr));
//            }
//
//            return returnObj;
//        }
//        if(dynamic_cast<RecordType*>(type))
//        {
//            std::cout << "record type in add field type" << std::endl;
//
//            auto recordType = dynamic_cast<RecordType*>(type);
//            auto recordTypeSharedPtr = std::make_shared<RecordType>(*recordType);
//            for(auto id : *identList)
//            {
//                returnObj->push_back(std::make_pair(id, recordTypeSharedPtr));
//            }
//            return returnObj;
//        }
//    }

    //auto typePtr = getSymbolTable()->lookupAllType(type->getName());
    auto typePtr = std::shared_ptr<Types>(type);
    for(auto id : *identList)
    {
        returnObj->push_back(std::make_pair(id, typePtr));
    }
    return returnObj;
}

std::vector<std::pair<std::string, std::shared_ptr<Types>>>* MainSpace::addFieldList(std::vector<std::pair<std::string, std::shared_ptr<Types>>>* decls, std::vector<std::pair<std::string, std::shared_ptr<Types>>>* decl)
{
    if(decls == nullptr)
    {
        return decl;
    }
    for(auto item : *decl)
    {
        decls->push_back(item);
    }
    return decls;
}

void MainSpace::copy(std::string srcReg, std::string destReg, std::shared_ptr<Types> type)
{
    auto tempReg = RegPool::allocate();
    int i = 0;
    while(i < type->getSize()) {
        std::cout << "lw " << tempReg << ", " << i << "(" << srcReg << ")" << std::endl;
        std::cout << "sw " << tempReg << ", " << i << "(" << destReg << ")" << std::endl;
        i += 4;
    }
}

void MainSpace::copy(std::string srcReg, std::string destReg, int index, std::shared_ptr<Types> type){
    auto tempReg = RegPool::allocate();
    int i = 0;
    while(i < type->getSize()) {
        std::cout << "lw " << tempReg << ", " << i << "(" << srcReg << ")" << std::endl;
        std::cout << "sw " << tempReg << ", " << i+index << "(" << destReg << ")" << std::endl;
        i += 4;
    }
}

/* CONTROL STRUCTURES */

void MainSpace::endIf(int labelIndex)
{
    std::cout << "IF" << labelIndex << "_END:" << std::endl;
}

int MainSpace::ifExpr(Expression* expr)
{
   if(expr->isExprConst()){
        auto tempReg = RegPool::allocate();
        std::cout << "li " << tempReg << ", " << expr->getVal() << std::endl;
        std::cout << "beq " << tempReg << ", $0, IF" << ifCount << "EL" << elseCount <<  std::endl;
        RegPool::returnReg(tempReg);
    } else {
       auto reg = expr->getReg();
       std::cout << "beq " << reg << ", $0, IF" << ifCount << "EL" << elseCount << std::endl;
   }
    int temp = ifCount;
    ifCount++;
    return temp;
}

void MainSpace::ifExprEnd(int index)
{
    if(index == -1)
    {
        index = ifCount-1;
    }

    //std::cout << "IF" << index << "EL" << elseCount << ":" << std::endl;
    std::cout << "j IF" << index << "_END" << std::endl;
    ifCount--;
}

int MainSpace::labelElseIf(bool isElseIf){
    if(isElseIf) {
        //elseCount++;
    }
    std::cout << "IF" << ifCount << "EL" << elseCount << ":" << std::endl;
    if(isElseIf) {
        elseCount++;
    }
    return elseCount;
}

int MainSpace::elseStart(){
}

int MainSpace::labelElse(){
    int temp = ifCount;
    int elseIndex = elseCount;
    elseCount--;
    std::cout << "IF" << temp << "EL" << elseIndex << ":" << std::endl;
    return temp;
}

void MainSpace::startLoop(){
    // Print start label
    std::cout << "WHILE" << whileCount << ": " << std::endl;
}

int MainSpace::whileHead(Expression* expr){
    // Check condition
    if(expr->isExprConst()) {
        auto tempReg = RegPool::allocate();
        std::cout << "li " << tempReg << ", " << expr->getVal() << std::endl;
        std::cout << "beq " << tempReg << ", $0, WHILE" << whileCount << "_END" << std::endl;
        RegPool::returnReg(tempReg);
    } else {
        auto reg = expr->getReg();
        std::cout << "beq " << reg << ", $0, WHILE" << whileCount << "_END" << std::endl;
        RegPool::returnReg(reg);
    }



    // Increment counter, return index for label
    int temp = whileCount;
    whileCount++;
    return  temp;
}

void MainSpace::endWhile(int index){
    // Print jump then end label
    std::cout << "j " << "WHILE" << index << std::endl;
    std::cout << "WHILE" << index << "_END:" << std::endl;
}

void MainSpace::repeat(Expression* expr){
    // Check condition and jump to label
    if(expr->isExprConst()) {
        auto tempReg = RegPool::allocate();
        std::cout << "li " << tempReg << ", " << expr->getVal() << std::endl;
        std::cout << "beq " << tempReg << ", $0, WHILE" << whileCount << std::endl;
        RegPool::returnReg(tempReg);
    } else {
        auto reg = expr->getReg();
        std::cout << "beq " << reg << ", $0, WHILE" << whileCount << std::endl;
        RegPool::returnReg(reg);
    }
    whileCount++;
}

char* MainSpace::setupForLoop(char* id, Expression* expr){
    auto var = getSymbolTable()->lookupVar(id);
    if(var == nullptr) {
        getSymbolTable()->enter_scope();
        getSymbolTable()->storeVariable(id, expr->getType());
    }
    auto newVar = lookup(id);
    assign(newVar, expr);
    std::cout << "FOR" << forCount << ":" << std::endl;
    return id;
}
char* MainSpace::forToHead(char* id, Expression* expr){
    auto var = lookup(id);
    auto varExpr = lValToExpr(var);
    auto resultExpr = binaryop("sgt", varExpr, expr);
    auto reg = resultExpr->getReg();
    std::cout << "bne " << reg << ", $0, " << "FOR" << forCount << "END" << std::endl;
    return id;
}

char* MainSpace::forDownToHead(char* id, Expression* expr){
    auto var = lookup(id);
    auto varExpr = lValToExpr(var);
    auto resultExpr = binaryop("slt", varExpr, expr);
    auto reg = resultExpr->getReg();
    std::cout << "bne " << reg << ", $0, " << "FOR" << forCount << "END" << std::endl;
    return id;
}

void MainSpace::endForTo(std::string id){
    auto var = lookup(id);
    auto varExpr = lValToExpr(var);
    auto increment = new Expression(GetTypes::intType(), 1, true);
    auto newExpr = binaryop("add", varExpr, increment);
    var = lookup(id);
    assign(var, newExpr);
    std::cout << "j FOR" << forCount << std::endl;
    std::cout << "FOR" << forCount << "END:" << std::endl;
    getSymbolTable()->exit_scope();
    forCount++;
}

void MainSpace::endForDownTo(std::string id){
    auto var = lookup(id);
    auto varExpr = lValToExpr(var);
    auto increment = new Expression(GetTypes::intType(), 1, true);
    auto newExpr = binaryop("sub", varExpr, increment);
    var = lookup(id);
    assign(var, newExpr);
    std::cout << "j FOR" << forCount << std::endl;
    std::cout << "FOR" << forCount << "END:" << std::endl;
    getSymbolTable()->exit_scope();
    forCount++;
}

/* FUNCTIONS AND PROCEDURES */

Expression* MainSpace::callFunc(char* id, std::vector<Expression*>* args){
    auto function = getSymbolTable()->lookupFunc(id);

    if(function == nullptr) {
        throw std::runtime_error("ERROR: Function " + std::string(id) + " not found");
    }

    // store off the always needed regs
    std::cout << "addi $sp, $sp, -8" << std::endl;
    std::cout << "sw $ra, 0($sp)" << std::endl;
    std::cout << "sw $fp, 4($sp)" << std::endl;

    // store off other regs (currently, just save off all 18, meaning we need 18 * 4 = 72 space
    std::cout << "addi $sp, $sp, -72" << std::endl;
    int offset = 0;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "sw $t" << i << ", " << offset << "($sp)" << std::endl;
        offset += 4;
    }
    for(int i = 0; i < 8; i++)
    {
        std::cout << "sw $s" << i << ", " << offset << "($sp)" << std::endl;
        offset += 4;
    }

    // TODO: get total size of params

    // TODO: check size of argument list vs function def

    // TODO: if params exist, deal with them appropriately

    // move the $fp
    std::cout << "move $fp, $sp" << std::endl;

    // call func
    std::cout << "jal _" << function->getName() << "_" << std::endl;

    // TODO : clear params

    // restore all the $t and $s regs
    offset = 0;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "lw $t" << i << ", " << offset << "($sp)" << std::endl;
        offset += 4;
    }
    for(int i = 0; i < 8; i++)
    {
        std::cout << "lw $s" << i << ", " << offset << "($sp)" << std::endl;
        offset += 4;
    }

    std::cout << "addi $sp, $sp, 72" << std::endl;

    // restore the $ra and $fp
    std::cout << "lw $ra, 0($sp)" << std::endl;
    std::cout << "lw $fp, 4($sp)" << std::endl;
    std::cout << "addi $sp, $sp, 8" << std::endl;

    // check for and setup return val
    if(function->getReturnType()  == nullptr) return nullptr;

    auto expr = new Expression(function->getReturnType());
    auto reg = expr->getReg();
    std::cout << "move " << reg << ", $v0" << std::endl;
    return expr;
}

Function* MainSpace::createFunc(char* id, std::vector<std::pair<std::string, std::shared_ptr<Types>>>* params, Types* returnType){
    std::shared_ptr<Types> retType = nullptr;
    if(returnType != nullptr) {
        retType = getSymbolTable()->lookupAllType(returnType->getName());
    }

    std::vector<std::pair<std::string, std::shared_ptr<Types>>> paramList;
    if(params != nullptr) {
        for(auto& item: *params) {
            paramList.push_back(item);
        }
    }

    auto result = new Function(std::string(id), paramList, retType);
    return result;
}

void MainSpace::declareFunc(Function* func){
    auto newFunc = std::make_shared<Function>(func->getName(), func->getArgs(), func->getReturnType(), true);
    getSymbolTable()->storeFunction(newFunc->getName(), newFunc);

    getSymbolTable()->enter_scope();
    for(const auto& item: newFunc->getArgs()) {
        getSymbolTable()->storeParam(item.first, item.second);
    }

    std::cout << "_" << newFunc->getName() << "_:" << std::endl;
}

void MainSpace::endFunc() {
    getSymbolTable()->exit_scope();
    std::cout << "move $sp, $fp" << std::endl;
    std::cout << "jr $ra" << std::endl;
}

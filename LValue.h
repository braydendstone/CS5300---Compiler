//
// Created by braydendstone on 3/13/18.
//

#ifndef CPSL_LVALUE_H
#define CPSL_LVALUE_H


#include "GlobalSymbolTable.h"

class LValue {
public:
    LValue(std::shared_ptr<GlobalSymbolTable> symb) : symbolTable(symb) {}
    virtual ~LValue() = default;
    virtual std::shared_ptr<Types> getType() const = 0;
    virtual std::shared_ptr<Expression> getAddress() const = 0;
    virtual bool isConst() const = 0;
    virtual std::shared_ptr<Expression> getValue() const = 0;

protected:
    std::shared_ptr<GlobalSymbolTable> symbolTable;
};

class IdAccess: public LValue {
public:
    IdAccess(std::string id, std::shared_ptr<GlobalSymbolTable> symb): LValue(symb), id(id) {}
    std::shared_ptr<Types> getType() const;
    std::shared_ptr<Expression> getAddress() const;
    bool isConst() const;
    std::shared_ptr<Expression> getValue() const;
private:
    std::string id;
};

class MemberAccess: public LValue {
public:
    MemberAccess(std::shared_ptr<LValue> base, std::string field, std::shared_ptr<GlobalSymbolTable> symb) : LValue(symb), base(base), field(field) {}
    std::shared_ptr<RecordType> bType() const;
    std::shared_ptr<Types> getType() const;
    std::shared_ptr<Expression> getAddress() const;
    bool isConst() const;
    std::shared_ptr<Expression> getValue() const;
private:
    std::shared_ptr<LValue> base;
    std::string field;
};

class ArrayAccess: public LValue {
public:
    ArrayAccess(std::shared_ptr<LValue> base, std::shared_ptr<Expression> expr, std::shared_ptr<GlobalSymbolTable> symb) : LValue(symb), base(base), expression(expr) {}
    std::shared_ptr<Types> getType() const;
    std::shared_ptr<ArrayType> arrayType() const;
    std::shared_ptr<Expression> getAddress() const;
    bool isConst() const;
    std::shared_ptr<Expression> getValue() const;
private:
    std::shared_ptr<LValue> base;
    std::shared_ptr<Expression> expression;
};

#endif //CPSL_LVALUE_H

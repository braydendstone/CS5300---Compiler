//
// Created by braydendstone on 2/25/18.
//

#ifndef CPSL_TYPES_H
#define CPSL_TYPES_H

#include <string>
#include <memory>
#include <bits/shared_ptr.h>
#include <map>

class Types {
public:
    Types() = default;
    virtual int getSize() = 0;
    virtual std::string getName() = 0;
};

class IntegerType : public Types {
public:
    int getSize() { return 4; }
    std::string getName() { return "integer"; }
};

class CharacterType : public Types {
public:
    int getSize() { return 4; }
    std::string getName() { return "char"; }
};

class StringType : public Types {
public:
    int getSize() { return 4; }
    std::string getName() { return "string"; }
};

class BooleanType : public Types {
public:
    int getSize() { return 4; }
    std::string getName() { return "boolean"; }
};

class GetTypes {
public:
    static std::shared_ptr<Types> intType();
    static std::shared_ptr<Types> charType();
    static std::shared_ptr<Types> strType();
    static std::shared_ptr<Types> boolType();

private:
    static std::shared_ptr<Types> intPtr;
    static std::shared_ptr<Types> charPtr;
    static std::shared_ptr<Types> strPtr;
    static std::shared_ptr<Types> boolPtr;
};

class ArrayType : public Types {
public:
    ArrayType(int lower, int upper, std::shared_ptr<Types> type) :
        upper(upper), lower(lower), baseType(type) {}
    int getSize() { return (upper - lower + 1) * baseType->getSize(); }
    int getLower() { return lower; }
    int getUpper() { return upper; }
    std::shared_ptr<Types> getBaseType() { return baseType; }
    std::string getName() { return name; }
    void setName(std::string newName) { name = newName; }

private:
    std::string name;
    int upper;
    int lower;
    std::shared_ptr<Types> baseType;
};

class RecordType : public Types {
public:
    int getSize();
    std::string getName() { return name; }
    void setName(std::string newName) { name = newName; }
    std::shared_ptr<Types> getFieldType(std::string name) const;
    void addField(std::string name, std::shared_ptr<Types> type);
    int getFieldOffset(std::string name) const;
private:
    std::string name;
    std::map<std::string, int> offsets;
    std::map<std::string, std::shared_ptr<Types>> members;
    int currentOffset;
};

class ReferenceType : public Types {
public:
    ReferenceType(std::shared_ptr<Types> typePtr) : Types(), baseType(typePtr) {}
    int getSize() { return 4; }
    std::string getName() { return "reference " + baseType->getName(); }
    std::shared_ptr<Types> getBaseType() const {return baseType; }
private:
    std::shared_ptr<Types> baseType;

};



#endif //CPSL_TYPES_H

//
// Created by braydendstone on 2/25/18.
//

#include "Types.h"

/* Base Types */
std::shared_ptr<Types> GetTypes::intPtr;
std::shared_ptr<Types> GetTypes::charPtr;
std::shared_ptr<Types> GetTypes::strPtr;
std::shared_ptr<Types> GetTypes::boolPtr;

std::shared_ptr<Types> GetTypes::intType()
{
    if(!intPtr) {
        intPtr = std::make_shared<IntegerType>();
    }

    return intPtr;
}

std::shared_ptr<Types> GetTypes::charType()
{
    if(!charPtr) {
        charPtr = std::make_shared<CharacterType>();
    }

    return charPtr;
}

std::shared_ptr<Types> GetTypes::strType()
{
    if(!strPtr) {
        strPtr = std::make_shared<StringType>();
    }

    return strPtr;
}

std::shared_ptr<Types> GetTypes::boolType()
{
    if(!boolPtr) {
        boolPtr = std::make_shared<BooleanType>();
    }

    return boolPtr;
}

/* Record Types */

int RecordType::getSize()
{
    int totalSize = 0;
    for(auto member : members)
    {
        totalSize += member.second->getSize();
    }

    return totalSize;
}

std::shared_ptr<Types> RecordType::getFieldType(std::string name) const
{
    auto returnObj = members.find(name);
    if(returnObj == members.end())
    {
        throw std::runtime_error(name + "not a valid member of variable");
    }
    return returnObj->second;
}

void RecordType::addField(std::string name, std::shared_ptr<Types> type)
{
    members[name] = type;
    offsets[name] = currentOffset;
    currentOffset += type->getSize();
}

int RecordType::getFieldOffset(std::string name) const
{
    auto returnObj = offsets.find(name);
    if(returnObj == offsets.end())
    {
        throw std::runtime_error(name + "not a valid member of variable");
    }
    return returnObj->second;
}
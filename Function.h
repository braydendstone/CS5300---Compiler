//
// Created by braydendstone on 4/16/18.
//

#ifndef CPSL_FUNCTION_H
#define CPSL_FUNCTION_H

#include <iostream>
#include <vector>
#include <utility>
#include "Types.h"


class Function {
public:
    Function(std::string name, std::vector<std::pair<std::string, std::shared_ptr<Types>>> args, std::shared_ptr<Types> returnType, bool def = false):
            name(name), args(args), returnType(returnType), defined(def) {}
    std::string getName() { return name; }
    std::vector<std::pair<std::string, std::shared_ptr<Types>>> getArgs() { return args; }
    std::shared_ptr<Types> getReturnType() { return returnType; }
    bool isDefined() { return defined; }
    void setDefined(bool def) { defined = def; }

private:
    std::string name;
    std::vector<std::pair<std::string, std::shared_ptr<Types>>> args;
    std::shared_ptr<Types> returnType;
    bool defined;
};


#endif //CPSL_FUNCTION_H

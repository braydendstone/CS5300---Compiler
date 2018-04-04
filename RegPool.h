//
// Created by braydendstone on 2/25/18.
//

#ifndef CPSL_REGPOOL_H
#define CPSL_REGPOOL_H

#include <string>
#include <map>
#include <vector>
#include <memory>

class RegPool {
public:
    explicit RegPool(std::string name) : label(name) {}

    ~RegPool() { /*pool.push_back(label);*/ }

    std::string getName() const { return label; }
    static void initialize();
    static void returnReg(std::string);
    static std::string allocate();
private:
    std::string label;
    static std::vector<std::string> pool;
};


#endif //CPSL_REGPOOL_H

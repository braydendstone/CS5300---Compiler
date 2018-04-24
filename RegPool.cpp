//
// Created by braydendstone on 2/25/18.
//

#include "RegPool.h"

std::vector<std::string> RegPool::pool;

void RegPool::initialize()
{
    for(int i = 0; i < 10; i++)
    {
        pool.push_back(("$t" + std::to_string(i)));
    }
    for(int i = 0; i < 8; i++)
    {
        pool.push_back(("$s" + std::to_string(i)));
    }
}

//std::unique_ptr<RegPool> RegPool::allocate(){
//    if(pool.empty())
//    {
//        // TODO: register spilling
//        throw std::runtime_error("ran out of registers");
//    }
////    auto x = pool.size();
////    auto y = pool.front();
//    auto newLabel = pool.back();  // IGNORE ERROR this is an CLion issue
//    pool.pop_back();
////    auto z = pool.size();
////    auto h = pool.back();
//    std::unique_ptr<RegPool> newReg(new RegPool(newLabel));
//
//    return newReg;
//
//}
std::string RegPool::allocate(){
    if(pool.empty())
    {
        // TODO: register spilling
        throw std::runtime_error("ran out of registers");
    }
//    auto x = pool.size();
//    auto y = pool.front();
    auto newLabel = static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>> &&>(pool.back());  // IGNORE ERROR this is an CLion issue
    pool.pop_back();
//    auto z = pool.size();
//    auto h = pool.back();

    return newLabel;

}

void RegPool::returnReg(std::string reg) {
    pool.push_back(reg);
}
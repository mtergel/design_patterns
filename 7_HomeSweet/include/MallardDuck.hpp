#ifndef __MALLARDDUCK_HPP__
#define __MALLARDDUCK_HPP__

#include "Duck.hpp"
#include <iostream>

class MallardDuck : public Duck
{
public:
    void quack() override
    {
        std::cout << "Quack\n";
    }

    void fly() override
    {
        std::cout << "I'm flying\n";
    }
};

#endif // __MALLARDDUCK_HPP__

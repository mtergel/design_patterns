#ifndef __WILDTURKEY_HPP__
#define __WILDTURKEY_HPP__

#include "Turkey.hpp"
#include <iostream>

class WildTurkey : public Turkey
{
public:
    void gobble() override
    {
        std::cout << "Gobble Gobble\n";
    }

    void fly() override
    {
        std::cout << "I'm flying a short distance\n";
    }
};

#endif // __WILDTURKEY_HPP__

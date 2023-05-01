#ifndef __TEA_HPP__
#define __TEA_HPP__

#include "CaffeineBeverage.hpp"
#include <iostream>

class Tea : public CaffeineBeverage
{
public:
    void brew() override
    {
        std::cout << "Steeping the tea\n";
    }

    void addCondiments() override
    {
        std::cout << "Adding Lemon\n";
    }
};

#endif // __TEA_HPP__

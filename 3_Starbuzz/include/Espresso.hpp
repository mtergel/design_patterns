#ifndef __ESPRESSO_HPP__
#define __ESPRESSO_HPP__

#include "Beverage.hpp"
#include <string>

class Espresso : public Beverage
{
public:
    Espresso()
    {
        description = "Espresso Coffee";
    }

    double cost() override
    {
        return 1.99;
    }
};

#endif // __ESPRESSO_HPP__

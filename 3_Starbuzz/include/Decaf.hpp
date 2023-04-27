#ifndef __DECAF_HPP__
#define __DECAF_HPP__

#include "Beverage.hpp"
#include <string>

class Decaf : public Beverage
{
public:
    Decaf()
    {
        description = "Decaf Coffee";
    }

    double cost() override
    {
        return 1.05;
    }
};

#endif // __DECAF_HPP__

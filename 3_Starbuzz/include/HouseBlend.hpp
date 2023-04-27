#ifndef __HOUSEBLEND_HPP__
#define __HOUSEBLEND_HPP__

#include "Beverage.hpp"
#include <string>

class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        description = "House Blend Coffee";
    }

    double cost() override
    {
        return 0.89;
    }
};

#endif // __HOUSEBLEND_HPP__

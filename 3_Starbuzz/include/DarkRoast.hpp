#ifndef __DARKROAST_HPP__
#define __DARKROAST_HPP__

#include "Beverage.hpp"

class DarkRoast : public Beverage
{
public:
    DarkRoast()
    {
        description = "Dark Roast Coffee";
    };

    double cost() override
    {
        return 0.99;
    };
};

#endif // __DARKROAST_HPP__

#ifndef __STEAMEDMILK_CPP__
#define __STEAMEDMILK_CPP__

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <memory>
#include <string>

class SteamedMilk : public CondimentDecorator
{
public:
    SteamedMilk() = default;
    SteamedMilk(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) {}

    std::string getDescription() override
    {
        return beverage->getDescription() + ", Steamed Milk";
    }

    double cost() override;
};

inline double
SteamedMilk::cost()
{
    return beverage->cost() + 0.10;
}

#endif // __STEAMEDMILK_CPP__

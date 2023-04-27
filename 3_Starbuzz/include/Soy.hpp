#ifndef __SOY_HPP__
#define __SOY_HPP__

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <memory>
#include <string>

class Soy : public CondimentDecorator
{
public:
    Soy() = default;
    Soy(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) {}

    std::string getDescription() override
    {
        return beverage->getDescription() + ", Soy";
    }

    double cost() override;
};

inline double
Soy::cost()
{
    double res = beverage->cost();
    switch (beverage->getSize())
    {
    case Size::TALL:
        res += 0.10;
        break;

    case Size::GRANDE:
        res += 0.15;
        break;

    case Size::VENTI:
        res += 0.20;
        break;

    default:
        break;
    }

    return res;
}

#endif // __SOY_HPP__

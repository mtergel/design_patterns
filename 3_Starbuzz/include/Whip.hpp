#ifndef __WHIP_HPP__
#define __WHIP_HPP__

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <memory>
#include <string>

class Whip : public CondimentDecorator
{
public:
    Whip() = default;
    Whip(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) {}

    std::string getDescription() override
    {
        return beverage->getDescription() + ", Whip";
    }

    double cost() override;
};

inline double
Whip::cost()
{
    return beverage->cost() + 0.10;
}

#endif // __WHIP_HPP__

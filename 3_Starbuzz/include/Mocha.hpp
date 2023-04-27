#ifndef __MOCHA_HPP__
#define __MOCHA_HPP__

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <memory>
#include <string>

class Mocha : public CondimentDecorator
{
public:
    Mocha() = default;
    Mocha(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) {}
    std::string getDescription() override
    {
        return beverage->getDescription() + ", Mocha";
    }

    double cost() override;
};

inline double
Mocha::cost()
{
    return beverage->cost() + 0.20;
}

#endif // __MOCHA_HPP__

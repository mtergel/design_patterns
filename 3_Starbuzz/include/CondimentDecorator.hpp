#ifndef __CONDIMENTDECORATOR_HPP__
#define __CONDIMENTDECORATOR_HPP__

#include "Beverage.hpp"
#include "Size.hpp"
#include <memory>
#include <string>

class CondimentDecorator : public Beverage
{
protected:
    std::unique_ptr<Beverage> beverage = nullptr;

public:
    CondimentDecorator() = default;
    CondimentDecorator(std::unique_ptr<Beverage> b) : beverage(std::move(b)) {}

    virtual std::string getDescription() override
    {
        return "Unknown Condiment";
    }

    // Overridding these ensures
    // they are propagated to the wrapped beverage
    void setSize(Size sz) override { beverage->setSize(sz); }
    Size getSize() override { return beverage->getSize(); }
    std::string getSizeString() override { return beverage->getSizeString(); }
};

#endif // __CONDIMENTDECORATOR_HPP__

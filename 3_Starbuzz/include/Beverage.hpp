#ifndef __BEVERAGE_HPP__
#define __BEVERAGE_HPP__

#include "Size.hpp"
#include <string>

// abstract
class Beverage
{
protected:
    std::string description;
    Size size = Size::TALL;

public:
    Beverage() = default;
    virtual ~Beverage() = default;

    virtual double cost() = 0;
    virtual std::string getDescription()
    {
        return description;
    }

    virtual Size getSize()
    {
        return size;
    }
    virtual void setSize(Size sz)
    {
        size = sz;
    }

    virtual std::string getSizeString()
    {
        switch (getSize())
        {

        case Size::TALL:
            return "Tall";

        case Size::GRANDE:
            return "Grande";

        case Size::VENTI:
            return "Venti";

        default:
            return "";
        }
    }
};

#endif // __BEVERAGE_HPP__

#ifndef __MOZZARELLACHEESE_HPP__
#define __MOZZARELLACHEESE_HPP__

#include "Cheese.hpp"
#include <string>

class MozzarellaCheese : public Cheese
{
public:
    std::string toString() const override
    {
        return "Mozzarella Cheese";
    }
};

#endif // __MOZZARELLACHEESE_HPP__

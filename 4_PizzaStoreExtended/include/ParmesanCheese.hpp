#ifndef __PARMESANCHEESE_HPP__
#define __PARMESANCHEESE_HPP__

#include "Cheese.hpp"
#include <string>

class ParmesanCheese : public Cheese
{
public:
    std::string toString() const override
    {
        return "Parmesan Cheese";
    }
};

#endif // __PARMESANCHEESE_HPP__

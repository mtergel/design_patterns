#ifndef __MARINARASAUCE_HPP__
#define __MARINARASAUCE_HPP__

#include "Sauce.hpp"
#include <string>

class MarinaraSauce : public Sauce
{
public:
    std::string toString() const override
    {
        return "Marinara Sauce";
    }
};

#endif // __MARINARASAUCE_HPP__

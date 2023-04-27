#ifndef __THINCRUSTDOUGH_HPP__
#define __THINCRUSTDOUGH_HPP__

#include "Dough.hpp"
#include <string>

class ThinCrustDough : public Dough
{
public:
    std::string toString() const override
    {
        return "Thin Crust Dough";
    }
};

#endif // __THINCRUSTDOUGH_HPP__

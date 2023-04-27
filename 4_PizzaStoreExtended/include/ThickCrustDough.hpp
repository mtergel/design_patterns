#ifndef __THICKCRUSTDOUGH_HPP__
#define __THICKCRUSTDOUGH_HPP__

#include "Dough.hpp"
#include <string>

class ThickCrustDough : public Dough
{
public:
    std::string toString() const override
    {
        return "Thick Crust Dough";
    }
};

#endif // __THICKCRUSTDOUGH_HPP__

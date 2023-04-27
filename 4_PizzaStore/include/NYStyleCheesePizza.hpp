#ifndef __NYSTYLECHEESEPIZZA_HPP__
#define __NYSTYLECHEESEPIZZA_HPP__

#include "Pizza.hpp"
#include <string>

class NYStyleCheesePizza : public Pizza
{
public:
    NYStyleCheesePizza()
    {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";

        toppings.push_back("Grated Reggiano Cheese");
    };
};

#endif // __NYSTYLECHEESEPIZZA_HPP__

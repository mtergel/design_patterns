#ifndef __CHICAGOSTYLECHEESEPIZZA_HPP__
#define __CHICAGOSTYLECHEESEPIZZA_HPP__

#include "Pizza.hpp"
#include <string>
#include <iostream>

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza()
    {
        name = "Chicago Style Cheese Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.push_back("Shredded Mozzarella Cheese");
    };

    void cut() override
    {
        std::cout << "Cutting the pizza into square slices\n";
    }
};

#endif // __CHICAGOSTYLECHEESEPIZZA_HPP__

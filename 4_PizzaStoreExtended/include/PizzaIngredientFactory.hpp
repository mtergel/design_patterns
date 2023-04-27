#ifndef __PIZZAINGREDIENTFACTORY_HPP__
#define __PIZZAINGREDIENTFACTORY_HPP__

#include "Dough.hpp"
#include "Cheese.hpp"
#include "Sauce.hpp"

#include <memory>

class PizzaIngredientFactory
{
public:
    virtual ~PizzaIngredientFactory() = default;

    virtual std::unique_ptr<Dough> createDough() = 0;
    virtual std::unique_ptr<Cheese> createCheese() = 0;
    virtual std::unique_ptr<Sauce> createSauce() = 0;
};

#endif // __PIZZAINGREDIENTFACTORY_HPP__

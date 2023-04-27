#ifndef __CHICAGOPIZZAINGREDIENTFACTORY_HPP__
#define __CHICAGOPIZZAINGREDIENTFACTORY_HPP__

#include "PizzaIngredientFactory.hpp"
#include "ThickCrustDough.hpp"
#include "MozzarellaCheese.hpp"
#include "MarinaraSauce.hpp"

#include <memory>

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    std::unique_ptr<Dough> createDough() override
    {
        return std::make_unique<ThickCrustDough>();
    }

    std::unique_ptr<Cheese> createCheese() override
    {
        return std::make_unique<MozzarellaCheese>();
    }

    std::unique_ptr<Sauce> createSauce() override
    {
        return std::make_unique<MarinaraSauce>();
    }
};

#endif // __CHICAGOPIZZAINGREDIENTFACTORY_HPP__

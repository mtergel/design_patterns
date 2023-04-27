#ifndef __NYPIZZAINGREDIENTFACTORY_HPP__
#define __NYPIZZAINGREDIENTFACTORY_HPP__

#include "PizzaIngredientFactory.hpp"
#include "ThinCrustDough.hpp"
#include "MarinaraSauce.hpp"
#include "ParmesanCheese.hpp"

#include <memory>

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    std::unique_ptr<Dough> createDough()
    {
        return std::make_unique<ThinCrustDough>();
    }
    std::unique_ptr<Cheese> createCheese()
    {
        return std::make_unique<ParmesanCheese>();
    }
    std::unique_ptr<Sauce> createSauce()
    {
        return std::make_unique<MarinaraSauce>();
    }
};

#endif // __NYPIZZAINGREDIENTFACTORY_HPP__

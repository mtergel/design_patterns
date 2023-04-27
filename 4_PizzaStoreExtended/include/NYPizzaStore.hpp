#ifndef __NYPIZZASTORE_HPP__
#define __NYPIZZASTORE_HPP__

#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "PizzaIngredientFactory.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"

#include <memory>
#include <string_view>

class NYPizzaStore : public PizzaStore
{
protected:
    std::unique_ptr<Pizza> createPizza(std::string_view item) override
    {
        std::unique_ptr<Pizza> pizza;
        std::unique_ptr<PizzaIngredientFactory> ingredientFactory = std::make_unique<NYPizzaIngredientFactory>();
        if (item == "cheese")
        {
            pizza = std::make_unique<CheesePizza>(std::move(ingredientFactory));
            pizza->setName("New York Style Cheese Pizza");

            return pizza;
        }
        else
        {
            return nullptr;
        }
    }
};

#endif // __NYPIZZASTORE_HPP__

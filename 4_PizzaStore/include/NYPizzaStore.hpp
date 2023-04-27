#ifndef __NYPIZZASTORE_HPP__
#define __NYPIZZASTORE_HPP__

#include "PizzaStore.hpp"
#include "Pizza.hpp"
#include "NYStyleCheesePizza.hpp"

#include <memory>
#include <string_view>

class NYPizzaStore : public PizzaStore
{
protected:
    std::unique_ptr<Pizza> createPizza(std::string_view item) override
    {
        if (item == "cheese")
        {
            return std::make_unique<NYStyleCheesePizza>();
        }
        else
        {
            return nullptr;
        }
    }

public:
    NYPizzaStore() = default;
    ~NYPizzaStore() = default;
};

#endif // __NYPIZZASTORE_HPP__

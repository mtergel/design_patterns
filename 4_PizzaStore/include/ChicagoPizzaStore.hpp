#ifndef __CHICAGOPIZZASTORE_HPP__
#define __CHICAGOPIZZASTORE_HPP__

#include "PizzaStore.hpp"
#include "Pizza.hpp"
#include "ChicagoStyleCheesePizza.hpp"

#include <memory>
#include <string_view>

class ChicagoPizzaStore : public PizzaStore
{
protected:
    std::unique_ptr<Pizza> createPizza(std::string_view item) override
    {
        if (item == "cheese")
        {
            return std::make_unique<ChicagoStyleCheesePizza>();
        }
        else
        {
            return nullptr;
        }
    }

public:
    ChicagoPizzaStore() = default;
    ~ChicagoPizzaStore() = default;
};

#endif // __CHICAGOPIZZASTORE_HPP__

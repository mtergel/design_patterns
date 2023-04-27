#ifndef __PIZZASTORE_HPP__
#define __PIZZASTORE_HPP__

#include "Pizza.hpp"
#include <string_view>
#include <memory>

class PizzaStore
{
protected:
    // factory method
    virtual std::unique_ptr<Pizza> createPizza(std::string_view item) = 0;

public:
    PizzaStore() = default;
    virtual ~PizzaStore() = default;

    virtual std::unique_ptr<Pizza> orderPizza(std::string_view type)
    {
        auto pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};

#endif // __PIZZASTORE_HPP__

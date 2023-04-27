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
    virtual ~PizzaStore() = default;

    std::unique_ptr<Pizza> orderPizza(std::string_view item)
    {
        auto pizza = createPizza(item);
        std::cout << "---- Making a " << pizza->getName() << " ----\n";

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};

#endif // __PIZZASTORE_HPP__

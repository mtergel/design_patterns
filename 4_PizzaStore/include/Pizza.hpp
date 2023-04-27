#ifndef __PIZZA_HPP__
#define __PIZZA_HPP__

#include <string>
#include <vector>
#include <iostream>

class Pizza
{
protected:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

public:
    Pizza() = default;
    virtual ~Pizza() = default;

    virtual std::string getName()
    {
        return name;
    }

    virtual void prepare()
    {
        std::cout << "Preparing " << name << "\n";
        std::cout << "Tossing dough...\n";
        std::cout << "Adding sauce...\n";
        std::cout << "Adding toppings...\n";

        for (const auto &topping : toppings)
        {
            std::cout << "  " << topping << "\n";
        }
    }

    virtual void bake()
    {
        std::cout << "Bake for 25 minutes at 350\n";
    }

    virtual void cut()
    {
        std::cout << "Cutting the pizza into diagonal slices\n";
    }

    virtual void box()
    {
        std::cout << "Place pizza in official PizzaStore box\n";
    }
};

#endif // __PIZZA_HPP__

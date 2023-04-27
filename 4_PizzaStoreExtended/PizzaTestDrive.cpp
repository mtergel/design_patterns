#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "Pizza.hpp"

#include <memory>
#include <iostream>

int main()
{
    std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYPizzaStore>();

    std::unique_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << *pizza << "\n";

    return 0;
}

#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include "Pizza.hpp"

#include <memory>
#include <iostream>

int main()
{
    std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYPizzaStore>();
    std::unique_ptr<PizzaStore> chicagoStore = std::make_unique<ChicagoPizzaStore>();

    std::unique_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n";

    pizza = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->getName() << "\n";

    return 0;
}
#include "Tea.hpp"
#include "Coffee.hpp"

#include <iostream>

int main()
{
    Tea tea;
    Coffee coffeeWithHook;

    std::cout << "Making tea...\n";
    tea.prepareRecipe();

    std::cout << "\nMaking coffee..\n";
    coffeeWithHook.prepareRecipe();

    return 0;
}
#include "ChocolateBoiler.hpp"
#include <iostream>

int main()
{
    ChocolateBoiler *boiler = ChocolateBoiler::getInstance();

    boiler->boil();

    return 0;
}

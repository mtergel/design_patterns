#include "DinerMenu.hpp"
#include "PancakeHouseMenu.hpp"
#include "CafeMenu.hpp"
#include "Waitress.hpp"

int main()
{
    auto pancakeHouseMenu = PancakeHouseMenu();
    auto dinerMenu = DinerMenu();
    auto cafeMenu = CafeMenu();

    auto waitress = Waitress(&pancakeHouseMenu, &dinerMenu, &cafeMenu);

    waitress.printMenu();

    return 0;
}
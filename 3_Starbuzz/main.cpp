#include "Espresso.hpp"
#include "DarkRoast.hpp"
#include "Mocha.hpp"
#include "HouseBlend.hpp"
#include "Soy.hpp"
#include "Whip.hpp"
#include "Size.hpp"

#include <iostream>

int main()
{
    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << "\n";

    std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Whip>(std::move(beverage2));
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << "\n";

    std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>();
    beverage3 = std::make_unique<Soy>(std::move(beverage3));
    beverage3 = std::make_unique<Mocha>(std::move(beverage3));
    beverage3 = std::make_unique<Whip>(std::move(beverage3));
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << "\n";

    // Tall
    beverage3->setSize(Size::TALL);
    std::cout << beverage3->getSizeString() << ' ' << beverage3->getDescription() << " $" << beverage3->cost() << '\n';
    // Grande
    beverage3->setSize(Size::GRANDE);
    std::cout << beverage3->getSizeString() << ' ' << beverage3->getDescription() << " $" << beverage3->cost() << '\n';
    // Venti
    beverage3->setSize(Size::VENTI);
    std::cout << beverage3->getSizeString() << ' ' << beverage3->getDescription() << " $" << beverage3->cost() << '\n';

    return 0;
}

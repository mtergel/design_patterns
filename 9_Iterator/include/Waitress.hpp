#ifndef __WAITRESS_HPP__
#define __WAITRESS_HPP__

#include "DinerMenu.hpp"
#include "Iterator.hpp"
#include "PancakeHouseMenu.hpp"
#include "CafeMenu.hpp"
#include "Menu.hpp"
#include <iostream>
#include <memory>

class Waitress
{
public:
    Waitress(Menu *phm, Menu *dm, Menu *cm) : pancakeHouseMenu(phm), dinerMenu(dm), cafeMenu(cm) {}
    void printMenu() const;
    void printMenu(Iterator<MenuItem> *it) const;

private:
    Menu *pancakeHouseMenu;
    Menu *dinerMenu;
    Menu *cafeMenu;
};

inline void
Waitress::printMenu() const
{
    auto pancakeIterator = pancakeHouseMenu->createIterator();
    auto dinerIterator = dinerMenu->createIterator();
    auto cafeIterator = cafeMenu->createIterator();

    std::cout << "MENU\n----\nBREAKFAST\n";
    printMenu(pancakeIterator.get());
    std::cout << "\nLUNCH\n";
    printMenu(dinerIterator.get());
    std::cout << "\nDINNER\n";
    printMenu(cafeIterator.get());
}

inline void
Waitress::printMenu(Iterator<MenuItem> *it) const
{
    while (it->hasNext())
    {
        auto menuItem = it->next();
        std::cout << menuItem->getName() << ", ";
        std::cout << menuItem->getPrice() << " -- ";
        std::cout << menuItem->getDescription() << '\n';
    }
}

#endif // __WAITRESS_HPP__

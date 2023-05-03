#ifndef __MENU_HPP__
#define __MENU_HPP__

#include "MenuComponent.hpp"
#include <iostream>
#include <string>
#include <string_view>
#include <list>

class Menu : public MenuComponent
{
public:
    Menu(std::string_view n, std::string_view d) : name(n), description(d) {}
    void add(menu_component_t menuComponent) override
    {
        // adding menu items or other menus
        menuComponents.push_back(menuComponent);
    }
    void remove(menu_component_t menuComponent) override
    {
        menuComponents.remove(menuComponent);
    }
    std::string getName() const override { return name; }
    std::string getDescription() const override { return description; }
    void print() const override;

private:
    std::list<menu_component_t> menuComponents;
    std::string name;
    std::string description;
};

inline void
Menu::print() const
{
    std::cout << '\n'
              << getName();
    std::cout << ", " << getDescription() << '\n';
    std::cout << "----------------------\n";
    for (const auto &menuComponent : menuComponents)
        menuComponent->print();
    // menuComponent is an another menu, it will recursively call it pog
}

#endif // __MENU_HPP__

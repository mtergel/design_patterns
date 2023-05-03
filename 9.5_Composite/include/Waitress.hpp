#ifndef __WAITRESS_HPP__
#define __WAITRESS_HPP__

#include "MenuComponent.hpp"

class Waitress
{
public:
    using menu_component_t = MenuComponent::menu_component_t;
    Waitress(menu_component_t am) : allMenus(std::move(am)) {}
    void printMenu() { allMenus->print(); }

private:
    menu_component_t allMenus;
};

#endif // __WAITRESS_HPP__

#ifndef __MENU_HPP__
#define __MENU_HPP__

#include "Iterator.hpp"
#include "MenuItem.hpp"
#include <memory>

class Menu
{
public:
    virtual ~Menu() = default;
    virtual std::unique_ptr<Iterator<MenuItem>> createIterator() = 0;
};

#endif // __MENU_HPP__

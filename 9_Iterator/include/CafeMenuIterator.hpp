#ifndef __CAFEMENUITERATOR_HPP__
#define __CAFEMENUITERATOR_HPP__

#include "Iterator.hpp"
#include "MenuItem.hpp"
#include <unordered_map>
#include <stdexcept>

class CafeMenuIterator : public Iterator<MenuItem>
{
private:
    std::unordered_map<std::string, MenuItem> &items;
    std::unordered_map<std::string, MenuItem>::iterator iter;

public:
    CafeMenuIterator(std::unordered_map<std::string, MenuItem> &i) : items(i), iter(i.begin()) {}
    MenuItem *next() override
    {
        return &iter++->second;
    }

    bool hasNext() const override
    {
        return iter != items.end();
    }
};

#endif // __CAFEMENUITERATOR_HPP__

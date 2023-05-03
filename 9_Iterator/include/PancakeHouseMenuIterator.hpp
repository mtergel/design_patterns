#ifndef __PANCAKEHOUSEMENUITERATOR_HPP__
#define __PANCAKEHOUSEMENUITERATOR_HPP__

#include "Iterator.hpp"
#include "MenuItem.hpp"
#include <list>
#include <vector>

class PancakeHouseMenuIterator : public Iterator<MenuItem>
{
public:
    PancakeHouseMenuIterator(std::list<MenuItem> &i) : items(i), iter(items.begin()) {}
    MenuItem *next() override { return &*iter++; }
    bool hasNext() const override { return iter != items.cend(); }

private:
    std::list<MenuItem> &items;
    std::list<MenuItem>::iterator iter;
};

#endif // __PANCAKEHOUSEMENUITERATOR_HPP__

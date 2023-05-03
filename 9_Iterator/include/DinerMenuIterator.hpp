#ifndef __DINERMENUITERATOR_HPP__
#define __DINERMENUITERATOR_HPP__

#include "Iterator.hpp"
#include "MenuItem.hpp"
#include <array>

class DinerMenuIterator : public Iterator<MenuItem>
{
public:
    static constexpr size_t MAX_ITEMS = 6;
    DinerMenuIterator(std::array<MenuItem, MAX_ITEMS> &i) : items(i) {}
    MenuItem *next() override { return &items[position++]; };
    bool hasNext() const override { return items.size() > position; }

private:
    std::array<MenuItem, MAX_ITEMS> &items;
    std::array<MenuItem, MAX_ITEMS>::size_type position = 0;
};

#endif // __DINERMENUITERATOR_HPP__

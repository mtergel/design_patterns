#ifndef __CHEESE_HPP__
#define __CHEESE_HPP__

#include <string>

class Cheese
{
public:
    Cheese() = default;
    virtual ~Cheese() = default;

    virtual std::string toString() const = 0;
};

#endif // __CHEESE_HPP__

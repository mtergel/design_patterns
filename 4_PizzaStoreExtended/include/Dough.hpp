#ifndef __DOUGH_HPP__
#define __DOUGH_HPP__

#include <string>

class Dough
{
public:
    Dough() = default;
    virtual ~Dough() = default;

    virtual std::string toString() const = 0;
};

#endif // __DOUGH_HPP__

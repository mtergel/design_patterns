#ifndef __SAUCE_HPP__
#define __SAUCE_HPP__

#include <string>

class Sauce
{
public:
    Sauce() = default;
    virtual ~Sauce() = default;

    virtual std::string toString() const = 0;
};

#endif // __SAUCE_HPP__

#ifndef __WAITRESS_HPP__
#define __WAITRESS_HPP__

#include <functional>

class Waitress
{
public:
    Waitress() = default;

    void takeOrder(std::function<void()> order)
    {
        order();
    }
};
#endif // __WAITRESS_HPP__

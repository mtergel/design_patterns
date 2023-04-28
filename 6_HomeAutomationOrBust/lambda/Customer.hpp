#ifndef __CUSTOMER_HPP__
#define __CUSTOMER_HPP__

#include "Waitress.hpp"
#include "Cook.hpp"

#include <functional>

class Customer
{
private:
    Waitress *waitress;
    Cook *cook;
    std::function<void()> o;

public:
    Customer(Waitress *w, Cook *c) : waitress(w), cook(c) {}
    void createOrder()
    {
        o = [&]()
        {
            cook->makeBurger();
            cook->makeFries();
        };
    }

    void hungry()
    {
        waitress->takeOrder(o);
    }
};

#endif // __CUSTOMER_HPP__

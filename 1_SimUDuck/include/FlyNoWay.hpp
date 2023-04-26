#ifndef __FLYNOWAY_HPP__
#define __FLYNOWAY_HPP__

#include "FlyBehavior.hpp"
#include <iostream>

using std::cout;

class FlyNoWay : public FlyBehavior
{
public:
    void fly() override;
};

void inline FlyNoWay::fly()
{
    cout << "I can't fly"
         << "\n";
}

#endif // __FLYNOWAY_HPP__

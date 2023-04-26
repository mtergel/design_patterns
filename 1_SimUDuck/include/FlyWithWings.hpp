#ifndef __FLYWITHWINGS_HPP__
#define __FLYWITHWINGS_HPP__

#include "FlyBehavior.hpp"
#include <iostream>

using std::cout;

class FlyWithWings : public FlyBehavior
{
public:
    void fly() override;
};

void inline FlyWithWings::fly()
{
    cout << "I'm flying!!"
         << "\n";
}

#endif // __FLYWITHWINGS_HPP__

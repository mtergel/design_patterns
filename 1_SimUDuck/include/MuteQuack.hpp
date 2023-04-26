#ifndef __MUTEQUACK_HPP__
#define __MUTEQUACK_HPP__

#include "QuackBehavior.hpp"
#include <iostream>

using std::cout;

class MuteQuack : public QuackBehavior
{
public:
    void quack() override;
};

void inline MuteQuack::quack()
{
    cout << "<< Silence >>"
         << "\n";
}
#endif // __MUTEQUACK_HPP__

#ifndef __QUACK_HPP__
#define __QUACK_HPP__

#include "QuackBehavior.hpp"
#include <iostream>

using std::cout;

class Quack : public QuackBehavior
{
public:
    void quack() override;
};

void inline Quack::quack()
{
    cout << "Quack"
         << "\n";
}

#endif // __QUACK_HPP__

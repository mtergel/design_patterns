#ifndef __SQUEAK_HPP__
#define __SQUEAK_HPP__

#include "QuackBehavior.hpp"
#include <iostream>

using std::cout;

class Squeak : public QuackBehavior
{
public:
    void quack() override;
};

void inline Squeak::quack()
{
    cout << "<< Squeak >>"
         << "\n";
}
#endif // __SQUEAK_HPP__

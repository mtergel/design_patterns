#ifndef __RUBBERDUCK_H__
#define __RUBBERDUCK_H__

#include "Quackable.h"
#include <iostream>

class RubberDuck : public Quackable
{
public:
    void quack() override
    {
        std::cout << "Squeak\n";
    }
};

#endif // __RUBBERDUCK_H__
#ifndef __REDHEADDUCK_H__
#define __REDHEADDUCK_H__

#include "Quackable.h"
#include <iostream>

class RedheadDuck : public Quackable
{
public:
    void quack() override
    {
        std::cout << "Quack\n";
    }
};

#endif // __REDHEADDUCK_H__

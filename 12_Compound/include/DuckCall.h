#ifndef __DUCKCALL_H__
#define __DUCKCALL_H__

#include "Quackable.h"
#include <iostream>

class DuckCall : public Quackable
{
public:
    void quack() override
    {
        std::cout << "Kwak\n";
    }
};

#endif // __DUCKCALL_H__

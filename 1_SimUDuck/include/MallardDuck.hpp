#ifndef __MALLARDDUCK_HPP__
#define __MALLARDDUCK_HPP__

#include "Duck.hpp"

class MallardDuck : public Duck
{
public:
    MallardDuck();
    ~MallardDuck();

    void display() override;
};

#endif // __MALLARDDUCK_HPP__

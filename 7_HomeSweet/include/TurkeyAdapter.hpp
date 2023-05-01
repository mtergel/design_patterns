#ifndef __TURKEYADAPTER_HPP__
#define __TURKEYADAPTER_HPP__

#include "Duck.hpp"
#include "Turkey.hpp"
#include <memory>

class TurkeyAdapter : public Duck
{
public:
    std::shared_ptr<Turkey> turkey;

    TurkeyAdapter(std::shared_ptr<Turkey> t) : turkey(t) {}

    void quack()
    {
        turkey->gobble();
    }

    void fly()
    {
        for (int i = 0; i < 5; ++i)
        {
            turkey->fly();
        }
    }
};

#endif // __TURKEYADAPTER_HPP__

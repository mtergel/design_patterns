#ifndef __DUCK_HPP__
#define __DUCK_HPP__

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include <memory>

using std::move;
using std::unique_ptr;

class Duck
{
protected:
    unique_ptr<FlyBehavior> flyBehavior = nullptr;
    unique_ptr<QuackBehavior> quackBehavior = nullptr;

public:
    Duck() {}
    virtual ~Duck() = default;
    void setFlyBehavior(unique_ptr<FlyBehavior> fb);
    void setQuackBehavior(unique_ptr<QuackBehavior> qb);

    void performFly();
    void performQuack();

    virtual void display() = 0;
};

inline void
Duck::setFlyBehavior(unique_ptr<FlyBehavior> fb)
{
    flyBehavior = move(fb);
}

inline void
Duck::setQuackBehavior(unique_ptr<QuackBehavior> qb)
{
    quackBehavior = move(qb);
}

inline void
Duck::performFly()
{
    flyBehavior->fly();
}

inline void
Duck::performQuack()
{
    quackBehavior->quack();
}

#endif // __DUCK_HPP__

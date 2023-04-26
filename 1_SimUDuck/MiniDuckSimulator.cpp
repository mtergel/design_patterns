#include "MallardDuck.hpp"
#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"
#include <memory>

using std::make_unique;

int main()
{
    MallardDuck mallard;

    mallard.display();
    mallard.performFly();
    mallard.performQuack();

    mallard.setFlyBehavior(make_unique<FlyNoWay>());
    mallard.setQuackBehavior(make_unique<MuteQuack>());
    mallard.display();
    mallard.performFly();
    mallard.performQuack();

    return 0;
}

#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"

using std::make_unique;
MallardDuck::MallardDuck()
{
    flyBehavior = make_unique<FlyWithWings>();
    quackBehavior = make_unique<Quack>();
}

MallardDuck::~MallardDuck()
{
}

void MallardDuck::display()
{
    cout << "I'm a real Mallard duck"
         << "\n";
}
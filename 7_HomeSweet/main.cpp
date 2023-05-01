#include "Duck.hpp"
#include "Turkey.hpp"
#include "TurkeyAdapter.hpp"
#include "MallardDuck.hpp"
#include "WildTurkey.hpp"

#include <memory>
#include <iostream>

void testDuck(Duck &duck)
{
    duck.quack();
    duck.fly();
}

int main()
{
    MallardDuck duck;
    std::shared_ptr<WildTurkey> turkey = std::make_shared<WildTurkey>();
    TurkeyAdapter turkeyAdapter(turkey);

    std::cout << "The Turkey says ...\n";
    turkey->gobble();
    turkey->fly();

    std::cout << "\nThe Duck says ...\n";
    testDuck(duck);

    std::cout << "\nThe Turkey Adapter says ...\n";
    testDuck(turkeyAdapter);

    return 0;
}
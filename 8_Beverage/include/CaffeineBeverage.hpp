#ifndef __CAFFEINEBEVERAGE_HPP__
#define __CAFFEINEBEVERAGE_HPP__

#include <iostream>

class CaffeineBeverage
{
public:
    virtual void prepareRecipe() final
    {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments())
        {
            addCondiments();
        }
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    void boilWater()
    {
        std::cout << "Boiling Water\n";
    }

    void pourInCup()
    {
        std::cout << "Pouring into cup\n";
    }

    virtual bool customerWantsCondiments()
    {
        return true;
    }
};

#endif // __CAFFEINEBEVERAGE_HPP__

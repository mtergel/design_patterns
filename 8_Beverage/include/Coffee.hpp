#ifndef __COFFEE_HPP__
#define __COFFEE_HPP__

#include "CaffeineBeverage.hpp"
#include <iostream>
#include <string>

class Coffee : public CaffeineBeverage
{
public:
    void brew() override
    {
        std::cout << "Dripping Coffe through filter\n";
    }

    void addCondiments() override
    {
        std::cout << "Adding Sugar and Milk\n";
    }

    bool customerWantsCondiments() override
    {
        return getUserInput();
    }

    bool getUserInput()
    {
        char type;
        do
        {
            std::cout << "Would you like milk and sugar with your coffee [y/n]" << std::endl;
            std::cin >> type;
        } while (!std::cin.fail() && type != 'y' && type != 'n');

        return type == 'y';
    }
};

#endif // __COFFEE_HPP__

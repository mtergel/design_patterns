#ifndef __GARAGEDOOR_HPP__
#define __GARAGEDOOR_HPP__

#include <iostream>

class GarageDoor
{
public:
    void up()
    {
        std::cout << "Garage door up\n";
    }

    void down()
    {
        std::cout << "Garage door down\n";
    }

    void stop()
    {
        std::cout << "Garage door stopped\n";
    }

    void lightOn()
    {
        std::cout << "Garage door light on\n";
    }

    void lightOff()
    {
        std::cout << "Garage door light off\n";
    }
};

#endif // __GARAGEDOOR_HPP__

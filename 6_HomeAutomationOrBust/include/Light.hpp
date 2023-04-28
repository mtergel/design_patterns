#ifndef __LIGHT_HPP__
#define __LIGHT_HPP__

#include <iostream>
#include <string>

class Light
{
private:
    std::string location;

public:
    Light(const std::string &l) : location(l){};
    ~Light() = default;

    void on() const
    {
        std::cout << location << " Light on!\n";
    }
    void off() const
    {
        std::cout << location << " Light off\n";
    }
};

#endif // __LIGHT_HPP__

#ifndef __CEILINGFAN_HPP__
#define __CEILINGFAN_HPP__

#include <string>

class CeilingFan
{
public:
    static const int HIGH = 3;
    static const int MEDIUM = 2;
    static const int LOW = 1;
    static const int OFF = 0;

    std::string location;
    int speed;

    CeilingFan(const std::string &l) : location(l)
    {
        speed = OFF;
    };

    void high()
    {
        speed = HIGH;
    }

    void medium()
    {
        speed = MEDIUM;
    }

    void low()
    {
        speed = LOW;
    }

    void off()
    {
        speed = OFF;
    }

    int getSpeed()
    {
        return speed;
    }
};

#endif // __CEILINGFAN_HPP__

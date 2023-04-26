#ifndef __OBSERVER_HPP__
#define __OBSERVER_HPP__

class Observer
{
private:
public:
    virtual void update(double temp, double humidity, double pressure) = 0;
};

#endif // __OBSERVER_HPP__

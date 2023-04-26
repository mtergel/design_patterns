#ifndef __CURRENTCONDITIONSDISPLAY_HPP__
#define __CURRENTCONDITIONSDISPLAY_HPP__

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
private:
    double temperature = 0;
    double humidity = 0;
    Subject *weatherData = nullptr;

public:
    CurrentConditionsDisplay(Subject *weatherData);
    void display() override;
    void update(double temperature, double humidity, double pressure) override;
};

#endif // __CURRENTCONDITIONSDISPLAY_HPP__
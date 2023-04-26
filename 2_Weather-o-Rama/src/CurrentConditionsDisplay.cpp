#include "CurrentConditionsDisplay.hpp"
#include <iostream>

using std::cout;

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *wd)
{
    weatherData = wd;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::display()
{
    cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity\n";
    return;
}

void CurrentConditionsDisplay::update(double t, double h, double p)
{
    temperature = t;
    humidity = h;

    display();
}
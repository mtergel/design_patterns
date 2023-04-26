#ifndef __HEATINDEXDISPLAY_HPP__
#define __HEATINDEXDISPLAY_HPP__

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"

class HeatIndexDisplay : public Observer, public DisplayElement
{
private:
    double heatIndex = 0;
    Subject *weatherData = nullptr;
    double computeHeatIndex(double t, double rh);

public:
    HeatIndexDisplay(Subject *weatherData);
    void display() override;
    void update(double temperature, double humidity, double pressure) override;
};

#endif // __HEATINDEXDISPLAY_HPP__

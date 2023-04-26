#ifndef __WEATHERDATA_HPP__
#define __WEATHERDATA_HPP__

#include "Observer.hpp"
#include "Subject.hpp"
#include <unordered_set>

using std::unordered_set;

class WeatherData : public Subject
{
private:
    double temperature = 0;
    double humidity = 0;
    double pressure = 0;

public:
    unordered_set<Observer *> observers;
    void registerObserver(Observer *o) override;
    void removeObserver(Observer *o) override;
    void notifiyObservers() override;

    void measurementsChanged();
    void setMeasurements(double t, double h, double p);
};

#endif // __WEATHERDATA_HPP__

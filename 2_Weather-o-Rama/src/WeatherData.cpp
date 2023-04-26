#include "WeatherData.hpp"

void WeatherData::registerObserver(Observer *o)
{
    observers.insert(o);
};

void WeatherData::removeObserver(Observer *o)
{
    observers.erase(o);
}

void WeatherData::notifiyObservers()
{
    for (const auto &o : observers)
    {
        o->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged()
{
    notifiyObservers();
}

void WeatherData::setMeasurements(double t, double h, double p)
{
    temperature = t;
    humidity = h;
    pressure = p;

    measurementsChanged();
}
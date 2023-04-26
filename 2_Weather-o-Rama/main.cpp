#include "CurrentConditionsDisplay.hpp"
#include "WeatherData.hpp"
#include "HeatIndexDisplay.hpp"

int main()
{
    WeatherData weatherData;
    CurrentConditionsDisplay currentDisplay(&weatherData);
    // StatisticsDisplay statisticsDisplay(&weatherData);
    // ForecaseDisplay forecastDisplay(&weatherData);
    HeatIndexDisplay heatIndexDisplay(&weatherData);

    weatherData.setMeasurements(80, 65, 30.4);
    weatherData.setMeasurements(82, 70, 29.2);
    weatherData.setMeasurements(78, 90, 29.2);

    return 0;
}

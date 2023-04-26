cmake_minimum_required(VERSION 3.0.0)
project(Weather-o-Rama VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Weather-o-Rama main.cpp src/CurrentConditionsDisplay.cpp src/WeatherData.cpp src/HeatIndexDisplay.cpp)
target_compile_features(Weather-o-Rama PRIVATE cxx_std_17)
target_include_directories(Weather-o-Rama PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

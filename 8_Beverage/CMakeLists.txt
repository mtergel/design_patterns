cmake_minimum_required(VERSION 3.0.0)
project(Beverage VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Beverage main.cpp)
target_compile_features(Beverage PRIVATE cxx_std_17)
target_include_directories(Beverage PRIVATE ${CMAKE_SOURCE_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

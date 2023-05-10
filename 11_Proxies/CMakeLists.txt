cmake_minimum_required(VERSION 3.0.0)
project(Gumball VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Gumball main.cpp src/GumballMachine.cpp src/NoQuarterState.cpp src/SoldOutState.cpp)
target_compile_features(Gumball PRIVATE cxx_std_17)
target_include_directories(Gumball PRIVATE ${CMAKE_SOURCE_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

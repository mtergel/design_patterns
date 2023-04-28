cmake_minimum_required(VERSION 3.0.0)
project(HomeAutomationOrBust VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(HomeAutomationOrBust RemoteControlTest.cpp)
target_compile_features(HomeAutomationOrBust PRIVATE cxx_std_17)
target_include_directories(HomeAutomationOrBust PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/lambda)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

cmake_minimum_required(VERSION 3.0.0)
project(Starbuzz VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Starbuzz main.cpp)
target_compile_features(Starbuzz PRIVATE cxx_std_17)
target_include_directories(Starbuzz PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

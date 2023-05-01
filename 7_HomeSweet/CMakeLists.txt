cmake_minimum_required(VERSION 3.0.0)
project(HomeSweet VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(HomeSweet main.cpp)
target_compile_features(HomeSweet PRIVATE cxx_std_17)
target_include_directories(HomeSweet PRIVATE ${CMAKE_SOURCE_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

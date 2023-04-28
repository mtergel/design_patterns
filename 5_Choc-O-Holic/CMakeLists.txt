cmake_minimum_required(VERSION 3.0.0)
project(Choc-O-Holic VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Choc-O-Holic main.cpp)
target_compile_features(Choc-O-Holic PRIVATE cxx_std_17)
target_include_directories(Choc-O-Holic PRIVATE ${CMAKE_SOURCE_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

cmake_minimum_required(VERSION 3.15)
project(serialization)

set(CMAKE_CXX_STANDARD 14)

add_executable(serialization main.cpp serial/Serialization.cpp serial/Serialization.h)
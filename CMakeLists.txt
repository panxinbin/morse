cmake_minimum_required(VERSION 3.10)
project(morse)

set(CMAKE_CXX_STANDARD 11)

add_executable(morse main.cpp morse.cpp morse.h)

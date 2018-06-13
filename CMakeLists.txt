cmake_minimum_required(VERSION 3.10)
project(morseGUI)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets)
find_package(Qt5Core)


add_executable(morseGUI main.cpp mainWindow.cpp mainWindow.h morse.cpp morse.h about.cpp about.h)
target_link_libraries(morseGUI Qt5::Widgets Qt5::Core)
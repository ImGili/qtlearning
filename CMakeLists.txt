# Generated from rasterwindow.pro.

cmake_minimum_required(VERSION 3.16)
project(qtlearning LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


# 查找QT包
find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Widgets)

add_subdirectory(examples/1)
add_subdirectory(examples/2)
add_subdirectory(examples/3)
add_subdirectory(examples/4)
add_subdirectory(examples/5)
add_subdirectory(examples/6)
add_subdirectory(examples/7)
add_subdirectory(examples/8)
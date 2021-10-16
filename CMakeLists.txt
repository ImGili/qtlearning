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
find_package(Qt6 COMPONENTS UiTools)

# 学习QT core
# 测试cout在qt中是否正常运行
add_subdirectory(examples/learnQTCore/1)
# 测试qt core的属性系统
add_subdirectory(examples/learnQTCore/2)
# 信号与插槽（signals and slots）
add_subdirectory(examples/learnQTCore/3)
# 信号与槽 实例 数字时钟
add_subdirectory(examples/learnQTCore/4)



# 学习QT Widgtet
add_subdirectory(examples/learnQTWidget/t0)
add_subdirectory(examples/learnQTWidget/1)
add_subdirectory(examples/learnQTWidget/2)
add_subdirectory(examples/learnQTWidget/3)
add_subdirectory(examples/learnQTWidget/4)
add_subdirectory(examples/learnQTWidget/5)
add_subdirectory(examples/learnQTWidget/6)
add_subdirectory(examples/learnQTWidget/7)
add_subdirectory(examples/learnQTWidget/8)

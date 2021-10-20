cmake_minimum_required(VERSION 3.5)

project(learnQTWidget_t1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


set(PROJECT_SOURCES
        main.cpp
        testwindow.h
        testwindow.cpp
        testwindow.ui
)


qt_add_executable(${PROJECT_NAME}
    ${PROJECT_SOURCES}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt::Widgets
)

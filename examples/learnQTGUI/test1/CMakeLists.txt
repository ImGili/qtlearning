# Generated from imageviewer.pro.

cmake_minimum_required(VERSION 3.16)
project(QTGUI_test_imageviewer LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS PrintSupport) # special case

qt_add_executable(${PROJECT_NAME}
    imageviewer.cpp imageviewer.h
    main.cpp
)
set_target_properties(${PROJECT_NAME} PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)
target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)
# special case begin
if (TARGET Qt::PrintSupport)
    target_link_libraries(${PROJECT_NAME} PUBLIC Qt::PrintSupport)
endif()
# special case end

if(TARGET Qt::PrintSupport)
    target_link_libraries(${PROJECT_NAME} PUBLIC
        Qt::PrintSupport
    )
endif()

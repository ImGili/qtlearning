# Generated from rasterwindow.pro.

cmake_minimum_required(VERSION 3.16)
project(qtlearning LANGUAGES CXX)

find_package(Qt6 COMPONENTS Widgets) # special case: add

include_directories(                include/
                                    )

file(GLOB PROJECT_HEADERS           include/*.hpp
                                    include/*.h
                                    )
file(GLOB PROJECT_SOURCES           src/*.cpp
                                    )

qt_add_executable(${PROJECT_NAME}
    ${PROJECT_SOURCES} ${PROJECT_HEADERS}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt6::Widgets
)

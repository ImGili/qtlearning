# Generated from rasterwindow.pro.

cmake_minimum_required(VERSION 3.16)
project(qtlearning LANGUAGES CXX)

# 设置编译标志
if(WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wno-parenthese -fexec-charset=GBK  -std=c++17")
endif()
if(UNIX AND NOT APPLE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wno-parenthese  -std=c++17")
endif()

# 查找QT包
find_package(Qt6 COMPONENTS Widgets) # special case: add

# 设置头文件目录
include_directories(                include/
                                    )


# 设置项目编译需要的头文件                                    
file(GLOB PROJECT_HEADERS           include/*.hpp
                                    include/*.h
                                    )
file(GLOB PROJECT_SOURCES           src/*.cpp
                                    )

# 添加应用                                    
qt_add_executable(${PROJECT_NAME}
    ${PROJECT_SOURCES} ${PROJECT_HEADERS}
)

# 链接库文件
target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt6::Widgets
)

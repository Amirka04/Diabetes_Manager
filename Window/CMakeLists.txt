cmake_minimum_required(VERSION 3.5)

# find Qt6 Widgets
find_package(Qt6 REQUIRED COMPONENTS Widgets)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


add_library(Window STATIC window.cpp window.h)

# link Widgets
target_link_libraries(Window PRIVATE Qt6::Widgets)

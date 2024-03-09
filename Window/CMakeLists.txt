cmake_minimum_required(VERSION 3.5)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_library(Window STATIC window.cpp window.h)

target_link_libraries(Window PRIVATE Qt6::Widgets)
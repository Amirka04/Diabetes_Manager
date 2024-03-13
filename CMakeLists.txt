cmake_minimum_required(VERSION 3.5)
project(Diabetes_Manager)

set(CMAKE_CXX_STANDARD 17)

# package qt6
find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(Diabetes_Manager main.cpp)


add_subdirectory(Window)
add_subdirectory(SQLClass)


# qt6
target_link_libraries(Diabetes_Manager PRIVATE Qt6::Widgets)

# window
target_include_directories(Diabetes_Manager PUBLIC Window)
target_link_libraries(Diabetes_Manager PUBLIC Window)

# SQLClass
target_include_directories(Diabetes_Manager PUBLIC SQLClass)
target_link_directories(Diabetes_Manager PUBLIC sqlServer)

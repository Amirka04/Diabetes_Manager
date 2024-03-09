cmake_minimum_required(VERSION 3.28)
project(Diabetes_Manager)

set(CMAKE_CXX_STANDARD 17)

# package qt6
find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(Diabetes_Manager main.cpp)


# sqlite subdir
add_subdirectory(SQLiteLib)


# qt6
target_link_libraries(Diabetes_Manager PRIVATE Qt6::Widgets)


# sqlite
target_include_directories(Diabetes_Manager PUBLIC SQLiteLib)
target_link_libraries(Diabetes_Manager PUBLIC sqlite3)


cmake_minimum_required(VERSION 3.28)
project(Diabetes_Manager)

set(CMAKE_CXX_STANDARD 17)

# package qt6
find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(Diabetes_Manager main.cpp)

# sqlite subdir
add_subdirectory(SQLiteLib)
# window subdir
add_subdirectory(Window)


# sqlite
target_include_directories(Diabetes_Manager PUBLIC SQLiteLib)
target_link_libraries(Diabetes_Manager PUBLIC sqlite3)

# qt6
target_link_libraries(Window PRIVATE Qt6::Widgets)
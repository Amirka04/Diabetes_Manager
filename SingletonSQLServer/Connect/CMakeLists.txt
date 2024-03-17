cmake_minimum_required(VERSION 3.5)


add_library(Connect STATIC Connect.cpp Connect.h)

add_subdirectory(SQLiteLib)

target_include_directories(Connect PUBLIC SQLiteLib)
target_link_libraries(Connect PUBLIC sqlite3)
cmake_minimum_required(VERSION 3.5)

add_library(SQLServer STATIC SQLServer.cpp SQLServer.h)

add_subdirectory(Connect)

# include and link Connect class
target_include_directories(SQLServer PUBLIC Connect)
target_link_libraries(SQLServer PUBLIC Connect)
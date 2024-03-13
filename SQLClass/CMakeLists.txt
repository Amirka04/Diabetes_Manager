add_library(sqlServer STATIC sqlServer.h sqlServer.cpp)

add_subdirectory(SQLiteLib)

# sqlite
target_include_directories(sqlServer PUBLIC SQLiteLib)
target_link_libraries(sqlServer PUBLIC sqlite3)
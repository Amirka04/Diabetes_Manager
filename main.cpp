#include <iostream>
#include "sqlite3.h"

int main() {

    sqlite3 *db;
    int result = sqlite3_open("test.db", &db);
    printf("result = %d\n", result == SQLITE_OK);
    sqlite3_close(db);

    return 0;
}

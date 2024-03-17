//
// Created by amir on 16.03.24.
//

#ifndef CONNECT_H
#define CONNECT_H

#include <iostream>
#include "SQLiteLib/sqlite3.h"



// defauls callback
int DefaultCallback(void* notUser, int cnt, char** columns, char** colNames);


class Connect {
public:
    explicit Connect(const char* db_namefile);

    int send_request(const std::string& txt_request, int (*callback)(void*, int, char**, char**) = DefaultCallback);

    ~Connect();
private:
    sqlite3* db = nullptr;
    char* err_msg;
    std::string dbFileName;
};


#endif //CONNECT_H

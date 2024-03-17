//
// Created by amir on 16.03.24.
//

#include "Connect.h"



Connect::Connect(const char* db_namefile) : dbFileName(db_namefile) {
    if(sqlite3_open(db_namefile, &db) == SQLITE_OK)
        std::cout << db_namefile << " успешное открытие базы данных" << std::endl;
    else {
        std::cerr << "Ошибка: " << sqlite3_errmsg(db) << std::endl << "Очищение ресурсов\n";
        sqlite3_close(db);
    }
}



// defauls callback
// defauls return status code SQLITE_OK / 0
int DefaultCallback(void* notUser, int cnt, char** columns, char** colNames) {
    for(int i = 0; i < cnt; i++)
        std::cout << " " << colNames[i] << " " << (columns[i] ? columns[i] : "NULL");
    std::cout << std::endl;
    return SQLITE_OK;
}


int Connect::send_request(const std::string &txt_request, int (*callback)(void*, int, char**, char**)) {
    char* err_msg = nullptr;
    if(sqlite3_exec(db, txt_request.c_str(), callback, nullptr, &err_msg) != SQLITE_OK) {
        std::cerr << "Ошибка: " << err_msg << std::endl;
        sqlite3_free(err_msg);
        return SQLITE_OK;
    }
    std::cout << "Запрос успешно выполнен" << std::endl;
    return SQLITE_OK;
}




Connect::~Connect() {
    std::cout << "Очищение ресурсов: " << dbFileName << std::endl;
    sqlite3_close(db);
}

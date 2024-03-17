//
// Created by amir on 17.03.24.
//

#ifndef SQLSERVER_H
#define SQLSERVER_H


#include "Connect/Connect.h"

#include <memory>


class SQLServer {
private:
    static std::unique_ptr<Connect> _connect;
public:
    static Connect* GetInstance(const char*);

    SQLServer(SQLServer& copy_object) = delete;
    void operator=(const SQLServer& copy_object) = delete;

};



#endif //SQLSERVER_H

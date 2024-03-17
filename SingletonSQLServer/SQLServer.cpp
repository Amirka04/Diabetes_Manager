//
// Created by amir on 17.03.24.
//

#include "SQLServer.h"

std::unique_ptr<Connect> SQLServer::_connect(nullptr);

Connect *SQLServer::GetInstance(const char* dbName) {
    if(_connect == nullptr)
        _connect = std::make_unique<Connect>(dbName);
    return _connect.get();
}
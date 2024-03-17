// qt lib
#include <QApplication>
#include <QFile>


// my class
#include "window.h"
#include "SQLServer.h"



// C++ classes
#include <map>
#include <iostream>



int main(int args, char**argv) {
    QApplication app(args, argv);

    // Открою базу данных для дальшейшего его использования
    SQLServer::GetInstance("DataBase.db")->send_request("SELECT * FROM product");

    // load Styles in project
    // QFile file("Styles.qss");
    // file.open(QFile::ReadOnly);
    // QString style(file.readAll());
    // app.setStyleSheet(style);



    // main window
    window win;
    win.show();


    // run
    return app.exec();
}

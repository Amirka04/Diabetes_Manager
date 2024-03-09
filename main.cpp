// qt lib
#include <QApplication>
#include <QFile>

// my class
#include "Window/window.h"



int main(int args, char**argv) {
    QApplication app(args, argv);

    // load Styles in project
    QFile file("Styles.qss");
    file.open(QFile::ReadOnly);
    QString style(file.readAll());
    app.setStyleSheet(style);

    // main window
    window win;
    win.show();

    // run
    return app.exec();
}

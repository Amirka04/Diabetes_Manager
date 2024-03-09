#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QFile>
#include <QDebug>


int main(int args, char**argv) {
    QApplication app(args, argv);

    QFile file("Styles.qss");
    file.open(QFile::ReadOnly);
    QString style(file.readAll());
    app.setStyleSheet(style);




    return app.exec();
}

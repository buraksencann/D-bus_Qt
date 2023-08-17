
// main.cpp
#include <QApplication>
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusMessage>
#include "mainwindow2.h"
#include "mainwindow1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow1 w1;
    w1.show();

    MainWindow2 w2;
    w2.show();

    return a.exec();
}

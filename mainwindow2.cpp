// mainwindow2.cpp
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusMessage>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);

    QDBusConnection::sessionBus().connect("", "/example/path", "example.interface", "ChangeBackgroundColor", this, SLOT(changeBackgroundColor()));
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::changeBackgroundColor()
{
    clicked = !clicked;
    QPalette pal = palette();
    if(clicked){
        pal.setColor(QPalette::Window, QColor(Qt::red)); // Change background color to red
        setPalette(pal);
    }

    else{
        pal.setColor(QPalette::Window, QColor(Qt::green));
        setPalette(pal);
    }
}

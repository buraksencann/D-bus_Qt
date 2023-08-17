// mainwindow1.cpp
#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusMessage>
#include <QDebug>
#include <QtDBus/QDBusInterface>
#include <mydbusservice.h>

MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui1(new Ui::MainWindow1)
{
    ui1->setupUi(this);
    //myService = new MyDbusService(this);


}

MainWindow1::~MainWindow1()
{
    delete ui1;
}


void MainWindow1::on_pushButton_clicked()
{

    QDBusConnection connection = QDBusConnection::sessionBus();
    QDBusMessage message = QDBusMessage::createSignal("/example/path", "example.interface", "ChangeBackgroundColor");
    /*if (!connection.registerObject("/com/example/MyObject", myService,QDBusConnection::ExportAllSlots)) {
            qDebug() << "Failed to register object on D-Bus.";
    }
    if(!connection.registerService("com.example.MyInterface")){
         qDebug()<< "Failed to register service on D-bus";
    }
    qDebug() << "Server: Service registered successfully.";*/
    connection.send(message);
}



// mainwindow1.h
#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include "mydbusservice.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow1;
}
QT_END_NAMESPACE
class MainWindow1 : public QMainWindow
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.example.MyInterface")

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow1 *ui1;
    MyDbusService *myService;
};



#endif // MAINWINDOW1_H

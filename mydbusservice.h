#ifndef MYDBUSSERVICE_H
#define MYDBUSSERVICE_H

#include <QObject>

class MyDbusService: public QObject
{
    MyDbusService();
public:
     explicit MyDbusService(QObject *parent = nullptr);

};

#endif // MYDBUSSERVICE_H

#include "MyRect.h"
#include <QKeyEvent>
#include <QDebug>

void MyRect::keyPressEvent(QKeyEvent *event){
    switch (event->key()) {
    //left righ up and down
    case Qt::Key_A:
        setPos(x()-15,y());
        qDebug() << "LEFT/a";
        break;
    case Qt::Key_D:
        setPos(x()+15,y());
        qDebug() << "RIGHT/d";
        break;
    case Qt::Key_W:
        setPos(x(),y()-15);
        qDebug() << "UP/w";
        break;
    case Qt::Key_S:
        setPos(x(),y()+15);
        qDebug() << "DOWN/s";
        break;
    default:
        qDebug() << "Wrong KEY!!!";
        break;
    }
}

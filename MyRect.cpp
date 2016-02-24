#include "MyRect.h"
#include <QKeyEvent>
#include <QDebug>
#include <QSet>
#include <QThread>

void MyRect::keyPressEvent(QKeyEvent *event){

    switch (event->key()) {
    //left righ up and down
    case Qt::Key_A:
        setPos(x()-15,y());
        //qDebug() << "LEFT(a)";
        break;
    case Qt::Key_D:
        setPos(x()+15,y());
        //qDebug() << "RIGHT(d)";
        break;
    case Qt::Key_W:
        setPos(x(),y()-15);
        //qDebug() << "UP(w)";
        break;
    case Qt::Key_S:
        setPos(x(),y()+15);
        //qDebug() << "DOWN(s)";
        break;
    case Qt::Key_Left:
        setPos(x()-15,y());
        //qDebug() << "LEFT(a)";
        break;
    case Qt::Key_Right:
        setPos(x()+15,y());
        //qDebug() << "RIGHT(d)";
        break;
    case Qt::Key_Up:
        setPos(x(),y()-15);
        //qDebug() << "UP(w)";
        break;
    case Qt::Key_Down:
        setPos(x(),y()+15);
        //qDebug() << "DOWN(s)";
        break;
    case Qt::Key_T:
        switch (rand()%5){
            case 0: setPos(300, 100);break;
            case 1: setPos(300, 500);break;
            case 2: setPos(600, 350);break;
            case 3: setPos(900, 100);break;
            case 4: setPos(900, 500);break;
        //qDebug() << "TELEPORT(t)";
        }
    default:
        //qDebug() << "Wrong KEY!!!";
        break;
    }
}


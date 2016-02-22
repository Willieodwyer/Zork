#include "MyRect.h"
#include <QKeyEvent>
#include <QDebug>

void MyRect::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){
        setPos(x()-15,y());
        qDebug() << "LEFT";

    }
    else if (event->key() == Qt::Key_Right){
        setPos(x()+15,y());
        qDebug() << "RIGHT";

    }
    else if (event->key() == Qt::Key_Up){
        setPos(x(),y()-15);
        qDebug() << "UP";

    }
    else if (event->key() == Qt::Key_Down){
        setPos(x(),y()+15);
        qDebug() << "DOWN";

    }
}

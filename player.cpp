#include "player.h"
#include <QKeyEvent>
#include <QDebug>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#define SCALE 0.5


Player::Player(){
    setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
    setScale(SCALE/2);
}

void Player::keyPressEvent(QKeyEvent *event){

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
    default:
        //qDebug() << "Wrong KEY!!!";
        break;
    }
}


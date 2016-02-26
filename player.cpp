#include "player.h"
#include <QKeyEvent>
#include <QDebug>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#define SCALE 0.05
#define DISTANCE 30

//:/assets/assets/pacman-ghost-128-UP.png
//:/assets/assets/pacman-ghost-128-DOWN.png
//:/assets/assets/pacman-ghost-128-flipped.png
//:/assets/assets/pacman-ghost-128.png


Player::Player(){
    setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
    setScale(SCALE);
    setPos(x()+(DISTANCE*4),y()+(DISTANCE*21));
}

void Player::keyPressEvent(QKeyEvent *event){
    if(isInPlayableArea()){
        switch (event->key()) {
        //left righ up and down
        case Qt::Key_A:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-flipped.png"));
            setPos(x()-DISTANCE,y());
            //qDebug() << "LEFT(a)";
            break;
        case Qt::Key_D:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
            setPos(x()+DISTANCE,y());
            //qDebug() << "RIGHT(d)";
            break;
        case Qt::Key_W:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-UP.png"));
            setPos(x(),y()-DISTANCE);
            //qDebug() << "UP(w)";
            break;
        case Qt::Key_S:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-DOWN.png"));
            setPos(x(),y()+DISTANCE);
            //qDebug() << "DOWN(s)";
            break;
        default:
            //qDebug() << "Wrong KEY!!!";
            break;
        }
        qDebug() << "X: " +  QString::number(x()) + " Y: " + QString::number(y());
    }
}


bool Player::isInPlayableArea(){
    return true;
}


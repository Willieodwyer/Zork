#include "Player.h"
#include <QKeyEvent>
#include <QDebug>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>
#define SCALE 0.05
#define DISTANCE 30

//:/assets/assets/pacman-ghost-128-UP.png
//:/assets/assets/pacman-ghost-128-DOWN.png
//:/assets/assets/pacman-ghost-128-flipped.png
//:/assets/assets/pacman-ghost-128.png


Player::Player(){
    hallway = new Room("hallway",120, 510, 150, 630);
    setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
    setScale(SCALE);
    setPos(x()+(DISTANCE*4),y()+(DISTANCE*21));
}

void Player::keyPressEvent(QKeyEvent *event){
    switch (event->key()) {
    //left righ up and down
    case Qt::Key_A:
        if(canMove(LEFT)){
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-flipped.png"));
            setPos(x()-DISTANCE,y());
        }
        //qDebug() << "LEFT(a)";
        break;
    case Qt::Key_D:
        if(canMove(RIGHT)){
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
            setPos(x()+DISTANCE,y());
        }
        //qDebug() << "RIGHT(d)";
        break;
    case Qt::Key_W:
        if(canMove(UP)){
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-UP.png"));
            setPos(x(),y()-DISTANCE);
        }
        //qDebug() << "UP(w)";
        break;
    case Qt::Key_S:
        if(canMove(DOWN)){
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-DOWN.png"));
            setPos(x(),y()+DISTANCE);
        }
        //qDebug() << "DOWN(s)";
        break;
    default:
        //qDebug() << "Wrong KEY!!!";
        break;
    }
    qDebug() << "X: " +  QString::number(x()) + " Y: " + QString::number(y());
}

bool Player::canMove(directions d){
    switch(d){
    case UP:
        //qDebug() << QString::number((y()) <= hallway->getY1());
        if((y() - DISTANCE) >= 510){
            return true;
        }
        break;
    case DOWN:
        //qDebug() << QString::number((y()) <= hallway->getY2());
        if((y() + DISTANCE) <= 630){
            return true;
        }
        break;
    case LEFT:
        //qDebug() << QString::number((x()) >= hallway->getX2());
        if((x() - DISTANCE) >= 120){
            return true;
        }
        break;
    case RIGHT:
        //qDebug() << QString::number((x()) <= hallway->getX2());
        if((x() + DISTANCE) <= 150){
            return true;
        }
        break;
    default: return false; break;
    }
    return false;
}



















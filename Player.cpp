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
    setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
    setScale(SCALE);
    setPos(x()+(DISTANCE*4),y()+(DISTANCE*21));
    initRooms();
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
    for (int i = 0; i < NUM_OF_ROOMS;i++){
        //qDebug() << QString::number(i);
        switch(d){
        case UP:
            //qDebug() << QString::number((y()) <= roomArray[0]->getY1());
            if(x() >= roomArray[i]->getX1() && (y() - DISTANCE) >= roomArray[i]->getY1()
                    && x() <= roomArray[i]->getX2()){
                qDebug() << roomArray[i]->longDescription();
                return true;
            }
            break;
        case DOWN:
            //qDebug() << QString::number((y()) <= hallway->getY2());
            if( x() <= roomArray[i]->getX2() && (y() + DISTANCE) <= roomArray[i]->getY2()
                    && x() >= roomArray[i]->getX1()){
                qDebug() << roomArray[i]->longDescription();
                return true;
            }
            break;
        case LEFT:
            //qDebug() << QString::number((x()) >= hallway->getX2());
            if((x() - DISTANCE) >= roomArray[i]->getX1() && y() >= roomArray[i]->getY1()
                    && y() <= roomArray[i]->getY2()){
                qDebug() << roomArray[i]->longDescription();
                return true;
            }
            break;
        case RIGHT:
            //qDebug() << QString::number((x()) <= hallway->getX2());
            if((x() + DISTANCE) <= roomArray[i]->getX2() && y() <= roomArray[i]->getY2()
                    && y() >= roomArray[i]->getY1()){
                qDebug() << roomArray[i]->longDescription();
                return true;
            }
            break;
        }
    }
    return false;
//    return true;
}

void Player::initRooms(){
    roomArray = new Room *[NUM_OF_ROOMS];
    roomArray[0] = new Room("hallway",120, 510, 150, 630);
    roomArray[1] = new Room("mainHall",60,120,210,480);
    roomArray[2] = new Room("goldSteps",240,300,240,330);
}





















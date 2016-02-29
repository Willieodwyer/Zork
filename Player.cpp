#include "Player.h"
#include <QKeyEvent>
#include <QDebug>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPixmap>
<<<<<<< HEAD
#include <QFuture>
#include <QtConcurrent/QtConcurrent>
=======
#include "Room.h"
>>>>>>> Wills
#define SCALE 0.05
#define DISTANCE 30

//:/assets/assets/pacman-ghost-128-UP.png
//:/assets/assets/pacman-ghost-128-DOWN.png
//:/assets/assets/pacman-ghost-128-flipped.png
//:/assets/assets/pacman-ghost-128.png


Player::Player(){

    hallway = new Room("hallway",120,510,180,660);

    setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
    setScale(SCALE);
    setPos(x()+(DISTANCE*4),y()+(DISTANCE*21));
}

void Player::keyPressEvent(QKeyEvent *event){
    if(isInRoom()){
        switch (event->key()) {
        //left righ up and down
        case Qt::Key_A: case Qt::Key_Left:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-flipped.png"));
            setPos(x()-DISTANCE,y());
            //qDebug() << "LEFT(a)";
            break;
        case Qt::Key_D: case Qt::Key_Right:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
            setPos(x()+DISTANCE,y());
            //qDebug() << "RIGHT(d)";
            break;
        case Qt::Key_W: case Qt::Key_Up:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-UP.png"));
            setPos(x(),y()-DISTANCE);
            //qDebug() << "UP(w)";
            break;
        case Qt::Key_S: case Qt::Key_Down:
            setPixmap(QPixmap(":/assets/assets/pacman-ghost-128-DOWN.png"));
            setPos(x(),y()+DISTANCE);
            //qDebug() << "DOWN(s)";
            break;
        case Qt::Key_F1:
            qDebug() << "Help";
            break;
        case Qt::Key_F2:
            qDebug() << "menu";
            displayMenu();
            break;
        case Qt::Key_Space:
            qDebug() << "Scenario";
            displayScenario();
            break;
        default:
            //qDebug() << "Wrong KEY!!!";
            break;
        }
        qDebug() << "X: " +  QString::number(x()) + " Y: " + QString::number(y());
    }
    else
        qDebug() << "Not in a room innit";
}

void Player::displayMenu(){
    menu.show();
}

void Player::displayScenario(){
    sbox.setScenario("scenario title", "Insert scenario descrption here", "option 1", "option 2");
    //QFuture<void> future = QtConcurrent::run(sbox.showScenario());// bool a = sbox.showScenario();
    sbox.show();
    qDebug() << sbox.optionSelected;
}

bool Player::isInRoom(){
    if(hallway->getY1() >= (y() + DISTANCE)/* &&
            y() >= (hallway->getY1() - DISTANCE) &&
            x() <= (hallway->getX2() + DISTANCE) &&
            y() <= (hallway->getY2() + DISTANCE)*/
        )
        return true;
    else
       return false;
}


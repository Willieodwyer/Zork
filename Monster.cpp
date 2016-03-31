#include "Monster.h"
#include <QDebug>

Monster::Monster() : Player()
{
    this->init();
    this->setScale(SCALE);
    this->roomIndex= 0;
    map = new Map();
    wrongMove = 0;
    roomArray[8]->scenarioDone();
    roomArray[12]->scenarioDone();
    roomArray[18]->scenarioDone();
    roomArray[24]->scenarioDone();
    roomArray[30]->scenarioDone();
}

Monster::~Monster(){
    qDebug() << "deleting MONSTER!!!";
}
//if(canMove(UP))
//    setPos(x(),y()-DISTANCE);
//if(canMove(DOWN))
//    setPos(x(),y()+DISTANCE);
//if(canMove(LEFT))
//    setPos(x()-DISTANCE,y());
//if(canMove(RIGHT))
//    setPos(x()+DISTANCE,y());
QString Monster::chasePlayerLEFTRIGHT(Player *p){
    if (p->a){
        checkCaught(p);
        if(this->x() < p->x()){

            if(canMove(RIGHT)){
                setPixmap(QPixmap(":/assets/inverted.png"));
                setPos(x()+DISTANCE,y());
                return "RIGHT";
            }
            else {
                setPixmap(QPixmap(":/assets/smoke_cloud-a.png"));
                setPos(x()+DISTANCE,y());
                return "RIGHT";
            }
            return "RIGHT";
        }

        if(this->x() > p->x()){


            if(canMove(LEFT)){
                setPixmap(QPixmap(":/assets/invertedflipped.png"));
                setPos(x()-DISTANCE,y());
                return "LEFT";
            }
            else {
                setPixmap(QPixmap(":/assets/smoke_cloud-a.png"));
                setPos(x()-DISTANCE,y());
                return "LEFT";
            }
        }
    }
    return "";
}

void Monster::checkCaught(Player *p)
{
    if(this->x() == p->x())
        if(this->y() == p->y()){
            //qDebug() << "MX1: " +  QString::number(x()) + " MY1: " + QString::number(y()) << "X1: " +  QString::number(p->x()) + " Y1: " + QString::number(p->y());
            showScenarioBox2();
        }
}
QString Monster::chasePlayerUPDOWN(Player *p){
    if (p->a){
        checkCaught(p);
        if(this->y() > p->y()){
            if(canMove(UP)){
                setPos(x(),y()-DISTANCE);
                setPixmap(QPixmap(":/assets/invertedUP.png"));
                return "UP";
            }
            else{
                this->setPixmap(QPixmap(":/assets/smoke_cloud-a.png"));
                setPos(x(),y()-DISTANCE);
            }
            return "UP";
        }
        if(this->y() < p->y()){
//:/assets/smoke_cloud-a.png
            if(canMove(DOWN)){
                setPixmap(QPixmap(":/assets/invertedDOWN.png"));
                setPos(x(),y()+DISTANCE);
                return "DOWN";
            }
            else{
                setPixmap(QPixmap(":/assets/smoke_cloud-a.png"));
                setPos(x(),y()+DISTANCE);
                return "DOWN";
            }
        }
    }
    return "Chasing";
}

void Monster::showScenarioBox2()
{
    setEnabled(false);
    sbox.endGame("GAME OVER", "You've been caught by the monster's guard!!!", "Ok");
    sbox.exec();
}

#include "Monster.h"

Monster::Monster() : Player()
{
    this->init();
    this->setScale(SCALE);
    this->roomIndex= 0;
    map = new Map();
    wrongMove = 0;
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

    if(this->x() < p->x()){

        if(canMove(RIGHT)){
            setPixmap(QPixmap(":/assets/inverted.png"));
            setPos(x()+DISTANCE,y());
            return "RIGHT";
        }
        else {
            setPixmap(QPixmap(""));
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
            setPixmap(QPixmap(""));
            setPos(x()-DISTANCE,y());
            return "LEFT";
        }
    }
    return "";
}
QString Monster::chasePlayerUPDOWN(Player *p){
    if(this->y() > p->y()){
        if(canMove(UP)){
            setPos(x(),y()-DISTANCE);
            setPixmap(QPixmap(":/assets/invertedUP.png"));
            return "UP";
        }
        else{
            this->setPixmap(QPixmap(""));
            setPos(x(),y()-DISTANCE);
        }
        return "UP";
    }
    if(this->y() < p->y()){

        if(canMove(DOWN)){
            setPixmap(QPixmap(":/assets/invertedDOWN.png"));
            setPos(x(),y()+DISTANCE);
            return "DOWN";
        }
        else{
            setPixmap(QPixmap(""));
            setPos(x(),y()+DISTANCE);
            return "DOWN";
        }
    }
    return "Chasing";
}

void Monster::showMenu()
{

}

void Monster::showScenarioBox()
{

}

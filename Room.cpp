#include "Room.h"
#include "Item.h"
#include <QDebug>


Room::Room(QString description, int x1, int y1, int x2, int y2) {
    X1 = x1;
    X2 = x2;
    Y1 = y1;
    Y2 = y2;
    this->description = description;
    this->item = new Item("NONE");
    this->hasScenario = false;
}
Room::Room(QString description, int x1, int y1, int x2, int y2, bool scenario) {
    X1 = x1;
    X2 = x2;
    Y1 = y1;
    Y2 = y2;
    this->description = description;
    this->item = new Item("NONE");
    this->hasScenario = scenario;
}
Room::~Room(){
    qDebug() << "Deleting room :- " << description;
    delete item;
}


QString Room::longDescription() {
    return description;
}

void Room::setItem(Item *inItem) {
    item = inItem;
    return;
}

Item* Room::getItem() {

    return item;
    }

void Room::removeItem(){
    this->item->setDescription("NONE");
}


int Room::isItemInRoom(QString inString)
{
    qDebug() << inString;
    return 1;
}

int Room::getX1(){
    return X1;
}

int Room::getY1(){
    return Y1;
}

int Room::getX2(){
    return X2;
}

int Room::getY2(){
    return Y2;
}

void Room::scenarioDone()
{
    this->hasScenario = false;
}



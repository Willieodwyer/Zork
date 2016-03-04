#include "Room.h"
#include <QDebug>

Room::Room(QString description, int x1, int y1, int x2, int y2) {
    X1 = x1;
    X2 = x2;
    Y1 = y1;
    Y2 = y2;
    this->description = description;
}


QString Room::longDescription() {
    return description;
}

void Room::addItem(Item *inItem) {
    itemsInRoom.push_back(*inItem);
}

QString Room::displayItem() {

    return "TODO: implement this";
    }

int Room::numberOfItems() {
    return itemsInRoom.size();
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

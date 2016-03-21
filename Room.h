#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "Item.h"
#include <QDebug>

class Room {

    friend QDebug operator<< (QDebug d, Room *model) {
        d << model->longDescription();
        return d;
    }



private:
    QString description;
    Item *item;
    int X1, Y1; // Coordinates of the top left corener
    int X2, Y2; // Coordinates of the bottom right corner




public:
    Room(QString description, int x1, int y1, int x2, int y2);
    Room(QString description, int x1, int y1, int x2, int y2, bool scenario);
    ~Room();

    QString longDescription();
    Item* getItem();
    bool hasScenario;

    int numberOfItems();
    void setItem(Item *inItem);
    int isItemInRoom(QString inString);
    void removeItem();
    int getX1();
    int getY1();
    int getX2();
    int getY2();


    void scenarioDone();
};

#endif

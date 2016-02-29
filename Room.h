#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "Item.h"
#include <QDebug>


using namespace std;
using std::vector;

class Room {

private:
    string description;
    vector <Item> itemsInRoom;
    int X1, Y1; // Coordinates of the room
    int X2, Y2; // Coordinates of the room


public:
    Room(string description, int x1, int y1, int x2, int y2);

    string longDescription();
    string displayItem();

    int numberOfItems();
    void addItem(Item *inItem);
    int isItemInRoom(QString inString);
    void removeItemFromRoom();
    int getX1();
    int getY1();
    int getX2();
    int getY2();

};

#endif

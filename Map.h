#ifndef MAP_H
#define MAP_H
#include <QGraphicsPixmapItem>
#include <QSet>
#include "gamemenu.h"
#include "scenariobox.h"
#include "Room.h"
#include <vector>

#define NUM_OF_ROOMS 45


class Map
{

public:

    Room *currentRoom;
    Room *roomArray[NUM_OF_ROOMS];


    Map();

    Room* operator[] (int index) const{
        return roomArray[index];
    }

    Room* &operator[](int index){
        return this->roomArray[index];
    }
};

#endif // MAP_H

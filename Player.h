#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QGraphicsPixmapItem>
#include <QSet>
#include "gamemenu.h"
#include "scenariobox.h"
#include "Room.h"
#define NUM_OF_ROOMS 2

class Player: public QGraphicsPixmapItem{

public:
    Player();

    Room **roomArray;

    void initRooms();
    void keyPressEvent(QKeyEvent * event);
    enum directions { UP = 1, DOWN, LEFT, RIGHT};
    bool canMove(directions d);
};

#endif // MYPLAYER_H

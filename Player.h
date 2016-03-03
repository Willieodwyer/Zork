#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QGraphicsPixmapItem>
#include <QSet>
#include "gamemenu.h"
#include "scenariobox.h"
#include "Room.h"

class Player: public QGraphicsPixmapItem{

public:
    Player();
    Room *hallway; // make this some sort of array of rooms

    void keyPressEvent(QKeyEvent * event);
    enum directions { UP = 1, DOWN, LEFT, RIGHT};
    bool canMove(directions d);
};

#endif // MYPLAYER_H

#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QGraphicsPixmapItem>
#include <QSet>
#include "gamemenu.h"
#include "scenariobox.h"
#include "Room.h"
#include <vector>
#include "Map.h"

#define NUM_OF_ROOMS 45

using namespace std;

class Player: public QGraphicsPixmapItem{

public:
    Player();
    ~Player();
    Map *map;

    QVector <QString> items;
    Room *currentRoom;
    int roomIndex;
    Room *roomArray[NUM_OF_ROOMS];
    ScenarioBox sbox;
    GameMenu menu;

    void init();
    void keyPressEvent(QKeyEvent * event);
    enum directions { UP = 1, DOWN, LEFT, RIGHT};
    bool canMove(directions d);

    void addItem(Item *x);
    void getItems();

    void showMenu();

};

#endif // MYPLAYER_H

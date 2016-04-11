#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QGraphicsPixmapItem>
#include <QSet>
#include "controlswindow.h"
#include "scenariobox.h"
#include "Room.h"
#include <vector>
#include "Map.h"
#include <unistd.h>


#define NUM_OF_ROOMS 45

using namespace std;

class Player: public QGraphicsPixmapItem{

public:
    Player();
    virtual ~Player();
    Map *map;

    QVector <QString> items;
    Room *currentRoom;
    int roomIndex;
    Room *roomArray[NUM_OF_ROOMS];
    ScenarioBox sbox;
    ControlsWindow menu;

    bool a;

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    virtual void init();
    void keyPressEvent(QKeyEvent * event);
    enum directions { UP = 1, DOWN, LEFT, RIGHT};
    bool canMove(directions d);

    void addItem(Item *x);
    void getItems();

    virtual void showMenu();
    virtual void showScenarioBox();

    virtual QString chasePlayerLEFTRIGHT(Player *p){(void) p; return "";}
    virtual void checkCaught(Player *p){ (void) p; return;}
    virtual QString chasePlayerUPDOWN(Player *p){ (void) p; return "";}

    template<typename T>
    void printClassArray(T *s)
    {
        for(int i = 0;i < NUM_OF_ROOMS; i ++){
          qDebug() << (*s)[i];
        }
    }
};

#endif // MYPLAYER_H

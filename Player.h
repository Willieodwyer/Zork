#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QGraphicsPixmapItem>
<<<<<<< HEAD
#include <QSet>
#include "gamemenu.h"
#include "scenariobox.h"

class Player: public QGraphicsPixmapItem{

private:
    bool isInPlayableArea();
    void displayMenu();
    void displayScenario();
    GameMenu menu;
    ScenarioBox sbox;
=======
#include "Room.h"

class Player: public QGraphicsPixmapItem{

>>>>>>> Wills

public:
    Player();

    Room *hallway; // make this some sort of array of rooms

    void keyPressEvent(QKeyEvent * event);
    bool isInRoom();
};

#endif // MYPLAYER_H

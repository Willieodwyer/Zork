#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QGraphicsPixmapItem>
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

public:

    void keyPressEvent(QKeyEvent * event);
    Player();
};

#endif // MYPLAYER_H

#ifndef MONSTER_H
#define MONSTER_H
#include "Player.h"
#define SCALE 0.05
#define DISTANCE 30


class Monster : public Player
{
public:
    Monster();
    int wrongMove;
    QString chasePlayerUPDOWN(Player *p);
    QString chasePlayerLEFTRIGHT(Player *p);


    virtual void showMenu();
    virtual void showScenarioBox();
};

#endif // MONSTER_H

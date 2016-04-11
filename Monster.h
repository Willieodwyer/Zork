#ifndef MONSTER_H
#define MONSTER_H
#include "Player.h"
#define SCALE 0.05
#define DISTANCE 30


class Monster : public Player
{
public:
    Monster();
    virtual ~Monster();
    int wrongMove;
    ScenarioBox sbox;
    QString chasePlayerUPDOWN(Player *p);
    QString chasePlayerLEFTRIGHT(Player *p);
    void checkCaught(Player *p);


    virtual void showScenarioBox();
};

#endif // MONSTER_H

#include "Monstertimer.h"

MonsterTimer::MonsterTimer(Player *x, Player *y)
{
    times = 0;
    p = x;
    m = y;
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
    timer->start(TICK_TIME);
}

void MonsterTimer::MySlot(){
    if(times < 41){
        times++;
        if (times % 2 == 0)
            m->setPixmap(QPixmap(":/assets/inverted.png"));
        else
            m->setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));
        return;
    }
    else if(times % 4 == 0){
        m->chasePlayerUPDOWN(p);
    }
    else if (times % 2 == 0){
        m->chasePlayerLEFTRIGHT(p);
    }
    times++;
}

#ifndef MONSTERTIMER_H
#define MONSTERTIMER_H
#include <QtCore>
#include "Monster.h"
#define TICK_TIME 150

class MonsterTimer : public QObject
{
    Q_OBJECT

public:
    int times;
    MonsterTimer(Player *x, Monster *y);
    QTimer *timer;
    Player *p;
    Monster *m;

public slots:
    void MySlot();
};

#endif // MONSTERTIMER_H

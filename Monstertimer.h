#ifndef MONSTERTIMER_H
#define MONSTERTIMER_H
#include <QtCore>
#include "Monster.h"
#define TICK_TIME 125

class MonsterTimer : public QObject
{
    Q_OBJECT

public:
    int times;
    MonsterTimer(Player *x, Player *y);
    QTimer *timer;
    Player *p;
    Player *m;

public slots:
    void MySlot();
};

#endif // MONSTERTIMER_H

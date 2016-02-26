#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsPixmapItem>
#include <QSet>

class Player: public QGraphicsPixmapItem{

private:
    bool isInPlayableArea();

public:

    void keyPressEvent(QKeyEvent * event);
    Player();
};

#endif // MYRECT_H

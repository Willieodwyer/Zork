#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QGraphicsPixmapItem>
#include <QSet>

class Player: public QGraphicsPixmapItem{

private:
    bool isInPlayableArea();

public:

    void keyPressEvent(QKeyEvent * event);
    Player();
};

#endif // MYPLAYER_H

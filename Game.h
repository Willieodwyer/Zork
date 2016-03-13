#ifndef GAME_H
#define GAME_H


#include "Player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>


class Game
{
private:
    QGraphicsScene* scene;
    QGraphicsPixmapItem* background;
    Player * player;
public:
    Game();
    ~Game();
    QGraphicsView * view;
    void play();
    void close();
};

#endif // GAME_H

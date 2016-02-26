#ifndef GAME_H
#define GAME_H


#include "Player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>
#define SCALE 0.5
#define RES_X 960
#define RES_Y 660


class Game
{
private:
    QGraphicsScene* scene;
    QGraphicsView * view;
    QGraphicsPixmapItem* background;
    Player * player;
public:
    Game();
    void play();
};

#endif // GAME_H

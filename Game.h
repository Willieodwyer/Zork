#ifndef GAME_H
#define GAME_H


#include "Player.h"
#include "Monster.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>
#include "Monstertimer.h"
#include <QMediaPlayer>
#include <QSound>




class Game
{
private:
    QMediaPlayer * music;
    QGraphicsScene* scene;
    QGraphicsPixmapItem* background;
    Player * player;
    Player *monster;
public:
    Game();
    ~Game();
    QGraphicsView * view;
    void play();
    void close();
};

#endif // GAME_H

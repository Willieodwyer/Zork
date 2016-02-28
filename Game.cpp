#include "Game.h"
#include "Player.h"
#include "Room.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>
#define SCALE 0.5
#define RES_X 960
#define RES_Y 660

Game::Game()
{
    scene = new QGraphicsScene;
    view = new QGraphicsView(scene);

    background = new QGraphicsPixmapItem();

    player = new Player();
}

void Game::play(){

    background->setScale(SCALE);
    background->setPixmap(QPixmap(":/assets/assets/Dungeon.jpg"));

    scene->addItem(background);
    scene->addItem(player);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    view->setFixedSize(RES_X + 2,RES_Y + 2);
    scene->setSceneRect(0,0,RES_X,RES_Y);
    view->show();
}


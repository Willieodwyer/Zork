#include "Game.h"
#include "Player.h"
#include "Room.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QLabel>

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

    QLabel *gif_anim = new QLabel();
    QMovie *movie = new QMovie(":/assets/assets/undead_monster_animation.gif");
    gif_anim->setMovie(movie);
    movie->start();
    QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);

    scene->addItem(background);
    scene->addItem(player);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    view->setFixedSize(RES_X + 2,RES_Y + 2);
    scene->setSceneRect(0,0,RES_X,RES_Y);
    view->show();
}

void Game::close(){
    view->close();
}


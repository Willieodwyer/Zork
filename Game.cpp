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
#include <QThread>

#define RES_X 960
#define RES_Y 660

Game::Game()
{
    scene = new QGraphicsScene;
    view = new QGraphicsView(scene);

    background = new QGraphicsPixmapItem();

    player = new Player();
    monster = new Monster();
    //MonsterTimer *mTimer = new MonsterTimer(player, monster);
}
Game::~Game()
{
    qDebug() << "Game exiting";
    delete player;
    delete background;
    delete view;
    delete scene;
    //delete monster;
}

void Game::play(){

    background->setScale(0.5);
    background->setPixmap(QPixmap(":/assets/assets/Dungeon.jpg"));

    scene->addItem(background);
    scene->addItem(player);
    monster->setPixmap(QPixmap(":/assets/assets/pacman-ghost-128.png"));

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    view->setFixedSize(RES_X + 2,RES_Y + 2);
    scene->setSceneRect(0,0,RES_X,RES_Y);
    view->show();
    player->showScenarioBox();
    scene->addItem(monster);
    MonsterTimer *mTimer = new MonsterTimer(player, monster);
}

void Game::close(){
    view->close();
}


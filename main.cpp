#include <QApplication>
#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>
#define SCALE 0.5
#define RES_X 960
#define RES_Y 660


int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    QGraphicsScene* scene = new QGraphicsScene;
    QGraphicsView * view = new QGraphicsView(scene);

    QGraphicsPixmapItem* background = new QGraphicsPixmapItem();
    background->setPixmap(QPixmap(":/assets/assets/Dungeon.jpg"));
    background->setScale(SCALE);
    scene->addItem(background);

    Player * player = new Player();
    scene->addItem(player);

    printf("%f",RES_X/SCALE);



    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    view->setFixedSize(RES_X + 2,RES_Y + 2);
    scene->setSceneRect(0,0,RES_X,RES_Y);
    view->show();

    return a.exec();
}

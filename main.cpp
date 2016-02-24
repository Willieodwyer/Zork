#include <QApplication>
#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#define SCALE 0.511


int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    QGraphicsScene* scene = new QGraphicsScene;
    QGraphicsView * view = new QGraphicsView(scene);

    QGraphicsPixmapItem* background = new QGraphicsPixmapItem();
    background->setPixmap(QPixmap(":/images/img.png"));
    background->setScale(SCALE);
    scene->addItem(background);

    Player * player = new Player();
    scene->addItem(player);




    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


    view->setFixedSize(1282,722);
    scene->setSceneRect(0,0,1280,720);
    view->show();

    return a.exec();
}

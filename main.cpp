#include <QApplication>
#include "MyRect.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtGlobal>



int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // create an item to add to the scene
    MyRect * player = new MyRect();
    player->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels

    QImage image("assets/img.png");

    QGraphicsPixmapItem item( QPixmap::fromImage(image));
    QGraphicsScene* scene = new QGraphicsScene;
    scene->addItem(&item);
    // add the item to the scene
    scene->addItem(player);

    // make rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);

    // show the view
    view->setFixedSize(1282,722);
    scene->setSceneRect(0,0,1280,720);
    view->show();

    return a.exec();
}

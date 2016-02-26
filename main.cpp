#include <QApplication>
#include "Player.h"
#include "Game.h"

#define SCALE 0.5
#define RES_X 960
#define RES_Y 660


int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    Game game;
    game.play();

    return a.exec();
}

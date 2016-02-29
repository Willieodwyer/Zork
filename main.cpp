#include <QApplication>
#include "mainmenu.h"

#define SCALE 0.5
#define RES_X 960
#define RES_Y 660


int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    MainMenu menu;
    menu.show();

    return a.exec();
}

#include "gamemenu.h"
#include "ui_gamemenu.h"
#include "mainmenu.h"
#include "Game.h"
#include <QDebug>

GameMenu::GameMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameMenu)
{
    ui->setupUi(this);
}

GameMenu::~GameMenu()
{
    delete ui;
}

void GameMenu::setControls()
{
    ui->txtControls->setText("W/Up arrow:\tmove up\n\nS/Down arrow:\tmove down\n\nA/Left arrow:\tmove left\n\nD/Right arrow:\tmove right\n\nSpace:\t\tScenario menu");
}

void GameMenu::on_btnResume_clicked()
{
    close();
}

void GameMenu::on_btnQuit_clicked()
{
    //MainMenu menu;
    //menu.game->close();
    close();
}

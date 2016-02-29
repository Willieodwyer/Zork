#include "gamemenu.h"
#include "ui_gamemenu.h"
#include "mainmenu.h"
#include "Game.h"
#include <QDebug>

GameMenu::GameMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameMenu)
{
    //ui->txtObjectives->setText("Insert list of objectives here\nPossibly stored in object?");
    //ui->txtItems->setText("Insert list of obtained items here");
    ui->setupUi(this);
}

GameMenu::~GameMenu()
{
    delete ui;
}

void GameMenu::on_btnResume_clicked()
{
    close();
}

void GameMenu::on_btnHelp_clicked()
{
    qDebug() << "help";
}

void GameMenu::on_btnHome_clicked()
{
    //MainMenu.game.close();
    MainMenu menu;
    menu.show();
    close();
}

void GameMenu::on_btnQuit_clicked()
{
    close();
}

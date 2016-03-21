#include "mainmenu.h"
#include "ui_mainmenu.h"

#include <QDebug>

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
   // game = new Game;
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_btnNew_clicked()
{
    setCentralWidget(game.view);
    game.play();
}

void MainMenu::on_btnQuit_clicked()
{
    close();
    qApp->quit();
}

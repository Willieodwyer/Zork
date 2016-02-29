#include "mainmenu.h"
#include "ui_mainmenu.h"

#include <QDebug>

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_btnNew_clicked()
{
    game.play();
    //qDebug() << "here";
    //game.close();
    close();
}

void MainMenu::on_btnQuit_clicked()
{
    //qDebug() << "quit";
    close();
}
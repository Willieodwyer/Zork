#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "Game.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();
    Game game;

private slots:
    void on_btnNew_clicked();
    void on_btnQuit_clicked();

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H

#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QMainWindow>

namespace Ui {
class GameMenu;
}

class GameMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameMenu(QWidget *parent = 0);
    ~GameMenu();
    void setControls();

private slots:
    void on_btnResume_clicked();

    void on_btnQuit_clicked();

private:
    Ui::GameMenu *ui;
};

#endif // GAMEMENU_H

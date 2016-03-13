#ifndef SCENARIOBOX_H
#define SCENARIOBOX_H

#include <QDialog>
#include"Room.h"

namespace Ui {
class ScenarioBox;
}

class ScenarioBox : public QDialog
{
    Q_OBJECT

public:
    explicit ScenarioBox(QWidget *parent = 0);
    ~ScenarioBox();

    Room *currentRoom;
    QVector <QString> items;

    void setScenario(QString title, QString desc, QString Opt1, QString Opt2);
    void showScenario(Room *x);
    void getItems();
    void setObjective();

private slots:
    void on_btnOptionA_clicked();

    void on_btnOptionB_clicked();

private:
    Ui::ScenarioBox *ui;
};

#endif // SCENARIOBOX_H

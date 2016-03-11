#ifndef SCENARIOBOX_H
#define SCENARIOBOX_H

#include <QDialog>

namespace Ui {
class ScenarioBox;
}

class ScenarioBox : public QDialog
{
    Q_OBJECT

public:
    explicit ScenarioBox(QWidget *parent = 0);
    ~ScenarioBox();
    void setScenario(QString title, QString desc, QString Opt1, QString Opt2);
    int showScenario();
    bool optionSelected = 0;
    bool buttonClicked;

private slots:
    void on_btnOptionA_clicked();

    void on_btnOptionB_clicked();

private:
    Ui::ScenarioBox *ui;
};

#endif // SCENARIOBOX_H

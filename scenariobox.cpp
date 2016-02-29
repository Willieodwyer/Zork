#include "scenariobox.h"
#include "ui_scenariobox.h"
#include <QDebug>

ScenarioBox::ScenarioBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScenarioBox)
{
    ui->setupUi(this);
}

ScenarioBox::~ScenarioBox()
{
    delete ui;
}

void ScenarioBox::setScenario(QString title, QString desc, QString Opt1, QString Opt2){
    ui->lblTitle->setText(title);
    ui->txtDescription->setText(desc);
    ui->btnOptionA->setText(Opt1);
    ui->btnOptionB->setText(Opt2);
}

/*void ScenarioBox::showScenario()
{
    buttonClicked = 0;
    this->show();
    while (!buttonClicked){
    }
    //return optionSelected;
}*/

void ScenarioBox::on_btnOptionA_clicked()
{
    qDebug() << "button A clicked";
    optionSelected = 0;
    //buttonClicked = 1;
    close();
}

void ScenarioBox::on_btnOptionB_clicked()
{
    qDebug() << "button B clicked";
    optionSelected = 1;
    //buttonClicked = 1;
    close();
}

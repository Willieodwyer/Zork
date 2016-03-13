#include "scenariobox.h"
#include "ui_scenariobox.h"
#include "Item.h"
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

void ScenarioBox::showScenario(Room *x)
{
    currentRoom = x;
    if (currentRoom->longDescription() == "start")
        setScenario("Start", "Welcome to Zorknaders!\n To complete the game, you must collect all the items and bring them to the monster!", "Ok", "Also ok");
    else if (currentRoom->longDescription() == "before the BEAST")
        setScenario("Monster", "You must appease the Monster by collecting all of the objectives", "Ok", "Also ok?");
    else
        setScenario("Item Found!", "You have found : " + currentRoom->getItem()->getDescription() +".\nDo you wish to pick it up or leave it?", "Pick up", "Leave");
    setObjective();
    getItems();
    this->show();
}

void ScenarioBox::getItems()
{
    QString temp = "";
    for (int i = 0; i < items.size(); ++i) {
        temp.append(items[i]);
        temp.append("\n");
    }
    qDebug() << temp;
    ui->txtInventory->setText(temp);
}

void ScenarioBox::setObjective()
{
    ui->txtObjectives->setText("Appease the monster!!");
}

void ScenarioBox::on_btnOptionA_clicked()
{
    //qDebug() << "button A clicked";
    if (currentRoom->longDescription() != "start" && currentRoom->longDescription() != "before the BEAST"){
        Item *x = currentRoom->getItem();
        if(QString::compare(x->getDescription(),"NONE") != 0){
            items.push_back(x->getDescription());
            currentRoom->removeItem();
        }
    }
    close();
}

void ScenarioBox::on_btnOptionB_clicked()
{
    //qDebug() << "button B clicked";
    close();
}

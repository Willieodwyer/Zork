#include "scenariobox.h"
#include "ui_scenariobox.h"
#include "Item.h"
#include <QDebug>

ScenarioBox::ScenarioBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScenarioBox)
{
    ui->setupUi(this);
    setupObjectives();
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
    ui->btnOptionA->setVisible(true);
    ui->btnOptionB->move(380, 380);
}

void ScenarioBox::setScenario(QString title, QString desc, QString Opt1)
{
    ui->lblTitle->setText(title);
    ui->txtDescription->setText(desc);
    ui->btnOptionB->setText(Opt1);
    ui->btnOptionA->setVisible(false);
    ui->btnOptionB->move(260, 350);
}

void ScenarioBox::showScenario(Room *x)
{
    currentRoom = x;
    if (currentRoom->longDescription() == "start")
        setScenario("Start", "Welcome to Zorknaders!\n To complete the game, you must collect all the items and bring them to the monster!", "Ok");
    else if (currentRoom->longDescription() == "before the BEAST"){
        if (checkItems())
            setScenario("CHAMPION", "Congratulations!!\nYou've won the game", "Ok");
        else
            setScenario("Monster", "You must appease the Monster by collecting all of the objectives", "Ok");
    }
    else if (isItem())
        setScenario("Item Found!", "You have found: " + currentRoom->getItem()->getDescription() +".\nDo you wish to pick it up or leave it?", "Pick up", "Leave");
    else
        setScenario("Zorknaders", "No items found!", "Ok");
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
    QString objs = "Appease the monster!!\nBring it the following items:\n\n";
    for (int i = 0; i < 1; i++)
        objs += objectives[i] + "\n";
    ui->txtObjectives->setText(objs);
}

void ScenarioBox::setupObjectives()
{
    objectives.push_back("temp");
    /*objectives.push_back("banana");
    objectives.push_back("orange");
    objectives.push_back("grape");
    objectives.push_back("pear");*/
}

bool ScenarioBox::checkItems()
{
    bool found = false;
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < items.size(); j++)
            if (objectives[i] == items[j])
                found = true;
        if (!found)
            return false;
    }
    return true;
}

void ScenarioBox::on_btnOptionA_clicked()
{
    //qDebug() << "button A clicked";
    if(isItem()){
       items.push_back(x->getDescription());
       currentRoom->removeItem();
    }
    close();
}

void ScenarioBox::on_btnOptionB_clicked()
{
    //qDebug() << "button B clicked";
    close();
}

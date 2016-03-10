#ifndef ITEM_H_
#define ITEM_H_

#include <QApplication>

class Item {
private:
    QString description;
public:
    Item (QString description);
    QString getDescription();
    void setDescription(QString x);
};

#endif /*ITEM_H_*/

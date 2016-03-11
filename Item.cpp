#include "Item.h"
#include <qdebug.h>

Item::Item(QString inDescription) {
    description = inDescription;
}
Item::~Item(){
    qDebug() << "Deleting Item :- " << description;
}

QString Item::getDescription()
{
    return description;
}
void Item::setDescription(QString x){
    this->description = x;
}

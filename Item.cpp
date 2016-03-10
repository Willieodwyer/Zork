#include "Item.h"

Item::Item(QString inDescription) {
    description = inDescription;
}

QString Item::getDescription()
{
    return description;
}
void Item::setDescription(QString x){
    this->description = x;
}

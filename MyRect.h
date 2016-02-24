#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QSet>

class MyRect: public QGraphicsRectItem{
private:
    QSet<int> pressedKeys;
public:

    void keyPressEvent(QKeyEvent * event);
    void moveLeft();
};

#endif // MYRECT_H

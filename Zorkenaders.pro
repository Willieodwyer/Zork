#-------------------------------------------------
#
# Project created by QtCreator 2016-02-22T13:43:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Zorkenaders
TEMPLATE = app


SOURCES += main.cpp \
    Game.cpp \
    Item.cpp \
    Room.cpp \
    mainmenu.cpp \
    scenariobox.cpp \
    Player.cpp \
    Map.cpp \
    Monster.cpp \
    Monstertimer.cpp \
    controlswindow.cpp

HEADERS  += \
    player.h \
    Game.h \
    Item.h \
    Room.h \
    mainmenu.h \
    scenariobox.h \
    Player.h \
    Map.h \
    Monster.h \
    Monstertimer.h \
    controlswindow.h

FORMS    += \
    mainmenu.ui \
    scenariobox.ui \
    controlswindow.ui

RESOURCES += \
    assets.qrc

DISTFILES +=

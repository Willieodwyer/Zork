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
    gamemenu.cpp \
    Player.cpp \
    Map.cpp \
    Monster.cpp \
    Monstertimer.cpp

HEADERS  += \
    player.h \
    Game.h \
    Item.h \
    Room.h \
    mainmenu.h \
    scenariobox.h \
    gamemenu.h \
    Player.h \
    Map.h \
    Monster.h \
    Monstertimer.h

FORMS    += \
    mainmenu.ui \
    scenariobox.ui \
    gamemenu.ui

RESOURCES += \
    assets.qrc

DISTFILES +=

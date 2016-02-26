#-------------------------------------------------
#
# Project created by QtCreator 2016-02-22T13:43:35
#
#-------------------------------------------------

QMAKE_CXX = ccache g++

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Zorkenaders
TEMPLATE = app


SOURCES += main.cpp \
    player.cpp

HEADERS  += \
    player.h

FORMS    +=

RESOURCES += \
    assets.qrc

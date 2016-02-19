#-------------------------------------------------
#
# Project created by QtCreator 2016-02-19T12:23:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZorkGUI
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    ../ZORK/Character.cpp \
    ../ZORK/Command.cpp \
    ../ZORK/CommandWords.cpp \
    ../ZORK/item.cpp \
    ../ZORK/Parser.cpp \
    ../ZORK/Room.cpp \
    ../ZORK/ZorkUL.cpp

HEADERS  += mainwindow.h \
    ../ZORK/Character.h \
    ../ZORK/Command.h \
    ../ZORK/CommandWords.h \
    ../ZORK/item.h \
    ../ZORK/Parser.h \
    ../ZORK/Room.h \
    ../ZORK/ZorkUL.h

FORMS    += mainwindow.ui

DISTFILES += \
    ../ZORK/README.md

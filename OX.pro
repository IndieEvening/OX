#-------------------------------------------------
#
# Project created by QtCreator 2014-07-18T23:43:48
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = OX
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    cgracz.cpp \
    cplansza.cpp \
    game.cpp

HEADERS += \
    cgracz.hpp \
    cplansza.hpp \
    game.hpp

CONFIG   += c++11

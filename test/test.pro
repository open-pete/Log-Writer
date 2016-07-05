#-------------------------------------------------
#
# Project created by QtCreator 2016-06-29T22:13:39
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = test
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    ../../LogWriter/src/logwriter.cpp \
    ../../LogWriter/src/slevel.cpp

HEADERS += \
    ../../LogWriter/include/slevel.h \
    ../../LogWriter/include/logwriter.h \
    catch.hpp

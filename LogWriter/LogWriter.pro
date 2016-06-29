#-------------------------------------------------
#
# Project created by QtCreator 2016-06-29T11:33:41
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = LogWriter
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    src/logwriter.cpp \
    src/slevel.cpp

HEADERS += \
    include/logwriter.h \
    include/slevel.h

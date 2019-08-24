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

INCLUDEPATH += include/
INCLUDEPATH += ../include/


SOURCES += main.cpp \
    src/LogWriter.cpp \
    src/SLevel.cpp

HEADERS += \
    include/LogWriter.h \
    include/SLevel.h

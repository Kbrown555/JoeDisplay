#-------------------------------------------------
#
# Project created by QtCreator 2017-04-26T23:49:32
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AirRide
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Serial.cpp

HEADERS  += mainwindow.h \
    Serial.h

FORMS    += mainwindow.ui


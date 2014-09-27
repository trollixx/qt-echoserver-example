QT += core network
QT -= gui

TARGET = QtEchoTcpServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    echoserver.cpp

HEADERS += \
    echoserver.h

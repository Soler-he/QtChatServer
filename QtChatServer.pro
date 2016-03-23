#-------------------------------------------------
#
# Project created by QtCreator 2016-03-23T16:55:53
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtChatServer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    tcpserver.cpp \
    tcpsocket.cpp

HEADERS  += widget.h \
    tcpserver.h \
    tcpsocket.h

FORMS    += widget.ui

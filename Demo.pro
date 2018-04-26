QT += core
QT -= gui

CONFIG += c++11

TARGET = Demo
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    SmallInt.h \
    Quote.h \
    Bulk_quote.h

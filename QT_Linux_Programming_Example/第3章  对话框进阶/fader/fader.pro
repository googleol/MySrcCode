######################################################################
# Automatically generated by qmake (2.01a) ?? ?? 7 17:37:33 2008
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += baseinfo.h configdialog.h contact.h detail.h fader.h
SOURCES += baseinfo.cpp \
           configdialog.cpp \
           contact.cpp \
           detail.cpp \
           fader.cpp \
           main.cpp
RESOURCES += configdialog.qrc

TRANSLATIONS += fader_zh.ts
DESTDIR=..\..\Bin
MOC_DIR=..\..\Temp\fader
RCC_DIR=..\..\Temp\fader
UI_DIR=..\..\Temp\fader
OBJECTS_DIR=..\..\Temp\fader
CONFIG( debug, debug|release ){
DESTDIR=..\..\Bin\Debug
BUILD_NAME = debug
}
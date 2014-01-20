#-------------------------------------------------
#
# Project created by QtCreator 2014-01-20T09:31:02
#
#-------------------------------------------------

QT       += network xml

QT       -= gui

QMAKE_CXXFLAGS += -std=c++11

TARGET = Repositories
TEMPLATE = lib

DEFINES += REPOSITORIES_LIBRARY

SOURCES += \
    httprepository.cpp

HEADERS +=\
        repositories_global.h \
    httprepository.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

INCLUDEPATH += $$PWD/../Domain
DEPENDPATH += $$PWD/../Domain

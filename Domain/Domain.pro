#-------------------------------------------------
#
# Project created by QtCreator 2014-01-20T09:35:59
#
#-------------------------------------------------

QT       -= gui

TARGET = Domain
TEMPLATE = lib

DEFINES += DOMAIN_LIBRARY

SOURCES +=

HEADERS +=\
        domain_global.h \
    SolutionServerResult.h \
    RegisteredUser.h \
    BankingDetail.h \
    LoginDetails.h \
    serializable.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

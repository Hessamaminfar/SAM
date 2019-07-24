#-------------------------------------------------
#
# Project created by QtCreator 2019-05-02T12:53:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = SAM_QT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11 \
static

SOURCES +=main.cpp \
        mainwindow.cpp \
        qcustomplot.cpp

INCLUDEPATH += armadillo\include

HEADERS += \
        2dplot.h \
        mainwindow.h \
        qcustomplot.h\
         SOLVERS.h

LIBS += \
        -LC:\Users\Fire-2\Downloads\armadillo-9.300.2.tar\armadillo-9.300.2\armadillo-9.300.2\examples\lib_win64
        -llapack_win64_MT
        -lblas_win64_MT

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

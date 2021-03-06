#-------------------------------------------------
#
# Project created by QtCreator 2019-04-20T00:07:19
#
#-------------------------------------------------_

QT       += core gui
QT       += multimedia
QT       += x11extras
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Vass_2
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

CONFIG += c++11
CONFIG    += link_pkgconfig
PKGCONFIG += x11

SOURCES += \
        src/code/config.cpp \
        src/code/event_filter.cpp \
        src/code/icon_panel.cpp \
        src/code/main.cpp \
        src/code/mainwindow.cpp \
        src/code/saver.cpp \
        src/code/shortcut.cpp \
        src/code/shortcut.cpp \
        src/code/shortcut.cpp \
        src/code/shortcut_v.cpp \
        src/code/submit_removal.cpp

RC_ICONS=icon2.png

HEADERS += \
        src/headers/config.h \
        src/headers/event_filter.h \
        src/headers/icon_panel.h \
        src/headers/mainwindow.h \
        src/headers/saver.h \
        src/headers/shortcut.h \
        src/headers/shortcut.h \
        src/headers/shortcut.h \
        src/headers/shortcut.h \
        src/headers/shortcut_v.h \
        src/headers/submit_removal.h
FORMS += \
        src/gui/config.ui \
        src/gui/icon_panel.ui \
        src/gui/mainwindow.ui \
        src/gui/submit_removal.ui
#QT+=multimedia



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc \
    resources.qrc



#unix|win32: LIBS += -L$$PWD/../ -lUGlobalHotkey

INCLUDEPATH += $$PWD/src
DEPENDPATH += $$PWD/src

#INCLUDEPATH +=$$PWD/../UGlobalHotkey

#win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../UGlobalHotkey.lib
#else:unix|win32-g++: PRE_TARGETDEPS += $$PWD/../libUGlobalHotkey.a

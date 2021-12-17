TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        command.cpp \
        controller.cpp \
        main.cpp \
        up.cpp

HEADERS += \
    command.h \
    controller.h \
    up.h

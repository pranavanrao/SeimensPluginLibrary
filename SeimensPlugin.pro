QT -= gui

TEMPLATE = lib
DEFINES += SEIMENSPLUGIN_LIBRARY

CONFIG += c++11

# This changes based on the your system kernal. Following command is used for Windows.
# For Unix (Linux or Mac) use => DESTDIR = $$PWD/bins
DESTDIR = $$PWD\\bins

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    seimensdevice.cpp

HEADERS += \
    SeimensPlugin_global.h \
    seimensdevice.h \
    seimensplugin.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

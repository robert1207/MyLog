#-------------------------------------------------
#
# Project created by QtCreator 2019-06-25T13:51:48
#
#-------------------------------------------------

QT       -= gui

TARGET = MyLog
TEMPLATE = lib
#Application version
VERSION = 1.0.1

DEFINES += MYLOG_LIBRARY

SOURCES += \
        console_logger.cpp \
        file_logger.cpp \
        log_level.cpp \
        logger_interface.cpp \
        my_log.cpp

HEADERS += \
        console_logger.h \
        file_logger.h \
        log_level.h \
        logger_interface.h \
        my_log.h \
        my_log_export.h \
        mylog_global.h  \
        printf_color.h \
        singletone/call_once.h \
        singletone/singleton.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES += \
    todo \
    version_changes \
    LICENSE \
    README.md \
    README.zh-cn.md


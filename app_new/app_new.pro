# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

# This is a reminder that you are using a generated .pro file.
# Remove it when you are finished editing this file.
message("You are running qmake on a generated .pro file. This may not work!")


TEMPLATE = app
TARGET = app_new
DESTDIR = ../Debug
QT += core gui sql xml xmlpatterns qtmain webkit
CONFIG += qtestlib debug
DEFINES += QT_LARGEFILE_SUPPORT QT_XML_LIB QT_SQL_LIB QT_XMLPATTERNS_LIB
INCLUDEPATH += ./GeneratedFiles \
    ./GeneratedFiles/Debug \
    . \
    $(BOOSTDIR) \
    ../../customctrl_solution/CustomTimeCtrl \
    ../../customctrl_solution/CustomTimeCtrl/GeneratedFiles \
    ../../CatchInputCtrl/CatchInputCtrl \
    ../../CatchInputCtrl/CatchInputCtrl/GeneratedFiles
LIBS += -L"$(QTDIR)/plugins/designer" \
    -lcustomtimectrld \
    -lCatchInputCtrld
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(app_new.pri)

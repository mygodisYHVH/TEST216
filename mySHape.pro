#-------------------------------------------------
#
# Project created by QtCreator 2019-01-07T18:39:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mySHape
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib
INCLUDEPATH +=D:\ACE_DDS\ACE_wrappers
INCLUDEPATH +=D:\ACE_DDS\OpenDDS-3.13
INCLUDEPATH +=D:\ACE_DDS\ACE_wrappers\TAO

LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lACEd
LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lTAOd
LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lTAO_AnyTypeCoded
LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lTAO_PortableServerd
LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lTAO_CodecFactoryd
LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lTAO_PId
LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lTAO_BiDirGIOPd
LIBS +=-LD:\ACE_DDS\ACE_wrappers\lib -lTAO_Svc_Utilsd
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Dcpsd
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_InfoRepoDiscoveryd
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Tcpd
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Modeld


LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Rtpsd
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Rtps_Udpd

LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Multicastd
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Shmemd
LIBS +=-LD:\ACE_DDS\OpenDDS-3.13\lib -lOpenDDS_Modeld

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Shape.cpp \
    ShapeTypeTypeSupportC.cpp \
    ShapeTypeTypeSupportC.inl \
    ShapeTypeC.cpp \
    ShapeTypeS.cpp \
    ShapeTypeTypeSupportImpl.cpp \
    ShapeTypeTypeSupportS.cpp \
    ShapeTypeC.inl \
    ReaderQosDialog.cpp \
    WriterQosDialog.cpp

HEADERS += \
        mainwindow.h \
    ShapeTypeTypeSupportC.h \
    ShapeTypeC.h \
    ShapeTypeS.h \
    ShapeTypeTypeSupportImpl.h \
    ShapeTypeTypeSupportS.h \
    ReaderQosDialog.hpp \
    WriterQosDialog.hpp

FORMS += \
        mainwindow.ui \
    readerQosForm.ui \
    writerQosForm.ui

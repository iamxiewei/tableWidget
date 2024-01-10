QT -= gui

QT += core widgets concurrent

TEMPLATE = lib
DEFINES += COMMON_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CChannelDataFrame.cpp \
    CCycleQueue.cpp \
    CInfo.cpp \
    Device/CDeviceInfo.cpp \
    Experiment/CExpChannelInfo.cpp \
    Experiment/CExperiment.cpp \
    Plugin/CComponent.cpp \
    Plugin/CComponentBuilder.cpp \
    Plugin/CInputPin.cpp \
    Plugin/CLogicComponent.cpp \
    Plugin/COutputPin.cpp \
    Plugin/CPin.cpp \
    Plugin/CUiComponent.cpp \
    Plugin/IPlugin.cpp \
    common.cpp

HEADERS += \
    CChannelDataFrame.h \
    CCycleQueue.h \
    CInfo.h \
    CSingletonPattern.h \
    Common_global.h \
    Constant/SystemConstant.h \
    Device/CDeviceInfo.h \
    Experiment/CExpChannelInfo.h \
    Experiment/CExperiment.h \
    Plugin/CComponent.h \
    Plugin/CComponentBuilder.h \
    Plugin/CInputPin.h \
    Plugin/CLogicComponent.h \
    Plugin/COutputPin.h \
    Plugin/CPin.h \
    Plugin/CUiComponent.h \
    Plugin/IPlugin.h \
    common.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}

win32 {
    message("win")

    INCLUDEPATH = $$PWD/../../thirdparty/Logger

    #指定生成的应用程序放置的目录
    CONFIG(debug,debug|release){
        DLLDESTDIR = $$PWD/../../../build/MainFrame/bin/x64/debug
        DESTDIR = $$PWD/../../../build/Common/lib/x64/debug

        LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lglog
    }

    CONFIG(release,debug|release){
        DLLDESTDIR = $$PWD/../../../build/MainFrame/bin/x64/release
        DESTDIR = $$PWD/../../../build/Common/lib/x64/release

        LIBS += -L$$PWD/../../../thirdparty/lib/Release -lglog
    }
}

android {
    message("android")
    QT += androidextras

    DEFINES += OS_ANDROID

    INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger

    CONFIG(debug, debug|release){
        DESTDIR = $$PWD/../../../build/Common/lib/$${QT_ARCH}/debug
        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lglog_$${QT_ARCH}
    } else {
        DESTDIR = $$PWD/../../../build/Common/lib/$${QT_ARCH}/release
        LIBS   += -L$$PWD/../../../thirdparty/lib/Release -lglog_$${QT_ARCH}
    }
}

macx {
    message("mac")

    INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger

    CONFIG(debug, debug|release){
        DESTDIR = $$PWD/../../../build/Common/lib/$${QT_ARCH}/debug
        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lglog
    } else {
        DESTDIR = $$PWD/../../../build/Common/lib/$${QT_ARCH}/release
        LIBS   += -L$$PWD/../../../thirdparty/lib/Release -lglog
    }
}


!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource/Common.qrc

FORMS +=


QT       += core gui openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(./QtGifImage/src/gifimage/qtgifimage.pri)

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../func/parser.c \
    main.cpp \
    mainwindow.cpp \
    modelviewer.cpp

HEADERS += \
    ../backend.h \
    ../gif.h \
    mainwindow.h \
    modelviewer.h


FORMS += \
    mainwindow.ui

CONFIG += lrelease

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    QtGifImage-master/examples/examples.pro \
    QtGifImage-master/examples/gifimage/creategif/creategif.pro \
    QtGifImage-master/examples/gifimage/extractFrames/extractFrames.pro \
    QtGifImage-master/examples/gifimage/gifimage.pro \
    QtGifImage-master/qtgifimage.pro \
    QtGifImage-master/src/gifimage/doc/snippets/doc_src_qtgifimage.pro \
    QtGifImage-master/src/gifimage/gifimage.pro \
    QtGifImage-master/src/src.pro \
    QtGifImage-master/tests/auto/auto.pro \
    QtGifImage-master/tests/auto/qgifimage/qgifimage.pro \
    QtGifImage-master/tests/tests.pro

DISTFILES += \
    QtGifImage-master/README.md \
    QtGifImage-master/examples/gifimage/creategif/doc/images/demo1.gif \
    QtGifImage-master/examples/gifimage/creategif/doc/src/creategif.qdoc \
    QtGifImage-master/examples/gifimage/extractFrames/doc/src/extractframes.qdoc \
    QtGifImage-master/examples/gifimage/extractFrames/test.gif \
    QtGifImage-master/index.qdoc \
    QtGifImage-master/lib/QtGifImage.framework/Resources/Info.plist \
    QtGifImage-master/lib/QtGifImage.framework/Resources/QtGifImage.prl \
    QtGifImage-master/lib/QtGifImage.framework/Versions/A/Resources/Info.plist \
    QtGifImage-master/lib/QtGifImage.framework/Versions/A/Resources/QtGifImage.prl \
    QtGifImage-master/lib/QtGifImage.framework/Versions/Current/Resources/Info.plist \
    QtGifImage-master/lib/QtGifImage.framework/Versions/Current/Resources/QtGifImage.prl \
    QtGifImage-master/lib/pkgconfig/Qt6GifImage.pc \
    QtGifImage-master/mkspecs/modules-inst/qt_lib_gifimage.pri \
    QtGifImage-master/mkspecs/modules-inst/qt_lib_gifimage_private.pri \
    QtGifImage-master/mkspecs/modules/qt_lib_gifimage.pri \
    QtGifImage-master/qtgifimage.qdoc \
    QtGifImage-master/src/3rdParty/giflib.pri \
    QtGifImage-master/src/3rdParty/giflib/AUTHORS \
    QtGifImage-master/src/3rdParty/giflib/COPYING \
    QtGifImage-master/src/3rdParty/giflib/README \
    QtGifImage-master/src/gifimage/doc/qtgifimage.qdocconf \
    QtGifImage-master/src/gifimage/doc/src/examples.qdoc \
    QtGifImage-master/src/gifimage/doc/src/index.qdoc \
    QtGifImage-master/src/gifimage/doc/src/qtgifimage.qdoc \
    QtGifImage-master/src/gifimage/doc/src/usage.qdoc \
    QtGifImage-master/src/gifimage/qdoc_wrapper.sh \
    QtGifImage-master/src/gifimage/qtgifimage.pri \
    QtGifImage-master/sync.profile \
    QtGifImage-master/tests/auto/qgifimage/test.gif

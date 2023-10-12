/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../front/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 24), // "on_pushButton_15_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 16), // "on_clean_clicked"
QT_MOC_LITERAL(54, 21), // "on_screenshot_clicked"
QT_MOC_LITERAL(76, 14), // "on_GIF_clicked"
QT_MOC_LITERAL(91, 9), // "createGif"
QT_MOC_LITERAL(101, 8), // "fileName"
QT_MOC_LITERAL(110, 20), // "set_color_background"
QT_MOC_LITERAL(131, 16), // "update_spinbox_x"
QT_MOC_LITERAL(148, 5), // "value"
QT_MOC_LITERAL(154, 16), // "update_spinBox_y"
QT_MOC_LITERAL(171, 16), // "update_spinBox_z"
QT_MOC_LITERAL(188, 26), // "updateHorizontalScrollBarX"
QT_MOC_LITERAL(215, 26), // "updateHorizontalScrollBarY"
QT_MOC_LITERAL(242, 26) // "updateHorizontalScrollBarZ"

    },
    "MainWindow\0on_pushButton_15_clicked\0"
    "\0on_clean_clicked\0on_screenshot_clicked\0"
    "on_GIF_clicked\0createGif\0fileName\0"
    "set_color_background\0update_spinbox_x\0"
    "value\0update_spinBox_y\0update_spinBox_z\0"
    "updateHorizontalScrollBarX\0"
    "updateHorizontalScrollBarY\0"
    "updateHorizontalScrollBarZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    1,   90,    2, 0x08,    5 /* Private */,
       8,    0,   93,    2, 0x08,    7 /* Private */,
       9,    1,   94,    2, 0x08,    8 /* Private */,
      11,    1,   97,    2, 0x08,   10 /* Private */,
      12,    1,  100,    2, 0x08,   12 /* Private */,
      13,    1,  103,    2, 0x08,   14 /* Private */,
      14,    1,  106,    2, 0x08,   16 /* Private */,
      15,    1,  109,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_15_clicked(); break;
        case 1: _t->on_clean_clicked(); break;
        case 2: _t->on_screenshot_clicked(); break;
        case 3: _t->on_GIF_clicked(); break;
        case 4: _t->createGif((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->set_color_background(); break;
        case 6: _t->update_spinbox_x((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->update_spinBox_y((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->update_spinBox_z((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateHorizontalScrollBarX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateHorizontalScrollBarY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateHorizontalScrollBarZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

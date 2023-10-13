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
    const uint offsetsAndSize[38];
    char stringdata0[327];
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
QT_MOC_LITERAL(110, 14), // "update_spinbox"
QT_MOC_LITERAL(125, 5), // "value"
QT_MOC_LITERAL(131, 26), // "updateHorizontalScrollBarX"
QT_MOC_LITERAL(158, 26), // "updateHorizontalScrollBarY"
QT_MOC_LITERAL(185, 26), // "updateHorizontalScrollBarZ"
QT_MOC_LITERAL(212, 22), // "update_moveScrollBar_x"
QT_MOC_LITERAL(235, 22), // "update_moveScrollBar_y"
QT_MOC_LITERAL(258, 22), // "update_moveScrollBar_z"
QT_MOC_LITERAL(281, 15), // "ScrollBar_scale"
QT_MOC_LITERAL(297, 22), // "horizontal_scroll_edge"
QT_MOC_LITERAL(320, 6) // "action"

    },
    "MainWindow\0on_pushButton_15_clicked\0"
    "\0on_clean_clicked\0on_screenshot_clicked\0"
    "on_GIF_clicked\0createGif\0fileName\0"
    "update_spinbox\0value\0updateHorizontalScrollBarX\0"
    "updateHorizontalScrollBarY\0"
    "updateHorizontalScrollBarZ\0"
    "update_moveScrollBar_x\0update_moveScrollBar_y\0"
    "update_moveScrollBar_z\0ScrollBar_scale\0"
    "horizontal_scroll_edge\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    1,  102,    2, 0x08,    5 /* Private */,
       8,    1,  105,    2, 0x08,    7 /* Private */,
      10,    1,  108,    2, 0x08,    9 /* Private */,
      11,    1,  111,    2, 0x08,   11 /* Private */,
      12,    1,  114,    2, 0x08,   13 /* Private */,
      13,    1,  117,    2, 0x08,   15 /* Private */,
      14,    1,  120,    2, 0x08,   17 /* Private */,
      15,    1,  123,    2, 0x08,   19 /* Private */,
      16,    1,  126,    2, 0x08,   21 /* Private */,
      17,    1,  129,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   18,

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
        case 5: _t->update_spinbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateHorizontalScrollBarX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateHorizontalScrollBarY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateHorizontalScrollBarZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->update_moveScrollBar_x((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->update_moveScrollBar_y((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->update_moveScrollBar_z((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->ScrollBar_scale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->horizontal_scroll_edge((*reinterpret_cast< int(*)>(_a[1]))); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

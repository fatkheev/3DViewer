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
    const uint offsetsAndSize[46];
    char stringdata0[376];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 20), // "on_open_file_clicked"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 16), // "on_clean_clicked"
QT_MOC_LITERAL(50, 21), // "on_screenshot_clicked"
QT_MOC_LITERAL(72, 14), // "on_GIF_clicked"
QT_MOC_LITERAL(87, 10), // "create_gif"
QT_MOC_LITERAL(98, 20), // "applySettingsToModel"
QT_MOC_LITERAL(119, 14), // "update_spinbox"
QT_MOC_LITERAL(134, 5), // "value"
QT_MOC_LITERAL(140, 26), // "updateHorizontalScrollBarX"
QT_MOC_LITERAL(167, 26), // "updateHorizontalScrollBarY"
QT_MOC_LITERAL(194, 26), // "updateHorizontalScrollBarZ"
QT_MOC_LITERAL(221, 22), // "update_moveScrollBar_x"
QT_MOC_LITERAL(244, 22), // "update_moveScrollBar_y"
QT_MOC_LITERAL(267, 22), // "update_moveScrollBar_z"
QT_MOC_LITERAL(290, 16), // "scroll_bar_scale"
QT_MOC_LITERAL(307, 22), // "horizontal_scroll_edge"
QT_MOC_LITERAL(330, 6), // "action"
QT_MOC_LITERAL(337, 16), // "countUniqueEdges"
QT_MOC_LITERAL(354, 5), // "Face*"
QT_MOC_LITERAL(360, 5), // "faces"
QT_MOC_LITERAL(366, 9) // "num_faces"

    },
    "MainWindow\0on_open_file_clicked\0\0"
    "on_clean_clicked\0on_screenshot_clicked\0"
    "on_GIF_clicked\0create_gif\0"
    "applySettingsToModel\0update_spinbox\0"
    "value\0updateHorizontalScrollBarX\0"
    "updateHorizontalScrollBarY\0"
    "updateHorizontalScrollBarZ\0"
    "update_moveScrollBar_x\0update_moveScrollBar_y\0"
    "update_moveScrollBar_z\0scroll_bar_scale\0"
    "horizontal_scroll_edge\0action\0"
    "countUniqueEdges\0Face*\0faces\0num_faces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    1,  116,    2, 0x08,    7 /* Private */,
      10,    1,  119,    2, 0x08,    9 /* Private */,
      11,    1,  122,    2, 0x08,   11 /* Private */,
      12,    1,  125,    2, 0x08,   13 /* Private */,
      13,    1,  128,    2, 0x08,   15 /* Private */,
      14,    1,  131,    2, 0x08,   17 /* Private */,
      15,    1,  134,    2, 0x08,   19 /* Private */,
      16,    1,  137,    2, 0x08,   21 /* Private */,
      17,    1,  140,    2, 0x08,   23 /* Private */,
      19,    2,  143,    2, 0x08,   25 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Int, 0x80000000 | 20, QMetaType::Int,   21,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_open_file_clicked(); break;
        case 1: _t->on_clean_clicked(); break;
        case 2: _t->on_screenshot_clicked(); break;
        case 3: _t->on_GIF_clicked(); break;
        case 4: _t->create_gif(); break;
        case 5: _t->applySettingsToModel(); break;
        case 6: _t->update_spinbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateHorizontalScrollBarX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateHorizontalScrollBarY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateHorizontalScrollBarZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->update_moveScrollBar_x((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->update_moveScrollBar_y((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->update_moveScrollBar_z((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->scroll_bar_scale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->horizontal_scroll_edge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: { int _r = _t->countUniqueEdges((*reinterpret_cast< Face*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<Face *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'modelviewer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../front/modelviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelViewer_t {
    const uint offsetsAndSize[30];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ModelViewer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ModelViewer_t qt_meta_stringdata_ModelViewer = {
    {
QT_MOC_LITERAL(0, 11), // "ModelViewer"
QT_MOC_LITERAL(12, 36), // "on_horizontalScrollBar_xValue..."
QT_MOC_LITERAL(49, 0), // ""
QT_MOC_LITERAL(50, 5), // "value"
QT_MOC_LITERAL(56, 36), // "on_horizontalScrollBar_yValue..."
QT_MOC_LITERAL(93, 36), // "on_horizontalScrollBar_zValue..."
QT_MOC_LITERAL(130, 30), // "on_ScrollBar_scaleValueChanged"
QT_MOC_LITERAL(161, 30), // "on_moveScrollBar_xValueChanged"
QT_MOC_LITERAL(192, 30), // "on_moveScrollBar_yValueChanged"
QT_MOC_LITERAL(223, 30), // "on_moveScrollBar_zValueChanged"
QT_MOC_LITERAL(254, 12), // "applyInertia"
QT_MOC_LITERAL(267, 20), // "set_background_color"
QT_MOC_LITERAL(288, 5), // "color"
QT_MOC_LITERAL(294, 14), // "set_edge_color"
QT_MOC_LITERAL(309, 16) // "set_vertex_color"

    },
    "ModelViewer\0on_horizontalScrollBar_xValueChanged\0"
    "\0value\0on_horizontalScrollBar_yValueChanged\0"
    "on_horizontalScrollBar_zValueChanged\0"
    "on_ScrollBar_scaleValueChanged\0"
    "on_moveScrollBar_xValueChanged\0"
    "on_moveScrollBar_yValueChanged\0"
    "on_moveScrollBar_zValueChanged\0"
    "applyInertia\0set_background_color\0"
    "color\0set_edge_color\0set_vertex_color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelViewer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x0a,    1 /* Public */,
       4,    1,   83,    2, 0x0a,    3 /* Public */,
       5,    1,   86,    2, 0x0a,    5 /* Public */,
       6,    1,   89,    2, 0x0a,    7 /* Public */,
       7,    1,   92,    2, 0x0a,    9 /* Public */,
       8,    1,   95,    2, 0x0a,   11 /* Public */,
       9,    1,   98,    2, 0x0a,   13 /* Public */,
      10,    0,  101,    2, 0x0a,   15 /* Public */,
      11,    1,  102,    2, 0x0a,   16 /* Public */,
      13,    1,  105,    2, 0x0a,   18 /* Public */,
      14,    1,  108,    2, 0x0a,   20 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void, QMetaType::QColor,   12,

       0        // eod
};

void ModelViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelViewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_horizontalScrollBar_xValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_horizontalScrollBar_yValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_horizontalScrollBar_zValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_ScrollBar_scaleValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_moveScrollBar_xValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_moveScrollBar_yValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_moveScrollBar_zValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->applyInertia(); break;
        case 8: _t->set_background_color((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->set_edge_color((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->set_vertex_color((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ModelViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_ModelViewer.offsetsAndSize,
    qt_meta_data_ModelViewer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ModelViewer_t
, QtPrivate::TypeAndForceComplete<ModelViewer, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>


>,
    nullptr
} };


const QMetaObject *ModelViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelViewer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int ModelViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

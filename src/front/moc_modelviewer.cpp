/****************************************************************************
** Meta object code from reading C++ file 'modelviewer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modelviewer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSModelViewerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModelViewerENDCLASS = QtMocHelpers::stringData(
    "ModelViewer",
    "on_horizontalScrollBar_xValueChanged",
    "",
    "value",
    "on_horizontalScrollBar_yValueChanged",
    "on_horizontalScrollBar_zValueChanged",
    "on_ScrollBar_scaleValueChanged",
    "on_moveScrollBar_xValueChanged",
    "on_moveScrollBar_yValueChanged",
    "on_moveScrollBar_zValueChanged",
    "applyInertia"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModelViewerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[12];
    char stringdata1[37];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[37];
    char stringdata5[37];
    char stringdata6[31];
    char stringdata7[31];
    char stringdata8[31];
    char stringdata9[31];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModelViewerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModelViewerENDCLASS_t qt_meta_stringdata_CLASSModelViewerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "ModelViewer"
        QT_MOC_LITERAL(12, 36),  // "on_horizontalScrollBar_xValue..."
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 5),  // "value"
        QT_MOC_LITERAL(56, 36),  // "on_horizontalScrollBar_yValue..."
        QT_MOC_LITERAL(93, 36),  // "on_horizontalScrollBar_zValue..."
        QT_MOC_LITERAL(130, 30),  // "on_ScrollBar_scaleValueChanged"
        QT_MOC_LITERAL(161, 30),  // "on_moveScrollBar_xValueChanged"
        QT_MOC_LITERAL(192, 30),  // "on_moveScrollBar_yValueChanged"
        QT_MOC_LITERAL(223, 30),  // "on_moveScrollBar_zValueChanged"
        QT_MOC_LITERAL(254, 12)   // "applyInertia"
    },
    "ModelViewer",
    "on_horizontalScrollBar_xValueChanged",
    "",
    "value",
    "on_horizontalScrollBar_yValueChanged",
    "on_horizontalScrollBar_zValueChanged",
    "on_ScrollBar_scaleValueChanged",
    "on_moveScrollBar_xValueChanged",
    "on_moveScrollBar_yValueChanged",
    "on_moveScrollBar_zValueChanged",
    "applyInertia"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModelViewerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       4,    1,   65,    2, 0x0a,    3 /* Public */,
       5,    1,   68,    2, 0x0a,    5 /* Public */,
       6,    1,   71,    2, 0x0a,    7 /* Public */,
       7,    1,   74,    2, 0x0a,    9 /* Public */,
       8,    1,   77,    2, 0x0a,   11 /* Public */,
       9,    1,   80,    2, 0x0a,   13 /* Public */,
      10,    0,   83,    2, 0x0a,   15 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModelViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSModelViewerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModelViewerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModelViewerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModelViewer, std::true_type>,
        // method 'on_horizontalScrollBar_xValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalScrollBar_yValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalScrollBar_zValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ScrollBar_scaleValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_moveScrollBar_xValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_moveScrollBar_yValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_moveScrollBar_zValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'applyInertia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModelViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelViewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_horizontalScrollBar_xValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_horizontalScrollBar_yValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_horizontalScrollBar_zValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_ScrollBar_scaleValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_moveScrollBar_xValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_moveScrollBar_yValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_moveScrollBar_zValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->applyInertia(); break;
        default: ;
        }
    }
}

const QMetaObject *ModelViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModelViewerENDCLASS.stringdata0))
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
/****************************************************************************
** Meta object code from reading C++ file 'mywin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mywin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mywin_t {
    QByteArrayData data[8];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mywin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mywin_t qt_meta_stringdata_mywin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "mywin"
QT_MOC_LITERAL(1, 6, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(4, 51, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(5, 84, 5), // "value"
QT_MOC_LITERAL(6, 90, 30), // "on_verticalSlider_valueChanged"
QT_MOC_LITERAL(7, 121, 20) // "on_buttonBox_clicked"

    },
    "mywin\0on_pushButton_clicked\0\0"
    "on_toolButton_clicked\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "on_verticalSlider_valueChanged\0"
    "on_buttonBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mywin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void mywin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mywin *_t = static_cast<mywin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_toolButton_clicked(); break;
        case 2: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_buttonBox_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject mywin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mywin.data,
      qt_meta_data_mywin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mywin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mywin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mywin.stringdata0))
        return static_cast<void*>(const_cast< mywin*>(this));
    return QWidget::qt_metacast(_clname);
}

int mywin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

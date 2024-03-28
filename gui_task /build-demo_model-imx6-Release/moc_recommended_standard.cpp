/****************************************************************************
** Meta object code from reading C++ file 'recommended_standard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../recommended_standard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recommended_standard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Recommended_standard_t {
    QByteArrayData data[8];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Recommended_standard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Recommended_standard_t qt_meta_stringdata_Recommended_standard = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Recommended_standard"
QT_MOC_LITERAL(1, 21, 15), // "on_Init_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "on_write_clicked"
QT_MOC_LITERAL(4, 55, 15), // "on_read_clicked"
QT_MOC_LITERAL(5, 71, 16), // "on_close_clicked"
QT_MOC_LITERAL(6, 88, 31), // "on_pushButton_backspace_clicked"
QT_MOC_LITERAL(7, 120, 27) // "on_pushButton_enter_clicked"

    },
    "Recommended_standard\0on_Init_clicked\0"
    "\0on_write_clicked\0on_read_clicked\0"
    "on_close_clicked\0on_pushButton_backspace_clicked\0"
    "on_pushButton_enter_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Recommended_standard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Recommended_standard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Recommended_standard *_t = static_cast<Recommended_standard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Init_clicked(); break;
        case 1: _t->on_write_clicked(); break;
        case 2: _t->on_read_clicked(); break;
        case 3: _t->on_close_clicked(); break;
        case 4: _t->on_pushButton_backspace_clicked(); break;
        case 5: _t->on_pushButton_enter_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Recommended_standard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Recommended_standard.data,
      qt_meta_data_Recommended_standard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Recommended_standard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Recommended_standard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Recommended_standard.stringdata0))
        return static_cast<void*>(const_cast< Recommended_standard*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Recommended_standard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

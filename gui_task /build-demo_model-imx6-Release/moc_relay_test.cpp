/****************************************************************************
** Meta object code from reading C++ file 'relay_test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../relay_test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'relay_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RELAY_TEST_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RELAY_TEST_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RELAY_TEST_t qt_meta_stringdata_RELAY_TEST = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RELAY_TEST"
QT_MOC_LITERAL(1, 11, 29), // "on_close_relay_window_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 20), // "on_relay1_on_clicked"
QT_MOC_LITERAL(4, 63, 9), // "relay1_on"
QT_MOC_LITERAL(5, 73, 21), // "on_relay1_off_clicked"
QT_MOC_LITERAL(6, 95, 10), // "relay1_off"
QT_MOC_LITERAL(7, 106, 20), // "on_relay2_on_clicked"
QT_MOC_LITERAL(8, 127, 9), // "relay2_on"
QT_MOC_LITERAL(9, 137, 21), // "on_relay2_off_clicked"
QT_MOC_LITERAL(10, 159, 10) // "relay2_off"

    },
    "RELAY_TEST\0on_close_relay_window_clicked\0"
    "\0on_relay1_on_clicked\0relay1_on\0"
    "on_relay1_off_clicked\0relay1_off\0"
    "on_relay2_on_clicked\0relay2_on\0"
    "on_relay2_off_clicked\0relay2_off"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RELAY_TEST[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RELAY_TEST::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RELAY_TEST *_t = static_cast<RELAY_TEST *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_relay_window_clicked(); break;
        case 1: _t->on_relay1_on_clicked(); break;
        case 2: _t->relay1_on(); break;
        case 3: _t->on_relay1_off_clicked(); break;
        case 4: _t->relay1_off(); break;
        case 5: _t->on_relay2_on_clicked(); break;
        case 6: _t->relay2_on(); break;
        case 7: _t->on_relay2_off_clicked(); break;
        case 8: _t->relay2_off(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RELAY_TEST::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RELAY_TEST.data,
      qt_meta_data_RELAY_TEST,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RELAY_TEST::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RELAY_TEST::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RELAY_TEST.stringdata0))
        return static_cast<void*>(const_cast< RELAY_TEST*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RELAY_TEST::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

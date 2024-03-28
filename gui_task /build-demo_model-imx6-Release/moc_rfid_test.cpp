/****************************************************************************
** Meta object code from reading C++ file 'rfid_test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rfid_test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rfid_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RFID_test_t {
    QByteArrayData data[11];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RFID_test_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RFID_test_t qt_meta_stringdata_RFID_test = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RFID_test"
QT_MOC_LITERAL(1, 10, 28), // "on_close_rfid_window_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 32), // "on_connecting_to_CL_card_clicked"
QT_MOC_LITERAL(4, 73, 35), // "on_disconnecting_to_CL_card_c..."
QT_MOC_LITERAL(5, 109, 18), // "onCardInfoDetected"
QT_MOC_LITERAL(6, 128, 8), // "cardInfo"
QT_MOC_LITERAL(7, 137, 26), // "errorCheckForConnectCLCard"
QT_MOC_LITERAL(8, 164, 8), // "uint32_t"
QT_MOC_LITERAL(9, 173, 8), // "retValue"
QT_MOC_LITERAL(10, 182, 13) // "selectMFandEF"

    },
    "RFID_test\0on_close_rfid_window_clicked\0"
    "\0on_connecting_to_CL_card_clicked\0"
    "on_disconnecting_to_CL_card_clicked\0"
    "onCardInfoDetected\0cardInfo\0"
    "errorCheckForConnectCLCard\0uint32_t\0"
    "retValue\0selectMFandEF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RFID_test[] = {

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
       5,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
      10,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void RFID_test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RFID_test *_t = static_cast<RFID_test *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_rfid_window_clicked(); break;
        case 1: _t->on_connecting_to_CL_card_clicked(); break;
        case 2: _t->on_disconnecting_to_CL_card_clicked(); break;
        case 3: _t->onCardInfoDetected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->errorCheckForConnectCLCard((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 5: _t->selectMFandEF(); break;
        default: ;
        }
    }
}

const QMetaObject RFID_test::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RFID_test.data,
      qt_meta_data_RFID_test,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RFID_test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RFID_test::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RFID_test.stringdata0))
        return static_cast<void*>(const_cast< RFID_test*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RFID_test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

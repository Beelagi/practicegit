/****************************************************************************
** Meta object code from reading C++ file 'ethernet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ethernet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ethernet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ETHERNET_t {
    QByteArrayData data[15];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ETHERNET_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ETHERNET_t qt_meta_stringdata_ETHERNET = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ETHERNET"
QT_MOC_LITERAL(1, 9, 25), // "on_close_ethernet_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "openKeyboardWindow"
QT_MOC_LITERAL(4, 55, 26), // "open_second_KeyboardWindow"
QT_MOC_LITERAL(5, 82, 25), // "open_third_KeyboardWindow"
QT_MOC_LITERAL(6, 108, 11), // "eventFilter"
QT_MOC_LITERAL(7, 120, 6), // "object"
QT_MOC_LITERAL(8, 127, 7), // "QEvent*"
QT_MOC_LITERAL(9, 135, 5), // "event"
QT_MOC_LITERAL(10, 141, 22), // "on_ping_button_clicked"
QT_MOC_LITERAL(11, 164, 17), // "onOkButtonClicked"
QT_MOC_LITERAL(12, 182, 4), // "text"
QT_MOC_LITERAL(13, 187, 33), // "onOkButtonClicked_second_keyb..."
QT_MOC_LITERAL(14, 221, 32) // "onOkButtonClicked_third_keyboard"

    },
    "ETHERNET\0on_close_ethernet_clicked\0\0"
    "openKeyboardWindow\0open_second_KeyboardWindow\0"
    "open_third_KeyboardWindow\0eventFilter\0"
    "object\0QEvent*\0event\0on_ping_button_clicked\0"
    "onOkButtonClicked\0text\0"
    "onOkButtonClicked_second_keyboard\0"
    "onOkButtonClicked_third_keyboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ETHERNET[] = {

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
       6,    2,   63,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void ETHERNET::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ETHERNET *_t = static_cast<ETHERNET *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_ethernet_clicked(); break;
        case 1: _t->openKeyboardWindow(); break;
        case 2: _t->open_second_KeyboardWindow(); break;
        case 3: _t->open_third_KeyboardWindow(); break;
        case 4: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->on_ping_button_clicked(); break;
        case 6: _t->onOkButtonClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onOkButtonClicked_second_keyboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onOkButtonClicked_third_keyboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ETHERNET::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ETHERNET.data,
      qt_meta_data_ETHERNET,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ETHERNET::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ETHERNET::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ETHERNET.stringdata0))
        return static_cast<void*>(const_cast< ETHERNET*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ETHERNET::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

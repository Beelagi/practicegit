/****************************************************************************
** Meta object code from reading C++ file 'test_screen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test_screen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_screen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TEST_SCREEN_t {
    QByteArrayData data[17];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TEST_SCREEN_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TEST_SCREEN_t qt_meta_stringdata_TEST_SCREEN = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TEST_SCREEN"
QT_MOC_LITERAL(1, 12, 8), // "gpioInit"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "configureGPIO"
QT_MOC_LITERAL(4, 36, 3), // "pin"
QT_MOC_LITERAL(5, 40, 15), // "on_home_clicked"
QT_MOC_LITERAL(6, 56, 19), // "on_lcd_test_clicked"
QT_MOC_LITERAL(7, 76, 21), // "on_relay_test_clicked"
QT_MOC_LITERAL(8, 98, 23), // "on_speaker_test_clicked"
QT_MOC_LITERAL(9, 122, 19), // "on_led_test_clicked"
QT_MOC_LITERAL(10, 142, 19), // "on_sam_test_clicked"
QT_MOC_LITERAL(11, 162, 20), // "on_RFID_test_clicked"
QT_MOC_LITERAL(12, 183, 25), // "on_finger_capture_clicked"
QT_MOC_LITERAL(13, 209, 19), // "on_ethernet_clicked"
QT_MOC_LITERAL(14, 229, 17), // "on_rs_485_clicked"
QT_MOC_LITERAL(15, 247, 23), // "on_weigand_test_clicked"
QT_MOC_LITERAL(16, 271, 16) // "on_close_clicked"

    },
    "TEST_SCREEN\0gpioInit\0\0configureGPIO\0"
    "pin\0on_home_clicked\0on_lcd_test_clicked\0"
    "on_relay_test_clicked\0on_speaker_test_clicked\0"
    "on_led_test_clicked\0on_sam_test_clicked\0"
    "on_RFID_test_clicked\0on_finger_capture_clicked\0"
    "on_ethernet_clicked\0on_rs_485_clicked\0"
    "on_weigand_test_clicked\0on_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TEST_SCREEN[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void TEST_SCREEN::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TEST_SCREEN *_t = static_cast<TEST_SCREEN *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gpioInit(); break;
        case 1: _t->configureGPIO((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_home_clicked(); break;
        case 3: _t->on_lcd_test_clicked(); break;
        case 4: _t->on_relay_test_clicked(); break;
        case 5: _t->on_speaker_test_clicked(); break;
        case 6: _t->on_led_test_clicked(); break;
        case 7: _t->on_sam_test_clicked(); break;
        case 8: _t->on_RFID_test_clicked(); break;
        case 9: _t->on_finger_capture_clicked(); break;
        case 10: _t->on_ethernet_clicked(); break;
        case 11: _t->on_rs_485_clicked(); break;
        case 12: _t->on_weigand_test_clicked(); break;
        case 13: _t->on_close_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject TEST_SCREEN::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TEST_SCREEN.data,
      qt_meta_data_TEST_SCREEN,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TEST_SCREEN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TEST_SCREEN::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TEST_SCREEN.stringdata0))
        return static_cast<void*>(const_cast< TEST_SCREEN*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TEST_SCREEN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

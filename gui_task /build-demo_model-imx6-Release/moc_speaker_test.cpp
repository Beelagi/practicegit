/****************************************************************************
** Meta object code from reading C++ file 'speaker_test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../speaker_test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speaker_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SPEAKER_TEST_t {
    QByteArrayData data[10];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SPEAKER_TEST_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SPEAKER_TEST_t qt_meta_stringdata_SPEAKER_TEST = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SPEAKER_TEST"
QT_MOC_LITERAL(1, 13, 29), // "on_close_audio_volume_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 20), // "on_thank_you_clicked"
QT_MOC_LITERAL(4, 65, 26), // "on_volume_change_activated"
QT_MOC_LITERAL(5, 92, 4), // "arg1"
QT_MOC_LITERAL(6, 97, 25), // "on_access_granted_clicked"
QT_MOC_LITERAL(7, 123, 10), // "enableGPIO"
QT_MOC_LITERAL(8, 134, 11), // "disableGPIO"
QT_MOC_LITERAL(9, 146, 24) // "on_access_denied_clicked"

    },
    "SPEAKER_TEST\0on_close_audio_volume_clicked\0"
    "\0on_thank_you_clicked\0on_volume_change_activated\0"
    "arg1\0on_access_granted_clicked\0"
    "enableGPIO\0disableGPIO\0on_access_denied_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SPEAKER_TEST[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SPEAKER_TEST::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SPEAKER_TEST *_t = static_cast<SPEAKER_TEST *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_audio_volume_clicked(); break;
        case 1: _t->on_thank_you_clicked(); break;
        case 2: _t->on_volume_change_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_access_granted_clicked(); break;
        case 4: _t->enableGPIO(); break;
        case 5: _t->disableGPIO(); break;
        case 6: _t->on_access_denied_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SPEAKER_TEST::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SPEAKER_TEST.data,
      qt_meta_data_SPEAKER_TEST,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SPEAKER_TEST::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SPEAKER_TEST::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SPEAKER_TEST.stringdata0))
        return static_cast<void*>(const_cast< SPEAKER_TEST*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SPEAKER_TEST::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

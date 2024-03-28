/****************************************************************************
** Meta object code from reading C++ file 'finger_print_capture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "finger_print_capture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finger_print_capture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FINGER_PRINT_CAPTURE_t {
    QByteArrayData data[6];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FINGER_PRINT_CAPTURE_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FINGER_PRINT_CAPTURE_t qt_meta_stringdata_FINGER_PRINT_CAPTURE = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FINGER_PRINT_CAPTURE"
QT_MOC_LITERAL(1, 21, 27), // "on_close_fp_capture_clicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 24), // "on_start_FP_test_clicked"
QT_MOC_LITERAL(4, 75, 26), // "on_start_FP_test_2_clicked"
QT_MOC_LITERAL(5, 102, 22) // "on_verify_test_clicked"

    },
    "FINGER_PRINT_CAPTURE\0on_close_fp_capture_clicked\0"
    "\0on_start_FP_test_clicked\0"
    "on_start_FP_test_2_clicked\0"
    "on_verify_test_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FINGER_PRINT_CAPTURE[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FINGER_PRINT_CAPTURE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FINGER_PRINT_CAPTURE *_t = static_cast<FINGER_PRINT_CAPTURE *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_fp_capture_clicked(); break;
        case 1: _t->on_start_FP_test_clicked(); break;
        case 2: _t->on_start_FP_test_2_clicked(); break;
        case 3: _t->on_verify_test_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FINGER_PRINT_CAPTURE::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FINGER_PRINT_CAPTURE.data,
      qt_meta_data_FINGER_PRINT_CAPTURE,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FINGER_PRINT_CAPTURE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FINGER_PRINT_CAPTURE::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FINGER_PRINT_CAPTURE.stringdata0))
        return static_cast<void*>(const_cast< FINGER_PRINT_CAPTURE*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FINGER_PRINT_CAPTURE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

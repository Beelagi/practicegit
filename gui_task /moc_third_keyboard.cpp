/****************************************************************************
** Meta object code from reading C++ file 'third_keyboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "third_keyboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'third_keyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_THIRD_KEYBOARD_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_THIRD_KEYBOARD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_THIRD_KEYBOARD_t qt_meta_stringdata_THIRD_KEYBOARD = {
    {
QT_MOC_LITERAL(0, 0, 14), // "THIRD_KEYBOARD"
QT_MOC_LITERAL(1, 15, 30), // "okButtonClicked_third_keyboard"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4), // "text"
QT_MOC_LITERAL(4, 52, 27), // "on_close_pushButton_clicked"
QT_MOC_LITERAL(5, 80, 24), // "on_ok_pushButton_clicked"
QT_MOC_LITERAL(6, 105, 31), // "on_backspace_pushButton_clicked"
QT_MOC_LITERAL(7, 137, 23) // "onAlphabetButtonClicked"

    },
    "THIRD_KEYBOARD\0okButtonClicked_third_keyboard\0"
    "\0text\0on_close_pushButton_clicked\0"
    "on_ok_pushButton_clicked\0"
    "on_backspace_pushButton_clicked\0"
    "onAlphabetButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_THIRD_KEYBOARD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void THIRD_KEYBOARD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        THIRD_KEYBOARD *_t = static_cast<THIRD_KEYBOARD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->okButtonClicked_third_keyboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_close_pushButton_clicked(); break;
        case 2: _t->on_ok_pushButton_clicked(); break;
        case 3: _t->on_backspace_pushButton_clicked(); break;
        case 4: _t->onAlphabetButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (THIRD_KEYBOARD::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&THIRD_KEYBOARD::okButtonClicked_third_keyboard)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject THIRD_KEYBOARD::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_THIRD_KEYBOARD.data,
      qt_meta_data_THIRD_KEYBOARD,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *THIRD_KEYBOARD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *THIRD_KEYBOARD::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_THIRD_KEYBOARD.stringdata0))
        return static_cast<void*>(const_cast< THIRD_KEYBOARD*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int THIRD_KEYBOARD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void THIRD_KEYBOARD::okButtonClicked_third_keyboard(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

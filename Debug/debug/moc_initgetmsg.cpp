/****************************************************************************
** Meta object code from reading C++ file 'initgetmsg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../initgetmsg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initgetmsg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_initGetMsg_t {
    QByteArrayData data[10];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_initGetMsg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_initGetMsg_t qt_meta_stringdata_initGetMsg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "initGetMsg"
QT_MOC_LITERAL(1, 11, 12), // "initGetMsgOK"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "user"
QT_MOC_LITERAL(4, 30, 3), // "pwd"
QT_MOC_LITERAL(5, 34, 8), // "identity"
QT_MOC_LITERAL(6, 43, 4), // "path"
QT_MOC_LITERAL(7, 48, 11), // "returnLogin"
QT_MOC_LITERAL(8, 60, 19), // "on_btnInput_clicked"
QT_MOC_LITERAL(9, 80, 20) // "on_btnReturn_clicked"

    },
    "initGetMsg\0initGetMsgOK\0\0user\0pwd\0"
    "identity\0path\0returnLogin\0on_btnInput_clicked\0"
    "on_btnReturn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_initGetMsg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,
       7,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   44,    2, 0x08 /* Private */,
       9,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void initGetMsg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<initGetMsg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initGetMsgOK((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->returnLogin(); break;
        case 2: _t->on_btnInput_clicked(); break;
        case 3: _t->on_btnReturn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (initGetMsg::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&initGetMsg::initGetMsgOK)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (initGetMsg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&initGetMsg::returnLogin)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject initGetMsg::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_initGetMsg.data,
    qt_meta_data_initGetMsg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *initGetMsg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *initGetMsg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_initGetMsg.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int initGetMsg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void initGetMsg::initGetMsgOK(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void initGetMsg::returnLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

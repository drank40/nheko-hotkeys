/****************************************************************************
** Meta object code from reading C++ file 'RegisterPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/RegisterPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegisterPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegisterPage_t {
    QByteArrayData data[26];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterPage_t qt_meta_stringdata_RegisterPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RegisterPage"
QT_MOC_LITERAL(1, 13, 12), // "errorChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "hsErrorChanged"
QT_MOC_LITERAL(4, 42, 18), // "registeringChanged"
QT_MOC_LITERAL(5, 61, 18), // "lookingUpHsChanged"
QT_MOC_LITERAL(6, 80, 24), // "lookingUpUsernameChanged"
QT_MOC_LITERAL(7, 105, 10), // "registerOk"
QT_MOC_LITERAL(8, 116, 9), // "setServer"
QT_MOC_LITERAL(9, 126, 6), // "server"
QT_MOC_LITERAL(10, 133, 13), // "checkUsername"
QT_MOC_LITERAL(11, 147, 4), // "name"
QT_MOC_LITERAL(12, 152, 17), // "startRegistration"
QT_MOC_LITERAL(13, 170, 8), // "username"
QT_MOC_LITERAL(14, 179, 8), // "password"
QT_MOC_LITERAL(15, 188, 10), // "deviceName"
QT_MOC_LITERAL(16, 199, 17), // "initialDeviceName"
QT_MOC_LITERAL(17, 217, 5), // "error"
QT_MOC_LITERAL(18, 223, 7), // "hsError"
QT_MOC_LITERAL(19, 231, 13), // "usernameError"
QT_MOC_LITERAL(20, 245, 11), // "registering"
QT_MOC_LITERAL(21, 257, 9), // "supported"
QT_MOC_LITERAL(22, 267, 11), // "lookingUpHs"
QT_MOC_LITERAL(23, 279, 17), // "lookingUpUsername"
QT_MOC_LITERAL(24, 297, 17), // "usernameAvailable"
QT_MOC_LITERAL(25, 315, 19) // "usernameUnavailable"

    },
    "RegisterPage\0errorChanged\0\0hsErrorChanged\0"
    "registeringChanged\0lookingUpHsChanged\0"
    "lookingUpUsernameChanged\0registerOk\0"
    "setServer\0server\0checkUsername\0name\0"
    "startRegistration\0username\0password\0"
    "deviceName\0initialDeviceName\0error\0"
    "hsError\0usernameError\0registering\0"
    "supported\0lookingUpHs\0lookingUpUsername\0"
    "usernameAvailable\0usernameUnavailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   70,    2, 0x02 /* Public */,
      10,    1,   73,    2, 0x02 /* Public */,
      12,    3,   76,    2, 0x02 /* Public */,
      16,    0,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,
    QMetaType::QString,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::QString, 0x00495001,
      19, QMetaType::QString, 0x00495001,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::Bool, 0x00495001,
      22, QMetaType::Bool, 0x00495001,
      23, QMetaType::Bool, 0x00495001,
      24, QMetaType::Bool, 0x00495001,
      25, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       4,
       2,
       3,
       3,
       4,
       4,
       4,

       0        // eod
};

void RegisterPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegisterPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->errorChanged(); break;
        case 1: _t->hsErrorChanged(); break;
        case 2: _t->registeringChanged(); break;
        case 3: _t->lookingUpHsChanged(); break;
        case 4: _t->lookingUpUsernameChanged(); break;
        case 5: _t->registerOk(); break;
        case 6: _t->setServer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->checkUsername((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->startRegistration((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: { QString _r = _t->initialDeviceName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegisterPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterPage::errorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RegisterPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterPage::hsErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RegisterPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterPage::registeringChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RegisterPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterPage::lookingUpHsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RegisterPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterPage::lookingUpUsernameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RegisterPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegisterPage::registerOk)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RegisterPage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->error(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->hsError(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->usernameError(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->registering(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->supported(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->lookingUpHs(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->lookingUpUsername(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->usernameAvailable(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->usernameUnavailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RegisterPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RegisterPage.data,
    qt_meta_data_RegisterPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RegisterPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterPage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RegisterPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RegisterPage::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RegisterPage::hsErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RegisterPage::registeringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RegisterPage::lookingUpHsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RegisterPage::lookingUpUsernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void RegisterPage::registerOk()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

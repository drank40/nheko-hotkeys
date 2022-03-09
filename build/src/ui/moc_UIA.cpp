/****************************************************************************
** Meta object code from reading C++ file 'UIA.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/UIA.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIA.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UIA_t {
    QByteArrayData data[19];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UIA_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UIA_t qt_meta_stringdata_UIA = {
    {
QT_MOC_LITERAL(0, 0, 3), // "UIA"
QT_MOC_LITERAL(1, 4, 8), // "password"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 5), // "email"
QT_MOC_LITERAL(4, 20, 11), // "phoneNumber"
QT_MOC_LITERAL(5, 32, 16), // "confirm3pidToken"
QT_MOC_LITERAL(6, 49, 15), // "prompt3pidToken"
QT_MOC_LITERAL(7, 65, 13), // "tokenAccepted"
QT_MOC_LITERAL(8, 79, 12), // "titleChanged"
QT_MOC_LITERAL(9, 92, 5), // "error"
QT_MOC_LITERAL(10, 98, 3), // "msg"
QT_MOC_LITERAL(11, 102, 16), // "continuePassword"
QT_MOC_LITERAL(12, 119, 13), // "continueEmail"
QT_MOC_LITERAL(13, 133, 19), // "continuePhoneNumber"
QT_MOC_LITERAL(14, 153, 11), // "countryCode"
QT_MOC_LITERAL(15, 165, 15), // "submit3pidToken"
QT_MOC_LITERAL(16, 181, 5), // "token"
QT_MOC_LITERAL(17, 187, 20), // "continue3pidReceived"
QT_MOC_LITERAL(18, 208, 5) // "title"

    },
    "UIA\0password\0\0email\0phoneNumber\0"
    "confirm3pidToken\0prompt3pidToken\0"
    "tokenAccepted\0titleChanged\0error\0msg\0"
    "continuePassword\0continueEmail\0"
    "continuePhoneNumber\0countryCode\0"
    "submit3pidToken\0token\0continue3pidReceived\0"
    "title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UIA[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   89,    2, 0x0a /* Public */,
      12,    1,   92,    2, 0x0a /* Public */,
      13,    2,   95,    2, 0x0a /* Public */,
      15,    1,  100,    2, 0x0a /* Public */,
      17,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,    4,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       6,

       0        // eod
};

void UIA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UIA *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->password(); break;
        case 1: _t->email(); break;
        case 2: _t->phoneNumber(); break;
        case 3: _t->confirm3pidToken(); break;
        case 4: _t->prompt3pidToken(); break;
        case 5: _t->tokenAccepted(); break;
        case 6: _t->titleChanged(); break;
        case 7: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->continuePassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->continueEmail((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->continuePhoneNumber((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->submit3pidToken((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->continue3pidReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UIA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::password)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UIA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::email)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UIA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::phoneNumber)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UIA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::confirm3pidToken)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UIA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::prompt3pidToken)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UIA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::tokenAccepted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (UIA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::titleChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (UIA::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UIA::error)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UIA *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UIA::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UIA.data,
    qt_meta_data_UIA,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UIA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UIA::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UIA.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UIA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UIA::password()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UIA::email()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UIA::phoneNumber()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UIA::confirm3pidToken()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UIA::prompt3pidToken()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UIA::tokenAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void UIA::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void UIA::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

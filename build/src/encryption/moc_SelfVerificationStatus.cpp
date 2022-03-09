/****************************************************************************
** Meta object code from reading C++ file 'SelfVerificationStatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/encryption/SelfVerificationStatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelfVerificationStatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelfVerificationStatus_t {
    QByteArrayData data[24];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelfVerificationStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelfVerificationStatus_t qt_meta_stringdata_SelfVerificationStatus = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SelfVerificationStatus"
QT_MOC_LITERAL(1, 23, 13), // "statusChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "hasSSSSChanged"
QT_MOC_LITERAL(4, 53, 14), // "setupCompleted"
QT_MOC_LITERAL(5, 68, 15), // "showRecoveryKey"
QT_MOC_LITERAL(6, 84, 3), // "key"
QT_MOC_LITERAL(7, 88, 11), // "setupFailed"
QT_MOC_LITERAL(8, 100, 7), // "message"
QT_MOC_LITERAL(9, 108, 10), // "invalidate"
QT_MOC_LITERAL(10, 119, 17), // "setupCrosssigning"
QT_MOC_LITERAL(11, 137, 7), // "useSSSS"
QT_MOC_LITERAL(12, 145, 8), // "password"
QT_MOC_LITERAL(13, 154, 18), // "useOnlineKeyBackup"
QT_MOC_LITERAL(14, 173, 15), // "verifyMasterKey"
QT_MOC_LITERAL(15, 189, 29), // "verifyMasterKeyWithPassphrase"
QT_MOC_LITERAL(16, 219, 23), // "verifyUnverifiedDevices"
QT_MOC_LITERAL(17, 243, 6), // "status"
QT_MOC_LITERAL(18, 250, 6), // "Status"
QT_MOC_LITERAL(19, 257, 7), // "hasSSSS"
QT_MOC_LITERAL(20, 265, 11), // "AllVerified"
QT_MOC_LITERAL(21, 277, 11), // "NoMasterKey"
QT_MOC_LITERAL(22, 289, 19), // "UnverifiedMasterKey"
QT_MOC_LITERAL(23, 309, 17) // "UnverifiedDevices"

    },
    "SelfVerificationStatus\0statusChanged\0"
    "\0hasSSSSChanged\0setupCompleted\0"
    "showRecoveryKey\0key\0setupFailed\0message\0"
    "invalidate\0setupCrosssigning\0useSSSS\0"
    "password\0useOnlineKeyBackup\0verifyMasterKey\0"
    "verifyMasterKeyWithPassphrase\0"
    "verifyUnverifiedDevices\0status\0Status\0"
    "hasSSSS\0AllVerified\0NoMasterKey\0"
    "UnverifiedMasterKey\0UnverifiedDevices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelfVerificationStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   84, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   73,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    3,   74,    2, 0x02 /* Public */,
      14,    0,   81,    2, 0x02 /* Public */,
      15,    0,   82,    2, 0x02 /* Public */,
      16,    0,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00495009,
      19, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    4,   97,

 // enum data: key, value
      20, uint(SelfVerificationStatus::AllVerified),
      21, uint(SelfVerificationStatus::NoMasterKey),
      22, uint(SelfVerificationStatus::UnverifiedMasterKey),
      23, uint(SelfVerificationStatus::UnverifiedDevices),

       0        // eod
};

void SelfVerificationStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelfVerificationStatus *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->hasSSSSChanged(); break;
        case 2: _t->setupCompleted(); break;
        case 3: _t->showRecoveryKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setupFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->invalidate(); break;
        case 6: _t->setupCrosssigning((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->verifyMasterKey(); break;
        case 8: _t->verifyMasterKeyWithPassphrase(); break;
        case 9: _t->verifyUnverifiedDevices(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelfVerificationStatus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelfVerificationStatus::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SelfVerificationStatus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelfVerificationStatus::hasSSSSChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SelfVerificationStatus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelfVerificationStatus::setupCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SelfVerificationStatus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelfVerificationStatus::showRecoveryKey)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SelfVerificationStatus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelfVerificationStatus::setupFailed)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SelfVerificationStatus *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasSSSS(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SelfVerificationStatus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SelfVerificationStatus.data,
    qt_meta_data_SelfVerificationStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelfVerificationStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelfVerificationStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelfVerificationStatus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SelfVerificationStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SelfVerificationStatus::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SelfVerificationStatus::hasSSSSChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SelfVerificationStatus::setupCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SelfVerificationStatus::showRecoveryKey(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SelfVerificationStatus::setupFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

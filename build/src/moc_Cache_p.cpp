/****************************************************************************
** Meta object code from reading C++ file 'Cache_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/Cache_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cache_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cache_t {
    QByteArrayData data[22];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cache_t qt_meta_stringdata_Cache = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Cache"
QT_MOC_LITERAL(1, 6, 15), // "newReadReceipts"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "room_id"
QT_MOC_LITERAL(4, 31, 20), // "std::vector<QString>"
QT_MOC_LITERAL(5, 52, 9), // "event_ids"
QT_MOC_LITERAL(6, 62, 14), // "roomReadStatus"
QT_MOC_LITERAL(7, 77, 22), // "std::map<QString,bool>"
QT_MOC_LITERAL(8, 100, 6), // "status"
QT_MOC_LITERAL(9, 107, 18), // "removeNotification"
QT_MOC_LITERAL(10, 126, 8), // "event_id"
QT_MOC_LITERAL(11, 135, 14), // "userKeysUpdate"
QT_MOC_LITERAL(12, 150, 11), // "std::string"
QT_MOC_LITERAL(13, 162, 10), // "sync_token"
QT_MOC_LITERAL(14, 173, 25), // "mtx::responses::QueryKeys"
QT_MOC_LITERAL(15, 199, 8), // "keyQuery"
QT_MOC_LITERAL(16, 208, 25), // "verificationStatusChanged"
QT_MOC_LITERAL(17, 234, 6), // "userid"
QT_MOC_LITERAL(18, 241, 29), // "selfVerificationStatusChanged"
QT_MOC_LITERAL(19, 271, 13), // "secretChanged"
QT_MOC_LITERAL(20, 285, 4), // "name"
QT_MOC_LITERAL(21, 290, 13) // "databaseReady"

    },
    "Cache\0newReadReceipts\0\0room_id\0"
    "std::vector<QString>\0event_ids\0"
    "roomReadStatus\0std::map<QString,bool>\0"
    "status\0removeNotification\0event_id\0"
    "userKeysUpdate\0std::string\0sync_token\0"
    "mtx::responses::QueryKeys\0keyQuery\0"
    "verificationStatusChanged\0userid\0"
    "selfVerificationStatusChanged\0"
    "secretChanged\0name\0databaseReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cache[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       9,    2,   62,    2, 0x06 /* Public */,
      11,    2,   67,    2, 0x06 /* Public */,
      16,    1,   72,    2, 0x06 /* Public */,
      18,    0,   75,    2, 0x06 /* Public */,
      19,    1,   76,    2, 0x06 /* Public */,
      21,    0,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 12,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   20,
    QMetaType::Void,

       0        // eod
};

void Cache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cache *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newReadReceipts((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<QString>(*)>(_a[2]))); break;
        case 1: _t->roomReadStatus((*reinterpret_cast< const std::map<QString,bool>(*)>(_a[1]))); break;
        case 2: _t->removeNotification((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->userKeysUpdate((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const mtx::responses::QueryKeys(*)>(_a[2]))); break;
        case 4: _t->verificationStatusChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 5: _t->selfVerificationStatusChanged(); break;
        case 6: _t->secretChanged((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 7: _t->databaseReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Cache::*)(const QString & , const std::vector<QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::newReadReceipts)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Cache::*)(const std::map<QString,bool> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::roomReadStatus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Cache::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::removeNotification)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Cache::*)(const std::string & , const mtx::responses::QueryKeys & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::userKeysUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Cache::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::verificationStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Cache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::selfVerificationStatusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Cache::*)(const std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::secretChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Cache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cache::databaseReady)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cache::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Cache.data,
    qt_meta_data_Cache,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Cache::newReadReceipts(const QString & _t1, const std::vector<QString> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cache::roomReadStatus(const std::map<QString,bool> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cache::removeNotification(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Cache::userKeysUpdate(const std::string & _t1, const mtx::responses::QueryKeys & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Cache::verificationStatusChanged(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Cache::selfVerificationStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Cache::secretChanged(const std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Cache::databaseReady()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

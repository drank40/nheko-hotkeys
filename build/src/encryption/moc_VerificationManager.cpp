/****************************************************************************
** Meta object code from reading C++ file 'VerificationManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/encryption/VerificationManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VerificationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VerificationManager_t {
    QByteArrayData data[18];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VerificationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VerificationManager_t qt_meta_stringdata_VerificationManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "VerificationManager"
QT_MOC_LITERAL(1, 20, 28), // "newDeviceVerificationRequest"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 23), // "DeviceVerificationFlow*"
QT_MOC_LITERAL(4, 74, 4), // "flow"
QT_MOC_LITERAL(5, 79, 37), // "receivedRoomDeviceVerificatio..."
QT_MOC_LITERAL(6, 117, 64), // "mtx::events::RoomEvent<mtx::e..."
QT_MOC_LITERAL(7, 182, 7), // "message"
QT_MOC_LITERAL(8, 190, 14), // "TimelineModel*"
QT_MOC_LITERAL(9, 205, 5), // "model"
QT_MOC_LITERAL(10, 211, 33), // "receivedDeviceVerificationReq..."
QT_MOC_LITERAL(11, 245, 40), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(12, 286, 3), // "msg"
QT_MOC_LITERAL(13, 290, 11), // "std::string"
QT_MOC_LITERAL(14, 302, 6), // "sender"
QT_MOC_LITERAL(15, 309, 31), // "receivedDeviceVerificationStart"
QT_MOC_LITERAL(16, 341, 38), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(17, 380, 22) // "removeVerificationFlow"

    },
    "VerificationManager\0newDeviceVerificationRequest\0"
    "\0DeviceVerificationFlow*\0flow\0"
    "receivedRoomDeviceVerificationRequest\0"
    "mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>\0"
    "message\0TimelineModel*\0model\0"
    "receivedDeviceVerificationRequest\0"
    "mtx::events::msg::KeyVerificationRequest\0"
    "msg\0std::string\0sender\0"
    "receivedDeviceVerificationStart\0"
    "mtx::events::msg::KeyVerificationStart\0"
    "removeVerificationFlow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VerificationManager[] = {

 // content:
       8,       // revision
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
       5,    2,   42,    2, 0x0a /* Public */,
      10,    2,   47,    2, 0x0a /* Public */,
      15,    2,   52,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      17,    1,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 13,   12,   14,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void VerificationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VerificationManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newDeviceVerificationRequest((*reinterpret_cast< DeviceVerificationFlow*(*)>(_a[1]))); break;
        case 1: _t->receivedRoomDeviceVerificationRequest((*reinterpret_cast< const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>(*)>(_a[1])),(*reinterpret_cast< TimelineModel*(*)>(_a[2]))); break;
        case 2: _t->receivedDeviceVerificationRequest((*reinterpret_cast< const mtx::events::msg::KeyVerificationRequest(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 3: _t->receivedDeviceVerificationStart((*reinterpret_cast< const mtx::events::msg::KeyVerificationStart(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 4: _t->removeVerificationFlow((*reinterpret_cast< DeviceVerificationFlow*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VerificationManager::*)(DeviceVerificationFlow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VerificationManager::newDeviceVerificationRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VerificationManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VerificationManager.data,
    qt_meta_data_VerificationManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VerificationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VerificationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VerificationManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VerificationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void VerificationManager::newDeviceVerificationRequest(DeviceVerificationFlow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'DeviceVerificationFlow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/encryption/DeviceVerificationFlow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceVerificationFlow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceVerificationFlow_t {
    QByteArrayData data[35];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceVerificationFlow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceVerificationFlow_t qt_meta_stringdata_DeviceVerificationFlow = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DeviceVerificationFlow"
QT_MOC_LITERAL(1, 23, 14), // "refreshProfile"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "stateChanged"
QT_MOC_LITERAL(4, 52, 12), // "errorChanged"
QT_MOC_LITERAL(5, 65, 8), // "unverify"
QT_MOC_LITERAL(6, 74, 4), // "next"
QT_MOC_LITERAL(7, 79, 6), // "cancel"
QT_MOC_LITERAL(8, 86, 5), // "state"
QT_MOC_LITERAL(9, 92, 5), // "error"
QT_MOC_LITERAL(10, 98, 5), // "Error"
QT_MOC_LITERAL(11, 104, 6), // "userId"
QT_MOC_LITERAL(12, 111, 8), // "deviceId"
QT_MOC_LITERAL(13, 120, 6), // "sender"
QT_MOC_LITERAL(14, 127, 7), // "sasList"
QT_MOC_LITERAL(15, 135, 16), // "std::vector<int>"
QT_MOC_LITERAL(16, 152, 20), // "isDeviceVerification"
QT_MOC_LITERAL(17, 173, 18), // "isSelfVerification"
QT_MOC_LITERAL(18, 192, 25), // "isMultiDeviceVerification"
QT_MOC_LITERAL(19, 218, 5), // "State"
QT_MOC_LITERAL(20, 224, 23), // "PromptStartVerification"
QT_MOC_LITERAL(21, 248, 23), // "WaitingForOtherToAccept"
QT_MOC_LITERAL(22, 272, 14), // "WaitingForKeys"
QT_MOC_LITERAL(23, 287, 12), // "CompareEmoji"
QT_MOC_LITERAL(24, 300, 13), // "CompareNumber"
QT_MOC_LITERAL(25, 314, 13), // "WaitingForMac"
QT_MOC_LITERAL(26, 328, 7), // "Success"
QT_MOC_LITERAL(27, 336, 6), // "Failed"
QT_MOC_LITERAL(28, 343, 13), // "UnknownMethod"
QT_MOC_LITERAL(29, 357, 20), // "MismatchedCommitment"
QT_MOC_LITERAL(30, 378, 13), // "MismatchedSAS"
QT_MOC_LITERAL(31, 392, 11), // "KeyMismatch"
QT_MOC_LITERAL(32, 404, 7), // "Timeout"
QT_MOC_LITERAL(33, 412, 4), // "User"
QT_MOC_LITERAL(34, 417, 10) // "OutOfOrder"

    },
    "DeviceVerificationFlow\0refreshProfile\0"
    "\0stateChanged\0errorChanged\0unverify\0"
    "next\0cancel\0state\0error\0Error\0userId\0"
    "deviceId\0sender\0sasList\0std::vector<int>\0"
    "isDeviceVerification\0isSelfVerification\0"
    "isMultiDeviceVerification\0State\0"
    "PromptStartVerification\0WaitingForOtherToAccept\0"
    "WaitingForKeys\0CompareEmoji\0CompareNumber\0"
    "WaitingForMac\0Success\0Failed\0UnknownMethod\0"
    "MismatchedCommitment\0MismatchedSAS\0"
    "KeyMismatch\0Timeout\0User\0OutOfOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceVerificationFlow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       9,   50, // properties
       2,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495001,
       9, 0x80000000 | 10, 0x00495009,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, QMetaType::Bool, 0x00095401,
      14, 0x80000000 | 15, 0x00095409,
      16, QMetaType::Bool, 0x00095401,
      17, QMetaType::Bool, 0x00095401,
      18, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       1,
       2,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      19,   19, 0x0,    8,   96,
      10,   10, 0x0,    7,  112,

 // enum data: key, value
      20, uint(DeviceVerificationFlow::PromptStartVerification),
      21, uint(DeviceVerificationFlow::WaitingForOtherToAccept),
      22, uint(DeviceVerificationFlow::WaitingForKeys),
      23, uint(DeviceVerificationFlow::CompareEmoji),
      24, uint(DeviceVerificationFlow::CompareNumber),
      25, uint(DeviceVerificationFlow::WaitingForMac),
      26, uint(DeviceVerificationFlow::Success),
      27, uint(DeviceVerificationFlow::Failed),
      28, uint(DeviceVerificationFlow::UnknownMethod),
      29, uint(DeviceVerificationFlow::MismatchedCommitment),
      30, uint(DeviceVerificationFlow::MismatchedSAS),
      31, uint(DeviceVerificationFlow::KeyMismatch),
      32, uint(DeviceVerificationFlow::Timeout),
      33, uint(DeviceVerificationFlow::User),
      34, uint(DeviceVerificationFlow::OutOfOrder),

       0        // eod
};

void DeviceVerificationFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceVerificationFlow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshProfile(); break;
        case 1: _t->stateChanged(); break;
        case 2: _t->errorChanged(); break;
        case 3: _t->unverify(); break;
        case 4: _t->next(); break;
        case 5: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceVerificationFlow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceVerificationFlow::refreshProfile)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceVerificationFlow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceVerificationFlow::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceVerificationFlow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceVerificationFlow::errorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceVerificationFlow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< Error*>(_v) = _t->error(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getDeviceId(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getSender(); break;
        case 5: *reinterpret_cast< std::vector<int>*>(_v) = _t->getSasList(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isDeviceVerification(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isSelfVerification(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isMultiDeviceVerification(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DeviceVerificationFlow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceVerificationFlow.data,
    qt_meta_data_DeviceVerificationFlow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceVerificationFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceVerificationFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceVerificationFlow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceVerificationFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void DeviceVerificationFlow::refreshProfile()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeviceVerificationFlow::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeviceVerificationFlow::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

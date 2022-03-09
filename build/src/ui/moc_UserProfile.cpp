/****************************************************************************
** Meta object code from reading C++ file 'UserProfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/UserProfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserProfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceInfoModel_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceInfoModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceInfoModel_t qt_meta_stringdata_DeviceInfoModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DeviceInfoModel"
QT_MOC_LITERAL(1, 16, 10), // "queueReset"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "std::vector<DeviceInfo>"
QT_MOC_LITERAL(4, 52, 10), // "deviceList"
QT_MOC_LITERAL(5, 63, 5) // "reset"

    },
    "DeviceInfoModel\0queueReset\0\0"
    "std::vector<DeviceInfo>\0deviceList\0"
    "reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceInfoModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void DeviceInfoModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceInfoModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->queueReset((*reinterpret_cast< const std::vector<DeviceInfo>(*)>(_a[1]))); break;
        case 1: _t->reset((*reinterpret_cast< const std::vector<DeviceInfo>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceInfoModel::*)(const std::vector<DeviceInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInfoModel::queueReset)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceInfoModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_DeviceInfoModel.data,
    qt_meta_data_DeviceInfoModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceInfoModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInfoModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceInfoModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int DeviceInfoModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DeviceInfoModel::queueReset(const std::vector<DeviceInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_UserProfile_t {
    QByteArrayData data[44];
    char stringdata0[587];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserProfile_t qt_meta_stringdata_UserProfile = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UserProfile"
QT_MOC_LITERAL(1, 12, 17), // "userStatusChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "loadingChanged"
QT_MOC_LITERAL(4, 46, 18), // "displayNameChanged"
QT_MOC_LITERAL(5, 65, 16), // "avatarUrlChanged"
QT_MOC_LITERAL(6, 82, 12), // "displayError"
QT_MOC_LITERAL(7, 95, 12), // "errorMessage"
QT_MOC_LITERAL(8, 108, 23), // "globalUsernameRetrieved"
QT_MOC_LITERAL(9, 132, 10), // "globalUser"
QT_MOC_LITERAL(10, 143, 14), // "devicesChanged"
QT_MOC_LITERAL(11, 158, 24), // "verificationStatiChanged"
QT_MOC_LITERAL(12, 183, 15), // "updateAvatarUrl"
QT_MOC_LITERAL(13, 199, 17), // "setGlobalUsername"
QT_MOC_LITERAL(14, 217, 24), // "updateVerificationStatus"
QT_MOC_LITERAL(15, 242, 6), // "verify"
QT_MOC_LITERAL(16, 249, 6), // "device"
QT_MOC_LITERAL(17, 256, 8), // "unverify"
QT_MOC_LITERAL(18, 265, 15), // "fetchDeviceList"
QT_MOC_LITERAL(19, 281, 6), // "userID"
QT_MOC_LITERAL(20, 288, 14), // "refreshDevices"
QT_MOC_LITERAL(21, 303, 7), // "banUser"
QT_MOC_LITERAL(22, 311, 13), // "signOutDevice"
QT_MOC_LITERAL(23, 325, 8), // "deviceID"
QT_MOC_LITERAL(24, 334, 8), // "kickUser"
QT_MOC_LITERAL(25, 343, 9), // "startChat"
QT_MOC_LITERAL(26, 353, 14), // "changeUsername"
QT_MOC_LITERAL(27, 368, 8), // "username"
QT_MOC_LITERAL(28, 377, 16), // "changeDeviceName"
QT_MOC_LITERAL(29, 394, 10), // "deviceName"
QT_MOC_LITERAL(30, 405, 12), // "changeAvatar"
QT_MOC_LITERAL(31, 418, 17), // "openGlobalProfile"
QT_MOC_LITERAL(32, 436, 11), // "displayName"
QT_MOC_LITERAL(33, 448, 6), // "userid"
QT_MOC_LITERAL(34, 455, 9), // "avatarUrl"
QT_MOC_LITERAL(35, 465, 10), // "deviceList"
QT_MOC_LITERAL(36, 476, 16), // "DeviceInfoModel*"
QT_MOC_LITERAL(37, 493, 19), // "isGlobalUserProfile"
QT_MOC_LITERAL(38, 513, 12), // "userVerified"
QT_MOC_LITERAL(39, 526, 9), // "isLoading"
QT_MOC_LITERAL(40, 536, 23), // "userVerificationEnabled"
QT_MOC_LITERAL(41, 560, 6), // "isSelf"
QT_MOC_LITERAL(42, 567, 4), // "room"
QT_MOC_LITERAL(43, 572, 14) // "TimelineModel*"

    },
    "UserProfile\0userStatusChanged\0\0"
    "loadingChanged\0displayNameChanged\0"
    "avatarUrlChanged\0displayError\0"
    "errorMessage\0globalUsernameRetrieved\0"
    "globalUser\0devicesChanged\0"
    "verificationStatiChanged\0updateAvatarUrl\0"
    "setGlobalUsername\0updateVerificationStatus\0"
    "verify\0device\0unverify\0fetchDeviceList\0"
    "userID\0refreshDevices\0banUser\0"
    "signOutDevice\0deviceID\0kickUser\0"
    "startChat\0changeUsername\0username\0"
    "changeDeviceName\0deviceName\0changeAvatar\0"
    "openGlobalProfile\0displayName\0userid\0"
    "avatarUrl\0deviceList\0DeviceInfoModel*\0"
    "isGlobalUserProfile\0userVerified\0"
    "isLoading\0userVerificationEnabled\0"
    "isSelf\0room\0TimelineModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserProfile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      10,  184, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x06 /* Public */,
       3,    0,  140,    2, 0x06 /* Public */,
       4,    0,  141,    2, 0x06 /* Public */,
       5,    0,  142,    2, 0x06 /* Public */,
       6,    1,  143,    2, 0x06 /* Public */,
       8,    1,  146,    2, 0x06 /* Public */,
      10,    0,  149,    2, 0x06 /* Public */,
      11,    0,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  151,    2, 0x0a /* Public */,
      13,    1,  152,    2, 0x08 /* Private */,
      14,    0,  155,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    1,  156,    2, 0x02 /* Public */,
      15,    0,  159,    2, 0x22 /* Public | MethodCloned */,
      17,    1,  160,    2, 0x02 /* Public */,
      17,    0,  163,    2, 0x22 /* Public | MethodCloned */,
      18,    1,  164,    2, 0x02 /* Public */,
      20,    0,  167,    2, 0x02 /* Public */,
      21,    0,  168,    2, 0x02 /* Public */,
      22,    1,  169,    2, 0x02 /* Public */,
      24,    0,  172,    2, 0x02 /* Public */,
      25,    0,  173,    2, 0x02 /* Public */,
      26,    1,  174,    2, 0x02 /* Public */,
      28,    2,  177,    2, 0x02 /* Public */,
      30,    0,  182,    2, 0x02 /* Public */,
      31,    0,  183,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   29,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      32, QMetaType::QString, 0x00495001,
      33, QMetaType::QString, 0x00095401,
      34, QMetaType::QString, 0x00495001,
      35, 0x80000000 | 36, 0x00495009,
      37, QMetaType::Bool, 0x00095401,
      38, QMetaType::Int, 0x00495001,
      39, QMetaType::Bool, 0x00495001,
      40, QMetaType::Bool, 0x00495001,
      41, QMetaType::Bool, 0x00095401,
      42, 0x80000000 | 43, 0x00095409,

 // properties: notify_signal_id
       2,
       0,
       3,
       6,
       0,
       0,
       1,
       0,
       0,
       0,

       0        // eod
};

void UserProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserProfile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userStatusChanged(); break;
        case 1: _t->loadingChanged(); break;
        case 2: _t->displayNameChanged(); break;
        case 3: _t->avatarUrlChanged(); break;
        case 4: _t->displayError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->globalUsernameRetrieved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->devicesChanged(); break;
        case 7: _t->verificationStatiChanged(); break;
        case 8: _t->updateAvatarUrl(); break;
        case 9: _t->setGlobalUsername((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->updateVerificationStatus(); break;
        case 11: _t->verify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->verify(); break;
        case 13: _t->unverify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->unverify(); break;
        case 15: _t->fetchDeviceList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->refreshDevices(); break;
        case 17: _t->banUser(); break;
        case 18: _t->signOutDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->kickUser(); break;
        case 20: _t->startChat(); break;
        case 21: _t->changeUsername((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->changeDeviceName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->changeAvatar(); break;
        case 24: _t->openGlobalProfile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::userStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::loadingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::displayNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::avatarUrlChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UserProfile::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::displayError)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UserProfile::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::globalUsernameRetrieved)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (UserProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::devicesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (UserProfile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserProfile::verificationStatiChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeviceInfoModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UserProfile *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->displayName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userid(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->avatarUrl(); break;
        case 3: *reinterpret_cast< DeviceInfoModel**>(_v) = _t->deviceList(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isGlobalUserProfile(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getUserStatus(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isLoading(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->userVerificationEnabled(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isSelf(); break;
        case 9: *reinterpret_cast< TimelineModel**>(_v) = _t->room(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UserProfile::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UserProfile.data,
    qt_meta_data_UserProfile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserProfile.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UserProfile::userStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserProfile::loadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UserProfile::displayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UserProfile::avatarUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UserProfile::displayError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UserProfile::globalUsernameRetrieved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UserProfile::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void UserProfile::verificationStatiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_verification_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_verification_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_verification_t qt_meta_stringdata_verification = {
    {
QT_MOC_LITERAL(0, 0, 12), // "verification"
QT_MOC_LITERAL(1, 13, 6), // "Status"
QT_MOC_LITERAL(2, 20, 4), // "SELF"
QT_MOC_LITERAL(3, 25, 8), // "VERIFIED"
QT_MOC_LITERAL(4, 34, 10), // "UNVERIFIED"
QT_MOC_LITERAL(5, 45, 7), // "BLOCKED"
QT_MOC_LITERAL(6, 53, 14) // "NOT_APPLICABLE"

    },
    "verification\0Status\0SELF\0VERIFIED\0"
    "UNVERIFIED\0BLOCKED\0NOT_APPLICABLE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_verification[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(verification::SELF),
       3, uint(verification::VERIFIED),
       4, uint(verification::UNVERIFIED),
       5, uint(verification::BLOCKED),
       6, uint(verification::NOT_APPLICABLE),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject verification::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_verification.data,
    qt_meta_data_verification,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

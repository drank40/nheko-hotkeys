/****************************************************************************
** Meta object code from reading C++ file 'RoomSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/RoomSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoomSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadProxy_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadProxy_t qt_meta_stringdata_ThreadProxy = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ThreadProxy"
QT_MOC_LITERAL(1, 12, 5), // "error"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "msg"
QT_MOC_LITERAL(4, 23, 13), // "nameEventSent"
QT_MOC_LITERAL(5, 37, 14), // "topicEventSent"
QT_MOC_LITERAL(6, 52, 11) // "stopLoading"

    },
    "ThreadProxy\0error\0\0msg\0nameEventSent\0"
    "topicEventSent\0stopLoading"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void ThreadProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->nameEventSent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->topicEventSent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->stopLoading(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadProxy::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadProxy::error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThreadProxy::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadProxy::nameEventSent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThreadProxy::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadProxy::topicEventSent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ThreadProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadProxy::stopLoading)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ThreadProxy.data,
    qt_meta_data_ThreadProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThreadProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ThreadProxy::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadProxy::nameEventSent(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadProxy::topicEventSent(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ThreadProxy::stopLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_EditModal_t {
    QByteArrayData data[12];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditModal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditModal_t qt_meta_stringdata_EditModal = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EditModal"
QT_MOC_LITERAL(1, 10, 11), // "nameChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "roomName"
QT_MOC_LITERAL(4, 32, 12), // "topicChanged"
QT_MOC_LITERAL(5, 45, 5), // "topic"
QT_MOC_LITERAL(6, 51, 14), // "topicEventSent"
QT_MOC_LITERAL(7, 66, 13), // "nameEventSent"
QT_MOC_LITERAL(8, 80, 4), // "name"
QT_MOC_LITERAL(9, 85, 5), // "error"
QT_MOC_LITERAL(10, 91, 3), // "msg"
QT_MOC_LITERAL(11, 95, 12) // "applyClicked"

    },
    "EditModal\0nameChanged\0\0roomName\0"
    "topicChanged\0topic\0topicEventSent\0"
    "nameEventSent\0name\0error\0msg\0applyClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditModal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   50,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void EditModal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditModal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->topicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->topicEventSent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->nameEventSent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->applyClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditModal::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditModal::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditModal::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditModal::topicChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditModal::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EditModal.data,
    qt_meta_data_EditModal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditModal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditModal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditModal.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EditModal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void EditModal::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EditModal::topicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_RoomSettings_t {
    QByteArrayData data[35];
    char stringdata0[511];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomSettings_t qt_meta_stringdata_RoomSettings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RoomSettings"
QT_MOC_LITERAL(1, 13, 14), // "loadingChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "roomNameChanged"
QT_MOC_LITERAL(4, 45, 16), // "roomTopicChanged"
QT_MOC_LITERAL(5, 62, 16), // "avatarUrlChanged"
QT_MOC_LITERAL(6, 79, 17), // "encryptionChanged"
QT_MOC_LITERAL(7, 97, 20), // "notificationsChanged"
QT_MOC_LITERAL(8, 118, 22), // "accessJoinRulesChanged"
QT_MOC_LITERAL(9, 141, 12), // "displayError"
QT_MOC_LITERAL(10, 154, 12), // "errorMessage"
QT_MOC_LITERAL(11, 167, 11), // "stopLoading"
QT_MOC_LITERAL(12, 179, 13), // "avatarChanged"
QT_MOC_LITERAL(13, 193, 16), // "enableEncryption"
QT_MOC_LITERAL(14, 210, 12), // "updateAvatar"
QT_MOC_LITERAL(15, 223, 13), // "openEditModal"
QT_MOC_LITERAL(16, 237, 17), // "changeAccessRules"
QT_MOC_LITERAL(17, 255, 5), // "index"
QT_MOC_LITERAL(18, 261, 19), // "changeNotifications"
QT_MOC_LITERAL(19, 281, 12), // "currentIndex"
QT_MOC_LITERAL(20, 294, 6), // "roomId"
QT_MOC_LITERAL(21, 301, 11), // "roomVersion"
QT_MOC_LITERAL(22, 313, 8), // "roomName"
QT_MOC_LITERAL(23, 322, 9), // "roomTopic"
QT_MOC_LITERAL(24, 332, 13), // "roomAvatarUrl"
QT_MOC_LITERAL(25, 346, 11), // "memberCount"
QT_MOC_LITERAL(26, 358, 13), // "notifications"
QT_MOC_LITERAL(27, 372, 15), // "accessJoinRules"
QT_MOC_LITERAL(28, 388, 9), // "isLoading"
QT_MOC_LITERAL(29, 398, 15), // "canChangeAvatar"
QT_MOC_LITERAL(30, 414, 18), // "canChangeJoinRules"
QT_MOC_LITERAL(31, 433, 21), // "canChangeNameAndTopic"
QT_MOC_LITERAL(32, 455, 19), // "isEncryptionEnabled"
QT_MOC_LITERAL(33, 475, 16), // "supportsKnocking"
QT_MOC_LITERAL(34, 492, 18) // "supportsRestricted"

    },
    "RoomSettings\0loadingChanged\0\0"
    "roomNameChanged\0roomTopicChanged\0"
    "avatarUrlChanged\0encryptionChanged\0"
    "notificationsChanged\0accessJoinRulesChanged\0"
    "displayError\0errorMessage\0stopLoading\0"
    "avatarChanged\0enableEncryption\0"
    "updateAvatar\0openEditModal\0changeAccessRules\0"
    "index\0changeNotifications\0currentIndex\0"
    "roomId\0roomVersion\0roomName\0roomTopic\0"
    "roomAvatarUrl\0memberCount\0notifications\0"
    "accessJoinRules\0isLoading\0canChangeAvatar\0"
    "canChangeJoinRules\0canChangeNameAndTopic\0"
    "isEncryptionEnabled\0supportsKnocking\0"
    "supportsRestricted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      15,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    0,  101,    2, 0x02 /* Public */,
      14,    0,  102,    2, 0x02 /* Public */,
      15,    0,  103,    2, 0x02 /* Public */,
      16,    1,  104,    2, 0x02 /* Public */,
      18,    1,  107,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00095401,
      21, QMetaType::QString, 0x00095401,
      22, QMetaType::QString, 0x00495001,
      23, QMetaType::QString, 0x00495001,
      24, QMetaType::QString, 0x00495001,
      25, QMetaType::Int, 0x00095401,
      26, QMetaType::Int, 0x00495001,
      27, QMetaType::Int, 0x00495001,
      28, QMetaType::Bool, 0x00495001,
      29, QMetaType::Bool, 0x00095401,
      30, QMetaType::Bool, 0x00095401,
      31, QMetaType::Bool, 0x00095401,
      32, QMetaType::Bool, 0x00495001,
      33, QMetaType::Bool, 0x00095401,
      34, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       0,
       5,
       6,
       0,
       0,
       0,
       0,
       4,
       0,
       0,

       0        // eod
};

void RoomSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadingChanged(); break;
        case 1: _t->roomNameChanged(); break;
        case 2: _t->roomTopicChanged(); break;
        case 3: _t->avatarUrlChanged(); break;
        case 4: _t->encryptionChanged(); break;
        case 5: _t->notificationsChanged(); break;
        case 6: _t->accessJoinRulesChanged(); break;
        case 7: _t->displayError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->stopLoading(); break;
        case 9: _t->avatarChanged(); break;
        case 10: _t->enableEncryption(); break;
        case 11: _t->updateAvatar(); break;
        case 12: _t->openEditModal(); break;
        case 13: _t->changeAccessRules((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->changeNotifications((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoomSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::loadingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoomSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::roomNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RoomSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::roomTopicChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RoomSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::avatarUrlChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RoomSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::encryptionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RoomSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::notificationsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RoomSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::accessJoinRulesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RoomSettings::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSettings::displayError)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RoomSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->roomId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->roomVersion(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->roomName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->roomTopic(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->roomAvatarUrl(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->memberCount(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->notifications(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->accessJoinRules(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isLoading(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->canChangeAvatar(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->canChangeJoinRules(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->canChangeNameAndTopic(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isEncryptionEnabled(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->supportsKnocking(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->supportsRestricted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RoomSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RoomSettings.data,
    qt_meta_data_RoomSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoomSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoomSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RoomSettings::loadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RoomSettings::roomNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RoomSettings::roomTopicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RoomSettings::avatarUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RoomSettings::encryptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void RoomSettings::notificationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void RoomSettings::accessJoinRulesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void RoomSettings::displayError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

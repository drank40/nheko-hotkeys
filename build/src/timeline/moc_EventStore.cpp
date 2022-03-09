/****************************************************************************
** Meta object code from reading C++ file 'EventStore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/timeline/EventStore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventStore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EventStore_t {
    QByteArrayData data[37];
    char stringdata0[562];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventStore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventStore_t qt_meta_stringdata_EventStore = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EventStore"
QT_MOC_LITERAL(1, 11, 15), // "beginInsertRows"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "from"
QT_MOC_LITERAL(4, 33, 2), // "to"
QT_MOC_LITERAL(5, 36, 13), // "endInsertRows"
QT_MOC_LITERAL(6, 50, 15), // "beginResetModel"
QT_MOC_LITERAL(7, 66, 13), // "endResetModel"
QT_MOC_LITERAL(8, 80, 11), // "dataChanged"
QT_MOC_LITERAL(9, 92, 17), // "newEncryptedImage"
QT_MOC_LITERAL(10, 110, 26), // "mtx::crypto::EncryptedFile"
QT_MOC_LITERAL(11, 137, 14), // "encryptionInfo"
QT_MOC_LITERAL(12, 152, 12), // "eventFetched"
QT_MOC_LITERAL(13, 165, 11), // "std::string"
QT_MOC_LITERAL(14, 177, 2), // "id"
QT_MOC_LITERAL(15, 180, 9), // "relatedTo"
QT_MOC_LITERAL(16, 190, 40), // "mtx::events::collections::Tim..."
QT_MOC_LITERAL(17, 231, 8), // "timeline"
QT_MOC_LITERAL(18, 240, 20), // "oldMessagesRetrieved"
QT_MOC_LITERAL(19, 261, 24), // "mtx::responses::Messages"
QT_MOC_LITERAL(20, 286, 11), // "fetchedMore"
QT_MOC_LITERAL(21, 298, 14), // "processPending"
QT_MOC_LITERAL(22, 313, 11), // "messageSent"
QT_MOC_LITERAL(23, 325, 6), // "txn_id"
QT_MOC_LITERAL(24, 332, 8), // "event_id"
QT_MOC_LITERAL(25, 341, 13), // "messageFailed"
QT_MOC_LITERAL(26, 355, 19), // "startDMVerification"
QT_MOC_LITERAL(27, 375, 64), // "mtx::events::RoomEvent<mtx::e..."
QT_MOC_LITERAL(28, 440, 3), // "msg"
QT_MOC_LITERAL(29, 444, 17), // "updateFlowEventId"
QT_MOC_LITERAL(30, 462, 10), // "addPending"
QT_MOC_LITERAL(31, 473, 5), // "event"
QT_MOC_LITERAL(32, 479, 18), // "receivedSessionKey"
QT_MOC_LITERAL(33, 498, 10), // "session_id"
QT_MOC_LITERAL(34, 509, 13), // "clearTimeline"
QT_MOC_LITERAL(35, 523, 17), // "enableKeyRequests"
QT_MOC_LITERAL(36, 541, 20) // "suppressKeyRequests_"

    },
    "EventStore\0beginInsertRows\0\0from\0to\0"
    "endInsertRows\0beginResetModel\0"
    "endResetModel\0dataChanged\0newEncryptedImage\0"
    "mtx::crypto::EncryptedFile\0encryptionInfo\0"
    "eventFetched\0std::string\0id\0relatedTo\0"
    "mtx::events::collections::TimelineEvents\0"
    "timeline\0oldMessagesRetrieved\0"
    "mtx::responses::Messages\0fetchedMore\0"
    "processPending\0messageSent\0txn_id\0"
    "event_id\0messageFailed\0startDMVerification\0"
    "mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>\0"
    "msg\0updateFlowEventId\0addPending\0event\0"
    "receivedSessionKey\0session_id\0"
    "clearTimeline\0enableKeyRequests\0"
    "suppressKeyRequests_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventStore[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x06 /* Public */,
       5,    0,  109,    2, 0x06 /* Public */,
       6,    0,  110,    2, 0x06 /* Public */,
       7,    0,  111,    2, 0x06 /* Public */,
       8,    2,  112,    2, 0x06 /* Public */,
       9,    1,  117,    2, 0x06 /* Public */,
      12,    3,  120,    2, 0x06 /* Public */,
      18,    1,  127,    2, 0x06 /* Public */,
      20,    0,  130,    2, 0x06 /* Public */,
      21,    0,  131,    2, 0x06 /* Public */,
      22,    2,  132,    2, 0x06 /* Public */,
      25,    1,  137,    2, 0x06 /* Public */,
      26,    1,  140,    2, 0x06 /* Public */,
      29,    1,  143,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  146,    2, 0x0a /* Public */,
      32,    1,  149,    2, 0x0a /* Public */,
      34,    0,  152,    2, 0x0a /* Public */,
      35,    1,  153,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 16,   14,   15,   17,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   23,   24,
    QMetaType::Void, 0x80000000 | 13,   23,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 13,   24,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   31,
    QMetaType::Void, 0x80000000 | 13,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,

       0        // eod
};

void EventStore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventStore *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->beginInsertRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->endInsertRows(); break;
        case 2: _t->beginResetModel(); break;
        case 3: _t->endResetModel(); break;
        case 4: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->newEncryptedImage((*reinterpret_cast< mtx::crypto::EncryptedFile(*)>(_a[1]))); break;
        case 6: _t->eventFetched((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< mtx::events::collections::TimelineEvents(*)>(_a[3]))); break;
        case 7: _t->oldMessagesRetrieved((*reinterpret_cast< const mtx::responses::Messages(*)>(_a[1]))); break;
        case 8: _t->fetchedMore(); break;
        case 9: _t->processPending(); break;
        case 10: _t->messageSent((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 11: _t->messageFailed((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 12: _t->startDMVerification((*reinterpret_cast< const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>(*)>(_a[1]))); break;
        case 13: _t->updateFlowEventId((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 14: _t->addPending((*reinterpret_cast< mtx::events::collections::TimelineEvents(*)>(_a[1]))); break;
        case 15: _t->receivedSessionKey((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 16: _t->clearTimeline(); break;
        case 17: _t->enableKeyRequests((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventStore::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::beginInsertRows)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::endInsertRows)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::beginResetModel)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::endResetModel)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::dataChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(mtx::crypto::EncryptedFile );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::newEncryptedImage)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string , std::string , mtx::events::collections::TimelineEvents );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::eventFetched)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(const mtx::responses::Messages & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::oldMessagesRetrieved)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::fetchedMore)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::processPending)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::messageSent)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::messageFailed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::startDMVerification)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::updateFlowEventId)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EventStore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EventStore.data,
    qt_meta_data_EventStore,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EventStore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventStore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EventStore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EventStore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void EventStore::beginInsertRows(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EventStore::endInsertRows()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EventStore::beginResetModel()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void EventStore::endResetModel()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void EventStore::dataChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EventStore::newEncryptedImage(mtx::crypto::EncryptedFile _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EventStore::eventFetched(std::string _t1, std::string _t2, mtx::events::collections::TimelineEvents _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EventStore::oldMessagesRetrieved(const mtx::responses::Messages & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EventStore::fetchedMore()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void EventStore::processPending()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void EventStore::messageSent(std::string _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void EventStore::messageFailed(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void EventStore::startDMVerification(const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void EventStore::updateFlowEventId(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

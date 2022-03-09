/****************************************************************************
** Meta object code from reading C++ file 'RoomlistModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/timeline/RoomlistModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoomlistModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoomPreview_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomPreview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomPreview_t qt_meta_stringdata_RoomPreview = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RoomPreview"
QT_MOC_LITERAL(1, 12, 6), // "roomid"
QT_MOC_LITERAL(2, 19, 8), // "roomName"
QT_MOC_LITERAL(3, 28, 9), // "roomTopic"
QT_MOC_LITERAL(4, 38, 13), // "roomAvatarUrl"
QT_MOC_LITERAL(5, 52, 8) // "isInvite"

    },
    "RoomPreview\0roomid\0roomName\0roomTopic\0"
    "roomAvatarUrl\0isInvite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomPreview[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::Bool, 0x00095401,

       0        // eod
};

void RoomPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<RoomPreview *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->roomid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->roomName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->roomTopic(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->roomAvatarUrl(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isInvite(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RoomPreview::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_RoomPreview.data,
    qt_meta_data_RoomPreview,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_RoomlistModel_t {
    QByteArrayData data[29];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomlistModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomlistModel_t qt_meta_stringdata_RoomlistModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RoomlistModel"
QT_MOC_LITERAL(1, 14, 30), // "totalUnreadMessageCountUpdated"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "unreadMessages"
QT_MOC_LITERAL(4, 61, 18), // "currentRoomChanged"
QT_MOC_LITERAL(5, 80, 14), // "fetchedPreview"
QT_MOC_LITERAL(6, 95, 6), // "roomid"
QT_MOC_LITERAL(7, 102, 8), // "RoomInfo"
QT_MOC_LITERAL(8, 111, 4), // "info"
QT_MOC_LITERAL(9, 116, 15), // "initializeRooms"
QT_MOC_LITERAL(10, 132, 4), // "sync"
QT_MOC_LITERAL(11, 137, 20), // "mtx::responses::Sync"
QT_MOC_LITERAL(12, 158, 5), // "sync_"
QT_MOC_LITERAL(13, 164, 5), // "clear"
QT_MOC_LITERAL(14, 170, 13), // "roomidToIndex"
QT_MOC_LITERAL(15, 184, 11), // "joinPreview"
QT_MOC_LITERAL(16, 196, 11), // "parentSpace"
QT_MOC_LITERAL(17, 208, 12), // "acceptInvite"
QT_MOC_LITERAL(18, 221, 13), // "declineInvite"
QT_MOC_LITERAL(19, 235, 5), // "leave"
QT_MOC_LITERAL(20, 241, 11), // "currentRoom"
QT_MOC_LITERAL(21, 253, 14), // "TimelineModel*"
QT_MOC_LITERAL(22, 268, 18), // "currentRoomPreview"
QT_MOC_LITERAL(23, 287, 11), // "RoomPreview"
QT_MOC_LITERAL(24, 299, 14), // "setCurrentRoom"
QT_MOC_LITERAL(25, 314, 16), // "resetCurrentRoom"
QT_MOC_LITERAL(26, 331, 16), // "updateReadStatus"
QT_MOC_LITERAL(27, 348, 22), // "std::map<QString,bool>"
QT_MOC_LITERAL(28, 371, 15) // "roomReadStatus_"

    },
    "RoomlistModel\0totalUnreadMessageCountUpdated\0"
    "\0unreadMessages\0currentRoomChanged\0"
    "fetchedPreview\0roomid\0RoomInfo\0info\0"
    "initializeRooms\0sync\0mtx::responses::Sync\0"
    "sync_\0clear\0roomidToIndex\0joinPreview\0"
    "parentSpace\0acceptInvite\0declineInvite\0"
    "leave\0currentRoom\0TimelineModel*\0"
    "currentRoomPreview\0RoomPreview\0"
    "setCurrentRoom\0resetCurrentRoom\0"
    "updateReadStatus\0std::map<QString,bool>\0"
    "roomReadStatus_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomlistModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       2,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    0,   97,    2, 0x06 /* Public */,
       5,    2,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  103,    2, 0x0a /* Public */,
      10,    1,  104,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    1,  108,    2, 0x0a /* Public */,
      15,    2,  111,    2, 0x0a /* Public */,
      17,    1,  116,    2, 0x0a /* Public */,
      18,    1,  119,    2, 0x0a /* Public */,
      19,    1,  122,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,
      22,    0,  126,    2, 0x0a /* Public */,
      24,    1,  127,    2, 0x0a /* Public */,
      25,    0,  130,    2, 0x0a /* Public */,
      26,    1,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   16,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    0x80000000 | 21,
    0x80000000 | 23,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x0049500d,
      22, 0x80000000 | 23, 0x0049500d,

 // properties: notify_signal_id
       1,
       1,

       0        // eod
};

void RoomlistModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomlistModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->totalUnreadMessageCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentRoomChanged(); break;
        case 2: _t->fetchedPreview((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< RoomInfo(*)>(_a[2]))); break;
        case 3: _t->initializeRooms(); break;
        case 4: _t->sync((*reinterpret_cast< const mtx::responses::Sync(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: { int _r = _t->roomidToIndex((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->joinPreview((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->acceptInvite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->declineInvite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->leave((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: { TimelineModel* _r = _t->currentRoom();
            if (_a[0]) *reinterpret_cast< TimelineModel**>(_a[0]) = std::move(_r); }  break;
        case 12: { RoomPreview _r = _t->currentRoomPreview();
            if (_a[0]) *reinterpret_cast< RoomPreview*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->setCurrentRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->resetCurrentRoom(); break;
        case 15: _t->updateReadStatus((*reinterpret_cast< const std::map<QString,bool>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoomlistModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomlistModel::totalUnreadMessageCountUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoomlistModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomlistModel::currentRoomChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RoomlistModel::*)(QString , RoomInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomlistModel::fetchedPreview)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RoomlistModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TimelineModel**>(_v) = _t->currentRoom(); break;
        case 1: *reinterpret_cast< RoomPreview*>(_v) = _t->currentRoomPreview(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
        RoomlistModel *_t = static_cast<RoomlistModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetCurrentRoom(); break;
        case 1: _t->resetCurrentRoom(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RoomlistModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_RoomlistModel.data,
    qt_meta_data_RoomlistModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoomlistModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomlistModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomlistModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int RoomlistModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
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
void RoomlistModel::totalUnreadMessageCountUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoomlistModel::currentRoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RoomlistModel::fetchedPreview(QString _t1, RoomInfo _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_FilteredRoomlistModel_t {
    QByteArrayData data[26];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilteredRoomlistModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilteredRoomlistModel_t qt_meta_stringdata_FilteredRoomlistModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FilteredRoomlistModel"
QT_MOC_LITERAL(1, 22, 18), // "currentRoomChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "roomidToIndex"
QT_MOC_LITERAL(4, 56, 6), // "roomid"
QT_MOC_LITERAL(5, 63, 11), // "joinPreview"
QT_MOC_LITERAL(6, 75, 12), // "acceptInvite"
QT_MOC_LITERAL(7, 88, 13), // "declineInvite"
QT_MOC_LITERAL(8, 102, 5), // "leave"
QT_MOC_LITERAL(9, 108, 9), // "toggleTag"
QT_MOC_LITERAL(10, 118, 3), // "tag"
QT_MOC_LITERAL(11, 122, 2), // "on"
QT_MOC_LITERAL(12, 125, 11), // "currentRoom"
QT_MOC_LITERAL(13, 137, 14), // "TimelineModel*"
QT_MOC_LITERAL(14, 152, 18), // "currentRoomPreview"
QT_MOC_LITERAL(15, 171, 11), // "RoomPreview"
QT_MOC_LITERAL(16, 183, 14), // "setCurrentRoom"
QT_MOC_LITERAL(17, 198, 16), // "resetCurrentRoom"
QT_MOC_LITERAL(18, 215, 11), // "getRoomById"
QT_MOC_LITERAL(19, 227, 2), // "id"
QT_MOC_LITERAL(20, 230, 20), // "nextRoomWithActivity"
QT_MOC_LITERAL(21, 251, 8), // "nextRoom"
QT_MOC_LITERAL(22, 260, 12), // "previousRoom"
QT_MOC_LITERAL(23, 273, 15), // "updateFilterTag"
QT_MOC_LITERAL(24, 289, 5), // "tagId"
QT_MOC_LITERAL(25, 295, 25) // "updateHiddenTagsAndSpaces"

    },
    "FilteredRoomlistModel\0currentRoomChanged\0"
    "\0roomidToIndex\0roomid\0joinPreview\0"
    "acceptInvite\0declineInvite\0leave\0"
    "toggleTag\0tag\0on\0currentRoom\0"
    "TimelineModel*\0currentRoomPreview\0"
    "RoomPreview\0setCurrentRoom\0resetCurrentRoom\0"
    "getRoomById\0id\0nextRoomWithActivity\0"
    "nextRoom\0previousRoom\0updateFilterTag\0"
    "tagId\0updateHiddenTagsAndSpaces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilteredRoomlistModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       2,  138, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  100,    2, 0x0a /* Public */,
       5,    1,  103,    2, 0x0a /* Public */,
       6,    1,  106,    2, 0x0a /* Public */,
       7,    1,  109,    2, 0x0a /* Public */,
       8,    1,  112,    2, 0x0a /* Public */,
       9,    3,  115,    2, 0x0a /* Public */,
      12,    0,  122,    2, 0x0a /* Public */,
      14,    0,  123,    2, 0x0a /* Public */,
      16,    1,  124,    2, 0x0a /* Public */,
      17,    0,  127,    2, 0x0a /* Public */,
      18,    1,  128,    2, 0x0a /* Public */,
      20,    0,  131,    2, 0x0a /* Public */,
      21,    0,  132,    2, 0x0a /* Public */,
      22,    0,  133,    2, 0x0a /* Public */,
      23,    1,  134,    2, 0x0a /* Public */,
      25,    0,  137,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    4,   10,   11,
    0x80000000 | 13,
    0x80000000 | 15,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    0x80000000 | 13, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0049500d,
      14, 0x80000000 | 15, 0x0049500d,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void FilteredRoomlistModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilteredRoomlistModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentRoomChanged(); break;
        case 1: { int _r = _t->roomidToIndex((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->joinPreview((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->acceptInvite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->declineInvite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->leave((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->toggleTag((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: { TimelineModel* _r = _t->currentRoom();
            if (_a[0]) *reinterpret_cast< TimelineModel**>(_a[0]) = std::move(_r); }  break;
        case 8: { RoomPreview _r = _t->currentRoomPreview();
            if (_a[0]) *reinterpret_cast< RoomPreview*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setCurrentRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->resetCurrentRoom(); break;
        case 11: { TimelineModel* _r = _t->getRoomById((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TimelineModel**>(_a[0]) = std::move(_r); }  break;
        case 12: _t->nextRoomWithActivity(); break;
        case 13: _t->nextRoom(); break;
        case 14: _t->previousRoom(); break;
        case 15: _t->updateFilterTag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->updateHiddenTagsAndSpaces(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilteredRoomlistModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilteredRoomlistModel::currentRoomChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FilteredRoomlistModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TimelineModel**>(_v) = _t->currentRoom(); break;
        case 1: *reinterpret_cast< RoomPreview*>(_v) = _t->currentRoomPreview(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
        FilteredRoomlistModel *_t = static_cast<FilteredRoomlistModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetCurrentRoom(); break;
        case 1: _t->resetCurrentRoom(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FilteredRoomlistModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_FilteredRoomlistModel.data,
    qt_meta_data_FilteredRoomlistModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilteredRoomlistModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilteredRoomlistModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilteredRoomlistModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int FilteredRoomlistModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void FilteredRoomlistModel::currentRoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

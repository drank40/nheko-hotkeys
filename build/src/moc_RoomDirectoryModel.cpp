/****************************************************************************
** Meta object code from reading C++ file 'RoomDirectoryModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/RoomDirectoryModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoomDirectoryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoomDirectoryModel_t {
    QByteArrayData data[18];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomDirectoryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomDirectoryModel_t qt_meta_stringdata_RoomDirectoryModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RoomDirectoryModel"
QT_MOC_LITERAL(1, 19, 17), // "fetchedRoomsBatch"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 45), // "std::vector<mtx::responses::P..."
QT_MOC_LITERAL(4, 84, 5), // "rooms"
QT_MOC_LITERAL(5, 90, 11), // "std::string"
QT_MOC_LITERAL(6, 102, 10), // "next_batch"
QT_MOC_LITERAL(7, 113, 23), // "loadingMoreRoomsChanged"
QT_MOC_LITERAL(8, 137, 29), // "reachedEndOfPaginationChanged"
QT_MOC_LITERAL(9, 167, 15), // "setMatrixServer"
QT_MOC_LITERAL(10, 183, 1), // "s"
QT_MOC_LITERAL(11, 185, 13), // "setSearchTerm"
QT_MOC_LITERAL(12, 199, 1), // "f"
QT_MOC_LITERAL(13, 201, 12), // "displayRooms"
QT_MOC_LITERAL(14, 214, 8), // "joinRoom"
QT_MOC_LITERAL(15, 223, 5), // "index"
QT_MOC_LITERAL(16, 229, 16), // "loadingMoreRooms"
QT_MOC_LITERAL(17, 246, 22) // "reachedEndOfPagination"

    },
    "RoomDirectoryModel\0fetchedRoomsBatch\0"
    "\0std::vector<mtx::responses::PublicRoomsChunk>\0"
    "rooms\0std::string\0next_batch\0"
    "loadingMoreRoomsChanged\0"
    "reachedEndOfPaginationChanged\0"
    "setMatrixServer\0s\0setSearchTerm\0f\0"
    "displayRooms\0joinRoom\0index\0"
    "loadingMoreRooms\0reachedEndOfPagination"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomDirectoryModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   66,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x2a /* Public | MethodCloned */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    2,   73,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   78,    2, 0x02 /* Public */,
      14,    0,   81,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void RoomDirectoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomDirectoryModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fetchedRoomsBatch((*reinterpret_cast< std::vector<mtx::responses::PublicRoomsChunk>(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->loadingMoreRoomsChanged(); break;
        case 2: _t->reachedEndOfPaginationChanged(); break;
        case 3: _t->setMatrixServer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setMatrixServer(); break;
        case 5: _t->setSearchTerm((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->displayRooms((*reinterpret_cast< std::vector<mtx::responses::PublicRoomsChunk>(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 7: _t->joinRoom((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->joinRoom(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoomDirectoryModel::*)(std::vector<mtx::responses::PublicRoomsChunk> , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomDirectoryModel::fetchedRoomsBatch)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoomDirectoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomDirectoryModel::loadingMoreRoomsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RoomDirectoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomDirectoryModel::reachedEndOfPaginationChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RoomDirectoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->loadingMoreRooms(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->reachedEndOfPagination(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RoomDirectoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_RoomDirectoryModel.data,
    qt_meta_data_RoomDirectoryModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoomDirectoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomDirectoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomDirectoryModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int RoomDirectoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void RoomDirectoryModel::fetchedRoomsBatch(std::vector<mtx::responses::PublicRoomsChunk> _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoomDirectoryModel::loadingMoreRoomsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RoomDirectoryModel::reachedEndOfPaginationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

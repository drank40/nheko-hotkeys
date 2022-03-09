/****************************************************************************
** Meta object code from reading C++ file 'Manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/notifications/Manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationsManager_t {
    QByteArrayData data[21];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationsManager_t qt_meta_stringdata_NotificationsManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "NotificationsManager"
QT_MOC_LITERAL(1, 21, 19), // "notificationClicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "roomId"
QT_MOC_LITERAL(4, 49, 7), // "eventId"
QT_MOC_LITERAL(5, 57, 21), // "sendNotificationReply"
QT_MOC_LITERAL(6, 79, 4), // "body"
QT_MOC_LITERAL(7, 84, 24), // "systemPostNotificationCb"
QT_MOC_LITERAL(8, 109, 7), // "room_id"
QT_MOC_LITERAL(9, 117, 8), // "event_id"
QT_MOC_LITERAL(10, 126, 8), // "roomName"
QT_MOC_LITERAL(11, 135, 4), // "text"
QT_MOC_LITERAL(12, 140, 4), // "icon"
QT_MOC_LITERAL(13, 145, 18), // "removeNotification"
QT_MOC_LITERAL(14, 164, 13), // "actionInvoked"
QT_MOC_LITERAL(15, 178, 2), // "id"
QT_MOC_LITERAL(16, 181, 6), // "action"
QT_MOC_LITERAL(17, 188, 18), // "notificationClosed"
QT_MOC_LITERAL(18, 207, 6), // "reason"
QT_MOC_LITERAL(19, 214, 19), // "notificationReplied"
QT_MOC_LITERAL(20, 234, 5) // "reply"

    },
    "NotificationsManager\0notificationClicked\0"
    "\0roomId\0eventId\0sendNotificationReply\0"
    "body\0systemPostNotificationCb\0room_id\0"
    "event_id\0roomName\0text\0icon\0"
    "removeNotification\0actionInvoked\0id\0"
    "action\0notificationClosed\0reason\0"
    "notificationReplied\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationsManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    3,   54,    2, 0x06 /* Public */,
       7,    5,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,   72,    2, 0x0a /* Public */,
      14,    2,   77,    2, 0x08 /* Private */,
      17,    2,   82,    2, 0x08 /* Private */,
      19,    2,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QImage,    8,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   15,   16,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   15,   18,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   15,   20,

       0        // eod
};

void NotificationsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationsManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notificationClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->sendNotificationReply((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->systemPostNotificationCb((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QImage(*)>(_a[5]))); break;
        case 3: _t->removeNotification((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->actionInvoked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->notificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 6: _t->notificationReplied((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationsManager::*)(const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsManager::notificationClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotificationsManager::*)(const QString , const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsManager::sendNotificationReply)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotificationsManager::*)(const QString & , const QString & , const QString & , const QString & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsManager::systemPostNotificationCb)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotificationsManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NotificationsManager.data,
    qt_meta_data_NotificationsManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotificationsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationsManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NotificationsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void NotificationsManager::notificationClicked(const QString _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NotificationsManager::sendNotificationReply(const QString _t1, const QString _t2, const QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NotificationsManager::systemPostNotificationCb(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QImage & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

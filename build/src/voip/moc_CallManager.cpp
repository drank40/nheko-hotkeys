/****************************************************************************
** Meta object code from reading C++ file 'CallManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/voip/CallManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallManager_t {
    QByteArrayData data[42];
    char stringdata0[663];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallManager_t qt_meta_stringdata_CallManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CallManager"
QT_MOC_LITERAL(1, 12, 10), // "newMessage"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "roomid"
QT_MOC_LITERAL(4, 31, 28), // "mtx::events::msg::CallInvite"
QT_MOC_LITERAL(5, 60, 32), // "mtx::events::msg::CallCandidates"
QT_MOC_LITERAL(6, 93, 28), // "mtx::events::msg::CallAnswer"
QT_MOC_LITERAL(7, 122, 28), // "mtx::events::msg::CallHangUp"
QT_MOC_LITERAL(8, 151, 14), // "newInviteState"
QT_MOC_LITERAL(9, 166, 12), // "newCallState"
QT_MOC_LITERAL(10, 179, 14), // "micMuteChanged"
QT_MOC_LITERAL(11, 194, 14), // "devicesChanged"
QT_MOC_LITERAL(12, 209, 19), // "turnServerRetrieved"
QT_MOC_LITERAL(13, 229, 26), // "mtx::responses::TurnServer"
QT_MOC_LITERAL(14, 256, 10), // "sendInvite"
QT_MOC_LITERAL(15, 267, 16), // "webrtc::CallType"
QT_MOC_LITERAL(16, 284, 11), // "windowIndex"
QT_MOC_LITERAL(17, 296, 9), // "syncEvent"
QT_MOC_LITERAL(18, 306, 40), // "mtx::events::collections::Tim..."
QT_MOC_LITERAL(19, 347, 5), // "event"
QT_MOC_LITERAL(20, 353, 13), // "toggleMicMute"
QT_MOC_LITERAL(21, 367, 14), // "toggleLocalPiP"
QT_MOC_LITERAL(22, 382, 12), // "acceptInvite"
QT_MOC_LITERAL(23, 395, 6), // "hangUp"
QT_MOC_LITERAL(24, 402, 36), // "mtx::events::msg::CallHangUp:..."
QT_MOC_LITERAL(25, 439, 10), // "windowList"
QT_MOC_LITERAL(26, 450, 13), // "previewWindow"
QT_MOC_LITERAL(27, 464, 18), // "retrieveTurnServer"
QT_MOC_LITERAL(28, 483, 14), // "haveCallInvite"
QT_MOC_LITERAL(29, 498, 8), // "isOnCall"
QT_MOC_LITERAL(30, 507, 8), // "callType"
QT_MOC_LITERAL(31, 516, 9), // "callState"
QT_MOC_LITERAL(32, 526, 13), // "webrtc::State"
QT_MOC_LITERAL(33, 540, 9), // "callParty"
QT_MOC_LITERAL(34, 550, 20), // "callPartyDisplayName"
QT_MOC_LITERAL(35, 571, 18), // "callPartyAvatarUrl"
QT_MOC_LITERAL(36, 590, 10), // "isMicMuted"
QT_MOC_LITERAL(37, 601, 12), // "haveLocalPiP"
QT_MOC_LITERAL(38, 614, 4), // "mics"
QT_MOC_LITERAL(39, 619, 7), // "cameras"
QT_MOC_LITERAL(40, 627, 14), // "callsSupported"
QT_MOC_LITERAL(41, 642, 20) // "screenShareSupported"

    },
    "CallManager\0newMessage\0\0roomid\0"
    "mtx::events::msg::CallInvite\0"
    "mtx::events::msg::CallCandidates\0"
    "mtx::events::msg::CallAnswer\0"
    "mtx::events::msg::CallHangUp\0"
    "newInviteState\0newCallState\0micMuteChanged\0"
    "devicesChanged\0turnServerRetrieved\0"
    "mtx::responses::TurnServer\0sendInvite\0"
    "webrtc::CallType\0windowIndex\0syncEvent\0"
    "mtx::events::collections::TimelineEvents\0"
    "event\0toggleMicMute\0toggleLocalPiP\0"
    "acceptInvite\0hangUp\0"
    "mtx::events::msg::CallHangUp::Reason\0"
    "windowList\0previewWindow\0retrieveTurnServer\0"
    "haveCallInvite\0isOnCall\0callType\0"
    "callState\0webrtc::State\0callParty\0"
    "callPartyDisplayName\0callPartyAvatarUrl\0"
    "isMicMuted\0haveLocalPiP\0mics\0cameras\0"
    "callsSupported\0screenShareSupported"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
      13,  168, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06 /* Public */,
       1,    2,  119,    2, 0x06 /* Public */,
       1,    2,  124,    2, 0x06 /* Public */,
       1,    2,  129,    2, 0x06 /* Public */,
       8,    0,  134,    2, 0x06 /* Public */,
       9,    0,  135,    2, 0x06 /* Public */,
      10,    0,  136,    2, 0x06 /* Public */,
      11,    0,  137,    2, 0x06 /* Public */,
      12,    1,  138,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    3,  141,    2, 0x0a /* Public */,
      14,    2,  148,    2, 0x2a /* Public | MethodCloned */,
      17,    1,  153,    2, 0x0a /* Public */,
      20,    0,  156,    2, 0x0a /* Public */,
      21,    0,  157,    2, 0x0a /* Public */,
      22,    0,  158,    2, 0x0a /* Public */,
      23,    1,  159,    2, 0x0a /* Public */,
      23,    0,  162,    2, 0x2a /* Public | MethodCloned */,
      25,    0,  163,    2, 0x0a /* Public */,
      26,    1,  164,    2, 0x0a /* Public */,
      27,    0,  167,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    3,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15, QMetaType::UInt,    3,    2,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,    3,    2,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::UInt,   16,
    QMetaType::Void,

 // properties: name, type, flags
      28, QMetaType::Bool, 0x00495001,
      29, QMetaType::Bool, 0x00495001,
      30, 0x80000000 | 15, 0x00495009,
      31, 0x80000000 | 32, 0x00495009,
      33, QMetaType::QString, 0x00495001,
      34, QMetaType::QString, 0x00495001,
      35, QMetaType::QString, 0x00495001,
      36, QMetaType::Bool, 0x00495001,
      37, QMetaType::Bool, 0x00495001,
      38, QMetaType::QStringList, 0x00495001,
      39, QMetaType::QStringList, 0x00495001,
      40, QMetaType::Bool, 0x00095401,
      41, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       4,
       5,
       4,
       5,
       4,
       4,
       4,
       6,
       5,
       7,
       7,
       0,
       0,

       0        // eod
};

void CallManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::msg::CallInvite(*)>(_a[2]))); break;
        case 1: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::msg::CallCandidates(*)>(_a[2]))); break;
        case 2: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::msg::CallAnswer(*)>(_a[2]))); break;
        case 3: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::msg::CallHangUp(*)>(_a[2]))); break;
        case 4: _t->newInviteState(); break;
        case 5: _t->newCallState(); break;
        case 6: _t->micMuteChanged(); break;
        case 7: _t->devicesChanged(); break;
        case 8: _t->turnServerRetrieved((*reinterpret_cast< const mtx::responses::TurnServer(*)>(_a[1]))); break;
        case 9: _t->sendInvite((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< webrtc::CallType(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 10: _t->sendInvite((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< webrtc::CallType(*)>(_a[2]))); break;
        case 11: _t->syncEvent((*reinterpret_cast< const mtx::events::collections::TimelineEvents(*)>(_a[1]))); break;
        case 12: _t->toggleMicMute(); break;
        case 13: _t->toggleLocalPiP(); break;
        case 14: _t->acceptInvite(); break;
        case 15: _t->hangUp((*reinterpret_cast< mtx::events::msg::CallHangUp::Reason(*)>(_a[1]))); break;
        case 16: _t->hangUp(); break;
        case 17: { QStringList _r = _t->windowList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->previewWindow((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 19: _t->retrieveTurnServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CallManager::*)(const QString & , const mtx::events::msg::CallInvite & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::newMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CallManager::*)(const QString & , const mtx::events::msg::CallCandidates & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::newMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CallManager::*)(const QString & , const mtx::events::msg::CallAnswer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::newMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CallManager::*)(const QString & , const mtx::events::msg::CallHangUp & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::newMessage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CallManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::newInviteState)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CallManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::newCallState)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CallManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::micMuteChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CallManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::devicesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CallManager::*)(const mtx::responses::TurnServer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallManager::turnServerRetrieved)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CallManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->haveCallInvite(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isOnCall(); break;
        case 2: *reinterpret_cast< webrtc::CallType*>(_v) = _t->callType(); break;
        case 3: *reinterpret_cast< webrtc::State*>(_v) = _t->callState(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->callParty(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->callPartyDisplayName(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->callPartyAvatarUrl(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isMicMuted(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->haveLocalPiP(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->mics(); break;
        case 10: *reinterpret_cast< QStringList*>(_v) = _t->cameras(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->callsSupported(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->screenShareSupported(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_CallManager[] = {
    QMetaObject::SuperData::link<webrtc::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject CallManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CallManager.data,
    qt_meta_data_CallManager,
    qt_static_metacall,
    qt_meta_extradata_CallManager,
    nullptr
} };


const QMetaObject *CallManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CallManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CallManager::newMessage(const QString & _t1, const mtx::events::msg::CallInvite & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CallManager::newMessage(const QString & _t1, const mtx::events::msg::CallCandidates & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CallManager::newMessage(const QString & _t1, const mtx::events::msg::CallAnswer & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CallManager::newMessage(const QString & _t1, const mtx::events::msg::CallHangUp & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CallManager::newInviteState()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CallManager::newCallState()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CallManager::micMuteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CallManager::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CallManager::turnServerRetrieved(const mtx::responses::TurnServer & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

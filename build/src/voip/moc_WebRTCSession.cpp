/****************************************************************************
** Meta object code from reading C++ file 'WebRTCSession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/voip/WebRTCSession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebRTCSession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebRTCSession_t {
    QByteArrayData data[13];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebRTCSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebRTCSession_t qt_meta_stringdata_WebRTCSession = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WebRTCSession"
QT_MOC_LITERAL(1, 14, 12), // "offerCreated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "std::string"
QT_MOC_LITERAL(4, 40, 3), // "sdp"
QT_MOC_LITERAL(5, 44, 56), // "std::vector<mtx::events::msg:..."
QT_MOC_LITERAL(6, 101, 13), // "answerCreated"
QT_MOC_LITERAL(7, 115, 15), // "newICECandidate"
QT_MOC_LITERAL(8, 131, 43), // "mtx::events::msg::CallCandida..."
QT_MOC_LITERAL(9, 175, 12), // "stateChanged"
QT_MOC_LITERAL(10, 188, 13), // "webrtc::State"
QT_MOC_LITERAL(11, 202, 8), // "setState"
QT_MOC_LITERAL(12, 211, 5) // "state"

    },
    "WebRTCSession\0offerCreated\0\0std::string\0"
    "sdp\0std::vector<mtx::events::msg::CallCandidates::Candidate>\0"
    "answerCreated\0newICECandidate\0"
    "mtx::events::msg::CallCandidates::Candidate\0"
    "stateChanged\0webrtc::State\0setState\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebRTCSession[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       7,    1,   49,    2, 0x06 /* Public */,
       9,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   12,

       0        // eod
};

void WebRTCSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebRTCSession *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->offerCreated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::vector<mtx::events::msg::CallCandidates::Candidate>(*)>(_a[2]))); break;
        case 1: _t->answerCreated((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::vector<mtx::events::msg::CallCandidates::Candidate>(*)>(_a[2]))); break;
        case 2: _t->newICECandidate((*reinterpret_cast< const mtx::events::msg::CallCandidates::Candidate(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< webrtc::State(*)>(_a[1]))); break;
        case 4: _t->setState((*reinterpret_cast< webrtc::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebRTCSession::*)(const std::string & , const std::vector<mtx::events::msg::CallCandidates::Candidate> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebRTCSession::offerCreated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebRTCSession::*)(const std::string & , const std::vector<mtx::events::msg::CallCandidates::Candidate> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebRTCSession::answerCreated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebRTCSession::*)(const mtx::events::msg::CallCandidates::Candidate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebRTCSession::newICECandidate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WebRTCSession::*)(webrtc::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebRTCSession::stateChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebRTCSession::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WebRTCSession.data,
    qt_meta_data_WebRTCSession,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WebRTCSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebRTCSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebRTCSession.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WebRTCSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WebRTCSession::offerCreated(const std::string & _t1, const std::vector<mtx::events::msg::CallCandidates::Candidate> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebRTCSession::answerCreated(const std::string & _t1, const std::vector<mtx::events::msg::CallCandidates::Candidate> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebRTCSession::newICECandidate(const mtx::events::msg::CallCandidates::Candidate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WebRTCSession::stateChanged(webrtc::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_webrtc_t {
    QByteArrayData data[14];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_webrtc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_webrtc_t qt_meta_stringdata_webrtc = {
    {
QT_MOC_LITERAL(0, 0, 6), // "webrtc"
QT_MOC_LITERAL(1, 7, 8), // "CallType"
QT_MOC_LITERAL(2, 16, 5), // "VOICE"
QT_MOC_LITERAL(3, 22, 5), // "VIDEO"
QT_MOC_LITERAL(4, 28, 6), // "SCREEN"
QT_MOC_LITERAL(5, 35, 5), // "State"
QT_MOC_LITERAL(6, 41, 12), // "DISCONNECTED"
QT_MOC_LITERAL(7, 54, 9), // "ICEFAILED"
QT_MOC_LITERAL(8, 64, 10), // "INITIATING"
QT_MOC_LITERAL(9, 75, 9), // "INITIATED"
QT_MOC_LITERAL(10, 85, 9), // "OFFERSENT"
QT_MOC_LITERAL(11, 95, 10), // "ANSWERSENT"
QT_MOC_LITERAL(12, 106, 10), // "CONNECTING"
QT_MOC_LITERAL(13, 117, 9) // "CONNECTED"

    },
    "webrtc\0CallType\0VOICE\0VIDEO\0SCREEN\0"
    "State\0DISCONNECTED\0ICEFAILED\0INITIATING\0"
    "INITIATED\0OFFERSENT\0ANSWERSENT\0"
    "CONNECTING\0CONNECTED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_webrtc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   24,
       5,    5, 0x2,    8,   30,

 // enum data: key, value
       2, uint(webrtc::CallType::VOICE),
       3, uint(webrtc::CallType::VIDEO),
       4, uint(webrtc::CallType::SCREEN),
       6, uint(webrtc::State::DISCONNECTED),
       7, uint(webrtc::State::ICEFAILED),
       8, uint(webrtc::State::INITIATING),
       9, uint(webrtc::State::INITIATED),
      10, uint(webrtc::State::OFFERSENT),
      11, uint(webrtc::State::ANSWERSENT),
      12, uint(webrtc::State::CONNECTING),
      13, uint(webrtc::State::CONNECTED),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject webrtc::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_webrtc.data,
    qt_meta_data_webrtc,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

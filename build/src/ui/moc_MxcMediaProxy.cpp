/****************************************************************************
** Meta object code from reading C++ file 'MxcMediaProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/MxcMediaProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MxcMediaProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MxcMediaProxy_t {
    QByteArrayData data[19];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MxcMediaProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MxcMediaProxy_t qt_meta_stringdata_MxcMediaProxy = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MxcMediaProxy"
QT_MOC_LITERAL(1, 14, 11), // "roomChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "eventIdChanged"
QT_MOC_LITERAL(4, 42, 13), // "loadedChanged"
QT_MOC_LITERAL(5, 56, 9), // "newBuffer"
QT_MOC_LITERAL(6, 66, 13), // "QMediaContent"
QT_MOC_LITERAL(7, 80, 10), // "QIODevice*"
QT_MOC_LITERAL(8, 91, 3), // "buf"
QT_MOC_LITERAL(9, 95, 18), // "orientationChanged"
QT_MOC_LITERAL(10, 114, 19), // "videoSurfaceChanged"
QT_MOC_LITERAL(11, 134, 13), // "startDownload"
QT_MOC_LITERAL(12, 148, 5), // "roomm"
QT_MOC_LITERAL(13, 154, 14), // "TimelineModel*"
QT_MOC_LITERAL(14, 169, 7), // "eventId"
QT_MOC_LITERAL(15, 177, 12), // "videoSurface"
QT_MOC_LITERAL(16, 190, 22), // "QAbstractVideoSurface*"
QT_MOC_LITERAL(17, 213, 6), // "loaded"
QT_MOC_LITERAL(18, 220, 11) // "orientation"

    },
    "MxcMediaProxy\0roomChanged\0\0eventIdChanged\0"
    "loadedChanged\0newBuffer\0QMediaContent\0"
    "QIODevice*\0buf\0orientationChanged\0"
    "videoSurfaceChanged\0startDownload\0"
    "roomm\0TimelineModel*\0eventId\0videoSurface\0"
    "QAbstractVideoSurface*\0loaded\0orientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MxcMediaProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    2,   52,    2, 0x06 /* Public */,
       9,    0,   57,    2, 0x06 /* Public */,
      10,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    8,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0149500b,
      14, QMetaType::QString, 0x00495103,
      15, 0x80000000 | 16, 0x0049510b,
      17, QMetaType::Bool, 0x00495001,
      18, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       5,
       2,
       4,

       0        // eod
};

void MxcMediaProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MxcMediaProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->roomChanged(); break;
        case 1: _t->eventIdChanged(); break;
        case 2: _t->loadedChanged(); break;
        case 3: _t->newBuffer((*reinterpret_cast< QMediaContent(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 4: _t->orientationChanged(); break;
        case 5: _t->videoSurfaceChanged(); break;
        case 6: _t->startDownload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MxcMediaProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcMediaProxy::roomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MxcMediaProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcMediaProxy::eventIdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MxcMediaProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcMediaProxy::loadedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MxcMediaProxy::*)(QMediaContent , QIODevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcMediaProxy::newBuffer)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MxcMediaProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcMediaProxy::orientationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MxcMediaProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcMediaProxy::videoSurfaceChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MxcMediaProxy *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TimelineModel**>(_v) = _t->room(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->eventId(); break;
        case 2: *reinterpret_cast< QAbstractVideoSurface**>(_v) = _t->getVideoSurface(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->loaded(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->orientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MxcMediaProxy *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoom(*reinterpret_cast< TimelineModel**>(_v)); break;
        case 1: _t->setEventId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVideoSurface(*reinterpret_cast< QAbstractVideoSurface**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MxcMediaProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QMediaPlayer::staticMetaObject>(),
    qt_meta_stringdata_MxcMediaProxy.data,
    qt_meta_data_MxcMediaProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MxcMediaProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MxcMediaProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MxcMediaProxy.stringdata0))
        return static_cast<void*>(this);
    return QMediaPlayer::qt_metacast(_clname);
}

int MxcMediaProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaPlayer::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MxcMediaProxy::roomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MxcMediaProxy::eventIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MxcMediaProxy::loadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MxcMediaProxy::newBuffer(QMediaContent _t1, QIODevice * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MxcMediaProxy::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MxcMediaProxy::videoSurfaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

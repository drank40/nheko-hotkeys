/****************************************************************************
** Meta object code from reading C++ file 'MxcAnimatedImage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/MxcAnimatedImage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MxcAnimatedImage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MxcAnimatedImage_t {
    QByteArrayData data[16];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MxcAnimatedImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MxcAnimatedImage_t qt_meta_stringdata_MxcAnimatedImage = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MxcAnimatedImage"
QT_MOC_LITERAL(1, 17, 11), // "roomChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "eventIdChanged"
QT_MOC_LITERAL(4, 45, 17), // "animatableChanged"
QT_MOC_LITERAL(5, 63, 13), // "loadedChanged"
QT_MOC_LITERAL(6, 77, 11), // "playChanged"
QT_MOC_LITERAL(7, 89, 13), // "startDownload"
QT_MOC_LITERAL(8, 103, 8), // "newFrame"
QT_MOC_LITERAL(9, 112, 5), // "frame"
QT_MOC_LITERAL(10, 118, 5), // "roomm"
QT_MOC_LITERAL(11, 124, 14), // "TimelineModel*"
QT_MOC_LITERAL(12, 139, 7), // "eventId"
QT_MOC_LITERAL(13, 147, 10), // "animatable"
QT_MOC_LITERAL(14, 158, 6), // "loaded"
QT_MOC_LITERAL(15, 165, 4) // "play"

    },
    "MxcAnimatedImage\0roomChanged\0\0"
    "eventIdChanged\0animatableChanged\0"
    "loadedChanged\0playChanged\0startDownload\0"
    "newFrame\0frame\0roomm\0TimelineModel*\0"
    "eventId\0animatable\0loaded\0play"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MxcAnimatedImage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0149500b,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void MxcAnimatedImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MxcAnimatedImage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->roomChanged(); break;
        case 1: _t->eventIdChanged(); break;
        case 2: _t->animatableChanged(); break;
        case 3: _t->loadedChanged(); break;
        case 4: _t->playChanged(); break;
        case 5: _t->startDownload(); break;
        case 6: _t->newFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MxcAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcAnimatedImage::roomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MxcAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcAnimatedImage::eventIdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MxcAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcAnimatedImage::animatableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MxcAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcAnimatedImage::loadedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MxcAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcAnimatedImage::playChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MxcAnimatedImage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TimelineModel**>(_v) = _t->room(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->eventId(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->animatable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->loaded(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->play(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MxcAnimatedImage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoom(*reinterpret_cast< TimelineModel**>(_v)); break;
        case 1: _t->setEventId(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPlay(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MxcAnimatedImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_MxcAnimatedImage.data,
    qt_meta_data_MxcAnimatedImage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MxcAnimatedImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MxcAnimatedImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MxcAnimatedImage.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int MxcAnimatedImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void MxcAnimatedImage::roomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MxcAnimatedImage::eventIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MxcAnimatedImage::animatableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MxcAnimatedImage::loadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MxcAnimatedImage::playChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

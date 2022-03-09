/****************************************************************************
** Meta object code from reading C++ file 'MxcImageProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/MxcImageProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MxcImageProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MxcImageRunnable_t {
    QByteArrayData data[5];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MxcImageRunnable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MxcImageRunnable_t qt_meta_stringdata_MxcImageRunnable = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MxcImageRunnable"
QT_MOC_LITERAL(1, 17, 4), // "done"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "image"
QT_MOC_LITERAL(4, 29, 5) // "error"

    },
    "MxcImageRunnable\0done\0\0image\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MxcImageRunnable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void MxcImageRunnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MxcImageRunnable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MxcImageRunnable::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcImageRunnable::done)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MxcImageRunnable::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxcImageRunnable::error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MxcImageRunnable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MxcImageRunnable.data,
    qt_meta_data_MxcImageRunnable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MxcImageRunnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MxcImageRunnable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MxcImageRunnable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MxcImageRunnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void MxcImageRunnable::done(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MxcImageRunnable::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MxcImageProvider_t {
    QByteArrayData data[14];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MxcImageProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MxcImageProvider_t qt_meta_stringdata_MxcImageProvider = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MxcImageProvider"
QT_MOC_LITERAL(1, 17, 20), // "requestImageResponse"
QT_MOC_LITERAL(2, 38, 20), // "QQuickImageResponse*"
QT_MOC_LITERAL(3, 59, 0), // ""
QT_MOC_LITERAL(4, 60, 2), // "id"
QT_MOC_LITERAL(5, 63, 13), // "requestedSize"
QT_MOC_LITERAL(6, 77, 17), // "addEncryptionInfo"
QT_MOC_LITERAL(7, 95, 26), // "mtx::crypto::EncryptedFile"
QT_MOC_LITERAL(8, 122, 4), // "info"
QT_MOC_LITERAL(9, 127, 8), // "download"
QT_MOC_LITERAL(10, 136, 49), // "std::function<void(QString,QS..."
QT_MOC_LITERAL(11, 186, 4), // "then"
QT_MOC_LITERAL(12, 191, 4), // "crop"
QT_MOC_LITERAL(13, 196, 6) // "radius"

    },
    "MxcImageProvider\0requestImageResponse\0"
    "QQuickImageResponse*\0\0id\0requestedSize\0"
    "addEncryptionInfo\0mtx::crypto::EncryptedFile\0"
    "info\0download\0"
    "std::function<void(QString,QSize,QImage,QString)>\0"
    "then\0crop\0radius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MxcImageProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    3, 0x0a /* Public */,
       6,    1,   44,    3, 0x0a /* Public */,
       9,    5,   47,    3, 0x0a /* Public */,
       9,    4,   58,    3, 0x2a /* Public | MethodCloned */,
       9,    3,   67,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QSize,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QSize, 0x80000000 | 10, QMetaType::Bool, QMetaType::Double,    4,    5,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QSize, 0x80000000 | 10, QMetaType::Bool,    4,    5,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QSize, 0x80000000 | 10,    4,    5,   11,

       0        // eod
};

void MxcImageProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MxcImageProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QQuickImageResponse* _r = _t->requestImageResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuickImageResponse**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->addEncryptionInfo((*reinterpret_cast< mtx::crypto::EncryptedFile(*)>(_a[1]))); break;
        case 2: _t->download((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< std::function<void(QString,QSize,QImage,QString)>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 3: _t->download((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< std::function<void(QString,QSize,QImage,QString)>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->download((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< std::function<void(QString,QSize,QImage,QString)>(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MxcImageProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MxcImageProvider.data,
    qt_meta_data_MxcImageProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MxcImageProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MxcImageProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MxcImageProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQuickAsyncImageProvider"))
        return static_cast< QQuickAsyncImageProvider*>(this);
    return QObject::qt_metacast(_clname);
}

int MxcImageProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

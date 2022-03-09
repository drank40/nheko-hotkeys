/****************************************************************************
** Meta object code from reading C++ file 'DelegateChooser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/timeline/DelegateChooser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DelegateChooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DelegateChoice_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegateChoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegateChoice_t qt_meta_stringdata_DelegateChoice = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DelegateChoice"
QT_MOC_LITERAL(1, 15, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 31, 8), // "delegate"
QT_MOC_LITERAL(3, 40, 15), // "delegateChanged"
QT_MOC_LITERAL(4, 56, 0), // ""
QT_MOC_LITERAL(5, 57, 16), // "roleValueChanged"
QT_MOC_LITERAL(6, 74, 7), // "changed"
QT_MOC_LITERAL(7, 82, 9), // "roleValue"
QT_MOC_LITERAL(8, 92, 14) // "QQmlComponent*"

    },
    "DelegateChoice\0DefaultProperty\0delegate\0"
    "delegateChanged\0\0roleValueChanged\0"
    "changed\0roleValue\0QQmlComponent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegateChoice[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,
       5,    0,   32,    4, 0x06 /* Public */,
       6,    0,   33,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QVariant, 0x00495103,
       2, 0x80000000 | 8, 0x0049510b,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void DelegateChoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegateChoice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->delegateChanged(); break;
        case 1: _t->roleValueChanged(); break;
        case 2: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelegateChoice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateChoice::delegateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DelegateChoice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateChoice::roleValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DelegateChoice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateChoice::changed)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DelegateChoice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->roleValue(); break;
        case 1: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DelegateChoice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoleValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DelegateChoice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DelegateChoice.data,
    qt_meta_data_DelegateChoice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegateChoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateChoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateChoice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DelegateChoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void DelegateChoice::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DelegateChoice::roleValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DelegateChoice::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_DelegateChooser_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegateChooser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegateChooser_t qt_meta_stringdata_DelegateChooser = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DelegateChooser"
QT_MOC_LITERAL(1, 16, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 32, 7), // "choices"
QT_MOC_LITERAL(3, 40, 11), // "roleChanged"
QT_MOC_LITERAL(4, 52, 0), // ""
QT_MOC_LITERAL(5, 53, 16), // "roleValueChanged"
QT_MOC_LITERAL(6, 70, 12), // "childChanged"
QT_MOC_LITERAL(7, 83, 32), // "QQmlListProperty<DelegateChoice>"
QT_MOC_LITERAL(8, 116, 9), // "roleValue"
QT_MOC_LITERAL(9, 126, 5), // "child"
QT_MOC_LITERAL(10, 132, 11) // "QQuickItem*"

    },
    "DelegateChooser\0DefaultProperty\0choices\0"
    "roleChanged\0\0roleValueChanged\0"
    "childChanged\0QQmlListProperty<DelegateChoice>\0"
    "roleValue\0child\0QQuickItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegateChooser[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,
       5,    0,   32,    4, 0x06 /* Public */,
       6,    0,   33,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 7, 0x00095409,
       8, QMetaType::QVariant, 0x00495103,
       9, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void DelegateChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegateChooser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->roleChanged(); break;
        case 1: _t->roleValueChanged(); break;
        case 2: _t->childChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelegateChooser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateChooser::roleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DelegateChooser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateChooser::roleValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DelegateChooser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateChooser::childChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DelegateChooser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<DelegateChoice>*>(_v) = _t->choices(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->roleValue(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->child(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DelegateChooser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRoleValue(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DelegateChooser::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_DelegateChooser.data,
    qt_meta_data_DelegateChooser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegateChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateChooser.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int DelegateChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DelegateChooser::roleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DelegateChooser::roleValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DelegateChooser::childChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'Reaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/timeline/Reaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Reaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Reaction_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Reaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Reaction_t qt_meta_stringdata_Reaction = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Reaction"
QT_MOC_LITERAL(1, 9, 3), // "key"
QT_MOC_LITERAL(2, 13, 10), // "displayKey"
QT_MOC_LITERAL(3, 24, 5), // "users"
QT_MOC_LITERAL(4, 30, 16), // "selfReactedEvent"
QT_MOC_LITERAL(5, 47, 5) // "count"

    },
    "Reaction\0key\0displayKey\0users\0"
    "selfReactedEvent\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Reaction[] = {

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
       5, QMetaType::Int, 0x00095401,

       0        // eod
};

void Reaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Reaction *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->displayKey(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->users(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->selfReactedEvent(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->count(); break;
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

QT_INIT_METAOBJECT const QMetaObject Reaction::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Reaction.data,
    qt_meta_data_Reaction,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

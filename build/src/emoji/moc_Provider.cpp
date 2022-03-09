/****************************************************************************
** Meta object code from reading C++ file 'Provider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/emoji/Provider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Provider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_emoji__Emoji_t {
    QByteArrayData data[15];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_emoji__Emoji_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_emoji__Emoji_t qt_meta_stringdata_emoji__Emoji = {
    {
QT_MOC_LITERAL(0, 0, 12), // "emoji::Emoji"
QT_MOC_LITERAL(1, 13, 7), // "unicode"
QT_MOC_LITERAL(2, 21, 9), // "shortName"
QT_MOC_LITERAL(3, 31, 8), // "category"
QT_MOC_LITERAL(4, 40, 22), // "emoji::Emoji::Category"
QT_MOC_LITERAL(5, 63, 8), // "Category"
QT_MOC_LITERAL(6, 72, 6), // "People"
QT_MOC_LITERAL(7, 79, 6), // "Nature"
QT_MOC_LITERAL(8, 86, 4), // "Food"
QT_MOC_LITERAL(9, 91, 8), // "Activity"
QT_MOC_LITERAL(10, 100, 6), // "Travel"
QT_MOC_LITERAL(11, 107, 7), // "Objects"
QT_MOC_LITERAL(12, 115, 7), // "Symbols"
QT_MOC_LITERAL(13, 123, 5), // "Flags"
QT_MOC_LITERAL(14, 129, 6) // "Search"

    },
    "emoji::Emoji\0unicode\0shortName\0category\0"
    "emoji::Emoji::Category\0Category\0People\0"
    "Nature\0Food\0Activity\0Travel\0Objects\0"
    "Symbols\0Flags\0Search"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_emoji__Emoji[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, 0x80000000 | 4, 0x0009500b,

 // enums: name, alias, flags, count, data
       5,    5, 0x2,    9,   28,

 // enum data: key, value
       6, uint(emoji::Emoji::Category::People),
       7, uint(emoji::Emoji::Category::Nature),
       8, uint(emoji::Emoji::Category::Food),
       9, uint(emoji::Emoji::Category::Activity),
      10, uint(emoji::Emoji::Category::Travel),
      11, uint(emoji::Emoji::Category::Objects),
      12, uint(emoji::Emoji::Category::Symbols),
      13, uint(emoji::Emoji::Category::Flags),
      14, uint(emoji::Emoji::Category::Search),

       0        // eod
};

void emoji::Emoji::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Emoji *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->unicode; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->shortName; break;
        case 2: *reinterpret_cast< emoji::Emoji::Category*>(_v) = _t->category; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<Emoji *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->unicode != *reinterpret_cast< QString*>(_v)) {
                _t->unicode = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->shortName != *reinterpret_cast< QString*>(_v)) {
                _t->shortName = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->category != *reinterpret_cast< emoji::Emoji::Category*>(_v)) {
                _t->category = *reinterpret_cast< emoji::Emoji::Category*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject emoji::Emoji::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_emoji__Emoji.data,
    qt_meta_data_emoji__Emoji,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_emoji_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_emoji_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_emoji_t qt_meta_stringdata_emoji = {
    {
QT_MOC_LITERAL(0, 0, 5) // "emoji"

    },
    "emoji"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_emoji[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject emoji::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_emoji.data,
    qt_meta_data_emoji,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

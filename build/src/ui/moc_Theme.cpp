/****************************************************************************
** Meta object code from reading C++ file 'Theme.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/Theme.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Theme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Theme_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Theme_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Theme_t qt_meta_stringdata_Theme = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Theme"
QT_MOC_LITERAL(1, 6, 17), // "sidebarBackground"
QT_MOC_LITERAL(2, 24, 15), // "alternateButton"
QT_MOC_LITERAL(3, 40, 9), // "separator"
QT_MOC_LITERAL(4, 50, 3), // "red"
QT_MOC_LITERAL(5, 54, 5), // "error"
QT_MOC_LITERAL(6, 60, 6) // "orange"

    },
    "Theme\0sidebarBackground\0alternateButton\0"
    "separator\0red\0error\0orange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Theme[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095401,
       2, QMetaType::QColor, 0x00095401,
       3, QMetaType::QColor, 0x00095401,
       4, QMetaType::QColor, 0x00095401,
       5, QMetaType::QColor, 0x00095401,
       6, QMetaType::QColor, 0x00095401,

       0        // eod
};

void Theme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Theme *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->sidebarBackground(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->alternateButton(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->separator(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->red(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->error(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->orange(); break;
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

QT_INIT_METAOBJECT const QMetaObject Theme::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QPalette>::value(),
    qt_meta_stringdata_Theme.data,
    qt_meta_data_Theme,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

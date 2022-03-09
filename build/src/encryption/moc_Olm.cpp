/****************************************************************************
** Meta object code from reading C++ file 'Olm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/encryption/Olm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Olm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_olm_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_olm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_olm_t qt_meta_stringdata_olm = {
    {
QT_MOC_LITERAL(0, 0, 3), // "olm"
QT_MOC_LITERAL(1, 4, 19), // "DecryptionErrorCode"
QT_MOC_LITERAL(2, 24, 7), // "NoError"
QT_MOC_LITERAL(3, 32, 14), // "MissingSession"
QT_MOC_LITERAL(4, 47, 19), // "MissingSessionIndex"
QT_MOC_LITERAL(5, 67, 7), // "DbError"
QT_MOC_LITERAL(6, 75, 16), // "DecryptionFailed"
QT_MOC_LITERAL(7, 92, 13), // "ParsingFailed"
QT_MOC_LITERAL(8, 106, 12) // "ReplayAttack"

    },
    "olm\0DecryptionErrorCode\0NoError\0"
    "MissingSession\0MissingSessionIndex\0"
    "DbError\0DecryptionFailed\0ParsingFailed\0"
    "ReplayAttack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_olm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    7,   19,

 // enum data: key, value
       2, uint(olm::NoError),
       3, uint(olm::MissingSession),
       4, uint(olm::MissingSessionIndex),
       5, uint(olm::DbError),
       6, uint(olm::DecryptionFailed),
       7, uint(olm::ParsingFailed),
       8, uint(olm::ReplayAttack),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject olm::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_olm.data,
    qt_meta_data_olm,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

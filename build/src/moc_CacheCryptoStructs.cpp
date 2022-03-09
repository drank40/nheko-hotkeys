/****************************************************************************
** Meta object code from reading C++ file 'CacheCryptoStructs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/CacheCryptoStructs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CacheCryptoStructs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_crypto_t {
    QByteArrayData data[5];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_crypto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_crypto_t qt_meta_stringdata_crypto = {
    {
QT_MOC_LITERAL(0, 0, 6), // "crypto"
QT_MOC_LITERAL(1, 7, 5), // "Trust"
QT_MOC_LITERAL(2, 13, 10), // "Unverified"
QT_MOC_LITERAL(3, 24, 4), // "TOFU"
QT_MOC_LITERAL(4, 29, 8) // "Verified"

    },
    "crypto\0Trust\0Unverified\0TOFU\0Verified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_crypto[] = {

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
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(crypto::Unverified),
       3, uint(crypto::TOFU),
       4, uint(crypto::Verified),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject crypto::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_crypto.data,
    qt_meta_data_crypto,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'LoginPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/LoginPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SSOProvider_t {
    QByteArrayData data[4];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSOProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSOProvider_t qt_meta_stringdata_SSOProvider = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SSOProvider"
QT_MOC_LITERAL(1, 12, 9), // "avatarUrl"
QT_MOC_LITERAL(2, 22, 4), // "name"
QT_MOC_LITERAL(3, 27, 2) // "id"

    },
    "SSOProvider\0avatarUrl\0name\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSOProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void SSOProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<SSOProvider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->avatarUrl(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->id(); break;
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

QT_INIT_METAOBJECT const QMetaObject SSOProvider::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_SSOProvider.data,
    qt_meta_data_SSOProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_LoginPage_t {
    QByteArrayData data[42];
    char stringdata0[528];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginPage_t qt_meta_stringdata_LoginPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LoginPage"
QT_MOC_LITERAL(1, 10, 16), // "loggingInChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "errorOccurred"
QT_MOC_LITERAL(4, 42, 14), // "versionErrorCb"
QT_MOC_LITERAL(5, 57, 3), // "err"
QT_MOC_LITERAL(6, 61, 11), // "versionOkCb"
QT_MOC_LITERAL(7, 73, 17), // "passwordSupported"
QT_MOC_LITERAL(8, 91, 12), // "ssoSupported"
QT_MOC_LITERAL(9, 104, 17), // "identityProviders"
QT_MOC_LITERAL(10, 122, 7), // "loginOk"
QT_MOC_LITERAL(11, 130, 21), // "mtx::responses::Login"
QT_MOC_LITERAL(12, 152, 3), // "res"
QT_MOC_LITERAL(13, 156, 22), // "onServerAddressEntered"
QT_MOC_LITERAL(14, 179, 15), // "matrixIdChanged"
QT_MOC_LITERAL(15, 195, 17), // "homeserverChanged"
QT_MOC_LITERAL(16, 213, 16), // "mxidErrorChanged"
QT_MOC_LITERAL(17, 230, 18), // "lookingUpHsChanged"
QT_MOC_LITERAL(18, 249, 15), // "versionLookedUp"
QT_MOC_LITERAL(19, 265, 21), // "versionLookupFinished"
QT_MOC_LITERAL(20, 287, 9), // "showError"
QT_MOC_LITERAL(21, 297, 3), // "msg"
QT_MOC_LITERAL(22, 301, 20), // "onLoginButtonClicked"
QT_MOC_LITERAL(23, 322, 11), // "LoginMethod"
QT_MOC_LITERAL(24, 334, 11), // "loginMethod"
QT_MOC_LITERAL(25, 346, 6), // "userid"
QT_MOC_LITERAL(26, 353, 8), // "password"
QT_MOC_LITERAL(27, 362, 10), // "deviceName"
QT_MOC_LITERAL(28, 373, 12), // "versionError"
QT_MOC_LITERAL(29, 386, 13), // "error_message"
QT_MOC_LITERAL(30, 400, 9), // "versionOk"
QT_MOC_LITERAL(31, 410, 17), // "initialDeviceName"
QT_MOC_LITERAL(32, 428, 4), // "mxid"
QT_MOC_LITERAL(33, 433, 10), // "homeserver"
QT_MOC_LITERAL(34, 444, 9), // "mxidError"
QT_MOC_LITERAL(35, 454, 5), // "error"
QT_MOC_LITERAL(36, 460, 11), // "lookingUpHs"
QT_MOC_LITERAL(37, 472, 15), // "homeserverValid"
QT_MOC_LITERAL(38, 488, 9), // "loggingIn"
QT_MOC_LITERAL(39, 498, 16), // "homeserverNeeded"
QT_MOC_LITERAL(40, 515, 8), // "Password"
QT_MOC_LITERAL(41, 524, 3) // "SSO"

    },
    "LoginPage\0loggingInChanged\0\0errorOccurred\0"
    "versionErrorCb\0err\0versionOkCb\0"
    "passwordSupported\0ssoSupported\0"
    "identityProviders\0loginOk\0"
    "mtx::responses::Login\0res\0"
    "onServerAddressEntered\0matrixIdChanged\0"
    "homeserverChanged\0mxidErrorChanged\0"
    "lookingUpHsChanged\0versionLookedUp\0"
    "versionLookupFinished\0showError\0msg\0"
    "onLoginButtonClicked\0LoginMethod\0"
    "loginMethod\0userid\0password\0deviceName\0"
    "versionError\0error_message\0versionOk\0"
    "initialDeviceName\0mxid\0homeserver\0"
    "mxidError\0error\0lookingUpHs\0homeserverValid\0"
    "loggingIn\0homeserverNeeded\0Password\0"
    "SSO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      11,  144, // properties
       1,  188, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    1,  101,    2, 0x06 /* Public */,
       6,    3,  104,    2, 0x06 /* Public */,
      10,    1,  111,    2, 0x06 /* Public */,
      13,    0,  114,    2, 0x06 /* Public */,
      14,    0,  115,    2, 0x06 /* Public */,
      15,    0,  116,    2, 0x06 /* Public */,
      16,    0,  117,    2, 0x06 /* Public */,
      17,    0,  118,    2, 0x06 /* Public */,
      18,    0,  119,    2, 0x06 /* Public */,
      19,    0,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  121,    2, 0x0a /* Public */,
      22,    4,  124,    2, 0x0a /* Public */,
      28,    1,  133,    2, 0x0a /* Public */,
      30,    3,  136,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      31,    0,  143,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::QVariantList,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::QVariantList,    7,    8,    9,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
      32, QMetaType::QString, 0x00495103,
      33, QMetaType::QString, 0x00495103,
      34, QMetaType::QString, 0x00495001,
      35, QMetaType::QString, 0x00495001,
      36, QMetaType::Bool, 0x00495001,
      37, QMetaType::Bool, 0x00495001,
      38, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       8, QMetaType::Bool, 0x00495001,
      39, QMetaType::Bool, 0x00495001,
       9, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       6,
       7,
       8,
       1,
       9,
       9,
       0,
      10,
      10,
      10,
      10,

 // enums: name, alias, flags, count, data
      23,   23, 0x2,    2,  193,

 // enum data: key, value
      40, uint(LoginPage::LoginMethod::Password),
      41, uint(LoginPage::LoginMethod::SSO),

       0        // eod
};

void LoginPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loggingInChanged(); break;
        case 1: _t->errorOccurred(); break;
        case 2: _t->versionErrorCb((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->versionOkCb((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3]))); break;
        case 4: _t->loginOk((*reinterpret_cast< const mtx::responses::Login(*)>(_a[1]))); break;
        case 5: _t->onServerAddressEntered(); break;
        case 6: _t->matrixIdChanged(); break;
        case 7: _t->homeserverChanged(); break;
        case 8: _t->mxidErrorChanged(); break;
        case 9: _t->lookingUpHsChanged(); break;
        case 10: _t->versionLookedUp(); break;
        case 11: _t->versionLookupFinished(); break;
        case 12: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->onLoginButtonClicked((*reinterpret_cast< LoginMethod(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 14: _t->versionError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->versionOk((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3]))); break;
        case 16: { QString _r = _t->initialDeviceName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::loggingInChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::errorOccurred)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::versionErrorCb)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)(bool , bool , QVariantList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::versionOkCb)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)(const mtx::responses::Login & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::loginOk)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::onServerAddressEntered)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::matrixIdChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::homeserverChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::mxidErrorChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::lookingUpHsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::versionLookedUp)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::versionLookupFinished)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LoginPage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->mxid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->homeserver(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->mxidError(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->error(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->lookingUpHs(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->homeserverValid(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->loggingIn(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->passwordSupported(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->ssoSupported(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->homeserverNeeded(); break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->identityProviders(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LoginPage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMxid(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHomeserver(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LoginPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LoginPage.data,
    qt_meta_data_LoginPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginPage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LoginPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LoginPage::loggingInChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginPage::errorOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LoginPage::versionErrorCb(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LoginPage::versionOkCb(bool _t1, bool _t2, QVariantList _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LoginPage::loginOk(const mtx::responses::Login & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LoginPage::onServerAddressEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LoginPage::matrixIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LoginPage::homeserverChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LoginPage::mxidErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void LoginPage::lookingUpHsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void LoginPage::versionLookedUp()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void LoginPage::versionLookupFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

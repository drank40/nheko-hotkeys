/****************************************************************************
** Meta object code from reading C++ file 'CommunitiesModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/timeline/CommunitiesModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommunitiesModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilteredCommunitiesModel_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilteredCommunitiesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilteredCommunitiesModel_t qt_meta_stringdata_FilteredCommunitiesModel = {
    {
QT_MOC_LITERAL(0, 0, 24) // "FilteredCommunitiesModel"

    },
    "FilteredCommunitiesModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilteredCommunitiesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FilteredCommunitiesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FilteredCommunitiesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_FilteredCommunitiesModel.data,
    qt_meta_data_FilteredCommunitiesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilteredCommunitiesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilteredCommunitiesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilteredCommunitiesModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int FilteredCommunitiesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CommunitiesModel_t {
    QByteArrayData data[21];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommunitiesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommunitiesModel_t qt_meta_stringdata_CommunitiesModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CommunitiesModel"
QT_MOC_LITERAL(1, 17, 19), // "currentTagIdChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "tagId"
QT_MOC_LITERAL(4, 44, 17), // "hiddenTagsChanged"
QT_MOC_LITERAL(5, 62, 11), // "tagsChanged"
QT_MOC_LITERAL(6, 74, 24), // "containsSubspacesChanged"
QT_MOC_LITERAL(7, 99, 17), // "initializeSidebar"
QT_MOC_LITERAL(8, 117, 4), // "sync"
QT_MOC_LITERAL(9, 122, 20), // "mtx::responses::Sync"
QT_MOC_LITERAL(10, 143, 5), // "sync_"
QT_MOC_LITERAL(11, 149, 5), // "clear"
QT_MOC_LITERAL(12, 155, 12), // "currentTagId"
QT_MOC_LITERAL(13, 168, 15), // "setCurrentTagId"
QT_MOC_LITERAL(14, 184, 17), // "resetCurrentTagId"
QT_MOC_LITERAL(15, 202, 4), // "tags"
QT_MOC_LITERAL(16, 207, 15), // "tagsWithDefault"
QT_MOC_LITERAL(17, 223, 11), // "toggleTagId"
QT_MOC_LITERAL(18, 235, 8), // "filtered"
QT_MOC_LITERAL(19, 244, 25), // "FilteredCommunitiesModel*"
QT_MOC_LITERAL(20, 270, 17) // "containsSubspaces"

    },
    "CommunitiesModel\0currentTagIdChanged\0"
    "\0tagId\0hiddenTagsChanged\0tagsChanged\0"
    "containsSubspacesChanged\0initializeSidebar\0"
    "sync\0mtx::responses::Sync\0sync_\0clear\0"
    "currentTagId\0setCurrentTagId\0"
    "resetCurrentTagId\0tags\0tagsWithDefault\0"
    "toggleTagId\0filtered\0FilteredCommunitiesModel*\0"
    "containsSubspaces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommunitiesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       4,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   90,    2, 0x0a /* Public */,
       8,    1,   91,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    1,   96,    2, 0x0a /* Public */,
      14,    0,   99,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x0a /* Public */,
      17,    1,  102,    2, 0x0a /* Public */,
      18,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString,    3,
    0x80000000 | 19,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495107,
      15, QMetaType::QStringList, 0x00495001,
      16, QMetaType::QStringList, 0x00495001,
      20, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       2,
       3,

       0        // eod
};

void CommunitiesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommunitiesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentTagIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->hiddenTagsChanged(); break;
        case 2: _t->tagsChanged(); break;
        case 3: _t->containsSubspacesChanged(); break;
        case 4: _t->initializeSidebar(); break;
        case 5: _t->sync((*reinterpret_cast< const mtx::responses::Sync(*)>(_a[1]))); break;
        case 6: _t->clear(); break;
        case 7: { QString _r = _t->currentTagId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setCurrentTagId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->resetCurrentTagId(); break;
        case 10: { QStringList _r = _t->tags();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 11: { QStringList _r = _t->tagsWithDefault();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->toggleTagId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: { FilteredCommunitiesModel* _r = _t->filtered();
            if (_a[0]) *reinterpret_cast< FilteredCommunitiesModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommunitiesModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunitiesModel::currentTagIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommunitiesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunitiesModel::hiddenTagsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommunitiesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunitiesModel::tagsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CommunitiesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunitiesModel::containsSubspacesChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CommunitiesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentTagId(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->tags(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->tagsWithDefault(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->containsSubspaces(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CommunitiesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentTagId(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        CommunitiesModel *_t = static_cast<CommunitiesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetCurrentTagId(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CommunitiesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CommunitiesModel.data,
    qt_meta_data_CommunitiesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommunitiesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommunitiesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommunitiesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CommunitiesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CommunitiesModel::currentTagIdChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommunitiesModel::hiddenTagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CommunitiesModel::tagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CommunitiesModel::containsSubspacesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

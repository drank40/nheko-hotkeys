/****************************************************************************
** Meta object code from reading C++ file 'ChatPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/ChatPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatPage_t {
    QByteArrayData data[110];
    char stringdata0[1893];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatPage_t qt_meta_stringdata_ChatPage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ChatPage"
QT_MOC_LITERAL(1, 9, 14), // "connectionLost"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "connectionRestored"
QT_MOC_LITERAL(4, 44, 22), // "notificationsRetrieved"
QT_MOC_LITERAL(5, 67, 29), // "mtx::responses::Notifications"
QT_MOC_LITERAL(6, 97, 26), // "highlightedNotifsRetrieved"
QT_MOC_LITERAL(7, 124, 9), // "widgetPos"
QT_MOC_LITERAL(8, 134, 13), // "contentLoaded"
QT_MOC_LITERAL(9, 148, 7), // "closing"
QT_MOC_LITERAL(10, 156, 17), // "changeWindowTitle"
QT_MOC_LITERAL(11, 174, 14), // "unreadMessages"
QT_MOC_LITERAL(12, 189, 5), // "count"
QT_MOC_LITERAL(13, 195, 16), // "showNotification"
QT_MOC_LITERAL(14, 212, 3), // "msg"
QT_MOC_LITERAL(15, 216, 13), // "showLoginPage"
QT_MOC_LITERAL(16, 230, 20), // "showUserSettingsPage"
QT_MOC_LITERAL(17, 251, 12), // "ownProfileOk"
QT_MOC_LITERAL(18, 264, 18), // "setUserDisplayName"
QT_MOC_LITERAL(19, 283, 4), // "name"
QT_MOC_LITERAL(20, 288, 13), // "setUserAvatar"
QT_MOC_LITERAL(21, 302, 6), // "avatar"
QT_MOC_LITERAL(22, 309, 9), // "loggedOut"
QT_MOC_LITERAL(23, 319, 9), // "trySyncCb"
QT_MOC_LITERAL(24, 329, 16), // "tryDelayedSyncCb"
QT_MOC_LITERAL(25, 346, 16), // "tryInitialSyncCb"
QT_MOC_LITERAL(26, 363, 15), // "newSyncResponse"
QT_MOC_LITERAL(27, 379, 20), // "mtx::responses::Sync"
QT_MOC_LITERAL(28, 400, 3), // "res"
QT_MOC_LITERAL(29, 404, 11), // "std::string"
QT_MOC_LITERAL(30, 416, 16), // "prev_batch_token"
QT_MOC_LITERAL(31, 433, 8), // "leftRoom"
QT_MOC_LITERAL(32, 442, 7), // "room_id"
QT_MOC_LITERAL(33, 450, 7), // "newRoom"
QT_MOC_LITERAL(34, 458, 12), // "changeToRoom"
QT_MOC_LITERAL(35, 471, 15), // "initializeViews"
QT_MOC_LITERAL(36, 487, 5), // "rooms"
QT_MOC_LITERAL(37, 493, 20), // "initializeEmptyViews"
QT_MOC_LITERAL(38, 514, 18), // "initializeMentions"
QT_MOC_LITERAL(39, 533, 43), // "QMap<QString,mtx::responses::..."
QT_MOC_LITERAL(40, 577, 6), // "notifs"
QT_MOC_LITERAL(41, 584, 6), // "syncUI"
QT_MOC_LITERAL(42, 591, 4), // "sync"
QT_MOC_LITERAL(43, 596, 17), // "dropToLoginPageCb"
QT_MOC_LITERAL(44, 614, 13), // "notifyMessage"
QT_MOC_LITERAL(45, 628, 6), // "roomid"
QT_MOC_LITERAL(46, 635, 7), // "eventid"
QT_MOC_LITERAL(47, 643, 8), // "roomname"
QT_MOC_LITERAL(48, 652, 6), // "sender"
QT_MOC_LITERAL(49, 659, 7), // "message"
QT_MOC_LITERAL(50, 667, 4), // "icon"
QT_MOC_LITERAL(51, 672, 17), // "retrievedPresence"
QT_MOC_LITERAL(52, 690, 9), // "statusMsg"
QT_MOC_LITERAL(53, 700, 28), // "mtx::presence::PresenceState"
QT_MOC_LITERAL(54, 729, 5), // "state"
QT_MOC_LITERAL(55, 735, 12), // "themeChanged"
QT_MOC_LITERAL(56, 748, 21), // "decryptSidebarChanged"
QT_MOC_LITERAL(57, 770, 32), // "receivedDeviceVerificationAccept"
QT_MOC_LITERAL(58, 803, 39), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(59, 843, 33), // "receivedDeviceVerificationReq..."
QT_MOC_LITERAL(60, 877, 40), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(61, 918, 37), // "receivedRoomDeviceVerificatio..."
QT_MOC_LITERAL(62, 956, 64), // "mtx::events::RoomEvent<mtx::e..."
QT_MOC_LITERAL(63, 1021, 14), // "TimelineModel*"
QT_MOC_LITERAL(64, 1036, 5), // "model"
QT_MOC_LITERAL(65, 1042, 32), // "receivedDeviceVerificationCancel"
QT_MOC_LITERAL(66, 1075, 39), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(67, 1115, 29), // "receivedDeviceVerificationKey"
QT_MOC_LITERAL(68, 1145, 36), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(69, 1182, 29), // "receivedDeviceVerificationMac"
QT_MOC_LITERAL(70, 1212, 36), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(71, 1249, 31), // "receivedDeviceVerificationStart"
QT_MOC_LITERAL(72, 1281, 38), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(73, 1320, 31), // "receivedDeviceVerificationReady"
QT_MOC_LITERAL(74, 1352, 38), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(75, 1391, 30), // "receivedDeviceVerificationDone"
QT_MOC_LITERAL(76, 1422, 37), // "mtx::events::msg::KeyVerifica..."
QT_MOC_LITERAL(77, 1460, 17), // "downloadedSecrets"
QT_MOC_LITERAL(78, 1478, 46), // "mtx::secret_storage::AesHmacS..."
QT_MOC_LITERAL(79, 1525, 7), // "keyDesc"
QT_MOC_LITERAL(80, 1533, 16), // "SecretsToDecrypt"
QT_MOC_LITERAL(81, 1550, 7), // "secrets"
QT_MOC_LITERAL(82, 1558, 15), // "handleMatrixUri"
QT_MOC_LITERAL(83, 1574, 3), // "uri"
QT_MOC_LITERAL(84, 1578, 9), // "startChat"
QT_MOC_LITERAL(85, 1588, 6), // "userid"
QT_MOC_LITERAL(86, 1595, 9), // "leaveRoom"
QT_MOC_LITERAL(87, 1605, 10), // "createRoom"
QT_MOC_LITERAL(88, 1616, 25), // "mtx::requests::CreateRoom"
QT_MOC_LITERAL(89, 1642, 3), // "req"
QT_MOC_LITERAL(90, 1646, 8), // "joinRoom"
QT_MOC_LITERAL(91, 1655, 4), // "room"
QT_MOC_LITERAL(92, 1660, 11), // "joinRoomVia"
QT_MOC_LITERAL(93, 1672, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(94, 1697, 3), // "via"
QT_MOC_LITERAL(95, 1701, 21), // "promptForConfirmation"
QT_MOC_LITERAL(96, 1723, 10), // "inviteUser"
QT_MOC_LITERAL(97, 1734, 6), // "reason"
QT_MOC_LITERAL(98, 1741, 8), // "kickUser"
QT_MOC_LITERAL(99, 1750, 7), // "banUser"
QT_MOC_LITERAL(100, 1758, 9), // "unbanUser"
QT_MOC_LITERAL(101, 1768, 5), // "print"
QT_MOC_LITERAL(102, 1774, 18), // "receivedSessionKey"
QT_MOC_LITERAL(103, 1793, 10), // "session_id"
QT_MOC_LITERAL(104, 1804, 24), // "decryptDownloadedSecrets"
QT_MOC_LITERAL(105, 1829, 6), // "logout"
QT_MOC_LITERAL(106, 1836, 10), // "removeRoom"
QT_MOC_LITERAL(107, 1847, 10), // "changeRoom"
QT_MOC_LITERAL(108, 1858, 15), // "dropToLoginPage"
QT_MOC_LITERAL(109, 1874, 18) // "handleSyncResponse"

    },
    "ChatPage\0connectionLost\0\0connectionRestored\0"
    "notificationsRetrieved\0"
    "mtx::responses::Notifications\0"
    "highlightedNotifsRetrieved\0widgetPos\0"
    "contentLoaded\0closing\0changeWindowTitle\0"
    "unreadMessages\0count\0showNotification\0"
    "msg\0showLoginPage\0showUserSettingsPage\0"
    "ownProfileOk\0setUserDisplayName\0name\0"
    "setUserAvatar\0avatar\0loggedOut\0trySyncCb\0"
    "tryDelayedSyncCb\0tryInitialSyncCb\0"
    "newSyncResponse\0mtx::responses::Sync\0"
    "res\0std::string\0prev_batch_token\0"
    "leftRoom\0room_id\0newRoom\0changeToRoom\0"
    "initializeViews\0rooms\0initializeEmptyViews\0"
    "initializeMentions\0"
    "QMap<QString,mtx::responses::Notifications>\0"
    "notifs\0syncUI\0sync\0dropToLoginPageCb\0"
    "notifyMessage\0roomid\0eventid\0roomname\0"
    "sender\0message\0icon\0retrievedPresence\0"
    "statusMsg\0mtx::presence::PresenceState\0"
    "state\0themeChanged\0decryptSidebarChanged\0"
    "receivedDeviceVerificationAccept\0"
    "mtx::events::msg::KeyVerificationAccept\0"
    "receivedDeviceVerificationRequest\0"
    "mtx::events::msg::KeyVerificationRequest\0"
    "receivedRoomDeviceVerificationRequest\0"
    "mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>\0"
    "TimelineModel*\0model\0"
    "receivedDeviceVerificationCancel\0"
    "mtx::events::msg::KeyVerificationCancel\0"
    "receivedDeviceVerificationKey\0"
    "mtx::events::msg::KeyVerificationKey\0"
    "receivedDeviceVerificationMac\0"
    "mtx::events::msg::KeyVerificationMac\0"
    "receivedDeviceVerificationStart\0"
    "mtx::events::msg::KeyVerificationStart\0"
    "receivedDeviceVerificationReady\0"
    "mtx::events::msg::KeyVerificationReady\0"
    "receivedDeviceVerificationDone\0"
    "mtx::events::msg::KeyVerificationDone\0"
    "downloadedSecrets\0"
    "mtx::secret_storage::AesHmacSha2KeyDescription\0"
    "keyDesc\0SecretsToDecrypt\0secrets\0"
    "handleMatrixUri\0uri\0startChat\0userid\0"
    "leaveRoom\0createRoom\0mtx::requests::CreateRoom\0"
    "req\0joinRoom\0room\0joinRoomVia\0"
    "std::vector<std::string>\0via\0"
    "promptForConfirmation\0inviteUser\0"
    "reason\0kickUser\0banUser\0unbanUser\0"
    "print\0receivedSessionKey\0session_id\0"
    "decryptDownloadedSecrets\0logout\0"
    "removeRoom\0changeRoom\0dropToLoginPage\0"
    "handleSyncResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      41,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  319,    2, 0x06 /* Public */,
       3,    0,  320,    2, 0x06 /* Public */,
       4,    1,  321,    2, 0x06 /* Public */,
       6,    2,  324,    2, 0x06 /* Public */,
       8,    0,  329,    2, 0x06 /* Public */,
       9,    0,  330,    2, 0x06 /* Public */,
      10,    1,  331,    2, 0x06 /* Public */,
      11,    1,  334,    2, 0x06 /* Public */,
      13,    1,  337,    2, 0x06 /* Public */,
      15,    1,  340,    2, 0x06 /* Public */,
      16,    0,  343,    2, 0x06 /* Public */,
      17,    0,  344,    2, 0x06 /* Public */,
      18,    1,  345,    2, 0x06 /* Public */,
      20,    1,  348,    2, 0x06 /* Public */,
      22,    0,  351,    2, 0x06 /* Public */,
      23,    0,  352,    2, 0x06 /* Public */,
      24,    0,  353,    2, 0x06 /* Public */,
      25,    0,  354,    2, 0x06 /* Public */,
      26,    2,  355,    2, 0x06 /* Public */,
      31,    1,  360,    2, 0x06 /* Public */,
      33,    1,  363,    2, 0x06 /* Public */,
      34,    1,  366,    2, 0x06 /* Public */,
      35,    1,  369,    2, 0x06 /* Public */,
      37,    0,  372,    2, 0x06 /* Public */,
      38,    1,  373,    2, 0x06 /* Public */,
      41,    1,  376,    2, 0x06 /* Public */,
      43,    1,  379,    2, 0x06 /* Public */,
      44,    6,  382,    2, 0x06 /* Public */,
      51,    2,  395,    2, 0x06 /* Public */,
      55,    0,  400,    2, 0x06 /* Public */,
      56,    0,  401,    2, 0x06 /* Public */,
      57,    1,  402,    2, 0x06 /* Public */,
      59,    2,  405,    2, 0x06 /* Public */,
      61,    2,  410,    2, 0x06 /* Public */,
      65,    1,  415,    2, 0x06 /* Public */,
      67,    1,  418,    2, 0x06 /* Public */,
      69,    1,  421,    2, 0x06 /* Public */,
      71,    2,  424,    2, 0x06 /* Public */,
      73,    1,  429,    2, 0x06 /* Public */,
      75,    1,  432,    2, 0x06 /* Public */,
      77,    2,  435,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      82,    1,  440,    2, 0x0a /* Public */,
      82,    1,  443,    2, 0x0a /* Public */,
      84,    1,  446,    2, 0x0a /* Public */,
      86,    1,  449,    2, 0x0a /* Public */,
      87,    1,  452,    2, 0x0a /* Public */,
      90,    1,  455,    2, 0x0a /* Public */,
      92,    3,  458,    2, 0x0a /* Public */,
      92,    2,  465,    2, 0x2a /* Public | MethodCloned */,
      96,    2,  470,    2, 0x0a /* Public */,
      98,    2,  475,    2, 0x0a /* Public */,
      99,    2,  480,    2, 0x0a /* Public */,
     100,    2,  485,    2, 0x0a /* Public */,
     101,    0,  490,    2, 0x0a /* Public */,
     102,    2,  491,    2, 0x0a /* Public */,
     104,    2,  496,    2, 0x0a /* Public */,
     105,    0,  501,    2, 0x08 /* Private */,
     106,    1,  502,    2, 0x08 /* Private */,
     107,    1,  505,    2, 0x08 /* Private */,
     108,    1,  508,    2, 0x08 /* Private */,
     109,    2,  511,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QPoint,    2,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 29,   28,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, 0x80000000 | 27,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 27,   42,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QImage,   45,   46,   47,   48,   49,   50,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 53,   52,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,   49,
    QMetaType::Void, 0x80000000 | 60, 0x80000000 | 29,   49,   48,
    QMetaType::Void, 0x80000000 | 62, 0x80000000 | 63,   49,   64,
    QMetaType::Void, 0x80000000 | 66,   49,
    QMetaType::Void, 0x80000000 | 68,   49,
    QMetaType::Void, 0x80000000 | 70,   49,
    QMetaType::Void, 0x80000000 | 72, 0x80000000 | 29,   49,   48,
    QMetaType::Void, 0x80000000 | 74,   49,
    QMetaType::Void, 0x80000000 | 76,   49,
    QMetaType::Void, 0x80000000 | 78, 0x80000000 | 80,   79,   81,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,   83,
    QMetaType::Bool, QMetaType::QUrl,   83,
    QMetaType::Void, QMetaType::QString,   85,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, QMetaType::QString,   91,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 93, QMetaType::Bool,   32,   94,   95,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 93,   32,   94,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   85,   97,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   85,   97,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   85,   97,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   85,   97,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,   32,  103,
    QMetaType::Void, 0x80000000 | 78, 0x80000000 | 80,   79,   81,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 29,   28,   30,

       0        // eod
};

void ChatPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionLost(); break;
        case 1: _t->connectionRestored(); break;
        case 2: _t->notificationsRetrieved((*reinterpret_cast< const mtx::responses::Notifications(*)>(_a[1]))); break;
        case 3: _t->highlightedNotifsRetrieved((*reinterpret_cast< const mtx::responses::Notifications(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 4: _t->contentLoaded(); break;
        case 5: _t->closing(); break;
        case 6: _t->changeWindowTitle((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->unreadMessages((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->showNotification((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->showLoginPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->showUserSettingsPage(); break;
        case 11: _t->ownProfileOk(); break;
        case 12: _t->setUserDisplayName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setUserAvatar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->loggedOut(); break;
        case 15: _t->trySyncCb(); break;
        case 16: _t->tryDelayedSyncCb(); break;
        case 17: _t->tryInitialSyncCb(); break;
        case 18: _t->newSyncResponse((*reinterpret_cast< const mtx::responses::Sync(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 19: _t->leftRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->newRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->changeToRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->initializeViews((*reinterpret_cast< const mtx::responses::Sync(*)>(_a[1]))); break;
        case 23: _t->initializeEmptyViews(); break;
        case 24: _t->initializeMentions((*reinterpret_cast< const QMap<QString,mtx::responses::Notifications>(*)>(_a[1]))); break;
        case 25: _t->syncUI((*reinterpret_cast< const mtx::responses::Sync(*)>(_a[1]))); break;
        case 26: _t->dropToLoginPageCb((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->notifyMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QImage(*)>(_a[6]))); break;
        case 28: _t->retrievedPresence((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< mtx::presence::PresenceState(*)>(_a[2]))); break;
        case 29: _t->themeChanged(); break;
        case 30: _t->decryptSidebarChanged(); break;
        case 31: _t->receivedDeviceVerificationAccept((*reinterpret_cast< const mtx::events::msg::KeyVerificationAccept(*)>(_a[1]))); break;
        case 32: _t->receivedDeviceVerificationRequest((*reinterpret_cast< const mtx::events::msg::KeyVerificationRequest(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 33: _t->receivedRoomDeviceVerificationRequest((*reinterpret_cast< const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>(*)>(_a[1])),(*reinterpret_cast< TimelineModel*(*)>(_a[2]))); break;
        case 34: _t->receivedDeviceVerificationCancel((*reinterpret_cast< const mtx::events::msg::KeyVerificationCancel(*)>(_a[1]))); break;
        case 35: _t->receivedDeviceVerificationKey((*reinterpret_cast< const mtx::events::msg::KeyVerificationKey(*)>(_a[1]))); break;
        case 36: _t->receivedDeviceVerificationMac((*reinterpret_cast< const mtx::events::msg::KeyVerificationMac(*)>(_a[1]))); break;
        case 37: _t->receivedDeviceVerificationStart((*reinterpret_cast< const mtx::events::msg::KeyVerificationStart(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 38: _t->receivedDeviceVerificationReady((*reinterpret_cast< const mtx::events::msg::KeyVerificationReady(*)>(_a[1]))); break;
        case 39: _t->receivedDeviceVerificationDone((*reinterpret_cast< const mtx::events::msg::KeyVerificationDone(*)>(_a[1]))); break;
        case 40: _t->downloadedSecrets((*reinterpret_cast< mtx::secret_storage::AesHmacSha2KeyDescription(*)>(_a[1])),(*reinterpret_cast< const SecretsToDecrypt(*)>(_a[2]))); break;
        case 41: { bool _r = _t->handleMatrixUri((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->handleMatrixUri((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->startChat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->leaveRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->createRoom((*reinterpret_cast< const mtx::requests::CreateRoom(*)>(_a[1]))); break;
        case 46: _t->joinRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->joinRoomVia((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::vector<std::string>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 48: _t->joinRoomVia((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::vector<std::string>(*)>(_a[2]))); break;
        case 49: _t->inviteUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 50: _t->kickUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 51: _t->banUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 52: _t->unbanUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 53: _t->print(); break;
        case 54: _t->receivedSessionKey((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 55: _t->decryptDownloadedSecrets((*reinterpret_cast< mtx::secret_storage::AesHmacSha2KeyDescription(*)>(_a[1])),(*reinterpret_cast< const SecretsToDecrypt(*)>(_a[2]))); break;
        case 56: _t->logout(); break;
        case 57: _t->removeRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->changeRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 59: _t->dropToLoginPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: _t->handleSyncResponse((*reinterpret_cast< const mtx::responses::Sync(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::connectionLost)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::connectionRestored)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::responses::Notifications & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::notificationsRetrieved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::responses::Notifications & , const QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::highlightedNotifsRetrieved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::contentLoaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::closing)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::changeWindowTitle)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::unreadMessages)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::showNotification)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::showLoginPage)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::showUserSettingsPage)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::ownProfileOk)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::setUserDisplayName)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::setUserAvatar)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::loggedOut)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::trySyncCb)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::tryDelayedSyncCb)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::tryInitialSyncCb)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::responses::Sync & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::newSyncResponse)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::leftRoom)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::newRoom)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::changeToRoom)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::responses::Sync & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::initializeViews)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::initializeEmptyViews)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QMap<QString,mtx::responses::Notifications> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::initializeMentions)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::responses::Sync & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::syncUI)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::dropToLoginPageCb)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & , const QString & , const QString & , const QString & , const QString & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::notifyMessage)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const QString & , mtx::presence::PresenceState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::retrievedPresence)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::themeChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::decryptSidebarChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationAccept & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationAccept)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationRequest & , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationRequest)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest> & , TimelineModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedRoomDeviceVerificationRequest)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationCancel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationCancel)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationKey & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationKey)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationMac & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationMac)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationStart & , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationStart)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationReady & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationReady)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(const mtx::events::msg::KeyVerificationDone & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::receivedDeviceVerificationDone)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (ChatPage::*)(mtx::secret_storage::AesHmacSha2KeyDescription , const SecretsToDecrypt & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatPage::downloadedSecrets)) {
                *result = 40;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ChatPage.data,
    qt_meta_data_ChatPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatPage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChatPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void ChatPage::connectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatPage::connectionRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatPage::notificationsRetrieved(const mtx::responses::Notifications & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatPage::highlightedNotifsRetrieved(const mtx::responses::Notifications & _t1, const QPoint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatPage::contentLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ChatPage::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ChatPage::changeWindowTitle(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChatPage::unreadMessages(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ChatPage::showNotification(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ChatPage::showLoginPage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ChatPage::showUserSettingsPage()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ChatPage::ownProfileOk()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ChatPage::setUserDisplayName(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ChatPage::setUserAvatar(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ChatPage::loggedOut()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ChatPage::trySyncCb()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ChatPage::tryDelayedSyncCb()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ChatPage::tryInitialSyncCb()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void ChatPage::newSyncResponse(const mtx::responses::Sync & _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ChatPage::leftRoom(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ChatPage::newRoom(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void ChatPage::changeToRoom(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ChatPage::initializeViews(const mtx::responses::Sync & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ChatPage::initializeEmptyViews()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void ChatPage::initializeMentions(const QMap<QString,mtx::responses::Notifications> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void ChatPage::syncUI(const mtx::responses::Sync & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void ChatPage::dropToLoginPageCb(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void ChatPage::notifyMessage(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QString & _t5, const QImage & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void ChatPage::retrievedPresence(const QString & _t1, mtx::presence::PresenceState _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void ChatPage::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void ChatPage::decryptSidebarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void ChatPage::receivedDeviceVerificationAccept(const mtx::events::msg::KeyVerificationAccept & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void ChatPage::receivedDeviceVerificationRequest(const mtx::events::msg::KeyVerificationRequest & _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void ChatPage::receivedRoomDeviceVerificationRequest(const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest> & _t1, TimelineModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void ChatPage::receivedDeviceVerificationCancel(const mtx::events::msg::KeyVerificationCancel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void ChatPage::receivedDeviceVerificationKey(const mtx::events::msg::KeyVerificationKey & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void ChatPage::receivedDeviceVerificationMac(const mtx::events::msg::KeyVerificationMac & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void ChatPage::receivedDeviceVerificationStart(const mtx::events::msg::KeyVerificationStart & _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void ChatPage::receivedDeviceVerificationReady(const mtx::events::msg::KeyVerificationReady & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void ChatPage::receivedDeviceVerificationDone(const mtx::events::msg::KeyVerificationDone & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void ChatPage::downloadedSecrets(mtx::secret_storage::AesHmacSha2KeyDescription _t1, const SecretsToDecrypt & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

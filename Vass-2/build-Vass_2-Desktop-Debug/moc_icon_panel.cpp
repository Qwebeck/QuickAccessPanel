/****************************************************************************
** Meta object code from reading C++ file 'icon_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Vass_2/icon_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icon_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_icon_panel_t {
    QByteArrayData data[16];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_icon_panel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_icon_panel_t qt_meta_stringdata_icon_panel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "icon_panel"
QT_MOC_LITERAL(1, 11, 11), // "HideIconBar"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "iconsUpdated"
QT_MOC_LITERAL(4, 37, 22), // "on_addShortCut_clicked"
QT_MOC_LITERAL(5, 60, 16), // "on_app_1_clicked"
QT_MOC_LITERAL(6, 77, 16), // "on_app_2_clicked"
QT_MOC_LITERAL(7, 94, 16), // "on_app_3_clicked"
QT_MOC_LITERAL(8, 111, 16), // "on_app_4_clicked"
QT_MOC_LITERAL(9, 128, 16), // "on_app_5_clicked"
QT_MOC_LITERAL(10, 145, 16), // "on_app_6_clicked"
QT_MOC_LITERAL(11, 162, 16), // "on_app_7_clicked"
QT_MOC_LITERAL(12, 179, 16), // "on_app_8_clicked"
QT_MOC_LITERAL(13, 196, 14), // "removeSequence"
QT_MOC_LITERAL(14, 211, 25), // "on_removeShortCut_clicked"
QT_MOC_LITERAL(15, 237, 14) // "fill_shortcuts"

    },
    "icon_panel\0HideIconBar\0\0iconsUpdated\0"
    "on_addShortCut_clicked\0on_app_1_clicked\0"
    "on_app_2_clicked\0on_app_3_clicked\0"
    "on_app_4_clicked\0on_app_5_clicked\0"
    "on_app_6_clicked\0on_app_7_clicked\0"
    "on_app_8_clicked\0removeSequence\0"
    "on_removeShortCut_clicked\0fill_shortcuts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_icon_panel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void icon_panel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        icon_panel *_t = static_cast<icon_panel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HideIconBar(); break;
        case 1: _t->iconsUpdated(); break;
        case 2: _t->on_addShortCut_clicked(); break;
        case 3: _t->on_app_1_clicked(); break;
        case 4: _t->on_app_2_clicked(); break;
        case 5: _t->on_app_3_clicked(); break;
        case 6: _t->on_app_4_clicked(); break;
        case 7: _t->on_app_5_clicked(); break;
        case 8: _t->on_app_6_clicked(); break;
        case 9: _t->on_app_7_clicked(); break;
        case 10: _t->on_app_8_clicked(); break;
        case 11: _t->removeSequence(); break;
        case 12: _t->on_removeShortCut_clicked(); break;
        case 13: _t->fill_shortcuts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (icon_panel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&icon_panel::HideIconBar)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (icon_panel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&icon_panel::iconsUpdated)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject icon_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_icon_panel.data,
      qt_meta_data_icon_panel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *icon_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *icon_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_icon_panel.stringdata0))
        return static_cast<void*>(const_cast< icon_panel*>(this));
    return QWidget::qt_metacast(_clname);
}

int icon_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void icon_panel::HideIconBar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void icon_panel::iconsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

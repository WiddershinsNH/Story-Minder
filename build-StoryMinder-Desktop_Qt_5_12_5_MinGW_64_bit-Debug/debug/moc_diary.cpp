/****************************************************************************
** Meta object code from reading C++ file 'diary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StoryMinder/diary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Diary_t {
    QByteArrayData data[21];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Diary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Diary_t qt_meta_stringdata_Diary = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Diary"
QT_MOC_LITERAL(1, 6, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(4, 54, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(5, 78, 26), // "on_actionSave_AS_triggered"
QT_MOC_LITERAL(6, 105, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(7, 130, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(8, 154, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(9, 177, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(10, 201, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(11, 226, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(12, 250, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(13, 274, 23), // "on_actionFont_triggered"
QT_MOC_LITERAL(14, 298, 23), // "on_actionBold_triggered"
QT_MOC_LITERAL(15, 322, 4), // "bold"
QT_MOC_LITERAL(16, 327, 25), // "on_actionItalic_triggered"
QT_MOC_LITERAL(17, 353, 6), // "italic"
QT_MOC_LITERAL(18, 360, 28), // "on_actionUnderline_triggered"
QT_MOC_LITERAL(19, 389, 9), // "underline"
QT_MOC_LITERAL(20, 399, 23) // "on_actionInfo_triggered"

    },
    "Diary\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSave_AS_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionExit_triggered\0on_actionCut_triggered\0"
    "on_actionCopy_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionFont_triggered\0on_actionBold_triggered\0"
    "bold\0on_actionItalic_triggered\0italic\0"
    "on_actionUnderline_triggered\0underline\0"
    "on_actionInfo_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Diary[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    1,  106,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

void Diary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Diary *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionSave_AS_triggered(); break;
        case 5: _t->on_actionExit_triggered(); break;
        case 6: _t->on_actionCut_triggered(); break;
        case 7: _t->on_actionCopy_triggered(); break;
        case 8: _t->on_actionPaste_triggered(); break;
        case 9: _t->on_actionUndo_triggered(); break;
        case 10: _t->on_actionRedo_triggered(); break;
        case 11: _t->on_actionFont_triggered(); break;
        case 12: _t->on_actionBold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_actionItalic_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_actionUnderline_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_actionInfo_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Diary::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Diary.data,
    qt_meta_data_Diary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Diary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Diary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Diary.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Diary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

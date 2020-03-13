/****************************************************************************
** Meta object code from reading C++ file 'coperdbhelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../coperdbhelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coperdbhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_COperDbHelper_t {
    QByteArrayData data[12];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_COperDbHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_COperDbHelper_t qt_meta_stringdata_COperDbHelper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "COperDbHelper"
QT_MOC_LITERAL(1, 14, 24), // "on_m_btnSelectDb_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "on_m_btnProSql_clicked"
QT_MOC_LITERAL(4, 63, 24), // "on_m_btnClearSql_clicked"
QT_MOC_LITERAL(5, 88, 22), // "on_m_btnOpenDb_clicked"
QT_MOC_LITERAL(6, 111, 23), // "on_m_btnCloseDb_clicked"
QT_MOC_LITERAL(7, 135, 11), // "showToolTip"
QT_MOC_LITERAL(8, 147, 5), // "index"
QT_MOC_LITERAL(9, 153, 27), // "on_m_btnClearSqlRes_clicked"
QT_MOC_LITERAL(10, 181, 20), // "slotRowDoubleClicked"
QT_MOC_LITERAL(11, 202, 26) // "on_m_BtnSelectSure_clicked"

    },
    "COperDbHelper\0on_m_btnSelectDb_clicked\0"
    "\0on_m_btnProSql_clicked\0"
    "on_m_btnClearSql_clicked\0"
    "on_m_btnOpenDb_clicked\0on_m_btnCloseDb_clicked\0"
    "showToolTip\0index\0on_m_btnClearSqlRes_clicked\0"
    "slotRowDoubleClicked\0on_m_BtnSelectSure_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_COperDbHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,

       0        // eod
};

void COperDbHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        COperDbHelper *_t = static_cast<COperDbHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_btnSelectDb_clicked(); break;
        case 1: _t->on_m_btnProSql_clicked(); break;
        case 2: _t->on_m_btnClearSql_clicked(); break;
        case 3: _t->on_m_btnOpenDb_clicked(); break;
        case 4: _t->on_m_btnCloseDb_clicked(); break;
        case 5: _t->showToolTip((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_m_btnClearSqlRes_clicked(); break;
        case 7: _t->slotRowDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_m_BtnSelectSure_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject COperDbHelper::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_COperDbHelper.data,
      qt_meta_data_COperDbHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *COperDbHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *COperDbHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_COperDbHelper.stringdata0))
        return static_cast<void*>(const_cast< COperDbHelper*>(this));
    return QWidget::qt_metacast(_clname);
}

int COperDbHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

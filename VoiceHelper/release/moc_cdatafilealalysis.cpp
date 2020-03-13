/****************************************************************************
** Meta object code from reading C++ file 'cdatafilealalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cdatafilealalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cdatafilealalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CDataFileAlalysis_t {
    QByteArrayData data[10];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDataFileAlalysis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDataFileAlalysis_t qt_meta_stringdata_CDataFileAlalysis = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CDataFileAlalysis"
QT_MOC_LITERAL(1, 18, 9), // "playVideo"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 27), // "on_m_pBtnSelectFile_clicked"
QT_MOC_LITERAL(4, 57, 30), // "on_m_pBtnStartAnalysis_clicked"
QT_MOC_LITERAL(5, 88, 28), // "on_m_pComboBoxCity_activated"
QT_MOC_LITERAL(6, 117, 4), // "arg1"
QT_MOC_LITERAL(7, 122, 32), // "on_m_pComboBoxFileType_activated"
QT_MOC_LITERAL(8, 155, 29), // "on_m_pPushButtonClear_clicked"
QT_MOC_LITERAL(9, 185, 23) // "on_m_pBtnExeamp_clicked"

    },
    "CDataFileAlalysis\0playVideo\0\0"
    "on_m_pBtnSelectFile_clicked\0"
    "on_m_pBtnStartAnalysis_clicked\0"
    "on_m_pComboBoxCity_activated\0arg1\0"
    "on_m_pComboBoxFileType_activated\0"
    "on_m_pPushButtonClear_clicked\0"
    "on_m_pBtnExeamp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDataFileAlalysis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   52,    2, 0x08 /* Private */,
       4,    0,   53,    2, 0x08 /* Private */,
       5,    1,   54,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CDataFileAlalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDataFileAlalysis *_t = static_cast<CDataFileAlalysis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playVideo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_m_pBtnSelectFile_clicked(); break;
        case 2: _t->on_m_pBtnStartAnalysis_clicked(); break;
        case 3: _t->on_m_pComboBoxCity_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_m_pComboBoxFileType_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_m_pPushButtonClear_clicked(); break;
        case 6: _t->on_m_pBtnExeamp_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDataFileAlalysis::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataFileAlalysis::playVideo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CDataFileAlalysis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CDataFileAlalysis.data,
      qt_meta_data_CDataFileAlalysis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDataFileAlalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDataFileAlalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDataFileAlalysis.stringdata0))
        return static_cast<void*>(const_cast< CDataFileAlalysis*>(this));
    return QWidget::qt_metacast(_clname);
}

int CDataFileAlalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CDataFileAlalysis::playVideo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

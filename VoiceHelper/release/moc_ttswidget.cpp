/****************************************************************************
** Meta object code from reading C++ file 'ttswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Tts/ttswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ttswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TtsWidget_t {
    QByteArrayData data[17];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TtsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TtsWidget_t qt_meta_stringdata_TtsWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TtsWidget"
QT_MOC_LITERAL(1, 10, 20), // "slotRowDoubleClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 17), // "slots_CurrTtsInfo"
QT_MOC_LITERAL(5, 56, 7), // "strText"
QT_MOC_LITERAL(6, 64, 10), // "strMp3Name"
QT_MOC_LITERAL(7, 75, 27), // "on_m_pBtnSelectFile_clicked"
QT_MOC_LITERAL(8, 103, 11), // "on_finished"
QT_MOC_LITERAL(9, 115, 11), // "strFileName"
QT_MOC_LITERAL(10, 127, 8), // "on_error"
QT_MOC_LITERAL(11, 136, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(12, 164, 26), // "on_m_pBtnPlayVoice_clicked"
QT_MOC_LITERAL(13, 191, 29), // "on_m_pBtnSelectOutDir_clicked"
QT_MOC_LITERAL(14, 221, 20), // "on_m_pBtnTts_clicked"
QT_MOC_LITERAL(15, 242, 25), // "on_m_pBtnBatchTts_clicked"
QT_MOC_LITERAL(16, 268, 21) // "on_pushButton_clicked"

    },
    "TtsWidget\0slotRowDoubleClicked\0\0index\0"
    "slots_CurrTtsInfo\0strText\0strMp3Name\0"
    "on_m_pBtnSelectFile_clicked\0on_finished\0"
    "strFileName\0on_error\0QNetworkReply::NetworkError\0"
    "on_m_pBtnPlayVoice_clicked\0"
    "on_m_pBtnSelectOutDir_clicked\0"
    "on_m_pBtnTts_clicked\0on_m_pBtnBatchTts_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TtsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    2,   67,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,
      15,    0,   82,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TtsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TtsWidget *_t = static_cast<TtsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotRowDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->slots_CurrTtsInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->on_m_pBtnSelectFile_clicked(); break;
        case 3: _t->on_finished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->on_m_pBtnPlayVoice_clicked(); break;
        case 6: _t->on_m_pBtnSelectOutDir_clicked(); break;
        case 7: _t->on_m_pBtnTts_clicked(); break;
        case 8: _t->on_m_pBtnBatchTts_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject TtsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TtsWidget.data,
      qt_meta_data_TtsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TtsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TtsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TtsWidget.stringdata0))
        return static_cast<void*>(const_cast< TtsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TtsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

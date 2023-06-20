/****************************************************************************
** Meta object code from reading C++ file 'frmsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "frmsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmSettings_t {
    QByteArrayData data[19];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmSettings_t qt_meta_stringdata_frmSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "frmSettings"
QT_MOC_LITERAL(1, 12, 23), // "onScrollBarValueChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 21), // "on_cmdRefresh_clicked"
QT_MOC_LITERAL(5, 65, 16), // "on_cmdOK_clicked"
QT_MOC_LITERAL(6, 82, 20), // "on_cmdCancel_clicked"
QT_MOC_LITERAL(7, 103, 34), // "on_cboToolType_currentIndexCh..."
QT_MOC_LITERAL(8, 138, 5), // "index"
QT_MOC_LITERAL(9, 144, 35), // "on_listCategories_currentRowC..."
QT_MOC_LITERAL(10, 180, 10), // "currentRow"
QT_MOC_LITERAL(11, 191, 22), // "on_cmdDefaults_clicked"
QT_MOC_LITERAL(12, 214, 33), // "on_cboFontSize_currentTextCha..."
QT_MOC_LITERAL(13, 248, 4), // "arg1"
QT_MOC_LITERAL(14, 253, 29), // "on_radDrawModeVectors_toggled"
QT_MOC_LITERAL(15, 283, 7), // "checked"
QT_MOC_LITERAL(16, 291, 28), // "on_radDrawModeRaster_toggled"
QT_MOC_LITERAL(17, 320, 24), // "on_radGrayscaleS_toggled"
QT_MOC_LITERAL(18, 345, 24) // "on_radGrayscaleZ_toggled"

    },
    "frmSettings\0onScrollBarValueChanged\0"
    "\0value\0on_cmdRefresh_clicked\0"
    "on_cmdOK_clicked\0on_cmdCancel_clicked\0"
    "on_cboToolType_currentIndexChanged\0"
    "index\0on_listCategories_currentRowChanged\0"
    "currentRow\0on_cmdDefaults_clicked\0"
    "on_cboFontSize_currentTextChanged\0"
    "arg1\0on_radDrawModeVectors_toggled\0"
    "checked\0on_radDrawModeRaster_toggled\0"
    "on_radGrayscaleS_toggled\0"
    "on_radGrayscaleZ_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,
      17,    1,   96,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void frmSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onScrollBarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_cmdRefresh_clicked(); break;
        case 2: _t->on_cmdOK_clicked(); break;
        case 3: _t->on_cmdCancel_clicked(); break;
        case 4: _t->on_cboToolType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_listCategories_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_cmdDefaults_clicked(); break;
        case 7: _t->on_cboFontSize_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_radDrawModeVectors_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_radDrawModeRaster_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_radGrayscaleS_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_radGrayscaleZ_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_frmSettings.data,
    qt_meta_data_frmSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmSettings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int frmSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'scanparameterselection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "scanparameterselection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scanparameterselection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScanParameterSelection_t {
    QByteArrayData data[17];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScanParameterSelection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScanParameterSelection_t qt_meta_stringdata_ScanParameterSelection = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ScanParameterSelection"
QT_MOC_LITERAL(1, 23, 13), // "completedLoop"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "addProgress"
QT_MOC_LITERAL(4, 50, 8), // "progress"
QT_MOC_LITERAL(5, 59, 18), // "scanParameterReady"
QT_MOC_LITERAL(6, 78, 10), // "deviceName"
QT_MOC_LITERAL(7, 89, 6), // "number"
QT_MOC_LITERAL(8, 96, 21), // "nextScanParameterStep"
QT_MOC_LITERAL(9, 118, 17), // "scanParameterInit"
QT_MOC_LITERAL(10, 136, 13), // "progressCarry"
QT_MOC_LITERAL(11, 150, 26), // "onDeviceScanParameterReady"
QT_MOC_LITERAL(12, 177, 24), // "onDeviceSelectionChanged"
QT_MOC_LITERAL(13, 202, 13), // "selectedIndex"
QT_MOC_LITERAL(14, 216, 24), // "keepDeviceSelectionIndex"
QT_MOC_LITERAL(15, 241, 32), // "onScanParameterAdjustModeChanged"
QT_MOC_LITERAL(16, 274, 4) // "mode"

    },
    "ScanParameterSelection\0completedLoop\0"
    "\0addProgress\0progress\0scanParameterReady\0"
    "deviceName\0number\0nextScanParameterStep\0"
    "scanParameterInit\0progressCarry\0"
    "onDeviceScanParameterReady\0"
    "onDeviceSelectionChanged\0selectedIndex\0"
    "keepDeviceSelectionIndex\0"
    "onScanParameterAdjustModeChanged\0mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScanParameterSelection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    2,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   73,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      11,    2,   78,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    6,    7,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void ScanParameterSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScanParameterSelection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completedLoop(); break;
        case 1: _t->addProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->scanParameterReady((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 3: _t->nextScanParameterStep(); break;
        case 4: _t->scanParameterInit(); break;
        case 5: _t->progressCarry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onDeviceScanParameterReady((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 7: _t->onDeviceSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->keepDeviceSelectionIndex(); break;
        case 9: _t->onScanParameterAdjustModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScanParameterSelection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanParameterSelection::completedLoop)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScanParameterSelection::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanParameterSelection::addProgress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScanParameterSelection::*)(QString , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanParameterSelection::scanParameterReady)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScanParameterSelection::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ScanParameterSelection.data,
    qt_meta_data_ScanParameterSelection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScanParameterSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScanParameterSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScanParameterSelection.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ScanParameterSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ScanParameterSelection::completedLoop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScanParameterSelection::addProgress(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScanParameterSelection::scanParameterReady(QString _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

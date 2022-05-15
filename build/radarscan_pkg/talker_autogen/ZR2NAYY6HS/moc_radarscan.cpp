/****************************************************************************
** Meta object code from reading C++ file 'radarscan.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/radarscan_pkg/include/radarscan_pkg/radarscan.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radarscan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_radarScan_t {
    QByteArrayData data[21];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_radarScan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_radarScan_t qt_meta_stringdata_radarScan = {
    {
QT_MOC_LITERAL(0, 0, 9), // "radarScan"
QT_MOC_LITERAL(1, 10, 12), // "initParamTTC"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "spinOnce"
QT_MOC_LITERAL(4, 33, 9), // "initTimer"
QT_MOC_LITERAL(5, 43, 6), // "nRound"
QT_MOC_LITERAL(6, 50, 3), // "num"
QT_MOC_LITERAL(7, 54, 1), // "n"
QT_MOC_LITERAL(8, 56, 16), // "initGraphicRadar"
QT_MOC_LITERAL(9, 73, 11), // "clearVector"
QT_MOC_LITERAL(10, 85, 3), // "x2p"
QT_MOC_LITERAL(11, 89, 1), // "x"
QT_MOC_LITERAL(12, 91, 3), // "y2p"
QT_MOC_LITERAL(13, 95, 1), // "y"
QT_MOC_LITERAL(14, 97, 8), // "carColor"
QT_MOC_LITERAL(15, 106, 6), // "string"
QT_MOC_LITERAL(16, 113, 4), // "name"
QT_MOC_LITERAL(17, 118, 13), // "plotDetectObj"
QT_MOC_LITERAL(18, 132, 15), // "displayParamTTC"
QT_MOC_LITERAL(19, 148, 9), // "autoDrive"
QT_MOC_LITERAL(20, 158, 19) // "on_paramTTC_clicked"

    },
    "radarScan\0initParamTTC\0\0spinOnce\0"
    "initTimer\0nRound\0num\0n\0initGraphicRadar\0"
    "clearVector\0x2p\0x\0y2p\0y\0carColor\0"
    "string\0name\0plotDetectObj\0displayParamTTC\0"
    "autoDrive\0on_paramTTC_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_radarScan[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    2,   82,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    1,   89,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      14,    1,   95,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,
      19,    0,  100,    2, 0x08 /* Private */,
      20,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Float, QMetaType::Float, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Float, QMetaType::Float,   11,
    QMetaType::Float, QMetaType::Float,   13,
    QMetaType::QString, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void radarScan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        radarScan *_t = static_cast<radarScan *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initParamTTC(); break;
        case 1: _t->spinOnce(); break;
        case 2: _t->initTimer(); break;
        case 3: { float _r = _t->nRound((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->initGraphicRadar(); break;
        case 5: _t->clearVector(); break;
        case 6: { float _r = _t->x2p((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 7: { float _r = _t->y2p((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->carColor((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->plotDetectObj(); break;
        case 10: _t->displayParamTTC(); break;
        case 11: _t->autoDrive(); break;
        case 12: _t->on_paramTTC_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject radarScan::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_radarScan.data,
      qt_meta_data_radarScan,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *radarScan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *radarScan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_radarScan.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int radarScan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

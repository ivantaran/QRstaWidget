/****************************************************************************
** Meta object code from reading C++ file 'QRstaWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QRstaWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QRstaWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QRstaWidget_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRstaWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRstaWidget_t qt_meta_stringdata_QRstaWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QRstaWidget"
QT_MOC_LITERAL(1, 12, 9), // "FftLength"
QT_MOC_LITERAL(2, 22, 10), // "FftOverlap"
QT_MOC_LITERAL(3, 33, 10), // "RstaHeight"
QT_MOC_LITERAL(4, 44, 15) // "WaterfallHeight"

    },
    "QRstaWidget\0FftLength\0FftOverlap\0"
    "RstaHeight\0WaterfallHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRstaWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Int, 0x00095103,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,

       0        // eod
};

void QRstaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QRstaWidget *_t = static_cast<QRstaWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getFftLength(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getFftOverlap(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getRstaHeight(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getWaterfallHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRstaWidget *_t = static_cast<QRstaWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFftLength(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFftOverlap(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRstaHeight(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setWaterfallHeight(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QRstaWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_QRstaWidget.data,
      qt_meta_data_QRstaWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QRstaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRstaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QRstaWidget.stringdata0))
        return static_cast<void*>(const_cast< QRstaWidget*>(this));
    if (!strcmp(_clname, "QGLFunctions"))
        return static_cast< QGLFunctions*>(const_cast< QRstaWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int QRstaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_END_MOC_NAMESPACE

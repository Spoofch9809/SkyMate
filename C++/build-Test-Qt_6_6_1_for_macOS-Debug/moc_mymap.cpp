/****************************************************************************
** Meta object code from reading C++ file 'mymap.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Test/mymap.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmyMapENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSmyMapENDCLASS = QtMocHelpers::stringData(
    "myMap",
    "Map_button",
    "",
    "Home_button",
    "Dashboard_button",
    "Search_button",
    "Setting_button"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSmyMapENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[6];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[14];
    char stringdata6[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSmyMapENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSmyMapENDCLASS_t qt_meta_stringdata_CLASSmyMapENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "myMap"
        QT_MOC_LITERAL(6, 10),  // "Map_button"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 11),  // "Home_button"
        QT_MOC_LITERAL(30, 16),  // "Dashboard_button"
        QT_MOC_LITERAL(47, 13),  // "Search_button"
        QT_MOC_LITERAL(61, 14)   // "Setting_button"
    },
    "myMap",
    "Map_button",
    "",
    "Home_button",
    "Dashboard_button",
    "Search_button",
    "Setting_button"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmyMapENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject myMap::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSmyMapENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmyMapENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmyMapENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<myMap, std::true_type>,
        // method 'Map_button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Home_button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Dashboard_button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Search_button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Setting_button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void myMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myMap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Map_button(); break;
        case 1: _t->Home_button(); break;
        case 2: _t->Dashboard_button(); break;
        case 3: _t->Search_button(); break;
        case 4: _t->Setting_button(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *myMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmyMapENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int myMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
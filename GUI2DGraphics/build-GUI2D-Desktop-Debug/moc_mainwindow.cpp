/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI2D/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[414];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "on_buttonCyc_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "on_buttonHuygens_clicked"
QT_MOC_LITERAL(4, 58, 22), // "on_buttonHyCyc_clicked"
QT_MOC_LITERAL(5, 81, 21), // "on_buttonLine_clicked"
QT_MOC_LITERAL(6, 103, 25), // "on_spinScale_valueChanged"
QT_MOC_LITERAL(7, 129, 4), // "arg1"
QT_MOC_LITERAL(8, 134, 28), // "on_spinInterval_valueChanged"
QT_MOC_LITERAL(9, 163, 25), // "on_spinCount_valueChanged"
QT_MOC_LITERAL(10, 189, 27), // "on_buttonBackground_clicked"
QT_MOC_LITERAL(11, 217, 26), // "on_buttonLineColor_clicked"
QT_MOC_LITERAL(12, 244, 23), // "on_buttonCircle_clicked"
QT_MOC_LITERAL(13, 268, 24), // "on_buttonEllipse_clicked"
QT_MOC_LITERAL(14, 293, 22), // "on_buttonFancy_clicked"
QT_MOC_LITERAL(15, 316, 25), // "on_buttonStarfish_clicked"
QT_MOC_LITERAL(16, 342, 22), // "on_buttonCloud_clicked"
QT_MOC_LITERAL(17, 365, 23), // "on_buttonCloud2_clicked"
QT_MOC_LITERAL(18, 389, 24) // "on_buttonAstroid_clicked"

    },
    "MainWindow\0on_buttonCyc_clicked\0\0"
    "on_buttonHuygens_clicked\0"
    "on_buttonHyCyc_clicked\0on_buttonLine_clicked\0"
    "on_spinScale_valueChanged\0arg1\0"
    "on_spinInterval_valueChanged\0"
    "on_spinCount_valueChanged\0"
    "on_buttonBackground_clicked\0"
    "on_buttonLineColor_clicked\0"
    "on_buttonCircle_clicked\0"
    "on_buttonEllipse_clicked\0"
    "on_buttonFancy_clicked\0on_buttonStarfish_clicked\0"
    "on_buttonCloud_clicked\0on_buttonCloud2_clicked\0"
    "on_buttonAstroid_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
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
       6,    1,   98,    2, 0x08 /* Private */,
       8,    1,  101,    2, 0x08 /* Private */,
       9,    1,  104,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,    7,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonCyc_clicked(); break;
        case 1: _t->on_buttonHuygens_clicked(); break;
        case 2: _t->on_buttonHyCyc_clicked(); break;
        case 3: _t->on_buttonLine_clicked(); break;
        case 4: _t->on_spinScale_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_spinInterval_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_spinCount_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_buttonBackground_clicked(); break;
        case 8: _t->on_buttonLineColor_clicked(); break;
        case 9: _t->on_buttonCircle_clicked(); break;
        case 10: _t->on_buttonEllipse_clicked(); break;
        case 11: _t->on_buttonFancy_clicked(); break;
        case 12: _t->on_buttonStarfish_clicked(); break;
        case 13: _t->on_buttonCloud_clicked(); break;
        case 14: _t->on_buttonCloud2_clicked(); break;
        case 15: _t->on_buttonAstroid_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

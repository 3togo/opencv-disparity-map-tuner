/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[625];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_pushButton_left_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 27), // "on_pushButton_right_clicked"
QT_MOC_LITERAL(4, 67, 48), // "on_horizontalSlider_num_of_di..."
QT_MOC_LITERAL(5, 116, 8), // "position"
QT_MOC_LITERAL(6, 125, 49), // "on_horizontalSlider_num_of_di..."
QT_MOC_LITERAL(7, 175, 5), // "value"
QT_MOC_LITERAL(8, 181, 48), // "on_horizontalSlider_SAD_windo..."
QT_MOC_LITERAL(9, 230, 48), // "on_horizontalSlider_pre_filte..."
QT_MOC_LITERAL(10, 279, 47), // "on_horizontalSlider_pre_filte..."
QT_MOC_LITERAL(11, 327, 46), // "on_horizontalSlider_min_dispa..."
QT_MOC_LITERAL(12, 374, 50), // "on_horizontalSlider_texture_t..."
QT_MOC_LITERAL(13, 425, 49), // "on_horizontalSlider_uniquenes..."
QT_MOC_LITERAL(14, 475, 52), // "on_horizontalSlider_speckle_w..."
QT_MOC_LITERAL(15, 528, 46), // "on_horizontalSlider_speckle_r..."
QT_MOC_LITERAL(16, 575, 49) // "on_horizontalSlider_disp_12_m..."

    },
    "MainWindow\0on_pushButton_left_clicked\0"
    "\0on_pushButton_right_clicked\0"
    "on_horizontalSlider_num_of_disparity_sliderMoved\0"
    "position\0on_horizontalSlider_num_of_disparity_valueChanged\0"
    "value\0on_horizontalSlider_SAD_window_size_valueChanged\0"
    "on_horizontalSlider_pre_filter_size_valueChanged\0"
    "on_horizontalSlider_pre_filter_cap_valueChanged\0"
    "on_horizontalSlider_min_disparity_valueChanged\0"
    "on_horizontalSlider_texture_threshold_valueChanged\0"
    "on_horizontalSlider_uniqueness_ratio_valueChanged\0"
    "on_horizontalSlider_speckle_window_size_valueChanged\0"
    "on_horizontalSlider_speckle_range_valueChanged\0"
    "on_horizontalSlider_disp_12_max_diff_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
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
       4,    1,   81,    2, 0x08 /* Private */,
       6,    1,   84,    2, 0x08 /* Private */,
       8,    1,   87,    2, 0x08 /* Private */,
       9,    1,   90,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      16,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_left_clicked(); break;
        case 1: _t->on_pushButton_right_clicked(); break;
        case 2: _t->on_horizontalSlider_num_of_disparity_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_horizontalSlider_num_of_disparity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSlider_SAD_window_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSlider_pre_filter_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_pre_filter_cap_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_min_disparity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSlider_texture_threshold_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_horizontalSlider_uniqueness_ratio_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_horizontalSlider_speckle_window_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_horizontalSlider_speckle_range_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_horizontalSlider_disp_12_max_diff_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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

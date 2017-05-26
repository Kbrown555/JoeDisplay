/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AirRide/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   30,   30,   30, 0x0a,
      31,   30,   30,   30, 0x0a,
      50,   30,   30,   30, 0x0a,
      69,   30,   30,   30, 0x0a,
      89,   30,   30,   30, 0x0a,
     109,   30,   30,   30, 0x0a,
     129,   30,   30,   30, 0x0a,
     143,   30,   30,   30, 0x0a,
     153,   30,   30,   30, 0x0a,
     163,   30,   30,   30, 0x0a,
     173,   30,   30,   30, 0x0a,
     180,   30,   30,   30, 0x0a,
     189,   30,   30,   30, 0x0a,
     196,   30,   30,   30, 0x0a,
     205,   30,   30,   30, 0x0a,
     212,   30,   30,   30, 0x0a,
     221,   30,   30,   30, 0x0a,
     228,   30,   30,   30, 0x0a,
     237,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0updatePreset1(int)\0\0"
    "updatePreset2(int)\0updatePreset3(int)\0"
    "updatePreset1b(int)\0updatePreset2b(int)\0"
    "updatePreset3b(int)\0timerUpdate()\0"
    "button1()\0button2()\0button3()\0FLUP()\0"
    "FLDOWN()\0FRUP()\0FRDOWN()\0RLUP()\0"
    "RLDOWN()\0RRUP()\0RRDOWN()\0manualOn()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->updatePreset1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updatePreset2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updatePreset3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updatePreset1b((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updatePreset2b((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updatePreset3b((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->timerUpdate(); break;
        case 7: _t->button1(); break;
        case 8: _t->button2(); break;
        case 9: _t->button3(); break;
        case 10: _t->FLUP(); break;
        case 11: _t->FLDOWN(); break;
        case 12: _t->FRUP(); break;
        case 13: _t->FRDOWN(); break;
        case 14: _t->RLUP(); break;
        case 15: _t->RLDOWN(); break;
        case 16: _t->RRUP(); break;
        case 17: _t->RRDOWN(); break;
        case 18: _t->manualOn(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qprintpreviewdialog.h'
**
** Created: Fri May 30 22:30:29 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/qprintpreviewdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprintpreviewdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPrintPreviewDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      29,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   55,   20,   20, 0x0a,
      87,   80,   20,   20, 0x08,
     104,   20,   20,   20, 0x08,
     116,   20,   20,   20, 0x08,
     129,   80,   20,   20, 0x08,
     151,   80,   20,   20, 0x08,
     172,   20,   20,   20, 0x08,
     191,   20,   20,   20, 0x08,
     202,   20,   20,   20, 0x08,
     217,   20,   20,   20, 0x08,
     237,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPrintPreviewDialog[] = {
    "QPrintPreviewDialog\0\0printer\0"
    "paintRequested(QPrinter*)\0visible\0"
    "setVisible(bool)\0action\0_q_fit(QAction*)\0"
    "_q_zoomIn()\0_q_zoomOut()\0_q_navigate(QAction*)\0"
    "_q_setMode(QAction*)\0_q_pageNumEdited()\0"
    "_q_print()\0_q_pageSetup()\0_q_previewChanged()\0"
    "_q_zoomFactorChanged()\0"
};

const QMetaObject QPrintPreviewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QPrintPreviewDialog,
      qt_meta_data_QPrintPreviewDialog, 0 }
};

const QMetaObject *QPrintPreviewDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QPrintPreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPrintPreviewDialog))
	return static_cast<void*>(const_cast< QPrintPreviewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QPrintPreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: paintRequested((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: d_func()->_q_fit((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: d_func()->_q_zoomIn(); break;
        case 4: d_func()->_q_zoomOut(); break;
        case 5: d_func()->_q_navigate((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: d_func()->_q_setMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: d_func()->_q_pageNumEdited(); break;
        case 8: d_func()->_q_print(); break;
        case 9: d_func()->_q_pageSetup(); break;
        case 10: d_func()->_q_previewChanged(); break;
        case 11: d_func()->_q_zoomFactorChanged(); break;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QPrintPreviewDialog::paintRequested(QPrinter * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
/****************************************************************************
** Meta object code from reading C++ file 'frmvesseltype.h'
**
** Created: Mon 21. Nov 16:40:18 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmvesseltype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmvesseltype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrmVesselType[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      36,   30,   14,   14, 0x08,
      60,   14,   14,   14, 0x08,
      99,   78,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FrmVesselType[] = {
    "FrmVesselType\0\0createRecord()\0index\0"
    "previewRow(QModelIndex)\0onItemSelection()\0"
    "bFinished,bDiscarded\0onEditLeave(bool,bool)\0"
};

const QMetaObject FrmVesselType::staticMetaObject = {
    { &PreviewTab::staticMetaObject, qt_meta_stringdata_FrmVesselType,
      qt_meta_data_FrmVesselType, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrmVesselType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrmVesselType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrmVesselType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmVesselType))
        return static_cast<void*>(const_cast< FrmVesselType*>(this));
    if (!strcmp(_clname, "Ui::FrmVesselType"))
        return static_cast< Ui::FrmVesselType*>(const_cast< FrmVesselType*>(this));
    return PreviewTab::qt_metacast(_clname);
}

int FrmVesselType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreviewTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createRecord(); break;
        case 1: previewRow((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: onItemSelection(); break;
        case 3: onEditLeave((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

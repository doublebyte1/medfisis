/****************************************************************************
** Meta object code from reading C++ file 'mainfrm.h'
**
** Created: Fri 6. May 14:25:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainfrm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainfrm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainFrm[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,    9,    8,    8, 0x08,
      46,   37,    8,    8, 0x08,
      62,    8,    8,    8, 0x08,
      83,   73,    8,    8, 0x08,
     164,  113,    8,    8, 0x08,
     258,    8,    8,    8, 0x08,
     281,  277,    8,    8, 0x08,
     301,  277,    8,    8, 0x08,
     343,  322,    8,    8, 0x08,
     370,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainFrm[] = {
    "MainFrm\0\0idx,bOk\0enableTab(int,bool)\0"
    "curIndex\0tabChanged(int)\0initTabs()\0"
    "bNext,idx\0navigateThroughTabs(bool,int)\0"
    "mode,persistence,sample,blackList,bSupportNewItems\0"
    "showFrameDetails(FrmFrameDetails::Mode,FrmFrameDetails::Persistence,Sa"
    "mple*,QList<int>&,bool)\0"
    "hideFrameDetails()\0str\0statusShow(QString)\0"
    "statusClean(QString)\0strError,bShowMsgBox\0"
    "displayError(QString,bool)\0cleanupMsgBoxes()\0"
};

const QMetaObject MainFrm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainFrm,
      qt_meta_data_MainFrm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainFrm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainFrm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainFrm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainFrm))
        return static_cast<void*>(const_cast< MainFrm*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainFrm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainFrm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: enableTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: initTabs(); break;
        case 3: navigateThroughTabs((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 4: showFrameDetails((*reinterpret_cast< const FrmFrameDetails::Mode(*)>(_a[1])),(*reinterpret_cast< const FrmFrameDetails::Persistence(*)>(_a[2])),(*reinterpret_cast< Sample*(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4])),(*reinterpret_cast< const bool(*)>(_a[5]))); break;
        case 5: hideFrameDetails(); break;
        case 6: statusShow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: statusClean((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: displayError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 9: cleanupMsgBoxes(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
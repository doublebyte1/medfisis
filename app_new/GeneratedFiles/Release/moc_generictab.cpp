/****************************************************************************
** Meta object code from reading C++ file 'generictab.h'
**
** Created: Fri 6. May 14:25:03 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generictab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generictab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NullRelationalDelegate[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_NullRelationalDelegate[] = {
    "NullRelationalDelegate\0"
};

const QMetaObject NullRelationalDelegate::staticMetaObject = {
    { &QSqlRelationalDelegate::staticMetaObject, qt_meta_stringdata_NullRelationalDelegate,
      qt_meta_data_NullRelationalDelegate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NullRelationalDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NullRelationalDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NullRelationalDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NullRelationalDelegate))
        return static_cast<void*>(const_cast< NullRelationalDelegate*>(this));
    return QSqlRelationalDelegate::qt_metacast(_clname);
}

int NullRelationalDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlRelationalDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_GenericTab[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   12,   11,   11, 0x05,
      67,   63,   11,   11, 0x05,
      84,   11,   11,   11, 0x05,
     103,   93,   11,   11, 0x05,
     136,  122,   11,   11, 0x05,
     210,  159,   11,   11, 0x05,
     338,  304,   11,   11, 0x25,
     451,  427,   11,   11, 0x25,
     528,   63,   11,   11, 0x05,
     564,  548,   11,   11, 0x05,
     588,   63,   11,   11, 0x25,
     615,  607,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     635,   63,   11,   11, 0x0a,
     655,   11,   11,   11, 0x0a,
     673,   11,  668,   11, 0x0a,
     680,   11,   11,   11, 0x08,
     689,   11,   11,   11, 0x08,
     701,   12,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GenericTab[] = {
    "GenericTab\0\0bLock,lWidgets\0"
    "lockControls(bool,QList<QWidget*>&)\0"
    "str\0forward(QString)\0gotPar()\0bNext,idx\0"
    "navigate(bool,int)\0bNotSubmitted\0"
    "hideFrameDetails(bool)\0"
    "mode,persistence,sample,blackList,bSupportNewItems\0"
    "showFrameDetails(FrmFrameDetails::Mode,FrmFrameDetails::Persistence,Sa"
    "mple*,QList<int>&,bool)\0"
    "mode,persistence,sample,blackList\0"
    "showFrameDetails(FrmFrameDetails::Mode,FrmFrameDetails::Persistence,Sa"
    "mple*,QList<int>&)\0"
    "mode,persistence,sample\0"
    "showFrameDetails(FrmFrameDetails::Mode,FrmFrameDetails::Persistence,Sa"
    "mple*)\0"
    "showStatus(QString)\0str,bShowMsgBox\0"
    "showError(QString,bool)\0showError(QString)\0"
    "idx,bOk\0submitted(int,bool)\0"
    "fillHeader(QString)\0onShowForm()\0bool\0"
    "next()\0goBack()\0goForward()\0"
    "onLockControls(bool,QList<QWidget*>&)\0"
};

const QMetaObject GenericTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GenericTab,
      qt_meta_data_GenericTab, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GenericTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GenericTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GenericTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenericTab))
        return static_cast<void*>(const_cast< GenericTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GenericTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lockControls((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<QWidget*>(*)>(_a[2]))); break;
        case 1: forward((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: gotPar(); break;
        case 3: navigate((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 4: hideFrameDetails((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: showFrameDetails((*reinterpret_cast< const FrmFrameDetails::Mode(*)>(_a[1])),(*reinterpret_cast< const FrmFrameDetails::Persistence(*)>(_a[2])),(*reinterpret_cast< Sample*(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4])),(*reinterpret_cast< const bool(*)>(_a[5]))); break;
        case 6: showFrameDetails((*reinterpret_cast< const FrmFrameDetails::Mode(*)>(_a[1])),(*reinterpret_cast< const FrmFrameDetails::Persistence(*)>(_a[2])),(*reinterpret_cast< Sample*(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4]))); break;
        case 7: showFrameDetails((*reinterpret_cast< const FrmFrameDetails::Mode(*)>(_a[1])),(*reinterpret_cast< const FrmFrameDetails::Persistence(*)>(_a[2])),(*reinterpret_cast< Sample*(*)>(_a[3]))); break;
        case 8: showStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: showError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 10: showError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: submitted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: fillHeader((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: onShowForm(); break;
        case 14: { bool _r = next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: goBack(); break;
        case 16: goForward(); break;
        case 17: onLockControls((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<QWidget*>(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void GenericTab::lockControls(bool _t1, QList<QWidget*> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GenericTab::forward(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GenericTab::gotPar()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GenericTab::navigate(const bool _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GenericTab::hideFrameDetails(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GenericTab::showFrameDetails(const FrmFrameDetails::Mode _t1, const FrmFrameDetails::Persistence _t2, Sample * _t3, QList<int> & _t4, const bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 8
void GenericTab::showStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GenericTab::showError(QString _t1, const bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 11
void GenericTab::submitted(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
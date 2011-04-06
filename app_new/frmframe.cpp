#include <QTest>
#include "frmframe.h"

FrmFrame::FrmFrame(QWidget *parent, Qt::WFlags flags):
GenericTab(0,parent, flags){

    setupUi(this);

    tRefFrame=0;
    tDateTime;
    tFrameTime=0;

    customDtStart->setIsDateTime(true,false,false);
    customDtStart->setIsUTC(false);
    customDtStart->setIsAuto(false);

    customDtEnd->setIsDateTime(true,false,false);
    customDtEnd->setIsUTC(false);
    customDtEnd->setIsAuto(false);

    connect(this, SIGNAL(forward()), this,
    SLOT(goForward()));

    connect(toolView, SIGNAL(clicked()), this,
        SLOT(onShowFrameDetails()));//TODO:change curidex to grabb the id

    connect(toolEdit, SIGNAL(clicked()), this,
    SLOT(onShowFrameDetails()));

    connect(this, SIGNAL(hideFrameDetails()), this,
        SLOT(onHideFrameDetails()));

    initModels();

    connect(customDtStart, SIGNAL(isDateTime(bool)), tDateTime,
        SLOT(amendDateTimeType(bool)));

    bool bDate, bTime;
    customDtStart->getIsDateTime(bDate,bTime);
    tDateTime->insertNewRecord(customDtStart->getIsAuto(),bDate,bTime);
    customDtEnd->getIsDateTime(bDate,bTime);
    tDateTime->insertNewRecord(customDtStart->getIsAuto(),bDate,bTime);

    mapper1=0;
    mapper2=0;
    mapperStartDt=0;
    mapperEndDt=0;

    initMappers();
    setUiDefaults();
}

FrmFrame::~FrmFrame()
{
    if (tRefFrame!=0) delete tRefFrame;
    if (tDateTime!=0) delete tDateTime;
    if(tFrameTime!=0) delete tFrameTime;
    if (mapper1!=0) delete mapper1;
    if (mapper2!=0) delete mapper2;
    if (mapperStartDt!=0) delete mapperStartDt;
    if (mapperEndDt!=0) delete mapperEndDt;
}

void FrmFrame::initModels()
{
    //Frame
    tRefFrame=new QSqlRelationalTableModel();
    tRefFrame->setTable(QSqlDatabase().driver()->escapeIdentifier(tr("FR_Frame"),
        QSqlDriver::TableName));
    tRefFrame->setRelation(0, QSqlRelation(tr("FR_Frame"), tr("ID"), tr("Name")));
    tRefFrame->select();
    filterTable(tRefFrame->relationModel(0));

    //Dates
    tDateTime= new DateModel();
    tDateTime->setTable(QSqlDatabase().driver()->escapeIdentifier(tr("GL_Dates"),
        QSqlDriver::TableName));
    tDateTime->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tDateTime->select();

    //Frame_Time (Physical frame + time frame!)
    tFrameTime=new QSqlTableModel();
    tFrameTime->setTable(QSqlDatabase().driver()->escapeIdentifier(tr("FR_Time"),
        QSqlDriver::TableName));
    tFrameTime->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tFrameTime->select();
}

void FrmFrame::setUiDefaults()
{
    radioCopy->setChecked(true);
    pushApply->setEnabled(true);
    pushNext->setEnabled(!pushApply);
}

void FrmFrame::onHideFrameDetails()
{
    tRefFrame->relationModel(0)->select();

    cmbCopy->setCurrentIndex(cmbCopy->count()-1);
    cmbPrexistent->setCurrentIndex(cmbPrexistent->count()-1);
}

void FrmFrame::onShowFrameDetails()
{
    if (dynamic_cast<QToolButton*>(QObject::sender())!=0){
        if (QObject::sender()->objectName()==tr("toolView")){
            if (cmbPrexistent->currentIndex()!=-1)
                emit showFrameDetails(FrmFrameDetails::VIEW,FrmFrameDetails::PERMANENT,
                cmbPrexistent->model()->index(cmbPrexistent->currentIndex(),0).data().toInt());
        }else if (QObject::sender()->objectName()==tr("toolEdit")){
            if (radioCopy->isChecked() && cmbCopy->currentIndex()!=-1)
                emit showFrameDetails(FrmFrameDetails::EDIT,FrmFrameDetails::PERMANENT,
                cmbCopy->model()->index(cmbCopy->currentIndex(),0).data().toInt());
            else if (radioCreate->isChecked())
                emit showFrameDetails(FrmFrameDetails::CREATE,FrmFrameDetails::PERMANENT,-1);
        }
    }
}

void FrmFrame::initMappers()
{
    if (tRefFrame==0) return ;

    mapper1= new QDataWidgetMapper(this);
    mapper1->setModel(tRefFrame);
    mapper1->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper1->setItemDelegate(new QSqlRelationalDelegate(this));

    cmbCopy->setModel(tRefFrame->relationModel(0));
    cmbCopy->setModelColumn(
        tRefFrame->relationModel(0)->fieldIndex(tr("Name")));

    mapper2= new QDataWidgetMapper(this);
    mapper2->setModel(tRefFrame);
    mapper2->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper2->setItemDelegate(new QSqlRelationalDelegate(this));

    cmbPrexistent->setModel(tRefFrame->relationModel(0));
    cmbPrexistent->setModelColumn(
        tRefFrame->relationModel(0)->fieldIndex(tr("Name")));

    mapper1->addMapping(this->cmbPrexistent, 0, tr("currentIndex").toAscii());
    mapper2->addMapping(this->cmbCopy, 0, tr("currentIndex").toAscii());

    if (tDateTime==0) return;

    mapperStartDt= new QDataWidgetMapper(this);
    mapperStartDt->setModel(tDateTime);
    mapperStartDt->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapperStartDt->setItemDelegate(new QSqlRelationalDelegate(this));
    mapperStartDt->addMapping(customDtStart,3,tr("dateTime").toAscii());

    mapperEndDt= new QDataWidgetMapper(this);
    mapperEndDt->setModel(tDateTime);
    mapperEndDt->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapperEndDt->setItemDelegate(new QSqlRelationalDelegate(this));
    mapperEndDt->addMapping(customDtEnd,3,tr("dateTime").toAscii());

    mapper1->toLast();
    mapper2->toLast();
    mapperStartDt->setCurrentIndex(tDateTime->rowCount()-2);//just before last
    mapperEndDt->toLast();
}

bool FrmFrame::getCurrentFrame(int& id)
{
    QModelIndex idx= tRefFrame->relationModel(0)->index(cmbPrexistent->currentIndex(),0);
    if (!idx.isValid()) return false;
    id=tRefFrame->relationModel(0)->data(idx).toInt();
    return true;
}

bool FrmFrame::getStartDt(int& id)
{
    QModelIndex idx= tDateTime->index(tDateTime->rowCount()-2,0);
    if (!idx.isValid()) return false;
    id=tDateTime->data(idx).toInt();
    return true;
}

bool FrmFrame::getEndDt(int& id)
{
    QModelIndex idx= tDateTime->index(tDateTime->rowCount()-1,0);
    if (!idx.isValid()) return false;
    id=tDateTime->data(idx).toInt();
    return true;
}

void FrmFrame::apply()
{
    bool bError=false;
    //First insert the dates...
    if (!mapperStartDt->submit() || !mapperEndDt->submit()){
       if (tDateTime->lastError().type()!=QSqlError::NoError)
            emit showError(tDateTime->lastError().text());
        else
            emit showError(tr("Could not submit mapper!"));

        bError=true;
    }else{
        if (!tDateTime->submitAll()){
            if (tDateTime->lastError().type()!=QSqlError::NoError)
                emit showError(tDateTime->lastError().text());
            else
                emit showError(tr("Could not write DateTime in the database!"));

            bError=true;
        }
    }
    mapperStartDt->setCurrentIndex(tDateTime->rowCount()-1);
    mapperEndDt->toLast();

    if (bError) {
        emit showError(tr("Could not create dates in the database!"));
    }else{

    //Now insert the record
    tFrameTime->insertRow(tFrameTime->rowCount());
    QModelIndex idx=tFrameTime->index(tFrameTime->rowCount()-1,1);//id frame
    if (idx.isValid()){
            int idFrame;
            if (getCurrentFrame(idFrame)){
                tFrameTime->setData(idx,idFrame);
                QModelIndex idx=tFrameTime->index(tFrameTime->rowCount()-1,2);//start dt
                if (idx.isValid()){
                    int idStart;
                    if (getStartDt(idStart)){
                        tFrameTime->setData(idx,idStart);
                        idx=tFrameTime->index(tFrameTime->rowCount()-1,3);//end dt
                        if (idx.isValid()){
                            int idEnd;
                            if (getEndDt(idEnd)){
                                tFrameTime->setData(idx,idEnd);
                            }else bError=true;
                        }
                    }else bError=true;
                }else bError=true;
            }else bError=true;
        }else bError=true;
    }
    bError=!tFrameTime->submitAll();

    if (!bError){
        QList<QWidget*> lWidgets;
        lWidgets << this->groupPhysical;
        lWidgets << this->groupTime;
        emit lockControls(true,lWidgets);
    }else{
        if (tFrameTime->lastError().type()!=QSqlError::NoError)
            emit showError(tFrameTime->lastError().text());
    }

    pushNext->setEnabled(!bError);
    pushApply->setEnabled(bError);

    emit showStatus(tr("Record successfully inserted in the database!"));
}

void FrmFrame::next()
{
    emit forward();
}
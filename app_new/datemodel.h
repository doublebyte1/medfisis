#ifndef DATEMODEL_H
#define DATEMODEL_H

#include <QtSql>

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//! Date Model Class
/*!
//TODO: add a description here later
*/

class DateModel: public QSqlTableModel
{
    Q_OBJECT

    public:
        bool            insertNewRecord(const bool bAuto, const bool bDate, const bool bTime);
        void            setAuto(const bool bAuto){m_bAuto=bAuto;}

    public slots:
        //! Function to listen for user dateTime type changes
        /*!
           Since the checkbox is not available for Time only widgets, the result can be only a DateTime or Date only dataType;
          \param bIsDateTime a boolean flag to set if it is DateTime
        */
         void          amendDateTimeType(bool bIsDateTime);

    private:
        //! Function to retrieve the location of last inserted Session data
        /*!
          \param ID an integer memory address.
          \return Success or failure as a boolean
        */
        bool            getLocationID(int& ID);
        bool            getDateTimeType( const bool bDate, const bool bTime, int& typeID);
        bool            m_bAuto;

};

#endif // DATEMODEL_H
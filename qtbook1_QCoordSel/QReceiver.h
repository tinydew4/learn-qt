//---------------------------------------------------------------------------
#ifndef QReceiverH
#define QReceiverH
//---------------------------------------------------------------------------
#include <QObject.h>
//---------------------------------------------------------------------------
class QReceiver : public QObject
{
	Q_OBJECT

public slots:
	void received( int, int );

};
//---------------------------------------------------------------------------
#endif

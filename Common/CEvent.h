#ifndef CEVENT_H
#define CEVENT_H

#include <QObject>

#include "Common_global.h"



class  COMMON_EXPORT CEvent : public QObject
{
    Q_OBJECT
public:
    explicit CEvent();

    virtual void toString()=0;


protected:
    __int64 m_timePoint;    //时间点
	QString m_strEventName;	//事件名

};


#endif // CEVENT_H

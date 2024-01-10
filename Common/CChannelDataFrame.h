#ifndef CCHANNELDATAFRAME_H
#define CCHANNELDATAFRAME_H

#include <QVector>

#include "Common_global.h"

class COMMON_EXPORT CChannelDataFrame
{
public:
    CChannelDataFrame(long long lTimeStamp, int iFrameLength, QVector<float> & vdataFrame);

    CChannelDataFrame(const CChannelDataFrame& dataFrame);

    CChannelDataFrame& operator = (const CChannelDataFrame& dataFrame);

    virtual ~CChannelDataFrame();

public:

    long long getTimeStamp();

    int getFrameLength();

    QVector<float> &getDataFrame();

private:
    long long m_lTimeStamp;
    int m_iFrameLength;
    QVector<float> m_vDataFrame;
};


#endif // CCHANNELDATAFRAME_H

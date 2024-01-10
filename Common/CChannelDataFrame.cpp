#include "CChannelDataFrame.h"



CChannelDataFrame::CChannelDataFrame(long long lTimeStamp, int iFrameLength, QVector<float> &vdataFrame)
{
    this->m_lTimeStamp = lTimeStamp;
    this->m_iFrameLength = iFrameLength;
    this->m_vDataFrame = vdataFrame;
}

CChannelDataFrame::CChannelDataFrame(const CChannelDataFrame &dataFrame)
{
    this->m_lTimeStamp = dataFrame.m_lTimeStamp;
    this->m_iFrameLength = dataFrame.m_iFrameLength;
    this->m_vDataFrame = dataFrame.m_vDataFrame;
}

CChannelDataFrame &CChannelDataFrame::operator =(const CChannelDataFrame &dataFrame)
{
    this->m_lTimeStamp = dataFrame.m_lTimeStamp;
    this->m_iFrameLength = dataFrame.m_iFrameLength;
    this->m_vDataFrame = dataFrame.m_vDataFrame;

    return *this;
}

CChannelDataFrame::~CChannelDataFrame()
{

}

long long CChannelDataFrame::getTimeStamp()
{
    return m_lTimeStamp;
}

int CChannelDataFrame::getFrameLength()
{
    return m_iFrameLength;
}

QVector<float> &CChannelDataFrame::getDataFrame()
{
    return m_vDataFrame;
}

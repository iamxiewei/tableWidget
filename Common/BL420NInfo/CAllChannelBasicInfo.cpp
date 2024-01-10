#include "CAllChannelBasicInfo.h"


CAllChannelBasicInfo::CAllChannelBasicInfo(): CInfo()
{
    m_strVersion="1.0.0.1";
}

short CAllChannelBasicInfo::shDeviceNo() const
{
    return m_shDeviceNo;
}

void CAllChannelBasicInfo::setShDeviceNo(short newShDeviceNo)
{
    if (m_shDeviceNo == newShDeviceNo)
        return;
    m_shDeviceNo = newShDeviceNo;

}

short CAllChannelBasicInfo::shSampleChannelNumber() const
{
    return m_shSampleChannelNumber;
}

void CAllChannelBasicInfo::setShSampleChannelNumber(short newShSampleChannelNumber)
{
    if (m_shSampleChannelNumber == newShSampleChannelNumber)
        return;
    m_shSampleChannelNumber = newShSampleChannelNumber;

}

short CAllChannelBasicInfo::shPhysicalChannelNumber() const
{
    return m_shPhysicalChannelNumber;
}

void CAllChannelBasicInfo::setShPhysicalChannelNumber(short newShPhysicalChannelNumber)
{
    if (m_shPhysicalChannelNumber == newShPhysicalChannelNumber)
        return;
    m_shPhysicalChannelNumber = newShPhysicalChannelNumber;

}

short CAllChannelBasicInfo::shHideChannelNumber() const
{
    return m_shHideChannelNumber;
}

void CAllChannelBasicInfo::setShHideChannelNumber(short newShHideChannelNumber)
{
    if (m_shHideChannelNumber == newShHideChannelNumber)
        return;
    m_shHideChannelNumber = newShHideChannelNumber;

}


QString CAllChannelBasicInfo::getMaintain() const
{
    return Maintain;
}

void CAllChannelBasicInfo::setMaintain(const QString &newMaintain)
{
    if (Maintain == newMaintain)
        return;
    Maintain = newMaintain;
}

 QString CAllChannelBasicInfo::getVersion()
{
    return m_strVersion;
}

 QString CAllChannelBasicInfo::toString()
{
    return QString();
}











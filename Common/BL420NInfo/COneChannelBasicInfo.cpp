#include "COneChannelBasicInfo.h"



COneChannelBasicInfo::COneChannelBasicInfo()
{
    m_strVersion="1.0.0.1";
}


QString COneChannelBasicInfo::strChaCommand() const
{
    return m_strChaCommand;
}

void COneChannelBasicInfo::setStrChaCommand(const QString &newStrChaCommand)
{
    if (m_strChaCommand == newStrChaCommand)
        return;
    m_strChaCommand = newStrChaCommand;

}

QString COneChannelBasicInfo::strPhysicalMetric() const
{
    return m_strPhysicalMetric;
}

void COneChannelBasicInfo::setStrPhysicalMetric(const QString &newStrPhysicalMetric)
{
    if (m_strPhysicalMetric == newStrPhysicalMetric)
        return;
    m_strPhysicalMetric = newStrPhysicalMetric;

}

QString COneChannelBasicInfo::strSignalLabel() const
{
    return m_strSignalLabel;
}

void COneChannelBasicInfo::setStrSignalLabel(const QString &newStrSignalLabel)
{
    if (m_strSignalLabel == newStrSignalLabel)
        return;
    m_strSignalLabel = newStrSignalLabel;

}

QString COneChannelBasicInfo::strTransducerType() const
{
    return m_strTransducerType;
}

void COneChannelBasicInfo::setStrTransducerType(const QString &newStrTransducerType)
{
    if (m_strTransducerType == newStrTransducerType)
        return;
    m_strTransducerType = newStrTransducerType;

}

float COneChannelBasicInfo::fSpeed() const
{
    return m_fSpeed;
}

void COneChannelBasicInfo::setFSpeed(float newFSpeed)
{
    if (qFuzzyCompare(m_fSpeed, newFSpeed))
        return;
    m_fSpeed = newFSpeed;

}

short COneChannelBasicInfo::shDataBitsNumber() const
{
    return m_shDataBitsNumber;
}

void COneChannelBasicInfo::setShDataBitsNumber(short newShDataBitsNumber)
{
    if (m_shDataBitsNumber == newShDataBitsNumber)
        return;
    m_shDataBitsNumber = newShDataBitsNumber;

}

short COneChannelBasicInfo::shChaType() const
{
    return m_shChaType;
}

void COneChannelBasicInfo::setShChaType(short newShChaType)
{
    if (m_shChaType == newShChaType)
        return;
    m_shChaType = newShChaType;

}

short COneChannelBasicInfo::shPhysicalChaNo() const
{
    return m_shPhysicalChaNo;
}

void COneChannelBasicInfo::setShPhysicalChaNo(short newShPhysicalChaNo)
{
    if (m_shPhysicalChaNo == newShPhysicalChaNo)
        return;
    m_shPhysicalChaNo = newShPhysicalChaNo;

}

short COneChannelBasicInfo::shInnerChaNo() const
{
    return m_shInnerChaNo;
}

void COneChannelBasicInfo::setShInnerChaNo(short newShInnerChaNo)
{
    if (m_shInnerChaNo == newShInnerChaNo)
        return;
    m_shInnerChaNo = newShInnerChaNo;

}

short COneChannelBasicInfo::shDeviceNo() const
{
    return m_shDeviceNo;
}

void COneChannelBasicInfo::setShDeviceNo(short newShDeviceNo)
{
    if (m_shDeviceNo == newShDeviceNo)
        return;
    m_shDeviceNo = newShDeviceNo;

}

QString COneChannelBasicInfo::getVersion()
{
    return m_strVersion;
}
QString COneChannelBasicInfo::toString()
{
    return QString();
}




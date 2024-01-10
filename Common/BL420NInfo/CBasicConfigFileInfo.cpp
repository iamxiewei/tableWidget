#include "CBasicConfigFileInfo.h"


CBasicConfigFileInfo::CBasicConfigFileInfo():CInfo()
{
    m_strVersion="1.0.0.1";
}



QString CBasicConfigFileInfo::strbyMaintain() const
{
    return m_strbyMaintain;
}

void CBasicConfigFileInfo::setStrbyMaintain(const QString &newStrbyMaintain)
{
    if (m_strbyMaintain == newStrbyMaintain)
        return;
    m_strbyMaintain = newStrbyMaintain;

}

short CBasicConfigFileInfo::shExpContentVersion() const
{
    return m_shExpContentVersion;
}

void CBasicConfigFileInfo::setShExpContentVersion(short newShExpContentVersion)
{
    if (m_shExpContentVersion == newShExpContentVersion)
        return;
    m_shExpContentVersion = newShExpContentVersion;

}

float CBasicConfigFileInfo::fDistance() const
{
    return m_fDistance;
}

void CBasicConfigFileInfo::setFDistance(float newFDistance)
{
    if (qFuzzyCompare(m_fDistance, newFDistance))
        return;
    m_fDistance = newFDistance;

}

short CBasicConfigFileInfo::shTotalAnalysisChaNum() const
{
    return m_shTotalAnalysisChaNum;
}

void CBasicConfigFileInfo::setShTotalAnalysisChaNum(short newShTotalAnalysisChaNum)
{
    if (m_shTotalAnalysisChaNum == newShTotalAnalysisChaNum)
        return;
    m_shTotalAnalysisChaNum = newShTotalAnalysisChaNum;

}

short CBasicConfigFileInfo::shTotalLogicalChaNum() const
{
    return m_shTotalLogicalChaNum;
}

void CBasicConfigFileInfo::setShTotalLogicalChaNum(short newShTotalLogicalChaNum)
{
    if (m_shTotalLogicalChaNum == newShTotalLogicalChaNum)
        return;
    m_shTotalLogicalChaNum = newShTotalLogicalChaNum;

}

short CBasicConfigFileInfo::shDeviceNumber() const
{
    return m_shDeviceNumber;
}

void CBasicConfigFileInfo::setShDeviceNumber(short newShDeviceNumber)
{
    if (m_shDeviceNumber == newShDeviceNumber)
        return;
    m_shDeviceNumber = newShDeviceNumber;

}

short CBasicConfigFileInfo::shWorkMode() const
{
    return m_shWorkMode;
}

void CBasicConfigFileInfo::setShWorkMode(short newShWorkMode)
{
    if (m_shWorkMode == newShWorkMode)
        return;
    m_shWorkMode = newShWorkMode;

}

short CBasicConfigFileInfo::shModelNo() const
{
    return m_shModelNo;
}

void CBasicConfigFileInfo::setShModelNo(short newShModelNo)
{
    if (m_shModelNo == newShModelNo)
        return;
    m_shModelNo = newShModelNo;

}

short CBasicConfigFileInfo::shMinorVersion() const
{
    return m_shMinorVersion;
}

void CBasicConfigFileInfo::setShMinorVersion(short newShMinorVersion)
{
    if (m_shMinorVersion == newShMinorVersion)
        return;
    m_shMinorVersion = newShMinorVersion;

}

short CBasicConfigFileInfo::shMajorVersion() const
{
    return m_shMajorVersion;
}

void CBasicConfigFileInfo::setShMajorVersion(short newShMajorVersion)
{
    if (m_shMajorVersion == newShMajorVersion)
        return;
    m_shMajorVersion = newShMajorVersion;
}

QString CBasicConfigFileInfo::getVersion()
{
    return m_strVersion;
}
QString CBasicConfigFileInfo::toString()
{
    return QString();
}




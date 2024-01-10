#include "CConfigSystemInfo.h"



CConfigSystemInfo::CConfigSystemInfo()
{
    m_strVersion="1.0.0.1";
}


QString CConfigSystemInfo::dateReleaseDate() const
{
    return m_dateReleaseDate;
}

void CConfigSystemInfo::setDateReleaseDate(const QString &newDateReleaseDate)
{
    if (m_dateReleaseDate == newDateReleaseDate)
        return;
    m_dateReleaseDate = newDateReleaseDate;

}

QString CConfigSystemInfo::strWorkMode() const
{
    return m_strWorkMode;
}

void CConfigSystemInfo::setStrWorkMode(const QString &newStrWorkMode)
{
    if (m_strWorkMode == newStrWorkMode)
        return;
    m_strWorkMode = newStrWorkMode;

}

QString CConfigSystemInfo::strOSPlatform() const
{
    return m_strOSPlatform;
}

void CConfigSystemInfo::setStrOSPlatform(const QString &newStrOSPlatform)
{
    if (m_strOSPlatform == newStrOSPlatform)
        return;
    m_strOSPlatform = newStrOSPlatform;

}

QString CConfigSystemInfo::strHWPlatform() const
{
    return m_strHWPlatform;
}

void CConfigSystemInfo::setStrHWPlatform(const QString &newStrHWPlatform)
{
    if (m_strHWPlatform == newStrHWPlatform)
        return;
    m_strHWPlatform = newStrHWPlatform;

}

QString CConfigSystemInfo::strCommMode() const
{
    return m_strCommMode;
}

void CConfigSystemInfo::setStrCommMode(const QString &newStrCommMode)
{
    if (m_strCommMode == newStrCommMode)
        return;
    m_strCommMode = newStrCommMode;

}

QString CConfigSystemInfo::strType() const
{
    return m_strType;
}

void CConfigSystemInfo::setStrType(const QString &newStrType)
{
    if (m_strType == newStrType)
        return;
    m_strType = newStrType;

}

short CConfigSystemInfo::shChannelNumber() const
{
    return m_shChannelNumber;
}

void CConfigSystemInfo::setShChannelNumber(short newShChannelNumber)
{
    if (m_shChannelNumber == newShChannelNumber)
        return;
    m_shChannelNumber = newShChannelNumber;

}

short CConfigSystemInfo::shInnerVersion() const
{
    return m_shInnerVersion;
}

void CConfigSystemInfo::setShInnerVersion(short newShInnerVersion)
{
    if (m_shInnerVersion == newShInnerVersion)
        return;
    m_shInnerVersion = newShInnerVersion;

}

short CConfigSystemInfo::shMinorVersion() const
{
    return m_shMinorVersion;
}

void CConfigSystemInfo::setShMinorVersion(short newShMinorVersion)
{
    if (m_shMinorVersion == newShMinorVersion)
        return;
    m_shMinorVersion = newShMinorVersion;

}

short CConfigSystemInfo::shMajorVersion() const
{
    return m_shMajorVersion;
}

void CConfigSystemInfo::setShMajorVersion(short newShMajorVersion)
{
    if (m_shMajorVersion == newShMajorVersion)
        return;
    m_shMajorVersion = newShMajorVersion;

}

QString CConfigSystemInfo::getVersion()
{
    return m_strVersion;
}
QString CConfigSystemInfo::toString()
{
    return QString();
}




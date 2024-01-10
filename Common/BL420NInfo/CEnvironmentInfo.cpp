#include "CEnvironmentInfo.h"


CEnvironmentInfo::CEnvironmentInfo()
{
    m_strVersion="1.0.0.1";
}



short CEnvironmentInfo::shMaintain() const
{
    return m_shMaintain;
}

void CEnvironmentInfo::setShMaintain(short newShMaintain)
{
    if (m_shMaintain == newShMaintain)
        return;
    m_shMaintain = newShMaintain;

}

float CEnvironmentInfo::fAtmosphericPressure() const
{
    return m_fAtmosphericPressure;
}

void CEnvironmentInfo::setFAtmosphericPressure(float newFAtmosphericPressure)
{
    if (qFuzzyCompare(m_fAtmosphericPressure, newFAtmosphericPressure))
        return;
    m_fAtmosphericPressure = newFAtmosphericPressure;

}

float CEnvironmentInfo::fHumidity() const
{
    return m_fHumidity;
}

void CEnvironmentInfo::setFHumidity(float newFHumidity)
{
    if (qFuzzyCompare(m_fHumidity, newFHumidity))
        return;
    m_fHumidity = newFHumidity;

}

float CEnvironmentInfo::fTemperature() const
{
    return m_fTemperature;
}

void CEnvironmentInfo::setFTemperature(float newFTemperature)
{
    if (qFuzzyCompare(m_fTemperature, newFTemperature))
        return;
    m_fTemperature = newFTemperature;

}

short CEnvironmentInfo::shDeviceNo() const
{
    return m_shDeviceNo;
}

void CEnvironmentInfo::setShDeviceNo(short newShDeviceNo)
{
    if (m_shDeviceNo == newShDeviceNo)
        return;
    m_shDeviceNo = newShDeviceNo;

}

QString CEnvironmentInfo::getVersion()
{
    return m_strVersion;
}
QString CEnvironmentInfo::toString()
{
    return QString();
}



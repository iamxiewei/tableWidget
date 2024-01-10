#include "CSampleRateInfo.h"



CSampleRateInfo::CSampleRateInfo()
{
    m_strVersion="1.0.0.1";
}



QString CSampleRateInfo::strMaintain() const
{
    return m_strMaintain;
}

void CSampleRateInfo::setStrMaintain(const QString &newStrMaintain)
{
    if (m_strMaintain == newStrMaintain)
        return;
    m_strMaintain = newStrMaintain;

}

float *CSampleRateInfo::pSampleRate() const
{
    return m_pSampleRate;
}

void CSampleRateInfo::setPSampleRate(float *newPSampleRate)
{
    if (m_pSampleRate == newPSampleRate)
        return;
    m_pSampleRate = newPSampleRate;

}

float CSampleRateInfo::fDefSampleRate() const
{
    return m_fDefSampleRate;
}

void CSampleRateInfo::setFDefSampleRate(float newFDefSampleRate)
{
    if (qFuzzyCompare(m_fDefSampleRate, newFDefSampleRate))
        return;
    m_fDefSampleRate = newFDefSampleRate;

}

short CSampleRateInfo::shDefSampleRateNo() const
{
    return m_shDefSampleRateNo;
}

void CSampleRateInfo::setShDefSampleRateNo(short newShDefSampleRateNo)
{
    if (m_shDefSampleRateNo == newShDefSampleRateNo)
        return;
    m_shDefSampleRateNo = newShDefSampleRateNo;

}

short CSampleRateInfo::shSampleRateNumber() const
{
    return m_shSampleRateNumber;
}

void CSampleRateInfo::setShSampleRateNumber(short newShSampleRateNumber)
{
    if (m_shSampleRateNumber == newShSampleRateNumber)
        return;
    m_shSampleRateNumber = newShSampleRateNumber;

}

QString CSampleRateInfo::getVersion()
{
    return m_strVersion;
}
QString CSampleRateInfo::toString()
{
    return QString();
}



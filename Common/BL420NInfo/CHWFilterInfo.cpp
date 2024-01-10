#include "CHWFilterInfo.h"



CHWFilterInfo::CHWFilterInfo()
{
    m_strVersion="1.0.0.1";
}



QString CHWFilterInfo::strMaintain() const
{
    return m_strMaintain;
}

void CHWFilterInfo::setStrMaintain(const QString &newStrMaintain)
{
    if (m_strMaintain == newStrMaintain)
        return;
    m_strMaintain = newStrMaintain;

}

short CHWFilterInfo::shDef50HzNotch() const
{
    return m_shDef50HzNotch;
}

void CHWFilterInfo::setShDef50HzNotch(short newShDef50HzNotch)
{
    if (m_shDef50HzNotch == newShDef50HzNotch)
        return;
    m_shDef50HzNotch = newShDef50HzNotch;

}

short CHWFilterInfo::sh50HzNotchNumber() const
{
    return m_sh50HzNotchNumber;
}

void CHWFilterInfo::setSh50HzNotchNumber(short newSh50HzNotchNumber)
{
    if (m_sh50HzNotchNumber == newSh50HzNotchNumber)
        return;
    m_sh50HzNotchNumber = newSh50HzNotchNumber;

}

float *CHWFilterInfo::pHPFilter() const
{
    return m_pHPFilter;
}

void CHWFilterInfo::setPHPFilter(float *newPHPFilter)
{
    if (m_pHPFilter == newPHPFilter)
        return;
    m_pHPFilter = newPHPFilter;

}

float *CHWFilterInfo::pLPFilter() const
{
    return m_pLPFilter;
}

void CHWFilterInfo::setPLPFilter(float *newPLPFilter)
{
    if (m_pLPFilter == newPLPFilter)
        return;
    m_pLPFilter = newPLPFilter;

}

float CHWFilterInfo::fDefHPFilter() const
{
    return m_fDefHPFilter;
}

void CHWFilterInfo::setFDefHPFilter(float newFDefHPFilter)
{
    if (qFuzzyCompare(m_fDefHPFilter, newFDefHPFilter))
        return;
    m_fDefHPFilter = newFDefHPFilter;

}

short CHWFilterInfo::shDefHPFilterNo() const
{
    return m_shDefHPFilterNo;
}

void CHWFilterInfo::setShDefHPFilterNo(short newShDefHPFilterNo)
{
    if (m_shDefHPFilterNo == newShDefHPFilterNo)
        return;
    m_shDefHPFilterNo = newShDefHPFilterNo;

}

short CHWFilterInfo::shHPFilterNumber() const
{
    return m_shHPFilterNumber;
}

void CHWFilterInfo::setShHPFilterNumber(short newShHPFilterNumber)
{
    if (m_shHPFilterNumber == newShHPFilterNumber)
        return;
    m_shHPFilterNumber = newShHPFilterNumber;

}

float CHWFilterInfo::fDefLPFilter() const
{
    return m_fDefLPFilter;
}

void CHWFilterInfo::setFDefLPFilter(float newFDefLPFilter)
{
    if (qFuzzyCompare(m_fDefLPFilter, newFDefLPFilter))
        return;
    m_fDefLPFilter = newFDefLPFilter;

}

short CHWFilterInfo::shDefLPFilterNo() const
{
    return m_shDefLPFilterNo;
}

void CHWFilterInfo::setShDefLPFilterNo(short newShDefLPFilterNo)
{
    if (m_shDefLPFilterNo == newShDefLPFilterNo)
        return;
    m_shDefLPFilterNo = newShDefLPFilterNo;

}

short CHWFilterInfo::shLPFilterNumber() const
{
    return m_shLPFilterNumber;
}

void CHWFilterInfo::setShLPFilterNumber(short newShLPFilterNumber)
{
    if (m_shLPFilterNumber == newShLPFilterNumber)
        return;
    m_shLPFilterNumber = newShLPFilterNumber;

}

QString CHWFilterInfo::getVersion()
{
    return m_strVersion;
}
QString CHWFilterInfo::toString()
{
    return QString();
}





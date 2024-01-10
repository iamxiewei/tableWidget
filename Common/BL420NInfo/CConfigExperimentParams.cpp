#include "CConfigExperimentParams.h"



CConfigExperimentParams::CConfigExperimentParams()
{
    m_strVersion="1.0.0.1";
}


float CConfigExperimentParams::fParams6() const
{
    return m_fParams6;
}

void CConfigExperimentParams::setFParams6(float newFParams6)
{
    if (qFuzzyCompare(m_fParams6, newFParams6))
        return;
    m_fParams6 = newFParams6;

}

float CConfigExperimentParams::fParams5() const
{
    return m_fParams5;
}

void CConfigExperimentParams::setFParams5(float newFParams5)
{
    if (qFuzzyCompare(m_fParams5, newFParams5))
        return;
    m_fParams5 = newFParams5;

}

int CConfigExperimentParams::iParams4() const
{
    return m_iParams4;
}

void CConfigExperimentParams::setIParams4(int newIParams4)
{
    if (m_iParams4 == newIParams4)
        return;
    m_iParams4 = newIParams4;

}

int CConfigExperimentParams::iParams3() const
{
    return m_iParams3;
}

void CConfigExperimentParams::setIParams3(int newIParams3)
{
    if (m_iParams3 == newIParams3)
        return;
    m_iParams3 = newIParams3;

}

short CConfigExperimentParams::shParams2() const
{
    return m_shParams2;
}

void CConfigExperimentParams::setShParams2(short newShParams2)
{
    if (m_shParams2 == newShParams2)
        return;
    m_shParams2 = newShParams2;

}

short CConfigExperimentParams::shParams1() const
{
    return m_shParams1;
}

void CConfigExperimentParams::setShParams1(short newShParams1)
{
    if (m_shParams1 == newShParams1)
        return;
    m_shParams1 = newShParams1;

}

float CConfigExperimentParams::fPoleDistance() const
{
    return m_fPoleDistance;
}

void CConfigExperimentParams::setFPoleDistance(float newFPoleDistance)
{
    if (qFuzzyCompare(m_fPoleDistance, newFPoleDistance))
        return;
    m_fPoleDistance = newFPoleDistance;

}

short CConfigExperimentParams::shExpMode() const
{
    return m_shExpMode;
}

void CConfigExperimentParams::setShExpMode(short newShExpMode)
{
    if (m_shExpMode == newShExpMode)
        return;
    m_shExpMode = newShExpMode;

}

long CConfigExperimentParams::lExpModelNo() const
{
    return m_lExpModelNo;
}

void CConfigExperimentParams::setLExpModelNo(long newLExpModelNo)
{
    if (m_lExpModelNo == newLExpModelNo)
        return;
    m_lExpModelNo = newLExpModelNo;

}

QString CConfigExperimentParams::getVersion()
{
    return m_strVersion;
}
QString CConfigExperimentParams::toString()
{
    return QString();
}



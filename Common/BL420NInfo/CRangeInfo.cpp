#include "CRangeInfo.h"


CRangeInfo::CRangeInfo()
{
    m_strVersion="1.0.0.1";
}



QString CRangeInfo::strMaintain() const
{
    return m_strMaintain;
}

void CRangeInfo::setStrMaintain(const QString &newStrMaintain)
{
    if (m_strMaintain == newStrMaintain)
        return;
    m_strMaintain = newStrMaintain;

}

short CRangeInfo::shFormulaTypeId() const
{
    return m_shFormulaTypeId;
}

void CRangeInfo::setShFormulaTypeId(short newShFormulaTypeId)
{
    if (m_shFormulaTypeId == newShFormulaTypeId)
        return;
    m_shFormulaTypeId = newShFormulaTypeId;

}

float CRangeInfo::getB() const
{
    return b;
}

void CRangeInfo::setB(float newB)
{
    if (qFuzzyCompare(b, newB))
        return;
    b = newB;

}

float CRangeInfo::getA() const
{
    return a;
}

void CRangeInfo::setA(float newA)
{
    if (qFuzzyCompare(a, newA))
        return;
    a = newA;

}

float *CRangeInfo::pMaxRange() const
{
    return m_pMaxRange;
}

void CRangeInfo::setPMaxRange(float *newPMaxRange)
{
    if (m_pMaxRange == newPMaxRange)
        return;
    m_pMaxRange = newPMaxRange;

}

float *CRangeInfo::pzMinRange() const
{
    return m_pzMinRange;
}

void CRangeInfo::setPzMinRange(float *newPzMinRange)
{
    if (m_pzMinRange == newPzMinRange)
        return;
    m_pzMinRange = newPzMinRange;

}

float *CRangeInfo::pAmplifierRange() const
{
    return m_pAmplifierRange;
}

void CRangeInfo::setPAmplifierRange(float *newPAmplifierRange)
{
    if (m_pAmplifierRange == newPAmplifierRange)
        return;
    m_pAmplifierRange = newPAmplifierRange;

}

float CRangeInfo::fDefRange() const
{
    return m_fDefRange;
}

void CRangeInfo::setFDefRange(float newFDefRange)
{
    if (qFuzzyCompare(m_fDefRange, newFDefRange))
        return;
    m_fDefRange = newFDefRange;

}

short CRangeInfo::shDefRangeNo() const
{
    return m_shDefRangeNo;
}

void CRangeInfo::setShDefRangeNo(short newShDefRangeNo)
{
    if (m_shDefRangeNo == newShDefRangeNo)
        return;
    m_shDefRangeNo = newShDefRangeNo;

}

short CRangeInfo::shRangeNumber() const
{
    return m_shRangeNumber;
}

void CRangeInfo::setShRangeNumber(short newShRangeNumber)
{
    if (m_shRangeNumber == newShRangeNumber)
        return;
    m_shRangeNumber = newShRangeNumber;
}

QString CRangeInfo::getVersion()
{
    return m_strVersion;
}
QString CRangeInfo::toString()
{
    return QString();
}



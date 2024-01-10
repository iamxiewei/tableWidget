#include "CBasicGeneralExperimentParamter.h"

CBasicGeneralExperimentParamter::CBasicGeneralExperimentParamter()
{
    m_strVersion="1.0.0.1";
}

short CBasicGeneralExperimentParamter::shModelNo() const
{
    return m_shModelNo;
}

void CBasicGeneralExperimentParamter::setShModelNo(short newShModelNo)
{
    if (m_shModelNo == newShModelNo)
        return;
    m_shModelNo = newShModelNo;

}

short CBasicGeneralExperimentParamter::shWorkMode() const
{
    return m_shWorkMode;
}

void CBasicGeneralExperimentParamter::setShWorkMode(short newShWorkMode)
{
    if (m_shWorkMode == newShWorkMode)
        return;
    m_shWorkMode = newShWorkMode;

}

short CBasicGeneralExperimentParamter::shDeviceClusterNumber() const
{
    return m_shDeviceClusterNumber;
}

void CBasicGeneralExperimentParamter::setShDeviceClusterNumber(short newShDeviceClusterNumber)
{
    if (m_shDeviceClusterNumber == newShDeviceClusterNumber)
        return;
    m_shDeviceClusterNumber = newShDeviceClusterNumber;

}

short CBasicGeneralExperimentParamter::shTriggerFrameLength() const
{
    return m_shTriggerFrameLength;
}

void CBasicGeneralExperimentParamter::setShTriggerFrameLength(short newShTriggerFrameLength)
{
    if (m_shTriggerFrameLength == newShTriggerFrameLength)
        return;
    m_shTriggerFrameLength = newShTriggerFrameLength;

}

short CBasicGeneralExperimentParamter::shTotalLogicalChaNum() const
{
    return m_shTotalLogicalChaNum;
}

void CBasicGeneralExperimentParamter::setShTotalLogicalChaNum(short newShTotalLogicalChaNum)
{
    if (m_shTotalLogicalChaNum == newShTotalLogicalChaNum)
        return;
    m_shTotalLogicalChaNum = newShTotalLogicalChaNum;

}

short CBasicGeneralExperimentParamter::shTotalAnalysisChaNum() const
{
    return m_shTotalAnalysisChaNum;
}

void CBasicGeneralExperimentParamter::setShTotalAnalysisChaNum(short newShTotalAnalysisChaNum)
{
    if (m_shTotalAnalysisChaNum == newShTotalAnalysisChaNum)
        return;
    m_shTotalAnalysisChaNum = newShTotalAnalysisChaNum;

}

short CBasicGeneralExperimentParamter::shLableGroupNo() const
{
    return m_shLableGroupNo;
}

void CBasicGeneralExperimentParamter::setShLableGroupNo(short newShLableGroupNo)
{
    if (m_shLableGroupNo == newShLableGroupNo)
        return;
    m_shLableGroupNo = newShLableGroupNo;

}

short CBasicGeneralExperimentParamter::shMaintain() const
{
    return m_shMaintain;
}

void CBasicGeneralExperimentParamter::setShMaintain(short newShMaintain)
{
    if (m_shMaintain == newShMaintain)
        return;
    m_shMaintain = newShMaintain;

}

QString CBasicGeneralExperimentParamter::szExperimentalTitle() const
{
    return m_szExperimentalTitle;
}

void CBasicGeneralExperimentParamter::setSzExperimentalTitle(const QString &newSzExperimentalTitle)
{
    if (m_szExperimentalTitle == newSzExperimentalTitle)
        return;
    m_szExperimentalTitle = newSzExperimentalTitle;

}



QString CBasicGeneralExperimentParamter::getVersion()
{
    return m_strVersion;
}
QString CBasicGeneralExperimentParamter::toString()
{
    return  QString();
}





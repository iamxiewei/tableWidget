#include "CConfigExperimentInfo.h"



CConfigExperimentInfo::CConfigExperimentInfo()
{
    m_strVersion="1.0.0.1";
}


QString CConfigExperimentInfo::pStrExpLabelArray() const
{
    return m_pStrExpLabelArray;
}

void CConfigExperimentInfo::setPStrExpLabelArray(const QString &newPStrExpLabelArray)
{
    if (m_pStrExpLabelArray == newPStrExpLabelArray)
        return;
    m_pStrExpLabelArray = newPStrExpLabelArray;

}

QString CConfigExperimentInfo::strExpName() const
{
    return m_strExpName;
}

void CConfigExperimentInfo::setStrExpName(const QString &newStrExpName)
{
    if (m_strExpName == newStrExpName)
        return;
    m_strExpName = newStrExpName;

}

bool CConfigExperimentInfo::bSWProgramControl() const
{
    return m_bSWProgramControl;
}

void CConfigExperimentInfo::setBSWProgramControl(bool newBSWProgramControl)
{
    if (m_bSWProgramControl == newBSWProgramControl)
        return;
    m_bSWProgramControl = newBSWProgramControl;

}

short CConfigExperimentInfo::shStimulateType() const
{
    return m_shStimulateType;
}

void CConfigExperimentInfo::setShStimulateType(short newShStimulateType)
{
    if (m_shStimulateType == newShStimulateType)
        return;
    m_shStimulateType = newShStimulateType;

}

bool CConfigExperimentInfo::bUseStimulateFlag() const
{
    return m_bUseStimulateFlag;
}

void CConfigExperimentInfo::setBUseStimulateFlag(bool newBUseStimulateFlag)
{
    if (m_bUseStimulateFlag == newBUseStimulateFlag)
        return;
    m_bUseStimulateFlag = newBUseStimulateFlag;

}

short CConfigExperimentInfo::shTriggerSampleLength() const
{
    return m_shTriggerSampleLength;
}

void CConfigExperimentInfo::setShTriggerSampleLength(short newShTriggerSampleLength)
{
    if (m_shTriggerSampleLength == newShTriggerSampleLength)
        return;
    m_shTriggerSampleLength = newShTriggerSampleLength;

}

short CConfigExperimentInfo::shSampleMode() const
{
    return m_shSampleMode;
}

void CConfigExperimentInfo::setShSampleMode(short newShSampleMode)
{
    if (m_shSampleMode == newShSampleMode)
        return;
    m_shSampleMode = newShSampleMode;

}

short CConfigExperimentInfo::shAvailableChaNum() const
{
    return m_shAvailableChaNum;
}

void CConfigExperimentInfo::setShAvailableChaNum(short newShAvailableChaNum)
{
    if (m_shAvailableChaNum == newShAvailableChaNum)
        return;
    m_shAvailableChaNum = newShAvailableChaNum;

}

short CConfigExperimentInfo::shLogicChaNum() const
{
    return m_shLogicChaNum;
}

void CConfigExperimentInfo::setShLogicChaNum(short newShLogicChaNum)
{
    if (m_shLogicChaNum == newShLogicChaNum)
        return;
    m_shLogicChaNum = newShLogicChaNum;

}

long CConfigExperimentInfo::lExpModelNo() const
{
    return m_lExpModelNo;
}

void CConfigExperimentInfo::setLExpModelNo(long newLExpModelNo)
{
    if (m_lExpModelNo == newLExpModelNo)
        return;
    m_lExpModelNo = newLExpModelNo;

}

QString CConfigExperimentInfo::getVersion()
{
    return m_strVersion;
}
QString CConfigExperimentInfo::toString()
{
    return QString();
}




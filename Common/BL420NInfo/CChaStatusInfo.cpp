#include "CChaStatusInfo.h"


CChaStatusInfo::CChaStatusInfo()
{
    m_strVersion="1.0.0.1";
}

short CChaStatusInfo::shSampleRateNo() const
{
    return m_shSampleRateNo;
}

void CChaStatusInfo::setShSampleRateNo(short newShSampleRateNo)
{
    if (m_shSampleRateNo == newShSampleRateNo)
        return;
    m_shSampleRateNo = newShSampleRateNo;

}

float CChaStatusInfo::fSampleRate() const
{
    return m_fSampleRate;
}

void CChaStatusInfo::setFSampleRate(float newFSampleRate)
{
    if (qFuzzyCompare(m_fSampleRate, newFSampleRate))
        return;
    m_fSampleRate = newFSampleRate;

}

short CChaStatusInfo::shRangeNo() const
{
    return m_shRangeNo;
}

void CChaStatusInfo::setShRangeNo(short newShRangeNo)
{
    if (m_shRangeNo == newShRangeNo)
        return;
    m_shRangeNo = newShRangeNo;

}

float CChaStatusInfo::fMinRange() const
{
    return m_fMinRange;
}

void CChaStatusInfo::setFMinRange(float newFMinRange)
{
    if (qFuzzyCompare(m_fMinRange, newFMinRange))
        return;
    m_fMinRange = newFMinRange;

}

float CChaStatusInfo::fMaxRange() const
{
    return m_fMaxRange;
}

void CChaStatusInfo::setFMaxRange(float newFMaxRange)
{
    if (qFuzzyCompare(m_fMaxRange, newFMaxRange))
        return;
    m_fMaxRange = newFMaxRange;

}

float CChaStatusInfo::fAmplifierRange() const
{
    return m_fAmplifierRange;
}

void CChaStatusInfo::setFAmplifierRange(float newFAmplifierRange)
{
    if (qFuzzyCompare(m_fAmplifierRange, newFAmplifierRange))
        return;
    m_fAmplifierRange = newFAmplifierRange;

}

float CChaStatusInfo::fMinDispValue() const
{
    return m_fMinDispValue;
}

void CChaStatusInfo::setFMinDispValue(float newFMinDispValue)
{
    if (qFuzzyCompare(m_fMinDispValue, newFMinDispValue))
        return;
    m_fMinDispValue = newFMinDispValue;

}

float CChaStatusInfo::fMaxDispValue() const
{
    return m_fMaxDispValue;
}

void CChaStatusInfo::setFMaxDispValue(float newFMaxDispValue)
{
    if (qFuzzyCompare(m_fMaxDispValue, newFMaxDispValue))
        return;
    m_fMaxDispValue = newFMaxDispValue;

}

short CChaStatusInfo::shHighPassNo() const
{
    return m_shHighPassNo;
}

void CChaStatusInfo::setShHighPassNo(short newShHighPassNo)
{
    if (m_shHighPassNo == newShHighPassNo)
        return;
    m_shHighPassNo = newShHighPassNo;

}

float CChaStatusInfo::fHighPass() const
{
    return m_fHighPass;
}

void CChaStatusInfo::setFHighPass(float newFHighPass)
{
    if (qFuzzyCompare(m_fHighPass, newFHighPass))
        return;
    m_fHighPass = newFHighPass;

}

short CChaStatusInfo::shLowPassNo() const
{
    return m_shLowPassNo;
}

void CChaStatusInfo::setShLowPassNo(short newShLowPassNo)
{
    if (m_shLowPassNo == newShLowPassNo)
        return;
    m_shLowPassNo = newShLowPassNo;

}

float CChaStatusInfo::fLowPass() const
{
    return m_fLowPass;
}

void CChaStatusInfo::setFLowPass(float newFLowPass)
{
    if (qFuzzyCompare(m_fLowPass, newFLowPass))
        return;
    m_fLowPass = newFLowPass;

}

short CChaStatusInfo::sh50HzNotch() const
{
    return m_sh50HzNotch;
}

void CChaStatusInfo::setSh50HzNotch(short newSh50HzNotch)
{
    if (m_sh50HzNotch == newSh50HzNotch)
        return;
    m_sh50HzNotch = newSh50HzNotch;

}

float CChaStatusInfo::fSpeed() const
{
    return m_fSpeed;
}

void CChaStatusInfo::setFSpeed(float newFSpeed)
{
    if (qFuzzyCompare(m_fSpeed, newFSpeed))
        return;
    m_fSpeed = newFSpeed;

}

short CChaStatusInfo::shMaintain() const
{
    return m_shMaintain;
}

void CChaStatusInfo::setShMaintain(short newShMaintain)
{
    if (m_shMaintain == newShMaintain)
        return;
    m_shMaintain = newShMaintain;

}


QString CChaStatusInfo::getVersion()
{
    return m_strVersion;
}
QString CChaStatusInfo::toString()
{
    return QString();
}






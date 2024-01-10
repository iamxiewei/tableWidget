#include"CConfigExpChaParams.h"


CConfigExpChaParams::CConfigExpChaParams()
{
    m_strVersion="1.0.0.1";
}

bool CConfigExpChaParams::bDiffDispRange() const
{
    return m_bDiffDispRange;
}

void CConfigExpChaParams::setBDiffDispRange(bool newBDiffDispRange)
{
    if (m_bDiffDispRange == newBDiffDispRange)
        return;
    m_bDiffDispRange = newBDiffDispRange;

}

bool CConfigExpChaParams::b50HzNotch() const
{
    return m_b50HzNotch;
}

void CConfigExpChaParams::setB50HzNotch(bool newB50HzNotch)
{
    if (m_b50HzNotch == newB50HzNotch)
        return;
    m_b50HzNotch = newB50HzNotch;

}

short CConfigExpChaParams::shExpModelNo() const
{
    return m_shExpModelNo;
}

void CConfigExpChaParams::setShExpModelNo(short newShExpModelNo)
{
    if (m_shExpModelNo == newShExpModelNo)
        return;
    m_shExpModelNo = newShExpModelNo;

}

short CConfigExpChaParams::shPhysicalChaNo() const
{
    return m_shPhysicalChaNo;
}

void CConfigExpChaParams::setShPhysicalChaNo(short newShPhysicalChaNo)
{
    if (m_shPhysicalChaNo == newShPhysicalChaNo)
        return;
    m_shPhysicalChaNo = newShPhysicalChaNo;

}

short CConfigExpChaParams::shLogicalChaNo() const
{
    return m_shLogicalChaNo;
}

void CConfigExpChaParams::setShLogicalChaNo(short newShLogicalChaNo)
{
    if (m_shLogicalChaNo == newShLogicalChaNo)
        return;
    m_shLogicalChaNo = newShLogicalChaNo;

}

float CConfigExpChaParams::fSampleRate() const
{
    return m_fSampleRate;
}

void CConfigExpChaParams::setFSampleRate(float newFSampleRate)
{
    if (qFuzzyCompare(m_fSampleRate, newFSampleRate))
        return;
    m_fSampleRate = newFSampleRate;

}

float CConfigExpChaParams::fHighRange() const
{
    return m_fHighRange;
}

void CConfigExpChaParams::setFHighRange(float newFHighRange)
{
    if (qFuzzyCompare(m_fHighRange, newFHighRange))
        return;
    m_fHighRange = newFHighRange;

}

float CConfigExpChaParams::fLowRange() const
{
    return m_fLowRange;
}

void CConfigExpChaParams::setFLowRange(float newFLowRange)
{
    if (qFuzzyCompare(m_fLowRange, newFLowRange))
        return;
    m_fLowRange = newFLowRange;

}

float CConfigExpChaParams::fMinDispRange() const
{
    return m_fMinDispRange;
}

void CConfigExpChaParams::setFMinDispRange(float newFMinDispRange)
{
    if (qFuzzyCompare(m_fMinDispRange, newFMinDispRange))
        return;
    m_fMinDispRange = newFMinDispRange;

}

float CConfigExpChaParams::fMaxDispRange() const
{
    return m_fMaxDispRange;
}

void CConfigExpChaParams::setFMaxDispRange(float newFMaxDispRange)
{
    if (qFuzzyCompare(m_fMaxDispRange, newFMaxDispRange))
        return;
    m_fMaxDispRange = newFMaxDispRange;

}

float CConfigExpChaParams::fHighPass() const
{
    return m_fHighPass;
}

void CConfigExpChaParams::setFHighPass(float newFHighPass)
{
    if (qFuzzyCompare(m_fHighPass, newFHighPass))
        return;
    m_fHighPass = newFHighPass;

}

float CConfigExpChaParams::fLowPass() const
{
    return m_fLowPass;
}

void CConfigExpChaParams::setFLowPass(float newFLowPass)
{
    if (qFuzzyCompare(m_fLowPass, newFLowPass))
        return;
    m_fLowPass = newFLowPass;

}

float CConfigExpChaParams::fSpeed() const
{
    return m_fSpeed;
}

void CConfigExpChaParams::setFSpeed(float newFSpeed)
{
    if (qFuzzyCompare(m_fSpeed, newFSpeed))
        return;
    m_fSpeed = newFSpeed;

}

QString CConfigExpChaParams::strExpName() const
{
    return m_strExpName;
}

void CConfigExpChaParams::setStrExpName(const QString &newStrExpName)
{
    if (m_strExpName == newStrExpName)
        return;
    m_strExpName = newStrExpName;

}

QString CConfigExpChaParams::strSensorName() const
{
    return m_strSensorName;
}

void CConfigExpChaParams::setStrSensorName(const QString &newStrSensorName)
{
    if (m_strSensorName == newStrSensorName)
        return;
    m_strSensorName = newStrSensorName;

}

QString CConfigExpChaParams::strSignalType() const
{
    return m_strSignalType;
}

void CConfigExpChaParams::setStrSignalType(const QString &newStrSignalType)
{
    if (m_strSignalType == newStrSignalType)
        return;
    m_strSignalType = newStrSignalType;

}

QString CConfigExpChaParams::strSignalLabel() const
{
    return m_strSignalLabel;
}

void CConfigExpChaParams::setStrSignalLabel(const QString &newStrSignalLabel)
{
    if (m_strSignalLabel == newStrSignalLabel)
        return;
    m_strSignalLabel = newStrSignalLabel;

}


short CConfigExpChaParams::shDeviceNo() const
{
    return m_shDeviceNo;
}

void CConfigExpChaParams::setShDeviceNo(short newShDeviceNo)
{
    if (m_shDeviceNo == newShDeviceNo)
        return;
    m_shDeviceNo = newShDeviceNo;

}

QString CConfigExpChaParams::getVersion()
{
    return m_strVersion;
}

QString CConfigExpChaParams::toString()
{
    return  QString();
}




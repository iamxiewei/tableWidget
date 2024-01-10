#include "CExpChannelInfo.h"

namespace Experiment
{
CExpChannelInfo::CExpChannelInfo() : CInfo()
{
    m_strVersion = "1.0.0.1";
}

QString CExpChannelInfo::getVersion()
{
    return m_strVersion;
}

QString CExpChannelInfo::toString()
{
    return QString();
}


short CExpChannelInfo::getDeviceNO()
{
    return m_shDeviceNO;
}

void CExpChannelInfo::setDeviceNO(short newShDeviceNO)
{
    m_shDeviceNO = newShDeviceNO;
}

bool CExpChannelInfo::getDiffDispRange()
{
    return m_bDiffDispRange;
}

bool CExpChannelInfo::get50HzNotch()
{
    return m_b50HzNotch;
}

void CExpChannelInfo::set50HzNotch(bool b50HzNotch)
{
    m_b50HzNotch = b50HzNotch;
}


short CExpChannelInfo::getExpModelNO()
{
    return m_shExpModelNO;
}

void CExpChannelInfo::setExpModelNO(short shExpModelNO)
{
    m_shExpModelNO = shExpModelNO;
}

short CExpChannelInfo::getPhysicalChaNO()
{
    return m_shPhysicalChaNO;
}

short CExpChannelInfo::getLogicalChaNO()
{
    return m_shLogicalChaNO;
}

void CExpChannelInfo::setLogicalChaNO(short shLogicalChaNO)
{
    m_shLogicalChaNO = shLogicalChaNO;
}

void CExpChannelInfo::setDiffDispRange(bool bDiffDispRange)
{
    m_bDiffDispRange = bDiffDispRange;
}

void CExpChannelInfo::setPhysicalChaNO(short shPhysicalChaNO)
{
    m_shPhysicalChaNO = shPhysicalChaNO;
}

float CExpChannelInfo::getSampleRate()
{
    return m_fSampleRate;
}

void CExpChannelInfo::setSampleRate(float fSampleRate)
{
    m_fSampleRate = fSampleRate;
}

float CExpChannelInfo::getHighRange()
{
    return m_fHighRange;
}

void CExpChannelInfo::setHighRange(float fHighRange)
{
    m_fHighRange = fHighRange;
}

float CExpChannelInfo::getLowRange()
{
    return m_fLowRange;
}

void CExpChannelInfo::setLowRange(float fLowRange)
{
    m_fLowRange = fLowRange;
}

float CExpChannelInfo::getMinDispRange()
{
    return m_fMinDispRange;
}

void CExpChannelInfo::setMinDispRange(float fMinDispRange)
{
    m_fMinDispRange = fMinDispRange;
}

float CExpChannelInfo::getMaxDispRange()
{
    return m_fMaxDispRange;
}

void CExpChannelInfo::setMaxDispRange(float fMaxDispRange)
{
    m_fMaxDispRange = fMaxDispRange;
}

float CExpChannelInfo::getHighPass()
{
    return m_fHighPass;
}

void CExpChannelInfo::setHighPass(float fHighPass)
{
    m_fHighPass = fHighPass;
}


float CExpChannelInfo::getLowPass()
{
    return m_fLowPass;
}

void CExpChannelInfo::setLowPass(float fLowPass)
{
    m_fLowPass = fLowPass;
}

float CExpChannelInfo::getSpeed()
{
    return m_fSpeed;
}

void CExpChannelInfo::setSpeed(float fSpeed)
{
    m_fSpeed = fSpeed;
}

QString CExpChannelInfo::getExpName()
{
    return m_strExpName;
}

void CExpChannelInfo::setExpName( QString &strExpName)
{
    m_strExpName = strExpName;
}

QString CExpChannelInfo::getSensorName()
{
    return m_strSensorName;
}

void CExpChannelInfo::setSensorName( QString &strSensorName)
{
    m_strSensorName = strSensorName;
}

QString CExpChannelInfo::getSignalType()
{
    return m_strSignalType;
}

void CExpChannelInfo::setSignalType( QString &strSignalType)
{
    m_strSignalType = strSignalType;
}

QString CExpChannelInfo::getSignalLabel()
{
    return m_strSignalLabel;
}


void CExpChannelInfo::setSignalLabel( QString &strSignalLabel)
{
    m_strSignalLabel = strSignalLabel;
}

short CExpChannelInfo::getDisplayChaNO()
{
    return m_shDisplayChaNO;
}

void CExpChannelInfo::setDisplayChaNO(short shDisplayChaNO)
{
    m_shDisplayChaNO = shDisplayChaNO;
}
}


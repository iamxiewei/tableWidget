#include "CDeviceUsedInfo.h"



CDeviceUsedInfo::CDeviceUsedInfo()
{
    m_strVersion="1.0.0.1";
}

QString CDeviceUsedInfo::strMaintain() const
{
    return m_strMaintain;
}

void CDeviceUsedInfo::setStrMaintain(const QString &newStrMaintain)
{
    if (m_strMaintain == newStrMaintain)
        return;
    m_strMaintain = newStrMaintain;

}

short CDeviceUsedInfo::shLastUsedDay() const
{
    return m_shLastUsedDay;
}

void CDeviceUsedInfo::setShLastUsedDay(short newShLastUsedDay)
{
    if (m_shLastUsedDay == newShLastUsedDay)
        return;
    m_shLastUsedDay = newShLastUsedDay;

}

short CDeviceUsedInfo::shLastUsedMonth() const
{
    return m_shLastUsedMonth;
}

void CDeviceUsedInfo::setShLastUsedMonth(short newShLastUsedMonth)
{
    if (m_shLastUsedMonth == newShLastUsedMonth)
        return;
    m_shLastUsedMonth = newShLastUsedMonth;

}

short CDeviceUsedInfo::shLastUsedYear() const
{
    return m_shLastUsedYear;
}

void CDeviceUsedInfo::setShLastUsedYear(short newShLastUsedYear)
{
    if (m_shLastUsedYear == newShLastUsedYear)
        return;
    m_shLastUsedYear = newShLastUsedYear;

}

short CDeviceUsedInfo::shFirstUsedDay() const
{
    return m_shFirstUsedDay;
}

void CDeviceUsedInfo::setShFirstUsedDay(short newShFirstUsedDay)
{
    if (m_shFirstUsedDay == newShFirstUsedDay)
        return;
    m_shFirstUsedDay = newShFirstUsedDay;

}

short CDeviceUsedInfo::shFirstUsedMonth() const
{
    return m_shFirstUsedMonth;
}

void CDeviceUsedInfo::setShFirstUsedMonth(short newShFirstUsedMonth)
{
    if (m_shFirstUsedMonth == newShFirstUsedMonth)
        return;
    m_shFirstUsedMonth = newShFirstUsedMonth;

}

short CDeviceUsedInfo::shFirstUsedYear() const
{
    return m_shFirstUsedYear;
}

void CDeviceUsedInfo::setShFirstUsedYear(short newShFirstUsedYear)
{
    if (m_shFirstUsedYear == newShFirstUsedYear)
        return;
    m_shFirstUsedYear = newShFirstUsedYear;

}

short CDeviceUsedInfo::shUsedNumber() const
{
    return m_shUsedNumber;
}

void CDeviceUsedInfo::setShUsedNumber(short newShUsedNumber)
{
    if (m_shUsedNumber == newShUsedNumber)
        return;
    m_shUsedNumber = newShUsedNumber;

}

long CDeviceUsedInfo::lMaxDuration() const
{
    return m_lMaxDuration;
}

void CDeviceUsedInfo::setLMaxDuration(long newLMaxDuration)
{
    if (m_lMaxDuration == newLMaxDuration)
        return;
    m_lMaxDuration = newLMaxDuration;

}

long CDeviceUsedInfo::lUsedSumDuration() const
{
    return m_lUsedSumDuration;
}

void CDeviceUsedInfo::setLUsedSumDuration(long newLUsedSumDuration)
{
    if (m_lUsedSumDuration == newLUsedSumDuration)
        return;
    m_lUsedSumDuration = newLUsedSumDuration;

}

short CDeviceUsedInfo::shDeviceNo() const
{
    return m_shDeviceNo;
}

void CDeviceUsedInfo::setShDeviceNo(short newShDeviceNo)
{
    if (m_shDeviceNo == newShDeviceNo)
        return;
    m_shDeviceNo = newShDeviceNo;

}


QString CDeviceUsedInfo::getVersion()
{
    return m_strVersion;
}
QString CDeviceUsedInfo::toString()
{
    return QString();
}





#include "CDeviceBasicInfo.h"





CDeviceBasicInfo::CDeviceBasicInfo()
{
    m_strVersion="1.0.0.1";
}



QString CDeviceBasicInfo::strConfigType() const
{
    return m_strConfigType;
}

void CDeviceBasicInfo::setStrConfigType(const QString &newStrConfigType)
{
    if (m_strConfigType == newStrConfigType)
        return;
    m_strConfigType = newStrConfigType;

}

short CDeviceBasicInfo::shChaNumber() const
{
    return m_shChaNumber;
}

void CDeviceBasicInfo::setShChaNumber(short newShChaNumber)
{
    if (m_shChaNumber == newShChaNumber)
        return;
    m_shChaNumber = newShChaNumber;

}

short CDeviceBasicInfo::shMainVersion() const
{
    return m_shMainVersion;
}

void CDeviceBasicInfo::setShMainVersion(short newShMainVersion)
{
    if (m_shMainVersion == newShMainVersion)
        return;
    m_shMainVersion = newShMainVersion;

}

short CDeviceBasicInfo::shMinorVersion() const
{
    return m_shMinorVersion;
}

void CDeviceBasicInfo::setShMinorVersion(short newShMinorVersion)
{
    if (m_shMinorVersion == newShMinorVersion)
        return;
    m_shMinorVersion = newShMinorVersion;

}

short CDeviceBasicInfo::shProductYear() const
{
    return m_shProductYear;
}

void CDeviceBasicInfo::setShProductYear(short newShProductYear)
{
    if (m_shProductYear == newShProductYear)
        return;
    m_shProductYear = newShProductYear;

}

short CDeviceBasicInfo::shProductMonth() const
{
    return m_shProductMonth;
}

void CDeviceBasicInfo::setShProductMonth(short newShProductMonth)
{
    if (m_shProductMonth == newShProductMonth)
        return;
    m_shProductMonth = newShProductMonth;

}

short CDeviceBasicInfo::shProductDay() const
{
    return m_shProductDay;
}

void CDeviceBasicInfo::setShProductDay(short newShProductDay)
{
    if (m_shProductDay == newShProductDay)
        return;
    m_shProductDay = newShProductDay;

}

short CDeviceBasicInfo::shProductBatch() const
{
    return m_shProductBatch;
}

void CDeviceBasicInfo::setShProductBatch(short newShProductBatch)
{
    if (m_shProductBatch == newShProductBatch)
        return;
    m_shProductBatch = newShProductBatch;

}

short CDeviceBasicInfo::shExtendInfoLength() const
{
    return m_shExtendInfoLength;
}

void CDeviceBasicInfo::setShExtendInfoLength(short newShExtendInfoLength)
{
    if (m_shExtendInfoLength == newShExtendInfoLength)
        return;
    m_shExtendInfoLength = newShExtendInfoLength;

}

QString CDeviceBasicInfo::strSeriesNo() const
{
    return m_strSeriesNo;
}

void CDeviceBasicInfo::setStrSeriesNo(const QString &newStrSeriesNo)
{
    if (m_strSeriesNo == newStrSeriesNo)
        return;
    m_strSeriesNo = newStrSeriesNo;

}

QString CDeviceBasicInfo::strManufacture() const
{
    return m_strManufacture;
}

void CDeviceBasicInfo::setStrManufacture(const QString &newStrManufacture)
{
    if (m_strManufacture == newStrManufacture)
        return;
    m_strManufacture = newStrManufacture;

}

short CDeviceBasicInfo::shOffsetDACBits() const
{
    return m_shOffsetDACBits;
}

void CDeviceBasicInfo::setShOffsetDACBits(short newShOffsetDACBits)
{
    if (m_shOffsetDACBits == newShOffsetDACBits)
        return;
    m_shOffsetDACBits = newShOffsetDACBits;

}

short CDeviceBasicInfo::shBuildVersion() const
{
    return m_shBuildVersion;
}

void CDeviceBasicInfo::setShBuildVersion(short newShBuildVersion)
{
    if (m_shBuildVersion == newShBuildVersion)
        return;
    m_shBuildVersion = newShBuildVersion;

}

short CDeviceBasicInfo::shHardwareVersion() const
{
    return m_shHardwareVersion;
}

void CDeviceBasicInfo::setShHardwareVersion(short newShHardwareVersion)
{
    if (m_shHardwareVersion == newShHardwareVersion)
        return;
    m_shHardwareVersion = newShHardwareVersion;

}

short CDeviceBasicInfo::shTinyVoltZeroCompensateValue() const
{
    return m_shTinyVoltZeroCompensateValue;
}

void CDeviceBasicInfo::setShTinyVoltZeroCompensateValue(short newShTinyVoltZeroCompensateValue)
{
    if (m_shTinyVoltZeroCompensateValue == newShTinyVoltZeroCompensateValue)
        return;
    m_shTinyVoltZeroCompensateValue = newShTinyVoltZeroCompensateValue;

}

short CDeviceBasicInfo::shTinyCurrentZeroCompensateVale() const
{
    return m_shTinyCurrentZeroCompensateVale;
}

void CDeviceBasicInfo::setShTinyCurrentZeroCompensateVale(short newShTinyCurrentZeroCompensateVale)
{
    if (m_shTinyCurrentZeroCompensateVale == newShTinyCurrentZeroCompensateVale)
        return;
    m_shTinyCurrentZeroCompensateVale = newShTinyCurrentZeroCompensateVale;

}

QString CDeviceBasicInfo::strMaintain() const
{
    return m_strMaintain;
}

void CDeviceBasicInfo::setStrMaintain(const QString &newStrMaintain)
{
    if (m_strMaintain == newStrMaintain)
        return;
    m_strMaintain = newStrMaintain;

}


QString CDeviceBasicInfo::strDeviceType() const
{
    return m_strDeviceType;
}

void CDeviceBasicInfo::setStrDeviceType(const QString &newStrDeviceType)
{
    if (m_strDeviceType == newStrDeviceType)
        return;
    m_strDeviceType = newStrDeviceType;

}

QString CDeviceBasicInfo::getVersion()
{
    return m_strVersion;
}
QString CDeviceBasicInfo::toString()
{
    return QString();
}



#include"CSensorInfo.h"



CSensorInfo::CSensorInfo()
{
    m_strVersion="1.0.0.1";
}


QString CSensorInfo::strMaintain() const
{
    return m_strMaintain;
}

void CSensorInfo::setStrMaintain(const QString &newStrMaintain)
{
    if (m_strMaintain == newStrMaintain)
        return;
    m_strMaintain = newStrMaintain;

}

short CSensorInfo::shLastUsedDay() const
{
    return m_shLastUsedDay;
}

void CSensorInfo::setShLastUsedDay(short newShLastUsedDay)
{
    if (m_shLastUsedDay == newShLastUsedDay)
        return;
    m_shLastUsedDay = newShLastUsedDay;

}

short CSensorInfo::shLastUsedMonth() const
{
    return m_shLastUsedMonth;
}

void CSensorInfo::setShLastUsedMonth(short newShLastUsedMonth)
{
    if (m_shLastUsedMonth == newShLastUsedMonth)
        return;
    m_shLastUsedMonth = newShLastUsedMonth;

}

short CSensorInfo::shLastUsedYear() const
{
    return m_shLastUsedYear;
}

void CSensorInfo::setShLastUsedYear(short newShLastUsedYear)
{
    if (m_shLastUsedYear == newShLastUsedYear)
        return;
    m_shLastUsedYear = newShLastUsedYear;

}

short CSensorInfo::shFirstUsedDay() const
{
    return m_shFirstUsedDay;
}

void CSensorInfo::setShFirstUsedDay(short newShFirstUsedDay)
{
    if (m_shFirstUsedDay == newShFirstUsedDay)
        return;
    m_shFirstUsedDay = newShFirstUsedDay;

}

short CSensorInfo::shFirstUsedMonth() const
{
    return m_shFirstUsedMonth;
}

void CSensorInfo::setShFirstUsedMonth(short newShFirstUsedMonth)
{
    if (m_shFirstUsedMonth == newShFirstUsedMonth)
        return;
    m_shFirstUsedMonth = newShFirstUsedMonth;

}

short CSensorInfo::shFirstUsedYear() const
{
    return m_shFirstUsedYear;
}

void CSensorInfo::setShFirstUsedYear(short newShFirstUsedYear)
{
    if (m_shFirstUsedYear == newShFirstUsedYear)
        return;
    m_shFirstUsedYear = newShFirstUsedYear;

}

short CSensorInfo::shUsedNumber() const
{
    return m_shUsedNumber;
}

void CSensorInfo::setShUsedNumber(short newShUsedNumber)
{
    if (m_shUsedNumber == newShUsedNumber)
        return;
    m_shUsedNumber = newShUsedNumber;

}

long CSensorInfo::lMax_Duration() const
{
    return m_lMax_Duration;
}

void CSensorInfo::setLMax_Duration(long newLMax_Duration)
{
    if (m_lMax_Duration == newLMax_Duration)
        return;
    m_lMax_Duration = newLMax_Duration;

}

long CSensorInfo::lUsed_Sum_Duration() const
{
    return m_lUsed_Sum_Duration;
}

void CSensorInfo::setLUsed_Sum_Duration(long newLUsed_Sum_Duration)
{
    if (m_lUsed_Sum_Duration == newLUsed_Sum_Duration)
        return;
    m_lUsed_Sum_Duration = newLUsed_Sum_Duration;

}

QString CSensorInfo::SensorModel() const
{
    return m_SensorModel;
}

void CSensorInfo::setSensorModel(const QString &newSensorModel)
{
    if (m_SensorModel == newSensorModel)
        return;
    m_SensorModel = newSensorModel;

}

QString CSensorInfo::strManufacture() const
{
    return m_strManufacture;
}

void CSensorInfo::setStrManufacture(const QString &newStrManufacture)
{
    if (m_strManufacture == newStrManufacture)
        return;
    m_strManufacture = newStrManufacture;

}

short CSensorInfo::shProductBatch() const
{
    return m_shProductBatch;
}

void CSensorInfo::setShProductBatch(short newShProductBatch)
{
    if (m_shProductBatch == newShProductBatch)
        return;
    m_shProductBatch = newShProductBatch;

}

short CSensorInfo::shProductDay() const
{
    return m_shProductDay;
}

void CSensorInfo::setShProductDay(short newShProductDay)
{
    if (m_shProductDay == newShProductDay)
        return;
    m_shProductDay = newShProductDay;

}

short CSensorInfo::shProductMonth() const
{
    return m_shProductMonth;
}

void CSensorInfo::setShProductMonth(short newShProductMonth)
{
    if (m_shProductMonth == newShProductMonth)
        return;
    m_shProductMonth = newShProductMonth;

}

short CSensorInfo::shProductYear() const
{
    return m_shProductYear;
}

void CSensorInfo::setShProductYear(short newShProductYear)
{
    if (m_shProductYear == newShProductYear)
        return;
    m_shProductYear = newShProductYear;

}

short CSensorInfo::shMinorVersion() const
{
    return m_shMinorVersion;
}

void CSensorInfo::setShMinorVersion(short newShMinorVersion)
{
    if (m_shMinorVersion == newShMinorVersion)
        return;
    m_shMinorVersion = newShMinorVersion;

}

short CSensorInfo::shMainVersion() const
{
    return m_shMainVersion;
}

void CSensorInfo::setShMainVersion(short newShMainVersion)
{
    if (m_shMainVersion == newShMainVersion)
        return;
    m_shMainVersion = newShMainVersion;

}

short CSensorInfo::shSensorClass() const
{
    return m_shSensorClass;
}

void CSensorInfo::setShSensorClass(short newShSensorClass)
{
    if (m_shSensorClass == newShSensorClass)
        return;
    m_shSensorClass = newShSensorClass;

}

short CSensorInfo::shChannelCount() const
{
    return m_shChannelCount;
}

void CSensorInfo::setShChannelCount(short newShChannelCount)
{
    if (m_shChannelCount == newShChannelCount)
        return;
    m_shChannelCount = newShChannelCount;

}

QString CSensorInfo::strSensorName() const
{
    return m_strSensorName;
}

void CSensorInfo::setStrSensorName(const QString &newStrSensorName)
{
    if (m_strSensorName == newStrSensorName)
        return;
    m_strSensorName = newStrSensorName;

}

QString CSensorInfo::getVersion()
{
    return m_strVersion;
}


QString CSensorInfo::toString()
{
    return QString();
}






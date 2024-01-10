#include "CComputerInfo.h"


CComputerInfo::CComputerInfo()
{
    m_strVersion="1.0.0.1";
}


QString CComputerInfo::getVersion()
{
    return m_strVersion;
}
QString CComputerInfo::toString()
{
    return QString();
}



QString CComputerInfo::strComputerManufacture() const
{
    return m_strComputerManufacture;
}

void CComputerInfo::setStrComputerManufacture(const QString &newStrComputerManufacture)
{
    if (m_strComputerManufacture == newStrComputerManufacture)
        return;
    m_strComputerManufacture = newStrComputerManufacture;

}

QString CComputerInfo::strComputerMODEL() const
{
    return m_strComputerMODEL;
}

void CComputerInfo::setStrComputerMODEL(const QString &newStrComputerMODEL)
{
    if (m_strComputerMODEL == newStrComputerMODEL)
        return;
    m_strComputerMODEL = newStrComputerMODEL;

}

QString CComputerInfo::strComputerName() const
{
    return m_strComputerName;
}

void CComputerInfo::setStrComputerName(const QString &newStrComputerName)
{
    if (m_strComputerName == newStrComputerName)
        return;
    m_strComputerName = newStrComputerName;

}

QString CComputerInfo::strCPUName() const
{
    return m_strCPUName;
}

void CComputerInfo::setStrCPUName(const QString &newStrCPUName)
{
    if (m_strCPUName == newStrCPUName)
        return;
    m_strCPUName = newStrCPUName;

}

QString CComputerInfo::strOSName() const
{
    return m_strOSName;
}

void CComputerInfo::setStrOSName(const QString &newStrOSName)
{
    if (m_strOSName == newStrOSName)
        return;
    m_strOSName = newStrOSName;

}

long CComputerInfo::lAvailableDiskSize() const
{
    return m_lAvailableDiskSize;
}

void CComputerInfo::setLAvailableDiskSize(long newLAvailableDiskSize)
{
    if (m_lAvailableDiskSize == newLAvailableDiskSize)
        return;
    m_lAvailableDiskSize = newLAvailableDiskSize;

}

long CComputerInfo::lDiskSize() const
{
    return m_lDiskSize;
}

void CComputerInfo::setLDiskSize(long newLDiskSize)
{
    if (m_lDiskSize == newLDiskSize)
        return;
    m_lDiskSize = newLDiskSize;

}

long CComputerInfo::lMemorySize() const
{
    return m_lMemorySize;
}

void CComputerInfo::setLMemorySize(long newLMemorySize)
{
    if (m_lMemorySize == newLMemorySize)
        return;
    m_lMemorySize = newLMemorySize;

}

short CComputerInfo::shOSVersion() const
{
    return m_shOSVersion;
}

void CComputerInfo::setShOSVersion(short newShOSVersion)
{
    if (m_shOSVersion == newShOSVersion)
        return;
    m_shOSVersion = newShOSVersion;

}

short CComputerInfo::shOSBits() const
{
    return m_shOSBits;
}

void CComputerInfo::setShOSBits(short newShOSBits)
{
    if (m_shOSBits == newShOSBits)
        return;
    m_shOSBits = newShOSBits;

}



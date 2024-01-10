#include "CConfigFilePathInfo.h"


CConfigFilePathInfo::CConfigFilePathInfo()
{
    m_strVersion="1.0.0.1";
}



QString CConfigFilePathInfo::strCutDataSavePath() const
{
    return m_strCutDataSavePath;
}

void CConfigFilePathInfo::setStrCutDataSavePath(const QString &newStrCutDataSavePath)
{
    if (m_strCutDataSavePath == newStrCutDataSavePath)
        return;
    m_strCutDataSavePath = newStrCutDataSavePath;

}

QString CConfigFilePathInfo::strExperimentFlashPath() const
{
    return m_strExperimentFlashPath;
}

void CConfigFilePathInfo::setStrExperimentFlashPath(const QString &newStrExperimentFlashPath)
{
    if (m_strExperimentFlashPath == newStrExperimentFlashPath)
        return;
    m_strExperimentFlashPath = newStrExperimentFlashPath;

}

QString CConfigFilePathInfo::strExperimentVideoPath() const
{
    return m_strExperimentVideoPath;
}

void CConfigFilePathInfo::setStrExperimentVideoPath(const QString &newStrExperimentVideoPath)
{
    if (m_strExperimentVideoPath == newStrExperimentVideoPath)
        return;
    m_strExperimentVideoPath = newStrExperimentVideoPath;

}

QString CConfigFilePathInfo::strVideoRecordPath() const
{
    return m_strVideoRecordPath;
}

void CConfigFilePathInfo::setStrVideoRecordPath(const QString &newStrVideoRecordPath)
{
    if (m_strVideoRecordPath == newStrVideoRecordPath)
        return;
    m_strVideoRecordPath = newStrVideoRecordPath;

}

QString CConfigFilePathInfo::strExportDataSavePath() const
{
    return m_strExportDataSavePath;
}

void CConfigFilePathInfo::setStrExportDataSavePath(const QString &newStrExportDataSavePath)
{
    if (m_strExportDataSavePath == newStrExportDataSavePath)
        return;
    m_strExportDataSavePath = newStrExportDataSavePath;

}

QString CConfigFilePathInfo::strLogPath() const
{
    return m_strLogPath;
}

void CConfigFilePathInfo::setStrLogPath(const QString &newStrLogPath)
{
    if (m_strLogPath == newStrLogPath)
        return;
    m_strLogPath = newStrLogPath;

}

QString CConfigFilePathInfo::strExpTemplatePath() const
{
    return m_strExpTemplatePath;
}

void CConfigFilePathInfo::setStrExpTemplatePath(const QString &newStrExpTemplatePath)
{
    if (m_strExpTemplatePath == newStrExpTemplatePath)
        return;
    m_strExpTemplatePath = newStrExpTemplatePath;

}

QString CConfigFilePathInfo::strReportTemplatePath() const
{
    return m_strReportTemplatePath;
}

void CConfigFilePathInfo::setStrReportTemplatePath(const QString &newStrReportTemplatePath)
{
    if (m_strReportTemplatePath == newStrReportTemplatePath)
        return;
    m_strReportTemplatePath = newStrReportTemplatePath;

}

QString CConfigFilePathInfo::strReportPath() const
{
    return m_strReportPath;
}

void CConfigFilePathInfo::setStrReportPath(const QString &newStrReportPath)
{
    if (m_strReportPath == newStrReportPath)
        return;
    m_strReportPath = newStrReportPath;

}

QString CConfigFilePathInfo::strSampleDataPath() const
{
    return m_strSampleDataPath;
}

void CConfigFilePathInfo::setStrSampleDataPath(const QString &newStrSampleDataPath)
{
    if (m_strSampleDataPath == newStrSampleDataPath)
        return;
    m_strSampleDataPath = newStrSampleDataPath;
}

QString CConfigFilePathInfo::getVersion()
{
    return m_strVersion;
}


QString CConfigFilePathInfo::toString()
{
    return QString();
}






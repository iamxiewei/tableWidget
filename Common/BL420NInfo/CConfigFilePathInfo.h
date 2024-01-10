#ifndef CCONFIGFILEPATHINFOH
#define CCONFIGFILEPATHINFOH



#include "CInfo.h"
#include"../Common_global.h"



class COMMON_EXPORT CConfigFilePathInfo:public CInfo
{
    Q_OBJECT
public:
    CConfigFilePathInfo();
public:
    QString		m_strSampleDataPath;				/// 采用数据保存路径
    QString		m_strReportPath;						/// 实验报告保存路径
    QString		m_strReportTemplatePath;			/// 实验报告模板路径
    QString     m_strExpTemplatePath;               /// 实验模版路径
    QString		m_strLogPath;						/// 软件运行日志路径
    QString		m_strExportDataSavePath;			/// 导出数据保存路径
    QString		m_strVideoRecordPath;				/// 录制视频保存路径
    QString		m_strExperimentVideoPath;			/// 实验演示视频路径
    QString     m_strExperimentFlashPath;			/// 实验模拟动画路径
    QString		m_strCutDataSavePath;				/// 剪切数据保存路径


    QString strSampleDataPath() const;
    void setStrSampleDataPath(const QString &newStrSampleDataPath);
    QString strReportPath() const;
    void setStrReportPath(const QString &newStrReportPath);

    QString strReportTemplatePath() const;
    void setStrReportTemplatePath(const QString &newStrReportTemplatePath);

    QString strExpTemplatePath() const;
    void setStrExpTemplatePath(const QString &newStrExpTemplatePath);

    QString strLogPath() const;
    void setStrLogPath(const QString &newStrLogPath);

    QString strExportDataSavePath() const;
    void setStrExportDataSavePath(const QString &newStrExportDataSavePath);

    QString strVideoRecordPath() const;
    void setStrVideoRecordPath(const QString &newStrVideoRecordPath);

    QString strExperimentVideoPath() const;
    void setStrExperimentVideoPath(const QString &newStrExperimentVideoPath);

    QString strExperimentFlashPath() const;
    void setStrExperimentFlashPath(const QString &newStrExperimentFlashPath);

    QString strCutDataSavePath() const;
    void setStrCutDataSavePath(const QString &newStrCutDataSavePath);

    QString getVersion();
    QString toString();





public:
    Q_PROPERTY(QString strSampleDataPath READ strSampleDataPath WRITE setStrSampleDataPath  FINAL)
    Q_PROPERTY(QString strReportPath READ strReportPath WRITE setStrReportPath  FINAL)
    Q_PROPERTY(QString strReportTemplatePath READ strReportTemplatePath WRITE setStrReportTemplatePath  FINAL)
    Q_PROPERTY(QString strExpTemplatePath READ strExpTemplatePath WRITE setStrExpTemplatePath  FINAL)
    Q_PROPERTY(QString strLogPath READ strLogPath WRITE setStrLogPath  FINAL)
    Q_PROPERTY(QString strExportDataSavePath READ strExportDataSavePath WRITE setStrExportDataSavePath  FINAL)
    Q_PROPERTY(QString strVideoRecordPath READ strVideoRecordPath WRITE setStrVideoRecordPath  FINAL)
    Q_PROPERTY(QString strExperimentVideoPath READ strExperimentVideoPath WRITE setStrExperimentVideoPath  FINAL)
    Q_PROPERTY(QString strExperimentFlashPath READ strExperimentFlashPath WRITE setStrExperimentFlashPath  FINAL)
    Q_PROPERTY(QString strCutDataSavePath READ strCutDataSavePath WRITE setStrCutDataSavePath  FINAL)

};



#endif // CCONFIGFILEPATHINFOH

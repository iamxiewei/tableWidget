#ifndef CCONFIGSYSTEMINFO_H
#define CCONFIGSYSTEMINFO_H

#include "../Common_global.h"
#include"CInfo.h"



class COMMON_EXPORT CConfigSystemInfo:public CInfo
{
    Q_OBJECT


private:
    short		m_shMajorVersion;					/// 软件主版本号：比如1
    short		m_shMinorVersion;					/// 软件次版本号：比如0
    short		m_shInnerVersion;					/// 软件内部版本号：比如999

    short		m_shChannelNumber;					/// 默认通道数：比如4
    QString		m_strType;							/// 设备类型：学生、教师、科研等
    QString		m_strCommMode;						/// 通讯方式：USB，网络
    QString		m_strHWPlatform;						/// 硬件平台：平板、手机还是PC
    QString		m_strOSPlatform;						/// 操作系统：Windows、MacOS或Linux
    QString		m_strWorkMode;						/// 工作方式：本地程序还是网络程序
    QString		m_dateReleaseDate;					/// 软件发布日期：比如2017-1-1，6字节


public:

    CConfigSystemInfo();

    QString getVersion();
    QString toString();

    short shMajorVersion() const;
    void setShMajorVersion(short newShMajorVersion);
    short shMinorVersion() const;
    void setShMinorVersion(short newShMinorVersion);

    short shInnerVersion() const;
    void setShInnerVersion(short newShInnerVersion);

    short shChannelNumber() const;
    void setShChannelNumber(short newShChannelNumber);

    QString strType() const;
    void setStrType(const QString &newStrType);

    QString strCommMode() const;
    void setStrCommMode(const QString &newStrCommMode);

    QString strHWPlatform() const;
    void setStrHWPlatform(const QString &newStrHWPlatform);

    QString strOSPlatform() const;
    void setStrOSPlatform(const QString &newStrOSPlatform);

    QString strWorkMode() const;
    void setStrWorkMode(const QString &newStrWorkMode);

    QString dateReleaseDate() const;
    void setDateReleaseDate(const QString &newDateReleaseDate);



public:
    Q_PROPERTY(short shMajorVersion READ shMajorVersion WRITE setShMajorVersion  FINAL)
    Q_PROPERTY(short shMinorVersion READ shMinorVersion WRITE setShMinorVersion  FINAL)
    Q_PROPERTY(short shInnerVersion READ shInnerVersion WRITE setShInnerVersion  FINAL)
    Q_PROPERTY(short shChannelNumber READ shChannelNumber WRITE setShChannelNumber  FINAL)
    Q_PROPERTY(QString strType READ strType WRITE setStrType  FINAL)
    Q_PROPERTY(QString strCommMode READ strCommMode WRITE setStrCommMode  FINAL)
    Q_PROPERTY(QString strHWPlatform READ strHWPlatform WRITE setStrHWPlatform  FINAL)
    Q_PROPERTY(QString strOSPlatform READ strOSPlatform WRITE setStrOSPlatform  FINAL)
    Q_PROPERTY(QString strWorkMode READ strWorkMode WRITE setStrWorkMode  FINAL)
    Q_PROPERTY(QString dateReleaseDate READ dateReleaseDate WRITE setDateReleaseDate  FINAL)
};



#endif // CCONFIGSYSTEMINFO_H

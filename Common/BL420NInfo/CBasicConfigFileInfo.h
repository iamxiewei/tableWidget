#ifndef CBASICCONFIGFILEINFO_H
#define CBASICCONFIGFILEINFO_H


#include "../Common_global.h"
#include"CInfo.h"


class COMMON_EXPORT CBasicConfigFileInfo:public CInfo
{
 Q_OBJECT
private:
    short		m_shMajorVersion;				/// 配置文件主版本号
    short		m_shMinorVersion;				/// 配置文件次版本号
    short		m_shModelNo;						/// 实验项目号，默认为0，无实验模块
    short		m_shWorkMode;					/// 工作方式：连续采样，刺激触发，程控方式
    short		m_shDeviceNumber;				/// 当前连接设备数，默认为1
    short		m_shTotalLogicalChaNum;		/// 所有逻辑采样通道数
    short		m_shTotalAnalysisChaNum;		/// 所有分析通道数
    float		m_fDistance;						/// 两根神经干动作电位引导电极之间的距离，单位：cm
    short       m_shExpContentVersion;           /// 实验内容版本 0：不包含思考题，1：包含思考题
    QString		m_strbyMaintain;                /// 预留，字节配齐


public:
    CBasicConfigFileInfo();

    QString getVersion();
    QString toString();

    short shMajorVersion() const;
    void setShMajorVersion(short newShMajorVersion);
    short shMinorVersion() const;
    void setShMinorVersion(short newShMinorVersion);

    short shModelNo() const;
    void setShModelNo(short newShModelNo);

    short shWorkMode() const;
    void setShWorkMode(short newShWorkMode);

    short shDeviceNumber() const;
    void setShDeviceNumber(short newShDeviceNumber);

    short shTotalLogicalChaNum() const;
    void setShTotalLogicalChaNum(short newShTotalLogicalChaNum);

    short shTotalAnalysisChaNum() const;
    void setShTotalAnalysisChaNum(short newShTotalAnalysisChaNum);

    float fDistance() const;
    void setFDistance(float newFDistance);

    short shExpContentVersion() const;
    void setShExpContentVersion(short newShExpContentVersion);

    QString strbyMaintain() const;
    void setStrbyMaintain(const QString &newStrbyMaintain);




public:
    Q_PROPERTY(short shMajorVersion READ shMajorVersion WRITE setShMajorVersion  FINAL)
    Q_PROPERTY(short shMinorVersion READ shMinorVersion WRITE setShMinorVersion  FINAL)
    Q_PROPERTY(short shModelNo READ shModelNo WRITE setShModelNo  FINAL)
    Q_PROPERTY(short shWorkMode READ shWorkMode WRITE setShWorkMode  FINAL)
    Q_PROPERTY(short shDeviceNumber READ shDeviceNumber WRITE setShDeviceNumber  FINAL)
    Q_PROPERTY(short shTotalLogicalChaNum READ shTotalLogicalChaNum WRITE setShTotalLogicalChaNum  FINAL)
    Q_PROPERTY(short shTotalAnalysisChaNum READ shTotalAnalysisChaNum WRITE setShTotalAnalysisChaNum  FINAL)
    Q_PROPERTY(float fDistance READ fDistance WRITE setFDistance  FINAL)
    Q_PROPERTY(short shExpContentVersion READ shExpContentVersion WRITE setShExpContentVersion  FINAL)
    Q_PROPERTY(QString strbyMaintain READ strbyMaintain WRITE setStrbyMaintain  FINAL)
};



#endif // CBASICCONFIGFILEINFO_H

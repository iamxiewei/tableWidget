#ifndef CONECHANNELBASICINFO_H
#define CONECHANNELBASICINFO_H


#include "../Common_global.h"
#include"CInfo.h"



class COMMON_EXPORT COneChannelBasicInfo:public CInfo
{
    Q_OBJECT

private:
    short		m_shDeviceNo;						/// 机器号
    short		m_shInnerChaNo;                     /// 硬件内部通道号，从0开始编码，每个物理通道对应8个内部通道号
    short		m_shPhysicalChaNo;					/// 硬件物理通道号，从0开始编码
    short		m_shChaType;						/// 当前通道类型，通用，隐藏，ECG
    short		m_shDataBitsNumber;				/// 数据位数，16位，32位，64位
    float	    m_fSpeed;								/// 默认扫描速度
    QString		m_strTransducerType;	/// 传感器类型，“TP-101”,“None”…
    QString		m_strSignalLabel;		/// 信号标签，“Force”,“Preesure”…
    QString		m_strPhysicalMetric;	/// 物理度量，比如uV 或 degreeC
    QString		m_strChaCommand;		/// 通道可以支持的命令


public:

    COneChannelBasicInfo();
    QString getVersion();
    QString toString();

    short shDeviceNo() const;
    void setShDeviceNo(short newShDeviceNo);

    short shInnerChaNo() const;
    void setShInnerChaNo(short newShInnerChaNo);

    short shPhysicalChaNo() const;
    void setShPhysicalChaNo(short newShPhysicalChaNo);

    short shChaType() const;
    void setShChaType(short newShChaType);

    short shDataBitsNumber() const;
    void setShDataBitsNumber(short newShDataBitsNumber);

    float fSpeed() const;
    void setFSpeed(float newFSpeed);

    QString strTransducerType() const;
    void setStrTransducerType(const QString &newStrTransducerType);

    QString strSignalLabel() const;
    void setStrSignalLabel(const QString &newStrSignalLabel);

    QString strPhysicalMetric() const;
    void setStrPhysicalMetric(const QString &newStrPhysicalMetric);

    QString strChaCommand() const;
    void setStrChaCommand(const QString &newStrChaCommand);


public:
    Q_PROPERTY(short shDeviceNo READ shDeviceNo WRITE setShDeviceNo  FINAL)
    Q_PROPERTY(short shInnerChaNo READ shInnerChaNo WRITE setShInnerChaNo  FINAL)
    Q_PROPERTY(short shPhysicalChaNo READ shPhysicalChaNo WRITE setShPhysicalChaNo  FINAL)
    Q_PROPERTY(short shChaType READ shChaType WRITE setShChaType  FINAL)
    Q_PROPERTY(short shDataBitsNumber READ shDataBitsNumber WRITE setShDataBitsNumber  FINAL)
    Q_PROPERTY(float fSpeed READ fSpeed WRITE setFSpeed  FINAL)
    Q_PROPERTY(QString strTransducerType READ strTransducerType WRITE setStrTransducerType  FINAL)
    Q_PROPERTY(QString strSignalLabel READ strSignalLabel WRITE setStrSignalLabel  FINAL)
    Q_PROPERTY(QString strPhysicalMetric READ strPhysicalMetric WRITE setStrPhysicalMetric  FINAL)
    Q_PROPERTY(QString strChaCommand READ strChaCommand WRITE setStrChaCommand  FINAL)

};



#endif // CONECHANNELBASICINFO_H

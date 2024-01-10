#ifndef CALLCHANNELBASICINFO_H
#define CALLCHANNELBASICINFO_H


#include "../Common_global.h"
#include"CInfo.h"



class COMMON_EXPORT CAllChannelBasicInfo:public CInfo
{
    Q_OBJECT
public:
    CAllChannelBasicInfo();

    QString getVersion();
    QString toString();

    short shDeviceNo() const;
    void setShDeviceNo(short newShDeviceNo);

    short shSampleChannelNumber() const;
    void setShSampleChannelNumber(short newShSampleChannelNumber);

    short shPhysicalChannelNumber() const;
    void setShPhysicalChannelNumber(short newShPhysicalChannelNumber);

    short shHideChannelNumber() const;
    void setShHideChannelNumber(short newShHideChannelNumber);


    QString getMaintain() const;
    void setMaintain(const QString &newMaintain);


private:

    short		m_shDeviceNo;                          /// 机器号
    short		m_shSampleChannelNumber;              /// 采样通道数，当前能够工作通道总数
    short		m_shPhysicalChannelNumber;			/// 物理通道数
    short		m_shHideChannelNumber;				/// 隐藏通道数，隐藏通道用于环境测量
    QString     Maintain;                               /// 数据配齐


public:
    Q_PROPERTY(short shDeviceNo READ shDeviceNo WRITE setShDeviceNo  FINAL)
    Q_PROPERTY(short shSampleChannelNumber READ shSampleChannelNumber WRITE setShSampleChannelNumber  FINAL)
    Q_PROPERTY(short shPhysicalChannelNumber READ shPhysicalChannelNumber WRITE setShPhysicalChannelNumber  FINAL)
    Q_PROPERTY(short shHideChannelNumber READ shHideChannelNumber WRITE setShHideChannelNumber  FINAL)
    Q_PROPERTY(QString Maintain READ getMaintain WRITE setMaintain  FINAL)
};

#endif // CALLCHANNELBASICINFO_H







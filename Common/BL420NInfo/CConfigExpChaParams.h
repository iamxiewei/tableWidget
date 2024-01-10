#ifndef CCONFIGEXPCHAPARAMS_H
#define CCONFIGEXPCHAPARAMS_H

#include "CInfo.h"
#include"../Common_global.h"



class COMMON_EXPORT CConfigExpChaParams:public CInfo
{
    Q_OBJECT

private:
    short		m_shDeviceNo;							/// 设备号
    bool		m_bDiffDispRange;						/// 是否使用不同显示范围值，否则与范围高值和范围低值一致
    bool		m_b50HzNotch;							/// 50Hz滤波
    short		m_shExpModelNo;							/// 实验模块号
    short		m_shPhysicalChaNo;						/// 物理通道号
    short		m_shLogicalChaNo;						/// 逻辑通道号
    float		m_fSampleRate;							/// 采样率
    float		m_fHighRange;							/// 范围高值
    float		m_fLowRange;								/// 范围低值
    float		m_fMinDispRange;						/// 显示范围低值
    float		m_fMaxDispRange;						/// 显示范围高值
    float		m_fHighPass;								/// 高通
    float		m_fLowPass;								/// 低通
    float		m_fSpeed;									/// 扫描速度
    QString		m_strExpName;							/// 实验名称
    QString		m_strSensorName;							/// 传感器名称
    QString		m_strSignalType;							/// 信号类型
    QString		m_strSignalLabel;						/// 信号标签


public:
    Q_PROPERTY(short shDeviceNo READ shDeviceNo WRITE setShDeviceNo  FINAL)

    Q_PROPERTY(bool bDiffDispRange READ bDiffDispRange WRITE setBDiffDispRange  FINAL)

    Q_PROPERTY(bool b50HzNotch READ b50HzNotch WRITE setB50HzNotch  FINAL)

    Q_PROPERTY(short shExpModelNo READ shExpModelNo WRITE setShExpModelNo  FINAL)

    Q_PROPERTY(short shPhysicalChaNo READ shPhysicalChaNo WRITE setShPhysicalChaNo  FINAL)

    Q_PROPERTY(short shLogicalChaNo READ shLogicalChaNo WRITE setShLogicalChaNo  FINAL)

    Q_PROPERTY(float fSampleRate READ fSampleRate WRITE setFSampleRate  FINAL)

    Q_PROPERTY(float fHighRange READ fHighRange WRITE setFHighRange  FINAL)

    Q_PROPERTY(float fLowRange READ fLowRange WRITE setFLowRange  FINAL)

    Q_PROPERTY(float fMinDispRange READ fMinDispRange WRITE setFMinDispRange  FINAL)

    Q_PROPERTY(float fMaxDispRange READ fMaxDispRange WRITE setFMaxDispRange  FINAL)

    Q_PROPERTY(float fHighPass READ fHighPass WRITE setFHighPass FINAL)

    Q_PROPERTY(float fLowPass READ fLowPass WRITE setFLowPass  FINAL)

    Q_PROPERTY(float fSpeed READ fSpeed WRITE setFSpeed  FINAL)

    Q_PROPERTY(QString strExpName READ strExpName WRITE setStrExpName  FINAL)

    Q_PROPERTY(QString strSensorName READ strSensorName WRITE setStrSensorName  FINAL)

    Q_PROPERTY(QString strSignalType READ strSignalType WRITE setStrSignalType  FINAL)

    Q_PROPERTY(QString strSignalLabel READ strSignalLabel WRITE setStrSignalLabel  FINAL)


public:

    CConfigExpChaParams();

    QString getVersion() ;
    QString toString();



     short shDeviceNo() const;
     void setShDeviceNo(short newShDeviceNo);
     bool bDiffDispRange() const;
     void setBDiffDispRange(bool newBDiffDispRange);

     bool b50HzNotch() const;
     void setB50HzNotch(bool newB50HzNotch);

     short shExpModelNo() const;
     void setShExpModelNo(short newShExpModelNo);

     short shPhysicalChaNo() const;
     void setShPhysicalChaNo(short newShPhysicalChaNo);

     short shLogicalChaNo() const;
     void setShLogicalChaNo(short newShLogicalChaNo);

     float fSampleRate() const;
     void setFSampleRate(float newFSampleRate);

     float fHighRange() const;
     void setFHighRange(float newFHighRange);

     float fLowRange() const;
     void setFLowRange(float newFLowRange);

     float fMinDispRange() const;
     void setFMinDispRange(float newFMinDispRange);

     float fMaxDispRange() const;
     void setFMaxDispRange(float newFMaxDispRange);

     float fHighPass() const;
     void setFHighPass(float newFHighPass);

     float fLowPass() const;
     void setFLowPass(float newFLowPass);

     float fSpeed() const;
     void setFSpeed(float newFSpeed);

     QString strExpName() const;
     void setStrExpName(const QString &newStrExpName);

     QString strSensorName() const;
     void setStrSensorName(const QString &newStrSensorName);

     QString strSignalType() const;
     void setStrSignalType(const QString &newStrSignalType);

     QString strSignalLabel() const;
     void setStrSignalLabel(const QString &newStrSignalLabel);


};






#endif // CCONFIGEXPCHAPARAMS_H

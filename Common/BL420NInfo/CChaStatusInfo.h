#ifndef CCHASTATUSINFO_H
#define CCHASTATUSINFO_H

#include "CInfo.h"
#include"../Common_global.h"



class COMMON_EXPORT CChaStatusInfo:public CInfo
{
    Q_OBJECT
public:
    CChaStatusInfo();

    QString getVersion();
    QString toString();


    short shSampleRateNo() const;
    void setShSampleRateNo(short newShSampleRateNo);

    float fSampleRate() const;
    void setFSampleRate(float newFSampleRate);

    short shRangeNo() const;
    void setShRangeNo(short newShRangeNo);

    float fMinRange() const;
    void setFMinRange(float newFMinRange);

    float fMaxRange() const;
    void setFMaxRange(float newFMaxRange);

    float fAmplifierRange() const;
    void setFAmplifierRange(float newFAmplifierRange);

    float fMinDispValue() const;
    void setFMinDispValue(float newFMinDispValue);

    float fMaxDispValue() const;
    void setFMaxDispValue(float newFMaxDispValue);

    short shHighPassNo() const;
    void setShHighPassNo(short newShHighPassNo);

    float fHighPass() const;
    void setFHighPass(float newFHighPass);

    short shLowPassNo() const;
    void setShLowPassNo(short newShLowPassNo);

    float fLowPass() const;
    void setFLowPass(float newFLowPass);

    short sh50HzNotch() const;
    void setSh50HzNotch(short newSh50HzNotch);

    float fSpeed() const;
    void setFSpeed(float newFSpeed);

    short shMaintain() const;
    void setShMaintain(short newShMaintain);



private:
    short	m_shSampleRateNo;				/// 当前采样率级别
    float	m_fSampleRate;					/// 当前采样率，单位：Hz
    short	m_shRangeNo;						/// 当前增益级别
    float	m_fMinRange;						/// 当前增益低值，具体的单位需要查看固定通道信息
    float	m_fMaxRange;						/// 当前增益高值，具体的单位需要查看固定通道信息
    float	m_fAmplifierRange;				/// 放大器量程，用于设置放大器的真实放大倍数
    float	m_fMinDispValue;				/// 最小的屏幕显示实际值，原来该值与增益低值相同，2016年9月14日修改
    float	m_fMaxDispValue;				/// 最大的屏幕显示实际值，原来该值与增益高值相同，2016年9月14日修改
    short	m_shHighPassNo;					/// 当前高通滤波级别
    float	m_fHighPass;						/// 当前高通滤波值，单位：Hz
    short	m_shLowPassNo;					/// 当前通滤波级别
    float	m_fLowPass;						/// 当前高通滤波值，单位：Hz
    short	m_sh50HzNotch;					/// 50Hz滤波开关，ON/OFF
    float	m_fSpeed;							/// 扫描速度，单位：s/grid
    short	m_shMaintain;						/// 数据配齐


public:
    Q_PROPERTY(short shSampleRateNo READ shSampleRateNo WRITE setShSampleRateNo  FINAL)
    Q_PROPERTY(float fSampleRate READ fSampleRate WRITE setFSampleRate  FINAL)
    Q_PROPERTY(short shRangeNo READ shRangeNo WRITE setShRangeNo  FINAL)
    Q_PROPERTY(float fMinRange READ fMinRange WRITE setFMinRange FINAL)
    Q_PROPERTY(float fMaxRange READ fMaxRange WRITE setFMaxRange  FINAL)
    Q_PROPERTY(float fAmplifierRange READ fAmplifierRange WRITE setFAmplifierRange  FINAL)
    Q_PROPERTY(float fMinDispValue READ fMinDispValue WRITE setFMinDispValue  FINAL)
    Q_PROPERTY(float fMaxDispValue READ fMaxDispValue WRITE setFMaxDispValue FINAL)
    Q_PROPERTY(short shHighPassNo READ shHighPassNo WRITE setShHighPassNo  FINAL)
    Q_PROPERTY(float fHighPass READ fHighPass WRITE setFHighPass  FINAL)
    Q_PROPERTY(short shLowPassNo READ shLowPassNo WRITE setShLowPassNo  FINAL)
    Q_PROPERTY(float fLowPass READ fLowPass WRITE setFLowPass  FINAL)
    Q_PROPERTY(short sh50HzNotch READ sh50HzNotch WRITE setSh50HzNotch  FINAL)
    Q_PROPERTY(float fSpeed READ fSpeed WRITE setFSpeed  FINAL)
    Q_PROPERTY(short shMaintain READ shMaintain WRITE setShMaintain  FINAL)

};



#endif // CCHASTATUSINFO_H

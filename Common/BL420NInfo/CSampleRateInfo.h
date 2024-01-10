#ifndef CSAMPLERATEINFO_H
#define CSAMPLERATEINFO_H

#include "../Common_global.h"
#include"CInfo.h"

class COMMON_EXPORT CSampleRateInfo:public CInfo
{
    Q_OBJECT

private:
    short		m_shSampleRateNumber;				/// 采样率档位数，	比如：20，
    short		m_shDefSampleRateNo;				/// 默认采样率档位，比如：5，
    float       m_fDefSampleRate;					/// 默认采样率，	单位：Hz
    float       *m_pSampleRate;                       /// 所有可以使用的采样率，	单位：Hz
    QString		m_strMaintain;                      /// 数据配齐


public:
    CSampleRateInfo();
    QString getVersion();
    QString toString();

    short shSampleRateNumber() const;
    void setShSampleRateNumber(short newShSampleRateNumber);

    short shDefSampleRateNo() const;
    void setShDefSampleRateNo(short newShDefSampleRateNo);

    float fDefSampleRate() const;
    void setFDefSampleRate(float newFDefSampleRate);

    float *pSampleRate() const;
    void setPSampleRate(float *newPSampleRate);

    QString strMaintain() const;
    void setStrMaintain(const QString &newStrMaintain);



public:
    Q_PROPERTY(short shSampleRateNumber READ shSampleRateNumber WRITE setShSampleRateNumber  FINAL)
    Q_PROPERTY(short shDefSampleRateNo READ shDefSampleRateNo WRITE setShDefSampleRateNo  FINAL)
    Q_PROPERTY(float fDefSampleRate READ fDefSampleRate WRITE setFDefSampleRate  FINAL)
    Q_PROPERTY(float *pSampleRate READ pSampleRate WRITE setPSampleRate  FINAL)
    Q_PROPERTY(QString strMaintain READ strMaintain WRITE setStrMaintain  FINAL)

};



#endif // CSAMPLERATEINFO_H

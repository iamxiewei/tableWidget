#ifndef CENVIRONMENTINFO_H
#define CENVIRONMENTINFO_H

#include "../Common_global.h"
#include"CInfo.h"


class COMMON_EXPORT CEnvironmentInfo:public CInfo
{
    Q_OBJECT
public:
    CEnvironmentInfo();

private:
    short   m_shDeviceNo;						/// 机器号
    float	m_fTemperature;						/// 温度信息，单位：摄氏度C
    float	m_fHumidity;							/// 相对湿度，单位：百分比如%
    float	m_fAtmosphericPressure;				/// 大气压力，单位：Pa
    short   m_shMaintain;						/// 数据配齐


public:

    short shDeviceNo() const;
    void setShDeviceNo(short newShDeviceNo);

    float fTemperature() const;
    void setFTemperature(float newFTemperature);

    float fHumidity() const;
    void setFHumidity(float newFHumidity);

    float fAtmosphericPressure() const;
    void setFAtmosphericPressure(float newFAtmosphericPressure);

    short shMaintain() const;
    void setShMaintain(short newShMaintain);

    QString getVersion();
    QString toString();

public:
    Q_PROPERTY(short shDeviceNo READ shDeviceNo WRITE setShDeviceNo  FINAL)
    Q_PROPERTY(float fTemperature READ fTemperature WRITE setFTemperature  FINAL)
    Q_PROPERTY(float fHumidity READ fHumidity WRITE setFHumidity  FINAL)
    Q_PROPERTY(float fAtmosphericPressure READ fAtmosphericPressure WRITE setFAtmosphericPressure  FINAL)
    Q_PROPERTY(short shMaintain READ shMaintain WRITE setShMaintain  FINAL)

};



#endif // CENVIRONMENTINFO_H

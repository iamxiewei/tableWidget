#ifndef CSENSORINFO_H
#define CSENSORINFO_H

#include "../Common_global.h"
#include"CInfo.h"


class COMMON_EXPORT CSensorInfo:public CInfo
{
    Q_OBJECT
private:
    QString      m_strSensorName;                     // 型号，上层软件根据该型号解释信息
    short     m_shChannelCount;                      // 传感器支持的通道数
    short     m_shSensorClass;                       // 传感器类型:0：UNK传感器，1：SIS传感器，2：SMS传感器
    short     m_shMainVersion;                       // 硬件的主版本号
    short     m_shMinorVersion;                      // 硬件的次版本号
    short     m_shProductYear;                       // 生产年
    short     m_shProductMonth;                      // 生产月
    short     m_shProductDay;                        // 生产日
    short     m_shProductBatch;                      // 生产批次
    QString      m_strManufacture;    // 制造商名称，如：成都泰盟科技有限公司
    QString      m_SensorModel;   // 传感器型号,如  PT-100N,FT100N
    long     m_lUsed_Sum_Duration;                  // 累计使用时间，单位：s，可以到136年
    long    m_lMax_Duration;                       // 最长使用时间，单位：s，可以到136年
    short     m_shUsedNumber;                        // 使用次数，只有启动采样才算使用
    short     m_shFirstUsedYear;                    // 第一次使用的年
    short     m_shFirstUsedMonth;                   // 第一次使用的月
    short     m_shFirstUsedDay;                     // 第一次使用的日
    short     m_shLastUsedYear;                     // 上次使用的年
    short     m_shLastUsedMonth;                    // 上次使用的月
    short     m_shLastUsedDay;                      // 上次使用的日
    QString      m_strMaintain;                         // 保留值，共10字节，必须填为0



public:
    CSensorInfo();
    QString getVersion();
    QString toString();


    QString strSensorName() const;
    void setStrSensorName(const QString &newStrSensorName);

    short shChannelCount() const;
    void setShChannelCount(short newShChannelCount);

    short shSensorClass() const;
    void setShSensorClass(short newShSensorClass);

    short shMainVersion() const;
    void setShMainVersion(short newShMainVersion);

    short shMinorVersion() const;
    void setShMinorVersion(short newShMinorVersion);

    short shProductYear() const;
    void setShProductYear(short newShProductYear);

    short shProductMonth() const;
    void setShProductMonth(short newShProductMonth);

    short shProductDay() const;
    void setShProductDay(short newShProductDay);

    short shProductBatch() const;
    void setShProductBatch(short newShProductBatch);

    QString strManufacture() const;
    void setStrManufacture(const QString &newStrManufacture);

    QString SensorModel() const;
    void setSensorModel(const QString &newSensorModel);

    long lUsed_Sum_Duration() const;
    void setLUsed_Sum_Duration(long newLUsed_Sum_Duration);

    long lMax_Duration() const;
    void setLMax_Duration(long newLMax_Duration);

    short shUsedNumber() const;
    void setShUsedNumber(short newShUsedNumber);

    short shFirstUsedYear() const;
    void setShFirstUsedYear(short newShFirstUsedYear);

    short shFirstUsedMonth() const;
    void setShFirstUsedMonth(short newShFirstUsedMonth);

    short shFirstUsedDay() const;
    void setShFirstUsedDay(short newShFirstUsedDay);

    short shLastUsedYear() const;
    void setShLastUsedYear(short newShLastUsedYear);

    short shLastUsedMonth() const;
    void setShLastUsedMonth(short newShLastUsedMonth);

    short shLastUsedDay() const;
    void setShLastUsedDay(short newShLastUsedDay);

    QString strMaintain() const;
    void setStrMaintain(const QString &newStrMaintain);




public:
    Q_PROPERTY(QString strSensorName READ strSensorName WRITE setStrSensorName  FINAL)
    Q_PROPERTY(short shChannelCount READ shChannelCount WRITE setShChannelCount  FINAL)
    Q_PROPERTY(short shSensorClass READ shSensorClass WRITE setShSensorClass  FINAL)
    Q_PROPERTY(short shMainVersion READ shMainVersion WRITE setShMainVersion  FINAL)
    Q_PROPERTY(short shMinorVersion READ shMinorVersion WRITE setShMinorVersion  FINAL)
    Q_PROPERTY(short shProductYear READ shProductYear WRITE setShProductYear  FINAL)
    Q_PROPERTY(short shProductMonth READ shProductMonth WRITE setShProductMonth  FINAL)
    Q_PROPERTY(short shProductDay READ shProductDay WRITE setShProductDay  FINAL)
    Q_PROPERTY(short shProductBatch READ shProductBatch WRITE setShProductBatch  FINAL)
    Q_PROPERTY(QString strManufacture READ strManufacture WRITE setStrManufacture  FINAL)
    Q_PROPERTY(QString SensorModel READ SensorModel WRITE setSensorModel  FINAL)
    Q_PROPERTY(long lUsed_Sum_Duration READ lUsed_Sum_Duration WRITE setLUsed_Sum_Duration  FINAL)
    Q_PROPERTY(long lMax_Duration READ lMax_Duration WRITE setLMax_Duration  FINAL)
    Q_PROPERTY(short shUsedNumber READ shUsedNumber WRITE setShUsedNumber  FINAL)
    Q_PROPERTY(short shFirstUsedYear READ shFirstUsedYear WRITE setShFirstUsedYear  FINAL)
    Q_PROPERTY(short shFirstUsedMonth READ shFirstUsedMonth WRITE setShFirstUsedMonth  FINAL)
    Q_PROPERTY(short shFirstUsedDay READ shFirstUsedDay WRITE setShFirstUsedDay  FINAL)
    Q_PROPERTY(short shLastUsedYear READ shLastUsedYear WRITE setShLastUsedYear  FINAL)
    Q_PROPERTY(short shLastUsedMonth READ shLastUsedMonth WRITE setShLastUsedMonth  FINAL)
    Q_PROPERTY(short shLastUsedDay READ shLastUsedDay WRITE setShLastUsedDay  FINAL)
    Q_PROPERTY(QString strMaintain READ strMaintain WRITE setStrMaintain  FINAL)

};



#endif // CSENSORINFO_H

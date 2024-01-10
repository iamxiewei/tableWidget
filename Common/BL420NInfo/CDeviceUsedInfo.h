#ifndef CDEVICEUSEDINFO_H
#define CDEVICEUSEDINFO_H

#include "CInfo.h"
#include"../Common_global.h"



class COMMON_EXPORT CDeviceUsedInfo:public CInfo
{
    Q_OBJECT
public:

private:
    short		m_shDeviceNo;						/// 机器号
    long		m_lUsedSumDuration;				/// 累计使用时间，单位：s，可以到136年
    long		m_lMaxDuration;					/// 最长使用时间，单位：s，可以到136年
    short		m_shUsedNumber;						/// 使用次数，只有启动采样才算使用
    short		m_shFirstUsedYear;					/// 第一次使用的年
    short		m_shFirstUsedMonth;				/// 第一次使用的月
    short		m_shFirstUsedDay;					/// 第一次使用的日
    short		m_shLastUsedYear;					/// 上次使用的年
    short		m_shLastUsedMonth;					/// 上次使用的月
    short		m_shLastUsedDay;					/// 上次使用的日
    QString		m_strMaintain;                      /// 保留值，共8字节，必须填为0


public:
    CDeviceUsedInfo();

    QString getVersion();
    QString toString();

    short shDeviceNo() const;
    void setShDeviceNo(short newShDeviceNo);

    long lUsedSumDuration() const;
    void setLUsedSumDuration(long newLUsedSumDuration);

    long lMaxDuration() const;
    void setLMaxDuration(long newLMaxDuration);

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
    Q_PROPERTY(short shDeviceNo READ shDeviceNo WRITE setShDeviceNo  FINAL)
    Q_PROPERTY(long lUsedSumDuration READ lUsedSumDuration WRITE setLUsedSumDuration  FINAL)
    Q_PROPERTY(long lMaxDuration READ lMaxDuration WRITE setLMaxDuration  FINAL)
    Q_PROPERTY(short shUsedNumber READ shUsedNumber WRITE setShUsedNumber  FINAL)
    Q_PROPERTY(short shFirstUsedYear READ shFirstUsedYear WRITE setShFirstUsedYear  FINAL)
    Q_PROPERTY(short shFirstUsedMonth READ shFirstUsedMonth WRITE setShFirstUsedMonth  FINAL)
    Q_PROPERTY(short shFirstUsedDay READ shFirstUsedDay WRITE setShFirstUsedDay  FINAL)
    Q_PROPERTY(short shLastUsedYear READ shLastUsedYear WRITE setShLastUsedYear  FINAL)
    Q_PROPERTY(short shLastUsedMonth READ shLastUsedMonth WRITE setShLastUsedMonth  FINAL)
    Q_PROPERTY(short shLastUsedDay READ shLastUsedDay WRITE setShLastUsedDay FINAL)
    Q_PROPERTY(QString strMaintain READ strMaintain WRITE setStrMaintain  FINAL)

};



#endif // CDEVICEUSEDINFO_H

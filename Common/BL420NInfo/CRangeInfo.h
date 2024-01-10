#ifndef CRANGEINFO_H
#define CRANGEINFO_H

#include "../Common_global.h"
#include"CInfo.h"




class COMMON_EXPORT CRangeInfo:public CInfo
{
    Q_OBJECT

private:
    short		m_shRangeNumber;					/// 量程档位，		比如：20
    short		m_shDefRangeNo;					/// 默认量程档位，	比如：5
    float       m_fDefRange;							/// 默认量程，采用高值表达，比如：1mV
    float       *m_pAmplifierRange;             /// 放大器量程，用于设置放大器的真实放大倍数
    float       *m_pzMinRange;		/// 放大器量程显示低值，仅用于显示
    float       *m_pMaxRange;		/// 放大器量程显示高值，仅用于显示
    float       a;									/// 该通道定标系数a，y = ax + b;
    float       b;									/// 该通道定标截距b，这两个定标值是指在1倍增益下的定标系数
    short       m_shFormulaTypeId;                    ///定标公式,当等于0时,使用y=ax+b公式定标,当等于1时使用公式y=a/x+b,其他未知值,以0值计算
    QString		m_strMaintain;	/// 数据配齐

public:
    CRangeInfo();
    QString getVersion();
    QString toString();

    short shRangeNumber() const;
    void setShRangeNumber(short newShRangeNumber);
    short shDefRangeNo() const;
    void setShDefRangeNo(short newShDefRangeNo);

    float fDefRange() const;
    void setFDefRange(float newFDefRange);

    float *pAmplifierRange() const;
    void setPAmplifierRange(float *newPAmplifierRange);

    float *pzMinRange() const;
    void setPzMinRange(float *newPzMinRange);

    float *pMaxRange() const;
    void setPMaxRange(float *newPMaxRange);

    float getA() const;
    void setA(float newA);

    float getB() const;
    void setB(float newB);

    short shFormulaTypeId() const;
    void setShFormulaTypeId(short newShFormulaTypeId);

    QString strMaintain() const;
    void setStrMaintain(const QString &newStrMaintain);





public:
    Q_PROPERTY(short shRangeNumber READ shRangeNumber WRITE setShRangeNumber  FINAL)
    Q_PROPERTY(short shDefRangeNo READ shDefRangeNo WRITE setShDefRangeNo  FINAL)
    Q_PROPERTY(float fDefRange READ fDefRange WRITE setFDefRange  FINAL)
    Q_PROPERTY(float *pAmplifierRange READ pAmplifierRange WRITE setPAmplifierRange  FINAL)
    Q_PROPERTY(float *pzMinRange READ pzMinRange WRITE setPzMinRange  FINAL)
    Q_PROPERTY(float *pMaxRange READ pMaxRange WRITE setPMaxRange  FINAL)
    Q_PROPERTY(float a READ getA WRITE setA  FINAL)
    Q_PROPERTY(float b READ getB WRITE setB  FINAL)
    Q_PROPERTY(short shFormulaTypeId READ shFormulaTypeId WRITE setShFormulaTypeId  FINAL)
    Q_PROPERTY(QString strMaintain READ strMaintain WRITE setStrMaintain  FINAL)

};



#endif // CRANGEINFO_H

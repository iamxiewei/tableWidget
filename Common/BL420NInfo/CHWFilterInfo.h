#ifndef CHWFILTERINFO_H
#define CHWFILTERINFO_H

#include "../Common_global.h"
#include"CInfo.h"


class COMMON_EXPORT CHWFilterInfo:public CInfo
{
    Q_OBJECT

private:
    short		m_shLPFilterNumber;				/// 低通滤波档位数，	比如：20
    short		m_shDefLPFilterNo;				/// 默认低通滤波档位，	比如：5
    float       m_fDefLPFilter;						/// 默认低通滤波值，	比如：100Hz
    short		m_shHPFilterNumber;				/// 高通滤波档位数，	比如：20
    short		m_shDefHPFilterNo;				/// 默认高通滤波档位，	比如：5
    float       m_fDefHPFilter;						/// 默认高通滤波值，	比如：1Hz
    float       *m_pLPFilter;			/// 每一档低通滤波值，	单位：Hz
    float       *m_pHPFilter;			/// 每一档高通滤波值，	单位：Hz
    short		m_sh50HzNotchNumber;				/// 50Hz滤波开关档位数，1表示禁止50Hz调节旋钮，
        /// 仅只能使用默认值；	2表示有开和关两档，可以通过旋钮切换
    short		m_shDef50HzNotch;					/// 默认50Hz滤波开关，	非零打开50Hz
    QString		m_strMaintain;	/// 数据配齐



public:
    CHWFilterInfo();
    QString getVersion();
    QString toString();

    short shLPFilterNumber() const;
    void setShLPFilterNumber(short newShLPFilterNumber);
    short shDefLPFilterNo() const;
    void setShDefLPFilterNo(short newShDefLPFilterNo);

    float fDefLPFilter() const;
    void setFDefLPFilter(float newFDefLPFilter);

    short shHPFilterNumber() const;
    void setShHPFilterNumber(short newShHPFilterNumber);

    short shDefHPFilterNo() const;
    void setShDefHPFilterNo(short newShDefHPFilterNo);

    float fDefHPFilter() const;
    void setFDefHPFilter(float newFDefHPFilter);

    float *pLPFilter() const;
    void setPLPFilter(float *newPLPFilter);

    float *pHPFilter() const;
    void setPHPFilter(float *newPHPFilter);

    short sh50HzNotchNumber() const;
    void setSh50HzNotchNumber(short newSh50HzNotchNumber);

    short shDef50HzNotch() const;
    void setShDef50HzNotch(short newShDef50HzNotch);

    QString strMaintain() const;
    void setStrMaintain(const QString &newStrMaintain);



public:
    Q_PROPERTY(short shLPFilterNumber READ shLPFilterNumber WRITE setShLPFilterNumber  FINAL)
    Q_PROPERTY(short shDefLPFilterNo READ shDefLPFilterNo WRITE setShDefLPFilterNo  FINAL)
    Q_PROPERTY(float fDefLPFilter READ fDefLPFilter WRITE setFDefLPFilter  FINAL)
    Q_PROPERTY(short shHPFilterNumber READ shHPFilterNumber WRITE setShHPFilterNumber  FINAL)
    Q_PROPERTY(short shDefHPFilterNo READ shDefHPFilterNo WRITE setShDefHPFilterNo  FINAL)
    Q_PROPERTY(float fDefHPFilter READ fDefHPFilter WRITE setFDefHPFilter  FINAL)
    Q_PROPERTY(float *pLPFilter READ pLPFilter WRITE setPLPFilter  FINAL)
    Q_PROPERTY(float *pHPFilter READ pHPFilter WRITE setPHPFilter  FINAL)
    Q_PROPERTY(short sh50HzNotchNumber READ sh50HzNotchNumber WRITE setSh50HzNotchNumber  FINAL)
    Q_PROPERTY(short shDef50HzNotch READ shDef50HzNotch WRITE setShDef50HzNotch  FINAL)
    Q_PROPERTY(QString strMaintain READ strMaintain WRITE setStrMaintain  FINAL)

};



#endif // CHWFILTERINFO_H

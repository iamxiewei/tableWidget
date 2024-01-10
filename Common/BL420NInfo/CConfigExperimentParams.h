#ifndef CCONFIGEXPERIMENTPARAMS_H
#define CCONFIGEXPERIMENTPARAMS_H

#include "CInfo.h"
#include"../Common_global.h"


class COMMON_EXPORT CConfigExperimentParams:public CInfo
{
 Q_OBJECT
private:
    long									m_lExpModelNo;					///	实验模块号
    short									m_shExpMode;						/// 实验模式：现代模式，经典模式
    float									m_fPoleDistance;					/// 电极距离
    short									m_shParams1;						/// 预留实验设置参数
    short									m_shParams2;						/// 预留实验设置参数
    int										m_iParams3;						/// 预留实验设置参数
    int										m_iParams4;						/// 预留实验设置参数
    float									m_fParams5;						/// 预留实验设置参数
    float									m_fParams6;						/// 预留实验设置参数


public:
    CConfigExperimentParams();

    long lExpModelNo() const;
    void setLExpModelNo(long newLExpModelNo);
    short shExpMode() const;
    void setShExpMode(short newShExpMode);

    float fPoleDistance() const;
    void setFPoleDistance(float newFPoleDistance);

    short shParams1() const;
    void setShParams1(short newShParams1);

    short shParams2() const;
    void setShParams2(short newShParams2);

    int iParams3() const;
    void setIParams3(int newIParams3);

    int iParams4() const;
    void setIParams4(int newIParams4);

    float fParams5() const;
    void setFParams5(float newFParams5);

    float fParams6() const;
    void setFParams6(float newFParams6);


    QString getVersion();
    QString toString();


public:
    Q_PROPERTY(long lExpModelNo READ lExpModelNo WRITE setLExpModelNo FINAL)
    Q_PROPERTY(short shExpMode READ shExpMode WRITE setShExpMode  FINAL)
    Q_PROPERTY(float fPoleDistance READ fPoleDistance WRITE setFPoleDistance  FINAL)
    Q_PROPERTY(short shParams1 READ shParams1 WRITE setShParams1  FINAL)
    Q_PROPERTY(short shParams2 READ shParams2 WRITE setShParams2  FINAL)
    Q_PROPERTY(int iParams3 READ iParams3 WRITE setIParams3  FINAL)
    Q_PROPERTY(int iParams4 READ iParams4 WRITE setIParams4  FINAL)
    Q_PROPERTY(float fParams5 READ fParams5 WRITE setFParams5  FINAL)
    Q_PROPERTY(float fParams6 READ fParams6 WRITE setFParams6  FINAL)
};



#endif // CCONFIGEXPERIMENTPARAMS_H

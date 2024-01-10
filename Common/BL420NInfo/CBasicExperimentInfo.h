#ifndef CBASICEXPERIMENTINFO_H
#define CBASICEXPERIMENTINFO_H

#include "CInfo.h"
#include"../Common_global.h"


class COMMON_EXPORT CBasicExperimentInfo:public CInfo
{
    Q_OBJECT

public:
    CBasicExperimentInfo();

private:
    short		m_shModelNo;						    /// 实验项目号，默认为0，无实验模块
    QString		m_strName;                              /// 实验名称
    QString		m_strPurpose;                           /// 实验目的
    QString		m_strPrinciple;	/// 实验原理
    QString		m_strAnimal;		/// 实验对象
    QString		m_strEquipment;	/// 实验器材
    QString		m_strDrug;			/// 当前实验药品
    QString		m_strMethodStep;	/// 实验方法步骤
    QString		m_strAttention;	/// 实验注意事项



public:

    QString getVersion();
    QString toString();


    short shModelNo() const;
    void setShModelNo(short newShModelNo);

    QString strName() const;
    void setStrName(const QString &newStrName);

    QString strPurpose() const;
    void setStrPurpose(const QString &newStrPurpose);

    QString strPrinciple() const;
    void setStrPrinciple(const QString &newStrPrinciple);

    QString strAnimal() const;
    void setStrAnimal(const QString &newStrAnimal);

    QString strEquipment() const;
    void setStrEquipment(const QString &newStrEquipment);

    QString strDrug() const;
    void setStrDrug(const QString &newStrDrug);

    QString strMethodStep() const;
    void setStrMethodStep(const QString &newStrMethodStep);

    QString strAttention() const;
    void setStrAttention(const QString &newStrAttention);




public:
    Q_PROPERTY(short shModelNo READ shModelNo WRITE setShModelNo  FINAL)
    Q_PROPERTY(QString strName READ strName WRITE setStrName  FINAL)
    Q_PROPERTY(QString strPurpose READ strPurpose WRITE setStrPurpose  FINAL)
    Q_PROPERTY(QString strPrinciple READ strPrinciple WRITE setStrPrinciple  FINAL)
    Q_PROPERTY(QString strAnimal READ strAnimal WRITE setStrAnimal  FINAL)
    Q_PROPERTY(QString strEquipment READ strEquipment WRITE setStrEquipment  FINAL)
    Q_PROPERTY(QString strDrug READ strDrug WRITE setStrDrug  FINAL)
    Q_PROPERTY(QString strMethodStep READ strMethodStep WRITE setStrMethodStep  FINAL)
    Q_PROPERTY(QString strAttention READ strAttention WRITE setStrAttention  FINAL)

};




#endif // CBASICEXPERIMENTINFO_H

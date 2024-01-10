#include "CBasicExperimentInfo.h"


CBasicExperimentInfo::CBasicExperimentInfo()
{
    m_strVersion="1.0.0.1";
}



QString CBasicExperimentInfo::strAttention() const
{
    return m_strAttention;
}

void CBasicExperimentInfo::setStrAttention(const QString &newStrAttention)
{
    if (m_strAttention == newStrAttention)
        return;
    m_strAttention = newStrAttention;

}

QString CBasicExperimentInfo::strMethodStep() const
{
    return m_strMethodStep;
}

void CBasicExperimentInfo::setStrMethodStep(const QString &newStrMethod_Step)
{
    if (m_strMethodStep == newStrMethod_Step)
        return;
    m_strMethodStep = newStrMethod_Step;

}

QString CBasicExperimentInfo::strDrug() const
{
    return m_strDrug;
}

void CBasicExperimentInfo::setStrDrug(const QString &newStrDrug)
{
    if (m_strDrug == newStrDrug)
        return;
    m_strDrug = newStrDrug;

}

QString CBasicExperimentInfo::strEquipment() const
{
    return m_strEquipment;
}

void CBasicExperimentInfo::setStrEquipment(const QString &newStrEquipment)
{
    if (m_strEquipment == newStrEquipment)
        return;
    m_strEquipment = newStrEquipment;

}

QString CBasicExperimentInfo::strAnimal() const
{
    return m_strAnimal;
}

void CBasicExperimentInfo::setStrAnimal(const QString &newStrAnimal)
{
    if (m_strAnimal == newStrAnimal)
        return;
    m_strAnimal = newStrAnimal;

}

QString CBasicExperimentInfo::strPrinciple() const
{
    return m_strPrinciple;
}

void CBasicExperimentInfo::setStrPrinciple(const QString &newStrPrinciple)
{
    if (m_strPrinciple == newStrPrinciple)
        return;
    m_strPrinciple = newStrPrinciple;

}

QString CBasicExperimentInfo::strPurpose() const
{
    return m_strPurpose;
}

void CBasicExperimentInfo::setStrPurpose(const QString &newStrPurpose)
{
    if (m_strPurpose == newStrPurpose)
        return;
    m_strPurpose = newStrPurpose;

}

QString CBasicExperimentInfo::strName() const
{
    return m_strName;
}

void CBasicExperimentInfo::setStrName(const QString &newStrName)
{
    if (m_strName == newStrName)
        return;
    m_strName = newStrName;

}

short CBasicExperimentInfo::shModelNo() const
{
    return m_shModelNo;
}

void CBasicExperimentInfo::setShModelNo(short newShModelNo)
{
    if (m_shModelNo == newShModelNo)
        return;
    m_shModelNo = newShModelNo;

}

QString CBasicExperimentInfo::getVersion()
{
    return m_strVersion;
}
QString CBasicExperimentInfo::toString()
{
    return QString();
}




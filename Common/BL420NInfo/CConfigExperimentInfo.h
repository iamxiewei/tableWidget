#ifndef CCONFIGEXPERIMENTINFO_H
#define CCONFIGEXPERIMENTINFO_H


#include "CInfo.h"
#include"../Common_global.h"


class COMMON_EXPORT CConfigExperimentInfo:public CInfo
{
    Q_OBJECT
public:
    CConfigExperimentInfo();
private:
    long									m_lExpModelNo;					///	实验模块号
    short									m_shLogicChaNum;				///	逻辑通道数（编号从0开始）
    short									m_shAvailableChaNum;			/// 配置文件可用的通道总数，因为同一个实验同一个逻辑通道上会出现使用不同传感器的情况
    short									m_shSampleMode;					/// 采样模式：连续采样，触发模式采样
    short									m_shTriggerSampleLength;		/// 触发采样点数
    bool									m_bUseStimulateFlag;			/// 是否使用刺激器
    short									m_shStimulateType;				///	刺激器配置项信息：基本刺激，普通程控，高级程控
    bool									m_bSWProgramControl;			/// 是否进行软件程控采样
    QString									m_strExpName;					///	实验名称
    QString                                 m_pStrExpLabelArray;				/// 实验标签

public:

    QString getVersion() = 0;
    QString toString() = 0;


    long lExpModelNo() const;
    void setLExpModelNo(long newLExpModelNo);

    short shLogicChaNum() const;
    void setShLogicChaNum(short newShLogicChaNum);

    short shAvailableChaNum() const;
    void setShAvailableChaNum(short newShAvailableChaNum);

    short shSampleMode() const;
    void setShSampleMode(short newShSampleMode);

    short shTriggerSampleLength() const;
    void setShTriggerSampleLength(short newShTriggerSampleLength);

    bool bUseStimulateFlag() const;
    void setBUseStimulateFlag(bool newBUseStimulateFlag);

    short shStimulateType() const;
    void setShStimulateType(short newShStimulateType);

    bool bSWProgramControl() const;
    void setBSWProgramControl(bool newBSWProgramControl);

    QString strExpName() const;
    void setStrExpName(const QString &newStrExpName);

    QString pStrExpLabelArray() const;
    void setPStrExpLabelArray(const QString &newPStrExpLabelArray);




public:
    Q_PROPERTY(long lExpModelNo READ lExpModelNo WRITE setLExpModelNo  FINAL)
    Q_PROPERTY(short shLogicChaNum READ shLogicChaNum WRITE setShLogicChaNum  FINAL)
    Q_PROPERTY(short shAvailableChaNum READ shAvailableChaNum WRITE setShAvailableChaNum  FINAL)
    Q_PROPERTY(short shSampleMode READ shSampleMode WRITE setShSampleMode  FINAL)
    Q_PROPERTY(short shTriggerSampleLength READ shTriggerSampleLength WRITE setShTriggerSampleLength  FINAL)
    Q_PROPERTY(bool bUseStimulateFlag READ bUseStimulateFlag WRITE setBUseStimulateFlag  FINAL)
    Q_PROPERTY(short shStimulateType READ shStimulateType WRITE setShStimulateType  FINAL)
    Q_PROPERTY(bool bSWProgramControl READ bSWProgramControl WRITE setBSWProgramControl  FINAL)
    Q_PROPERTY(QString strExpName READ strExpName WRITE setStrExpName  FINAL)
    Q_PROPERTY(QString pStrExpLabelArray READ pStrExpLabelArray WRITE setPStrExpLabelArray FINAL)


};


#endif // CCONFIGEXPERIMENTINFO_H

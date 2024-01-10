#ifndef CBASICGENERALEXPERIMENTPARAMTER_H
#define CBASICGENERALEXPERIMENTPARAMTER_H

#include "CInfo.h"
#include"../Common_global.h"

class COMMON_EXPORT CBasicGeneralExperimentParamter:public CInfo
{
    Q_OBJECT
public:
    CBasicGeneralExperimentParamter();

    short shModelNo() const;
    void setShModelNo(short newShModelNo);

    QString getVersion();
    QString toString();

    short shWorkMode() const;
    void setShWorkMode(short newShWorkMode);

    short shDeviceClusterNumber() const;
    void setShDeviceClusterNumber(short newShDeviceClusterNumber);

    short shTriggerFrameLength() const;
    void setShTriggerFrameLength(short newShTriggerFrameLength);

    short shTotalLogicalChaNum() const;
    void setShTotalLogicalChaNum(short newShTotalLogicalChaNum);

    short shTotalAnalysisChaNum() const;
    void setShTotalAnalysisChaNum(short newShTotalAnalysisChaNum);

    short shLableGroupNo() const;
    void setShLableGroupNo(short newShLableGroupNo);

    short shMaintain() const;
    void setShMaintain(short newShMaintain);

    QString szExperimentalTitle() const;
    void setSzExperimentalTitle(const QString &newSzExperimentalTitle);




private:
    short		m_shModelNo;						/// 模块编号，如果不是模块填入-1
    short		m_shWorkMode;					/// 工作模式：正常、刺激触发或程控
    short		m_shDeviceClusterNumber;		/// 当前设备级联数
    short		m_shTriggerFrameLength;			/// 刺激触发采样方式下的触发帧长度
    short		m_shTotalLogicalChaNum;		/// 所有逻辑采样通道总数
    short		m_shTotalAnalysisChaNum;		/// 所有分析通道总数，默认为0
    short		m_shLableGroupNo;				/// 实验标记组号，默认为0
    short		m_shMaintain;						/// 预留字节
    QString		m_szExperimentalTitle;           /// 实验标题


public:
    Q_PROPERTY(short shModelNo READ shModelNo WRITE setShModelNo  FINAL)
    Q_PROPERTY(short shWorkMode READ shWorkMode WRITE setShWorkMode  FINAL)
    Q_PROPERTY(short shDeviceClusterNumber READ shDeviceClusterNumber WRITE setShDeviceClusterNumber  FINAL)
    Q_PROPERTY(short shTriggerFrameLength READ shTriggerFrameLength WRITE setShTriggerFrameLength  FINAL)
    Q_PROPERTY(short shTotalLogicalChaNum READ shTotalLogicalChaNum WRITE setShTotalLogicalChaNum  FINAL)
    Q_PROPERTY(short shTotalAnalysisChaNum READ shTotalAnalysisChaNum WRITE setShTotalAnalysisChaNum  FINAL)
    Q_PROPERTY(short shLableGroupNo READ shLableGroupNo WRITE setShLableGroupNo  FINAL)
    Q_PROPERTY(short shMaintain READ shMaintain WRITE setShMaintain  FINAL)
    Q_PROPERTY(QString szExperimentalTitle READ szExperimentalTitle WRITE setSzExperimentalTitle  FINAL)
};


#endif // CBASICGENERALEXPERIMENTPARAMTER_H

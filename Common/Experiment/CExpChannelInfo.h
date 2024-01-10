#ifndef CEXPCHANNELINFO_H
#define CEXPCHANNELINFO_H

#include "../CInfo.h"

namespace Experiment
{
    class COMMON_EXPORT CExpChannelInfo : public CInfo
    {
        Q_PROPERTY(short shDeviceNO READ getDeviceNO WRITE setDeviceNO FINAL)
        Q_PROPERTY(bool b50HzNOtch READ get50HzNotch WRITE set50HzNotch FINAL)
        Q_PROPERTY(short shExpModelNO READ getExpModelNO WRITE setExpModelNO FINAL)
        Q_PROPERTY(short shLogicalChaNO READ getLogicalChaNO WRITE setLogicalChaNO FINAL)
        Q_PROPERTY(bool bDiffDispRange READ bDiffDispRange WRITE setDiffDispRange FINAL)
        Q_PROPERTY(short shPhysicalChaNO READ getPhysicalChaNO WRITE setPhysicalChaNO FINAL)
        Q_PROPERTY(short shDisplayChaNO READ getDisplayChaNO WRITE setDisplayChaNO FINAL)
        Q_PROPERTY(float fSampleRate READ getSampleRate WRITE setSampleRate FINAL)
        Q_PROPERTY(float fHighRange READ getHighRange WRITE setHighRange FINAL)
        Q_PROPERTY(float fLowRange READ getLowRange WRITE setLowRange FINAL)
        Q_PROPERTY(float fMinDispRange READ getMinDispRange WRITE setMinDispRange FINAL)
        Q_PROPERTY(float fMaxDispRange READ getMaxDispRange WRITE setMaxDispRange FINAL)
        Q_PROPERTY(float fHighPass READ getHighPass WRITE setHighPass FINAL)
        Q_PROPERTY(float fLowPass READ getLowPass WRITE setLowPass FINAL)
        Q_PROPERTY(float fSpeed READ getSpeed WRITE setSpeed FINAL)
        Q_PROPERTY(QString strExpName READ getExpName WRITE setExpName FINAL)
        Q_PROPERTY(QString strSensorName READ getSensorName WRITE setSensorName FINAL)
        Q_PROPERTY(QString strSignalType READ getSignalType WRITE setSignalType FINAL)
        Q_PROPERTY(QString strSignalLabel READ getSignalLabel WRITE setSignalLabel FINAL)

    public:
        CExpChannelInfo();

        // CInfo interface
    public:
        QString getVersion();
        QString toString();

        short getDeviceNO();
        void setDeviceNO(short shDeviceNO);

        bool getDiffDispRange();
        void setDiffDispRange(bool bDifferent);

        bool get50HzNotch();
        void set50HzNotch(bool b50HzNotch);


        short getExpModelNO();
        void setExpModelNO(short shExpModelNO);

        short getPhysicalChaNO();
        void setPhysicalChaNO(short newPhysicalChaNO);

        short getLogicalChaNO();
        void setLogicalChaNO(short shLogicalChaNO);

        short getDisplayChaNO();
        void setDisplayChaNO(short shDisplayChaNO);

        float getSampleRate();
        void setSampleRate(float fSampleRate);

        float getHighRange();
        void setHighRange(float fHighRange);

        float getLowRange();
        void setLowRange(float fLowRange);

        float getMinDispRange();
        void setMinDispRange(float fMinDispRange);

        float getMaxDispRange();
        void setMaxDispRange(float fMaxDispRange);

        float getHighPass();
        void setHighPass(float fHighPass);

        float getLowPass();
        void setLowPass(float fLowPass);

        float getSpeed();
        void setSpeed(float fSpeed);

        QString getExpName();
        void setExpName(QString &strExpName);

        QString getSensorName();
        void setSensorName(QString &strSensorName);

        QString getSignalType();
        void setSignalType(QString &strSignalType);

        QString getSignalLabel();
        void setSignalLabel(QString &strSignalLabel);

    private:
        short		m_shDeviceNO;							/// 设备号
        bool		m_bDiffDispRange;						/// 是否使用不同显示范围值，否则与范围高值和范围低值一致
        bool		m_b50HzNotch;							/// 50Hz滤波
        short		m_shExpModelNO;							/// 实验模块号
        short		m_shPhysicalChaNO;						/// 物理通道号
        short		m_shLogicalChaNO;						/// 逻辑通道号
        short		m_shDisplayChaNO;						/// 显示通道号
        float		m_fSampleRate;							/// 采样率
        float		m_fHighRange;							/// 范围高值
        float		m_fLowRange;							/// 范围低值
        float		m_fMinDispRange;						/// 显示范围低值
        float		m_fMaxDispRange;						/// 显示范围高值
        float		m_fHighPass;							/// 高通
        float		m_fLowPass;								/// 低通
        float		m_fSpeed;								/// 扫描速度
        QString		m_strExpName;							/// 实验名称
        QString		m_strSensorName;						/// 传感器名称
        QString		m_strSignalType;						/// 信号类型
        QString		m_strSignalLabel;						/// 信号标签


    };
}
#endif // CEXPCHANNELINFO_H

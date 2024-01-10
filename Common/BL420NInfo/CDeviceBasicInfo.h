#ifndef CDEVICEBASICINFO_H
#define CDEVICEBASICINFO_H



#include "CInfo.h"
#include"../Common_global.h"


class COMMON_EXPORT CDeviceBasicInfo:public CInfo
{
    Q_OBJECT

private:
    QString		m_strDeviceType;                    /// 设备型号，包括：BL-420N，BL-820N，BL-1620N等
    QString		m_strConfigType;                    /// 设备配置类型，包括：Student，Teacher，Researcher
    short		m_shChaNumber;						/// 设备支持的通道数
    short		m_shMainVersion;					/// 设备内置软件的主版本号
    short		m_shMinorVersion;					/// 设备内置软件的次版本号
    short		m_shProductYear;					/// 生产年
    short		m_shProductMonth;					/// 生产月
    short		m_shProductDay;						/// 生产日
    short		m_shProductBatch;					/// 生产批次
    short		m_shExtendInfoLength;				/// 设备扩展信息长度，跟在基本信息后
    QString		m_strSeriesNo;                      /// 16位序列号
    QString		m_strManufacture;                     /// 制造商名称，如：成都泰盟科技有限公司
    short		m_shOffsetDACBits;                   /// 设备生产上的不同，以一个字节表示生产时选用的DAC实际位数，
        ///	该值在OFFSET_DAC_BITS_MIN和OFFSET_DAC_BITS_MAX之间认为合理，默认等于12位
    short     m_shBuildVersion;      ///编译版本号
    //#warning "no commit by huang wu"  //没有经黄老师同决改进
    short     m_shHardwareVersion;    ///硬件版本号,主要指电路板的版本号=0,420N的初始版本,1:420H的初始版本.
    // 2022/7/13 启用2个S16－BY JEUZMING
    short     m_shTinyVoltZeroCompensateValue;//存储细电压零位补偿值
    short     m_shTinyCurrentZeroCompensateVale;//存储细电流零电位补偿值
    // 2022/7/13------------------------
    QString		m_strMaintain;	/// 保留值，共22字节，必须填为0



public:
    Q_PROPERTY(QString strDeviceType READ strDeviceType WRITE setStrDeviceType  FINAL)

    Q_PROPERTY(QString strConfigType READ strConfigType WRITE setStrConfigType  FINAL)

    Q_PROPERTY(short shChaNumber READ shChaNumber WRITE setShChaNumber  FINAL)

    Q_PROPERTY(short shMainVersion READ shMainVersion WRITE setShMainVersion  FINAL)

    Q_PROPERTY(short shMinorVersion READ shMinorVersion WRITE setShMinorVersion  FINAL)

    Q_PROPERTY(short shProductYear READ shProductYear WRITE setShProductYear  FINAL)

    Q_PROPERTY(short shProductMonth READ shProductMonth WRITE setShProductMonth  FINAL)

    Q_PROPERTY(short shProductDay READ shProductDay WRITE setShProductDay  FINAL)

    Q_PROPERTY(short shProductBatch READ shProductBatch WRITE setShProductBatch  FINAL)

    Q_PROPERTY(short shExtendInfoLength READ shExtendInfoLength WRITE setShExtendInfoLength FINAL)

    Q_PROPERTY(QString strSeriesNo READ strSeriesNo WRITE setStrSeriesNo  FINAL)

    Q_PROPERTY(QString strManufacture READ strManufacture WRITE setStrManufacture  FINAL)

    Q_PROPERTY(short shOffsetDACBits READ shOffsetDACBits WRITE setShOffsetDACBits  FINAL)

    Q_PROPERTY(short shBuildVersion READ shBuildVersion WRITE setShBuildVersion  FINAL)

    Q_PROPERTY(short shHardwareVersion READ shHardwareVersion WRITE setShHardwareVersion  FINAL)

    Q_PROPERTY(short shTinyVoltZeroCompensateValue READ shTinyVoltZeroCompensateValue WRITE setShTinyVoltZeroCompensateValue  FINAL)

    Q_PROPERTY(short shTinyCurrentZeroCompensateVale READ shTinyCurrentZeroCompensateVale WRITE setShTinyCurrentZeroCompensateVale  FINAL)

    Q_PROPERTY(QString strMaintain READ strMaintain WRITE setStrMaintain  FINAL)



public:
    CDeviceBasicInfo();

    QString getVersion() = 0;
    QString toString() = 0;

    QString strDeviceType() const;
    void setStrDeviceType(const QString &newStrDeviceType);
    QString strConfigType() const;
    void setStrConfigType(const QString &newStrConfigType);

    short shChaNumber() const;
    void setShChaNumber(short newShChaNumber);

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

    short shExtendInfoLength() const;
    void setShExtendInfoLength(short newShExtendInfoLength);

    QString strSeriesNo() const;
    void setStrSeriesNo(const QString &newStrSeriesNo);

    QString strManufacture() const;
    void setStrManufacture(const QString &newStrManufacture);

    short shOffsetDACBits() const;
    void setShOffsetDACBits(short newShOffsetDACBits);

    short shBuildVersion() const;
    void setShBuildVersion(short newShBuildVersion);

    short shHardwareVersion() const;
    void setShHardwareVersion(short newShHardwareVersion);

    short shTinyVoltZeroCompensateValue() const;
    void setShTinyVoltZeroCompensateValue(short newShTinyVoltZeroCompensateValue);

    short shTinyCurrentZeroCompensateVale() const;
    void setShTinyCurrentZeroCompensateVale(short newShTinyCurrentZeroCompensateVale);

    QString strMaintain() const;
    void setStrMaintain(const QString &newStrMaintain);




};




#endif // CDEVICEBASICINFO_H

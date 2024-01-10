#ifndef CCOMPUTERINFO_H
#define CCOMPUTERINFO_H

#include<QMetaProperty>
#include"CInfo.h"
#include"../Common_global.h"


class COMMON_EXPORT CComputerInfo:public CInfo
{
    Q_OBJECT
public:
    CComputerInfo();
private:
    short		m_shOSBits;						/// 操作系统位数，比如：32位，64位等
    short		m_shOSVersion;					/// 操作系统版本号，比如：10
    long		m_lMemorySize;					/// 内存大小，单位：M unsigned chars
    long		m_lDiskSize;						/// 硬盘大小，单位：M unsigned chars
    long		m_lAvailableDiskSize;			/// 可用硬盘大小，单位：M unsigned chars
    QString		m_strOSName;                  /// 操作系统名字，比如：“Windows”
    QString			m_strCPUName;                 /// CPU名字，比如：“Intel(R) Core(TM) i3-3240”
    QString			m_strComputerName;             /// 计算机名字，比如“admin_PC”
    QString			m_strComputerMODEL;            /// 计算机型号，比如“Lenovo Windows7 PC”
    QString			m_strComputerManufacture;         /// 计算机制造商名字，比如“Lenovo



public:

    QString getVersion();
    QString toString();

    short shOSBits() const;
    void setShOSBits(short newShOSBits);
    short shOSVersion() const;
    void setShOSVersion(short newShOSVersion);

    long lMemorySize() const;
    void setLMemorySize(long newLMemorySize);

    long lDiskSize() const;
    void setLDiskSize(long newLDiskSize);

    long lAvailableDiskSize() const;
    void setLAvailableDiskSize(long newLAvailableDiskSize);

    QString strOSName() const;
    void setStrOSName(const QString &newStrOSName);

    QString strCPUName() const;
    void setStrCPUName(const QString &newStrCPUName);

    QString strComputerName() const;
    void setStrComputerName(const QString &newStrComputerName);

    QString strComputerMODEL() const;
    void setStrComputerMODEL(const QString &newStrComputerMODEL);

    QString strComputerManufacture() const;
    void setStrComputerManufacture(const QString &newStrComputerManufacture);




public:
    Q_PROPERTY(short shOSBits READ shOSBits WRITE setShOSBits  FINAL)
    Q_PROPERTY(short shOSVersion READ shOSVersion WRITE setShOSVersion  FINAL)
    Q_PROPERTY(long lMemorySize READ lMemorySize WRITE setLMemorySize  FINAL)
    Q_PROPERTY(long lDiskSize READ lDiskSize WRITE setLDiskSize  FINAL)
    Q_PROPERTY(long lAvailableDiskSize READ lAvailableDiskSize WRITE setLAvailableDiskSize  FINAL)
    Q_PROPERTY(QString strOSName READ strOSName WRITE setStrOSName  FINAL)
    Q_PROPERTY(QString strCPUName READ strCPUName WRITE setStrCPUName  FINAL)
    Q_PROPERTY(QString strComputerName READ strComputerName WRITE setStrComputerName  FINAL)
    Q_PROPERTY(QString strComputerMODEL READ strComputerMODEL WRITE setStrComputerMODEL  FINAL)
    Q_PROPERTY(QString strComputerManufacture READ strComputerManufacture WRITE setStrComputerManufacture  FINAL)

};




#endif // CCOMPUTERINFO_H

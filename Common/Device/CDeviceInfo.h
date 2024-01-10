#ifndef CDEVICEINFO_H
#define CDEVICEINFO_H

#include "../CInfo.h"

class CDeviceInfo : public CInfo
{
public:
    CDeviceInfo();

    // CInfo interface
public:
    QString getVersion();
    QString toString();
};

#endif // CDEVICEINFO_H

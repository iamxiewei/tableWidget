#ifndef CINFO_H
#define CINFO_H

#include <QObject>

#include "../Common_global.h"

namespace Experiment
{

class COMMON_EXPORT CInfo : public QObject
{
    Q_OBJECT

public:
    explicit CInfo();

    virtual QString getVersion() = 0;
    virtual QString toString() = 0;

protected:
    QString m_strVersion{"1.0.0.1"};

};

}
#endif // CINFO_H

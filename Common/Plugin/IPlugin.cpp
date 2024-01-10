#include "IPlugin.h"

// Constructors/Destructors
//
namespace Plugin
{

    IPlugin::~IPlugin()
    {
    }

    QString IPlugin::getVersion()
    {
        return m_strVersion;
    }

    QString IPlugin::getDescription()
    {
        return m_strDescription;
    }

    QString IPlugin::getManufacturer()
    {
        return m_strManufacturer;
    }

    QString IPlugin::getDeliverDate()
    {
        return m_strDeliverDate;
    }

    void IPlugin::setUUID(QString value)
    {
        m_strUUID = value;
    }

    QString IPlugin::getUUID()
    {
        return m_strUUID;
    }

    void IPlugin::setVersion(QString value)
    {
        m_strVersion = value;
    }

    void IPlugin::setDescription(QString value)
    {
        m_strDescription = value;
    }

    void IPlugin::setManufacturer(QString value)
    {
        m_strManufacturer = value;
    }

    void IPlugin::setDeliverDate(QString value)
    {
        m_strDeliverDate = value;
    }
}


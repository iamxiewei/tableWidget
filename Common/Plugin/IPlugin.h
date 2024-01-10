#ifndef IPLUGIN_H
#define IPLUGIN_H

#include <QVector>
#include <QWidget>
#include <QString>
#include <QVector>

#include "CComponent.h"

namespace Plugin
{

    /******************************************
     * \class 	IPlugin
     *
     * \brief	插件接口，如果要导出为插件的库，需要继承该接口
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT IPlugin : public QObject
    {
        Q_OBJECT

    public:

        virtual ~IPlugin();

        /***************************************
         * \brief	注册新的组件
         * \param
         * \return 	是否成功注册
         ***************************************/
        virtual bool registerComponentInfo() = 0;


        /***************************************
         * \brief	插件版本号，如：1.0.0.1
         * \param
         *
         * \return	QString
         ***************************************/
        virtual QString getVersion();

        /***************************************
         * \brief	插件描述
         * \param
         *
         * \return	QString
         ***************************************/
        virtual QString getDescription();

        /***************************************
         * \brief	出厂信息
         * \param
         *
         * \return	QString
         ***************************************/
        virtual QString getManufacturer();

        /***************************************
         * \brief	发布日期
         * \param
         *
         * \return	QString
         ***************************************/
        virtual QString getDeliverDate();

        /***************************************
         * \brief	设置程序状态栏
         * \param
         *
         * \return	void
         ***************************************/
        QString getUUID();

    protected:
        /***************************************
         * \brief	设置UUID
         * \param	QString
         *
         * \return	void
         ***************************************/
        void setUUID(QString value);


        /***************************************
         * \brief	设置插件版本号
         * \param	QString
         *
         * \return	void
         ***************************************/
        void setVersion(QString value);

        /***************************************
         * \brief	设置插件描述信息
         * \param	QString
         *
         * \return	void
         ***************************************/
        void setDescription(QString value);

        /***************************************
         * \brief	设置插件出厂信息
         * \param	QString
         *
         * \return	void
         ***************************************/
        void setManufacturer(QString value);

        /***************************************
         * \brief	设置插件发布日期
         * \param	QString
         *
         * \return	void
         ***************************************/
        void setDeliverDate(QString value);

    protected:

        QString m_strUUID;
        QString m_strVersion;
        QString m_strDescription;
        QString m_strManufacturer;
        QString m_strDeliverDate;
    };
}
#endif // IPLUGIN_H

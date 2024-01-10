#ifndef CCOMPONENTBUITDER_H
#define CCOMPONENTBUITDER_H

#include <QHash>
#include <QMap>
#include <QString>
#include <QVector>
#include <QWidget>

#include "CComponent.h"

namespace Plugin
{

    /******************************************
     * \class 	CComponentBuilder
     *
     * \brief	注册需要导出的组件，让系统对组件的功能可以进行连接
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT CComponentBuilder
    {
        typedef CComponent* (*Constructor)(CComponentInfo& info, QWidget* parent);

    public:

        /***************************************
         * \brief	注册组件类
         * \param	QString qrcImg 缩略图资源路径，比如：“：Image/set.png”
         *			Category category 组件类别
         *			Format format 组件格式，比如Logic或UI
         *			UiType type 如果是UI组件，表示UI组件类型
         * \return
         ***************************************/
        template<typename T>
        static bool registerClass(QString qrcImg, CComponentInfo::Category category, CComponentInfo::Format format, CComponentInfo::UiType type = CComponentInfo::UnkownItem)
        {
            bool bSuccess = false;

            QString strClassName(T::staticMetaObject.className());

            if(!strClassName.isEmpty())
            {
                //&constructorHelper<T>其实是获取创建的函数指针,核心功能。
                constructors().insert(strClassName, &constructorHelper<T>);

                CComponentInfo info(strClassName, qrcImg, category, format, type);
                m_allComponentInfo.insert(strClassName, info);

                bSuccess = true;
            }

            return bSuccess;
        }

        /***************************************
         * \brief	创建组件对象
         *
         * \param	const QString& className, 组件类名称
         *			QWidget* parent = nullptr 组件父对象
         *
         * \return 	CComponent* 创建成功的组件对象
         ***************************************/
        static CComponent* createObject(const QString& className, QWidget* parent = nullptr);

        /***************************************
         * \brief	获取注册的全部组件
         * \param
         * \return	QVector<CComponentInfo>
         ***************************************/
        static QVector<CComponentInfo> allComponentInfo();

    private:

        static QHash<QString, Constructor>& constructors();

        template<typename T>
        static CComponent* constructorHelper(CComponentInfo& info, QWidget* parent = nullptr)
        {
            if (parent)
            {
                return new T(info, parent);
            }
            else
            {
                return new T(info);
            }
        }

        static QHash<QString, CComponentInfo> m_allComponentInfo;
    };
}

#endif // CCOMPONENTBUITDER_H

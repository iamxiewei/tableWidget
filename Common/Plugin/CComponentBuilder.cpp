#include "CComponentBuilder.h"

namespace Plugin
{
    QHash<QString, CComponentInfo> CComponentBuilder::m_allComponentInfo;

    /*********************************************************
     * \brief	根据组件名称，创建组件对象
     *
     * \param[in]	const QString& className, 组件类名称
     *				QWidget* parent，父对象
     *
     * \param[out]
     *
     * \return  CComponent* 组件对象
     * \throws
     * \author	zhy
     * \date	2023/12/19
     * \modify
     *
     *********************************************************/
    CComponent* CComponentBuilder::createObject(const QString& className, QWidget* parent)
    {
        CComponentInfo info = m_allComponentInfo.value(className);

        Constructor constructor = constructors().value(className);
        if (constructor == nullptr)
        {
            return nullptr;
        }

        //执行new T函数，创建对应实例
        CComponent* pComponent = (*constructor)(info, parent);
        if (pComponent != nullptr)
        {
            return pComponent;
        }

        return nullptr;
    }

    QHash<QString, CComponentBuilder::Constructor>& CComponentBuilder::constructors()
    {
        static QHash<QString, Constructor> instance;

        return instance;
    }

    QVector<CComponentInfo> CComponentBuilder::allComponentInfo()
    {
        QVector<CComponentInfo> allComponentInfo;

        for (auto it = m_allComponentInfo.begin(); it != m_allComponentInfo.end(); it++)
        {
            allComponentInfo.push_back(it.value());
        }
        return allComponentInfo;
    }
}

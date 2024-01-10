#ifndef CUICOMPONENT_H
#define CUICOMPONENT_H

#include "CComponent.h"

namespace Plugin
{
    /******************************************
     * \class 	CUiComponent
     *
     * \brief	UI组件，继承该组件的子类必须有对
                应的布局控件，在编辑模式下会让整
                个控件缩小Pin控件的宽度工作模式下
                会自动还原缩小的宽度。在子类的构
                造函数中需要调用一下函数：

                discoverAllPins()自动发现输入和输出接口；

                initAttributes()初始化

                relayoutPins();
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT CUiComponent : public CComponent
    {
        Q_OBJECT

            Q_PROPERTY(QColor borderColor READ borderColor WRITE setBorderColor RESET resetBorderColor FINAL)
            Q_PROPERTY(QPainterPath borderPath READ borderPath WRITE setBorderPath RESET resetBorderPath FINAL)

    public:
        explicit CUiComponent(CComponentInfo& info, QWidget* pParent = nullptr);
        virtual ~CUiComponent();

        /***************************************
         * \brief	获取UI组件的边框颜色
         * \param
         * \return	QColor
         ***************************************/
        QColor borderColor() const;

        /***************************************
         * \brief	设置UI组件的边框颜色，UI组件
                    的边框是重绘效果
         * \param	const QColor& newBorderColor
         * \return	void
         ***************************************/
        void setBorderColor(const QColor& newBorderColor);

        /***************************************
         * \brief	重置边框颜色
         * \param
         * \return
         ***************************************/
        void resetBorderColor();

        /***************************************
         * \brief	获取UI组件的边框路径
         * \param
         * \return 	QPainterPath
         ***************************************/
        QPainterPath borderPath() const;

        /***************************************
         * \brief	设置新的UI组件边框绘制路径
         * \param	QPainterPath newBorderPath
         * \return 	void
         ***************************************/
        void setBorderPath(QPainterPath newBorderPath);

        /***************************************
         * \brief	重置UI组件的边框，默认为圆角
                    矩形，弧度为6
         * \param
         * \return
         ***************************************/
        void resetBorderPath();

        // CComponent interface
    protected:
        void initAttributes();

    protected:
        void paintEvent(QPaintEvent* event);

    private:
        //边框颜色
        QColor m_borderColor;
        //边框绘制路径
        QPainterPath m_borderPath;
    };
}

#endif // CUICOMPONENT_H

#include "CUiComponent.h"

namespace Plugin
{
    CUiComponent::CUiComponent(CComponentInfo& info, QWidget* pParent) :
        CComponent(info, pParent)
    {
    }

    Plugin::CUiComponent::~CUiComponent()
    {
    }

    /*********************************************************
     * \brief	paintEvent
     *			QWidget的重绘实现，在UI组件中主要是绘制边框
     *			组件父类会自动将组件界面上的全部控件缩小Pin
     *			控件的宽度后绘制该边框。
     *
     * \param[in]
     *			QPaintEvent* event
     *
     * \param[out]
     *
     * \return
     * \throws
     * \author	zhy
     * \date	2023/12/19
     * \modify
     *
     *********************************************************/
    void Plugin::CUiComponent::paintEvent(QPaintEvent* event)
    {
        if (m_mode == SystemConstant::EditMode)
        {
            QPainter painter(this);

            painter.setRenderHint(QPainter::Antialiasing);
            painter.setPen(m_borderColor);
            painter.drawPath(m_borderPath);
        }

        QWidget::paintEvent(event);
    }

    QPainterPath CUiComponent::borderPath() const
    {
        return m_borderPath;
    }

    void CUiComponent::setBorderPath(QPainterPath newBorderPath)
    {
        if (m_borderPath == newBorderPath)
        {
            return;
        }

        m_borderPath = newBorderPath;
    }

    void CUiComponent::resetBorderPath()
    {
        m_borderPath.clear();
        m_borderPath.addRoundedRect(m_iPinXMargin, 0, this->width() - m_iPinXMargin * 2, this->height(), 6, 6);
    }

    QColor CUiComponent::borderColor() const
    {
        return m_borderColor;
    }

    void CUiComponent::setBorderColor(const QColor& newBorderColor)
    {
        if (m_borderColor == newBorderColor)
        {
            return;
        }

        m_borderColor = newBorderColor;
    }

    void CUiComponent::resetBorderColor()
    {
        setBorderColor(QColor(0x3B, 0x80, 0xBD));
    }

    /*********************************************************
     * \brief	initAttributes
     *			初始化一些属性,UI组件需要重新设置边框颜色，计算
     *			Pin的宽度
     *
     * \param[in]
     *
     * \param[out]
     *
     * \return
     * \throws
     * \author	zhy
     * \date	2023/12/19
     * \modify
     *
     *********************************************************/
    void CUiComponent::initAttributes()
    {
        //重置边框颜色
        resetBorderColor();
        //重置边框样式
        resetBorderPath();

        //获取初始化时的Margins
        m_oldMargins = this->contentsMargins();

        //计算编辑模式下的Margins
        m_editMargins = QMargins(m_iPinXMargin, 0, m_iPinXMargin, 0);

        //默认为编辑模式
        setSystemMode(SystemConstant::EditMode);
    }
}

#include <QBrush>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMetaMethod>
#include <QMetaObject>
#include <QPalette>
#include <QPushButton>
#include <QLabel>

#include "CComponent.h"
#include "CInputPin.h"
#include "COutputPin.h"

namespace Plugin {

    CComponentInfo::CComponentInfo(QString strComponentName,
        QString strThumbnailImg,
        Category category,
        Format format,
        UiType type /*= UiType::UnkownItem*/)
    {
        m_strComponentName = strComponentName;
        m_strThumbnailImg = strThumbnailImg;

        m_eCategory = category;
        m_eFormat = format;
        m_eUiType = type;
    }

    CComponentInfo::CComponentInfo(const CComponentInfo& info)
    {
        this->m_strComponentName = info.m_strComponentName;
        this->m_strThumbnailImg = info.m_strThumbnailImg;

        this->m_eCategory = info.m_eCategory;
        this->m_eFormat = info.m_eFormat;
        this->m_eUiType = info.m_eUiType;
    }

    QString CComponentInfo::getComponentName() const
    {
        return m_strComponentName;
    }

    QString CComponentInfo::getThumbnailImg() const
    {
        return m_strThumbnailImg;
    }

    CComponentInfo::Format CComponentInfo::eFormat() const
    {
        return m_eFormat;
    }

    CComponentInfo::Category CComponentInfo::eCategory() const
    {
        return m_eCategory;
    }

    CComponentInfo::UiType CComponentInfo::eUiType() const
    {
        return m_eUiType;
    }

    Plugin::CComponentInfo& CComponentInfo::operator=(const CComponentInfo& info)
    {
        this->m_strComponentName = info.m_strComponentName;
        this->m_strThumbnailImg = info.m_strThumbnailImg;

        this->m_eCategory = info.m_eCategory;
        this->m_eFormat = info.m_eFormat;
        this->m_eUiType = info.m_eUiType;

        return *this;
    }

    CComponent::CComponent(CComponentInfo& info, QWidget* pParent) :QWidget(pParent)
    {
        m_info = info;
        this->setMouseTracking(true);
        setAttribute(Qt::WA_StyledBackground, true);
    }

    CComponent::~CComponent()
    {
    }

    CComponentInfo CComponent::getComponentInfo()
    {
        return m_info;
    }

    /*********************************************************
     * \brief	设置组件的工作模式
     *			编辑模式：显示Pin和边框，逻辑组件完全显示
     *			工作模式：显示UI控件，逻辑组件不显示
     *
     * \param[in]  SystemConstant::Mode
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
    void CComponent::setSystemMode(SystemConstant::Mode mode)
    {
        m_mode = mode;

        if (mode == SystemConstant::EditMode)
        {
            this->show();

            setContentsMargins(m_editMargins);

            for (int i = 0; i < m_vInputPins.size(); ++i)
            {
                m_vInputPins.at(i)->show();
            }

            for (int i = 0; i < m_vOutputPins.size(); ++i)
            {
                m_vOutputPins.at(i)->show();
            }
        }
        else
        {
            setContentsMargins(m_oldMargins);

            for (int i = 0; i < m_vInputPins.size(); ++i)
            {
                m_vInputPins.at(i)->hide();
            }

            for (int i = 0; i < m_vOutputPins.size(); ++i)
            {
                m_vOutputPins.at(i)->hide();
            }

            if (m_info.eFormat() == CComponentInfo::Format::Logic)
            {
                this->hide();
            }
        }
    }

    void CComponent::setMainFrame(QWidget* pMainFrame)
    {
        m_pMainFrame = pMainFrame;
    }

    void CComponent::setMainMenu(QWidget* pMenu)
    {
        m_pMenu = pMenu;
    }

    void CComponent::setToolbar(QWidget* pToolbar)
    {
        m_pToolbar = pToolbar;
    }

    void CComponent::setStatusBar(QWidget* pStatusBar)
    {
        m_pStatusbar = pStatusBar;
    }

    QVector<CPin*>& CComponent::getInputPins()
    {
        return m_vInputPins;
    }

    QVector<CPin*>& CComponent::getOutputPins()
    {
        return m_vOutputPins;
    }

    QWidget* CComponent::getSettingWnd()
    {
        return m_pSettingWidget;
    }

    QWidget* CComponent::getDisplayWnd()
    {
        return m_pDisplayWidget;
    }

    CPin* CComponent::getInputPin(int iPinIndex)
    {
        CPin* pin = nullptr;
        for (int i = 0; i < m_vInputPins.size(); ++i)
        {
            if (m_vInputPins[i]->getPinIndex() == iPinIndex)
            {
                pin = m_vInputPins[i];
            }
        }

        return pin;
    }

    CPin* CComponent::getOutputPin(int iPinIndex)
    {
        CPin* pin = nullptr;
        for (int i = 0; i < m_vOutputPins.size(); ++i)
        {
            if (m_vOutputPins[i]->getPinIndex() == iPinIndex)
            {
                pin = m_vOutputPins[i];
            }
        }

        return pin;
    }

    /*********************************************************
     * \brief	自动发现当前组件的全部输入和输出的Pin，并通过
     *			get相关函数获取，默认Qt的信号为输出，槽函数为
     *			输入。
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
    void CComponent::discoverAllPins()
    {
        auto meta = this->metaObject();
        int offset = meta->methodOffset();
        int count = meta->methodCount();

        for (int i = offset; i < count; i++)
        {
            auto method = meta->method(i);

            if (method.methodType() == QMetaMethod::Slot)
            {
                CInputPin* pPin = new CInputPin(this);

                pPin->setPinSignature(method.methodSignature());
                pPin->setPinIndex(i);
                pPin->setParameterCount(method.parameterCount());
                pPin->setReturnType(method.returnType());
                pPin->setPinType(PinType::Input);

                for (int i = 0; i < method.parameterCount(); i++)
                {
                    pPin->setParameterType(i, method.parameterType(i));
                }

                m_vInputPins.push_back(pPin);
            }
            else if (method.methodType() == QMetaMethod::Signal)
            {
                COutputPin* pPin = new COutputPin(this);

                pPin->setPinSignature(method.methodSignature());
                pPin->setPinIndex(i);
                pPin->setParameterCount(method.parameterCount());
                pPin->setReturnType(method.returnType());
                pPin->setPinType(PinType::Output);

                for (int i = 0; i < method.parameterCount(); i++)
                {
                    pPin->setParameterType(i, method.parameterType(i));
                }

                m_vOutputPins.push_back(pPin);
            }
            else
            {
                //TODO:
            }
        }

        //默认情况下认为所有Pin都是一样的尺寸
        if (m_vInputPins.size() > 0)
        {
            m_iPinWidth = m_vInputPins.at(0)->width();

            m_iPinXMargin = m_iPinWidth / 2;
        }
    }

    /*********************************************************
     * \brief	根据Pin的个数自动布局他们的位置，默认为输入在
     *			组件的左侧边缘，输出在组件的右侧边缘
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
    void CComponent::relayoutPins()
    {
        if (m_mode == SystemConstant::WorkMode)
        {
            return;
        }
        else
        {
            if (m_vInputPins.size() > 0)
            {
                int iInputPinYStep = this->height() / (m_vInputPins.size() + 1) - m_iPinWidth / 2;

                for (int i = 0; i < m_vInputPins.size(); ++i)
                {
                    m_vInputPins.at(i)->move(0, (i + 1) * iInputPinYStep);
                    m_vInputPins.at(i)->show();
                }
            }

            if (m_vOutputPins.size() > 0)
            {
                int iOutputPinYStep = this->height() / (m_vOutputPins.size() + 1) - m_iPinWidth / 2;

                for (int i = 0; i < m_vOutputPins.size(); ++i)
                {
                    m_vOutputPins.at(i)->move(this->width() - m_iPinWidth, (i + 1) * iOutputPinYStep);
                }
            }
        }
    }

    // void CComponent::mousePressEvent(QMouseEvent* event)
    // {
    //     if (event->button() == Qt::LeftButton)
    //     {
    //         // 记录鼠标按下时的位置
    //         m_dragStartPos = QCursor::pos();

    //         m_bLeftPressed = true;
    //     }

    //     QWidget::mousePressEvent(event);
    // }

    // void CComponent::mouseReleaseEvent(QMouseEvent* event)
    // {
    //     m_bLeftPressed = false;
    //     QWidget::mouseReleaseEvent(event);
    // }

    // void CComponent::mouseMoveEvent(QMouseEvent* event)
    // {
    //     if (m_bLeftPressed)
    //     {
    //         QPoint newPoint = QCursor::pos();

    //         float xDis = newPoint.x() - m_dragStartPos.x();
    //         float yDis = newPoint.y() - m_dragStartPos.y();

    //         this->move(this->pos().x() + xDis, this->pos().y() + yDis);

    //         m_dragStartPos = QCursor::pos();
    //     }

    //     QWidget::mouseMoveEvent(event);
    // }

}

#include "CLogicComponent.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMetaMethod>
#include <QMetaObject>
#include <QPushButton>
#include <QLabel>
#include <QException>

namespace Plugin
{
    CLogicComponent::CLogicComponent(CComponentInfo& info, QWidget* pParent) :
        CComponent(info, pParent)
    {
        if (info.eFormat() != CComponentInfo::Format::Logic)
        {
            throw QException();
        }

        loadLogicForm();

        initAttributes();
    }

    CLogicComponent::~CLogicComponent()
    {
    }

    /*******************************************
     * \brief loadLogicForm 加载逻辑组件的控件，
     *		  这些控件都是利用css代码调整了风格，
     *		  后期可以全部提取到一个单独文件中。
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
     *******************************************/
    void CLogicComponent::loadLogicForm()
    {
        //设置组件大小，利用css设置的时候出现问题，后续再调查原因
        this->setMinimumHeight(119);
        this->setMinimumWidth(111);
        this->setMaximumHeight(119);
        this->setMaximumWidth(111);

        //主布局
        QVBoxLayout* pMainLayout = new QVBoxLayout(this);
        pMainLayout->setContentsMargins(0, 0, 0, 0);

        //创建一个QFrame绘制圆角矩形边框
        QFrame* pFrame = new QFrame(this);
        pFrame->setStyleSheet("QFrame{"
            "border:1 px bolid #3B80BD;"
            "background-color:#2B4157;"
            "border-radius: 6;"
            "}");

        //设置垂直布局，然后分成3不区域去放置：
        // 设置和显示窗口区
        // 组件名称区
        // 填充区
        QVBoxLayout* pVLayout = new QVBoxLayout();
        pVLayout->setContentsMargins(0, 0, 0, 0);

        //在垂直布局中添加第一个区域的水平布局，添加2个按钮
        QHBoxLayout* pHLayout = new QHBoxLayout();
        pHLayout->addSpacing(2);

        QPushButton* pSetBtn = new QPushButton(this);
        pSetBtn->setStyleSheet("QPushButton"
            "{"
            "max-width: 16 px; "
            "max-height: 16 px;"
            "background-color:#2B4157;"
            "border:0px;"
            "image: url(:/Image/Set.png);"
            "}"
            "QPushButton::hover"
            "{"
            "image: url(:/Image/Set_click.png);"
            "}");

        connect(pSetBtn, &QPushButton::clicked, [this]() {
            if (m_pSettingWidget != nullptr)
            {
                if (m_pSettingWidget->isHidden())
                {
                    m_pSettingWidget->show();
                }
                else
                {
                    m_pSettingWidget->hide();
                }
            }
        });

        QPushButton* pPreviewBtn = new QPushButton(this);
        pPreviewBtn->setStyleSheet("QPushButton"
            "{"
            "max-width: 16 px; "
            "max-height: 16 px;"
            "background-color:#2B4157;"
            "border:0px;"
            "image: url(:/Image/Preview.png);"
            "}"
            "QPushButton::hover"
            "{"
            "image: url(:/Image/Preview_click.png);"
            "}");

        connect(pPreviewBtn, &QPushButton::clicked, [this]() {
            if (m_pDisplayWidget != nullptr)
            {
                if (m_pDisplayWidget->isHidden())
                {
                    m_pDisplayWidget->show();
                }
                else
                {
                    m_pDisplayWidget->hide();
                }
            }
        });

        //水平填充，让2个按钮显示在水平布局的左边
        QSpacerItem* pHSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pHLayout->addSpacerItem(pHSpacer);
        pHLayout->addWidget(pSetBtn, 0, Qt::AlignRight);
        pHLayout->addWidget(pPreviewBtn, 0, Qt::AlignRight);
        pHLayout->setContentsMargins(0, 0, 10, 10);

        //组件名称
        QLabel* pNameLabel = new QLabel(this);
        pNameLabel->setStyleSheet("QLabel"
            "{"
            "font-size: 12px;"
            "font-family: Microsoft YaHei;"
            "font-weight: 400;"
            "color: #FFFFFF;"
            "}");

        //用::分割开发类名，屏蔽命名空间造成显示名称很长
        QStringList strList = m_info.getComponentName().split("::");
        pNameLabel->setText(*(strList.end() - 1));

        pNameLabel->setAlignment(Qt::AlignCenter);

        pVLayout->addLayout(pHLayout);
        pVLayout->addWidget(pNameLabel);

        //最底部的垂直填充
        QSpacerItem* pVSpacer = new QSpacerItem(16, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);
        pVLayout->addItem(pVSpacer);

        //设置3个区域均匀分布
        pVLayout->setStretch(0, 1);
        pVLayout->setStretch(1, 1);
        pVLayout->setStretch(2, 1);

        pFrame->setLayout(pVLayout);
        pMainLayout->addWidget(pFrame);
        this->setLayout(pMainLayout);
    }

    /*******************************************
     * \brief initAttributes()初始化一些属性，逻
     *		  辑组件不需要单独的边框设置，只需要
     *		  计算Margins。
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
     *******************************************/
    void CLogicComponent::initAttributes()
    {
        m_oldMargins = this->contentsMargins();

        m_editMargins = QMargins(m_iPinXMargin, 0, m_iPinXMargin, 0);

        setSystemMode(SystemConstant::EditMode);
    }
}

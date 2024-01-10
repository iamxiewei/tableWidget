#ifndef CCOMPONENT_H
#define CCOMPONENT_H

#include <QMouseEvent>
#include <QPainter>
#include <QPainterPath>
#include <QWidget>

#include "Common_global.h"
#include "Constant/SystemConstant.h"
#include "Plugin/CPin.h"

namespace Plugin
{
    /******************************************
     * \class 	CComponent
     *
     * \brief	组件基本信息类
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT CComponentInfo
    {
    public:

        //定义组件类别，对应用界面上组件仓库窗口中的分类
        enum Category
        {
            Unkown = -1,//默认未知类别
            Container = 0, //容器
            Menu,//菜单
            UITool,//UI工具，含按钮、下拉列表、编辑控件等直接显示的控件
            Wnd,//窗口
            Device,//设备
            Math,//数学工具
            SignalProcessor,//信号处理
            SignalEmulator,//信号发生器
            Analysor,//分析器
        };

        // 定义组件形式
        enum Format
        {
            None = -1,//默认没有任何形式
            Ui = 0, //UI组件，在工作模式和编辑模式下都直接显示UI的控件
            Logic = 1 //逻辑组件，可能包含UI组件，如果有UI则在工作模式下显示，在编辑模式下需要点击才能显示
        };

        //定义Ui组件类型
        enum UiType
        {
            UnkownItem = -1, //默认未知UI组件
            MenuItem = 0,//菜单项控件
            ButtonItem,//按钮控件
            TextItem,//静态文本控件
            ComboBoxItem,//下拉列表控件
            CheckBoxItem,//复选框控件
            EditItem,//编辑框控件
            ImageItem,//图像控件
        };

    public:

        CComponentInfo()
        {
        }

        CComponentInfo(QString strComponentName, \
            QString strThumbnailImg, \
            Category category, \
            Format format, \
            UiType type = UiType::UnkownItem);

        CComponentInfo(const CComponentInfo& info);

        CComponentInfo& operator = (const CComponentInfo& info);

    public:
        /***************************************
         * \brief	获取组件名称
         * \param
         * \return 	QString
         ***************************************/
        QString getComponentName() const;

        /***************************************
         * \brief	获取缩略图
         * \param
         * \return 	QString 缩略图路径
         ***************************************/
        QString getThumbnailImg() const;

        /***************************************
         * \brief	获取组件格式，逻辑或UI组件
         * \param
         * \return 	QString
         ***************************************/
        Format eFormat() const;

        /***************************************
         * \brief	获取组件类别
         * \param
         * \return 	QString
         ***************************************/
        Category eCategory() const;

        /***************************************
         * \brief	获取UI组件的种类
         * \param
         * \return 	QString
         ***************************************/
        UiType eUiType() const;

    private:

        //组件名称
        QString m_strComponentName;

        //缩略图路径
        QString m_strThumbnailImg;

        //标识组件默认情况下是UI还是Logic格式：UI格式就是不显示连接引脚
        enum Format m_eFormat { None };

        //标识组件的类别
        enum Category m_eCategory { Unkown };

        //如果是UI，则标识UI组件的类型
        enum UiType m_eUiType { UnkownItem };
    };

    /******************************************
     * \class 	CComponent
     *
     * \brief	组件抽象类，实现组件一些基本功能
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT CComponent : public QWidget
    {
        Q_OBJECT

    public:
        explicit CComponent(CComponentInfo& info, QWidget* pParent = nullptr);

        /**
        * Empty Destructor
        */
        virtual ~CComponent();

        /***************************************
         * \brief	获取组件基本信息
         * \param
         * \return 	CComponentInfo
         ***************************************/
        CComponentInfo getComponentInfo();

        /***************************************
         * \brief	设置系统的工作模式，如果是工作
                    模式将会隐藏逻辑组件
         * \param
         * \return
         ***************************************/
        virtual void setSystemMode(SystemConstant::Mode mode);

        /***************************************
         * \brief	设置程序主窗口
         * \param
         *
         * \return	void
         ***************************************/
        void setMainFrame(QWidget* pMainFrame);

        /***************************************
         * \brief	设置程序主菜单
         * \param
         *
         * \return	void
         ***************************************/
        void setMainMenu(QWidget* pMenu);

        /***************************************
         * \brief	设置程序主工具栏
         * \param
         *
         * \return	void
         ***************************************/
        void setToolbar(QWidget* pToolbar);

        /***************************************
         * \brief	设置程序状态栏
         * \param
         *
         * \return	void
         ***************************************/
        void setStatusBar(QWidget* pStatusBar);

        /***************************************
         * \brief	获取全部输入型接口
         * \param
         * \return 	QVector<CPin*>&
         ***************************************/
        QVector<CPin*>& getInputPins();

        /***************************************
         * \brief	获取全部输出型接口
         * \param
         * \return 	QVector<CPin*>&
         ***************************************/
        QVector<CPin*>& getOutputPins();

        /***************************************
         * \brief	获取设置窗口
         * \param
         * \return 	QWidget*
         ***************************************/
        QWidget* getSettingWnd();

        /***************************************
         * \brief	获取显示窗口，即工作模式下需要显示的窗口
         * \param
         * \return 	QWidget*
         ***************************************/
        QWidget* getDisplayWnd();

        /***************************************
         * \brief	根据输入接口的序号获取接口信息
         * \param
         * \return 	CPin*
         ***************************************/
        CPin* getInputPin(int iPinIndex);

        /***************************************
         * \brief	根据输出接口的序号获取接口信息
         * \param
         * \return 	CPin*
         ***************************************/
        CPin* getOutputPin(int iPinIndex);

    protected:
        /***************************************
         * \brief	发现全部Pins
         * \param
         * \return 	QString
         ***************************************/
        void discoverAllPins();

        /***************************************
         * \brief	重新布局Pins
         * \param
         * \return 	QString
         ***************************************/
        void relayoutPins();

        /***************************************
         * \brief	不同组件实现初始属性
         * \param
         * \return 	QString
         ***************************************/
        virtual void initAttributes() = 0;

    //     // QWidget interface
    // protected:
    //     void mousePressEvent(QMouseEvent* event);
    //     void mouseReleaseEvent(QMouseEvent* event);
    //     void mouseMoveEvent(QMouseEvent* event);

    protected:

        //系统主窗口
        QWidget* m_pMainFrame{ nullptr };

        //系统主菜单也可以是右键菜单
        QWidget* m_pMenu{ nullptr };

        //系统工具栏
        QWidget* m_pToolbar{ nullptr };

        //系统状态栏
        QWidget* m_pStatusbar{ nullptr };

        //设置窗口
        QWidget* m_pSettingWidget{ nullptr };

        //显示窗口
        QWidget* m_pDisplayWidget{ nullptr };

        //全部输入接口
        QVector<CPin*> m_vInputPins;

        //全部输出接口
        QVector<CPin*> m_vOutputPins;

        //默认的Pin的左布局间隔
        int m_iPinXMargin{ 5 };

        //默认的Pin控件宽度
        int m_iPinWidth{ 10 };

        //原有的布局间隔
        QMargins m_oldMargins;
        //编辑模式下的布局间隔
        QMargins m_editMargins;

        //组件基本信息
        CComponentInfo m_info;

        //组件的工作模式
        SystemConstant::Mode m_mode{ SystemConstant::Mode::EditMode };

    private:

        //是否是鼠标左键按下
        bool m_bLeftPressed{ false };
        // 记录鼠标按下时的位置
        QPoint m_dragStartPos;
    };
}
#endif // CCOMPONENT_H

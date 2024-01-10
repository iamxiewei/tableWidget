#ifndef CLOGICCOMPONENT_H
#define CLOGICCOMPONENT_H

#include "CComponent.h"

namespace Plugin {

    /******************************************
     * \class 	CLogicComponent
     *
     * \brief	逻辑组件，可以通过样式代码改变逻
                辑组件风格，逻辑组件的子类只需要
                实现需要导出的信号与槽函数,实现具
                有功能的显示窗口（Display Widget）
                和设置窗口(Setting Widget)即可。具
                体应用程序中将显示窗口进行布局管理
                起来。
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT CLogicComponent : public CComponent
    {
    public:
        explicit CLogicComponent(CComponentInfo& info, QWidget* pParent = nullptr);
        virtual ~CLogicComponent();

        // CComponent interface
    protected:
        void initAttributes();

    private:
        void loadLogicForm();

    private:
    };
}
#endif // CLOGICCOMPONENT_H

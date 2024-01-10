#ifndef CINPUTPIN_H
#define CINPUTPIN_H

#include "Common_global.h"
#include "CPin.h"

namespace Plugin
{
    /******************************************
     * \class 	CInputPin
     *
     * \brief	输入接口Pin
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT CInputPin : public CPin
    {
    public:
        CInputPin(QWidget* parent = nullptr);

        // CPin interface
    protected:

        /***************************************
         * \brief	设置接口为兼容状态，与选中的
         *			输出匹配，可以连接。
         * \param
         * \return
         ***************************************/
        void setMatchStatus();

        /***************************************
         * \brief	设置接口为默认状态
         * \param
         * \return
         ***************************************/
        void setDefaultStatus();
    };
}
#endif // CINPUTPIN_H

#ifndef CINPUTPIN_H
#define CINPUTPIN_H

#include "Common_global.h"
#include "CPin.h"

namespace Plugin
{
    /******************************************
     * \class 	CInputPin
     *
     * \brief	����ӿ�Pin
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
         * \brief	���ýӿ�Ϊ����״̬����ѡ�е�
         *			���ƥ�䣬�������ӡ�
         * \param
         * \return
         ***************************************/
        void setMatchStatus();

        /***************************************
         * \brief	���ýӿ�ΪĬ��״̬
         * \param
         * \return
         ***************************************/
        void setDefaultStatus();
    };
}
#endif // CINPUTPIN_H

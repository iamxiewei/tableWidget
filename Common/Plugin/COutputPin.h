#ifndef COUTPUTPIN_H
#define COUTPUTPIN_H

#include "Plugin/CPin.h"

namespace Plugin
{
    /******************************************
     * \class 	COutputPin
     *
     * \brief	����͵�Pin�ӿ�
     *
     * \author	zhy
     * \date	2023/12/19
     ******************************************/
    class COMMON_EXPORT COutputPin : public CPin
    {
    public:
        COutputPin(QWidget* parent = nullptr);

        // CPin interface
    protected:
        void setMatchStatus();
        void setDefaultStatus();
    };
}
#endif // COUTPUTPIN_H

#include "CInputPin.h"

namespace Plugin
{
    CInputPin::CInputPin(QWidget* parent) : CPin(parent)
    {
        this->setDefaultStatus();
    }

    void CInputPin::setMatchStatus()
    {
        this->setStyleSheet("QWidget{"
            "background-image: url(\":/Image/Connectable_quan.png\");"
            "}");
    }

    void CInputPin::setDefaultStatus()
    {
        this->setStyleSheet("QWidget{"
            "background-image: url(\":/Image/Input_yuan.png\");"
            "}");

        //this->ensurePolished();
    }
}
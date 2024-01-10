#include "COutputPin.h"

namespace Plugin
{
    COutputPin::COutputPin(QWidget* parent) : CPin(parent)
    {
        this->setDefaultStatus();
    }

    void COutputPin::setMatchStatus()
    {
        this->setStyleSheet("QWidget{"
            "background-image: url(\":/Image/Connectable_quan.png\");"
            "}");
    }

    void COutputPin::setDefaultStatus()
    {
        this->setStyleSheet("QWidget{"
            "background-image: url(\":/Image/Output_yuan.png\");"
            "}");
    }
}
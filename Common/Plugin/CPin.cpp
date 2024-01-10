#include "CPin.h"

#include <QFile>
#include <QPainter>
#include <QStyleOption>
#include "QMetaType"

namespace Plugin
{
    CPin::CPin(QWidget* pParent) : QWidget(pParent)
    {
        this->setMinimumHeight(10);
        this->setMaximumHeight(10);
        this->setMaximumWidth(10);
        this->setMinimumHeight(10);

        this->setMouseTracking(true);
        setAttribute(Qt::WA_StyledBackground, true);
    }

    CPin::CPin(const CPin& pin)
    {
        this->m_iParameterCount = pin.m_iParameterCount;
        this->m_iPinIndex = pin.m_iPinIndex;
        this->m_ePinType = pin.m_ePinType;
        this->m_iReturnType = pin.m_iReturnType;
        this->m_strPinSignature = pin.m_strPinSignature;
        this->m_mapParamters = pin.m_mapParamters;
    }

    CPin& CPin::operator =(const CPin& pin)
    {
        this->m_iParameterCount = pin.m_iParameterCount;
        this->m_iPinIndex = pin.m_iPinIndex;
        this->m_ePinType = pin.m_ePinType;
        this->m_iReturnType = pin.m_iReturnType;
        this->m_strPinSignature = pin.m_strPinSignature;
        this->m_mapParamters = pin.m_mapParamters;

        return *this;
    }

    CPin::~CPin()
    {
    }

    void CPin::setPinStatus(PinStatus status)
    {
        if (status == PinStatus::Match)
        {
            setMatchStatus();
        }
        else
        {
            setDefaultStatus();
        }
    }

    void CPin::setPinSignature(QString strSignature)
    {
        m_strPinSignature = strSignature;
        this->setToolTip(m_strPinSignature);
    }

    QString CPin::getPinSignature()
    {
        return m_strPinSignature;
    }

    void CPin::setPinType(PinType pinType)
    {
        m_ePinType = pinType;
    }

    PinType CPin::getPinType() const
    {
        return m_ePinType;
    }

    void CPin::setParameterCount(int iCount)
    {
        m_iParameterCount = iCount;
    }

    int CPin::getParameterCount()
    {
        return m_iParameterCount;
    }

    void CPin::setParameterType(int iIndex, int iParamterType)
    {
        m_mapParamters[iIndex] = iParamterType;
    }

    int CPin::getParameterType(int iIndex)
    {
        int iType = QMetaType::UnknownType;

        if (!m_mapParamters.isEmpty())
        {
            if (m_mapParamters.find(iIndex) != m_mapParamters.end())
            {
                iType = m_mapParamters[iIndex];
            }            
        }    

        return iType;
    }

    void CPin::setPinIndex(short iIndex)
    {
        m_iPinIndex = iIndex;
    }

    short CPin::getPinIndex()
    {
        return m_iPinIndex;
    }

    void CPin::setReturnType(short shReturnType)
    {
        m_iReturnType = shReturnType;
    }

    short CPin::getReturnType()
    {
        return m_iReturnType;
    }

    // void CPin::mousePressEvent(QMouseEvent *event)
    // {
    //     //QWidget::mousePressEvent(event);
    // }

    // void CPin::mouseReleaseEvent(QMouseEvent *event)
    // {
    //     //QWidget::mouseReleaseEvent(event);

    // }

    // void CPin::mouseMoveEvent(QMouseEvent *event)
    // {
    //     //QWidget::mouseMoveEvent(event);
    // }
}

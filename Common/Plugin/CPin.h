#ifndef CPIN_H
#define CPIN_H

#include <QRect>
#include <QString>
#include <QWidget>
#include <QObject>

#include "Common_global.h"
#include "QMap"

/// <文件名> CPin.h </文件名>
/// <描  述>
///         定义导出接口的类，作为组件的一个引脚存在
/// </描 述>
/// <作  者></作者>
/// <创建日期></创建日期>

namespace Plugin
{
    //接口引脚类型
    enum PinType
    {
        //未知
        Unkown = 0,
        //输入
        Input = 1,
        //输出
        Output = 2,
        //回调
        Callback = 3,
    };

    //接口引脚状态
    enum PinStatus
    {
        //默认状态，此时显示输入和输出的默认风格
        Default = 0,
        //兼容状态，显示绿色表示和另外一个接口兼容可连接
        Match = 1,
    };

    class COMMON_EXPORT CPin : public QWidget
    {
        Q_OBJECT

    public:

        explicit CPin(QWidget* pParent = nullptr);

        CPin(const CPin& pin);

        CPin& operator = (const CPin& pin);

        virtual ~CPin();

    public:
        /***************************************
         * \brief	设置接口的状态
         * \param	PinStatus 状态
         * \return
         ***************************************/
        void setPinStatus(PinStatus status);

        /***************************************
         * \brief	设置接口的名称
         * \param	QString strSignature 函数名称
         * \return
         ***************************************/
        void setPinSignature(QString strSignature);

        /***************************************
         * \brief	设置接口的名称
         * \param	
         * \return  QString 名称
         ***************************************/
        QString getPinSignature();

	    /***************************************
	     * \brief	设置接口的类型
	     * \param	PinType 类型
	     * \return 	
	     ***************************************/
        void setPinType(PinType pinType);

        /***************************************
	     * \brief	设置接口的类型
	     * \param	PinType 类型
	     * \return 	
	     ***************************************/
        PinType getPinType() const;

        /***************************************
         * \brief	设置接口参数个数
         * \param	
         * \return
         ***************************************/
        void setParameterCount(int iCount);

        /***************************************
         * \brief	获取接口参数个数
         * \param	
         * \return  int
         ***************************************/
        int getParameterCount();

        /***************************************
         * \brief	获取接口某一个参数的类型
         * \param
         * \return  int
         ***************************************/
        void setParameterType(int iIndex, int iParamterType);

        /***************************************
         * \brief	获取接口某一个参数的类型
         * \param
         * \return  int
         ***************************************/
        int getParameterType(int iIndex);

        /***************************************
         * \brief	设置接口的序号
         * \param	short iIndex 序号
         * \return
         ***************************************/
        void setPinIndex(short iIndex);

        /***************************************
         * \brief	获取接口的类型
         * \param	
         * \return  short 序号
         ***************************************/
        short getPinIndex();

        /***************************************
         * \brief	设置接口的返回
         * \param	short shReturnType 返回类型
         * \return
         ***************************************/
        void setReturnType(short shReturnType);

        /***************************************
         * \brief	获取接口的返回类型
         * \param	
         * \return  short 类型
         ***************************************/
        short getReturnType();

    protected:
        virtual void setMatchStatus() = 0;
        virtual void setDefaultStatus() = 0;

    private:
        //接口签名
        QString m_strPinSignature;

        //接口类型
        enum PinType m_ePinType { Unkown };

        //接口状态
        enum PinStatus m_ePinStatus { Default };

        //参数个数
        int m_iParameterCount{ 0 };

        //保存接口的参数和参数类型，<参数序号，参数类型>
        QMap<int, int> m_mapParamters{};

        //接口序号
        int m_iPinIndex{ 0 };

        //返回类型
        int m_iReturnType{ 0 };

    //     // QWidget interface
    // protected:
    //     void mousePressEvent(QMouseEvent *event);
    //     void mouseReleaseEvent(QMouseEvent *event);
    //     void mouseMoveEvent(QMouseEvent *event);
    };
}

#endif // CPIN_H

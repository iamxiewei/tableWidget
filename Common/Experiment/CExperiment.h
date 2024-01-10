#ifndef CEXPERIMENT_H
#define CEXPERIMENT_H

#include <QObject>
#include <QVector>

#include "CExpChannelInfo.h"

namespace Experiment
{
    class COMMON_EXPORT CExperiment : public QObject
    {
        Q_OBJECT

    public:
        explicit CExperiment(QString strExpName);
        virtual ~CExperiment();

        /***************************************
         * \brief	获取实验名称
         *
         * \param
         *
         *
         * \return 	QString 实验名称
         ***************************************/
        QString getExperimentName();

        /***************************************
         * \brief	获取实验的采样通道数
         *
         * \param
         *
         *
         * \return 	short 通道数
         ***************************************/
        short getExpChannelNum();

        /***************************************
         * \brief	根据采样通道号获取通道数据
         *
         * \param	short shSampleChaNO 采样通道号
         *
         *
         * \return 	CExpChannelInfo * 实验通道信息
         ***************************************/
        CExpChannelInfo *getExpChannel(short shSampleChaNO);

        /***************************************
         * \brief	添加一个实验采样通道
         *
         * \param	CExpChannelInfo *pSampleChannel 采样通道信息
         *
         *
         * \return
         ***************************************/
        void addNewExpChannel(CExpChannelInfo *pSampleChannel);

    private:
        QString m_strExperimentName;
        QVector<CExpChannelInfo *> m_vExpChannels;

    };

}

#endif // CEXPERIMENT_H

#include "CExperiment.h"

namespace Experiment
{
    Experiment::CExperiment::CExperiment(QString strExpName)
    {
        m_strExperimentName = strExpName;
    }

    Experiment::CExperiment::~CExperiment()
    {
        for(auto it : m_vExpChannels)
        {
            if(it != nullptr)
            {
                delete it;
            }
        }
    }

    QString Experiment::CExperiment::getExperimentName()
    {
        return m_strExperimentName;
    }

    short Experiment::CExperiment::getExpChannelNum()
    {
        return m_vExpChannels.size();
    }

    Experiment::CExpChannelInfo *Experiment::CExperiment::getExpChannel(short shSampleChaNO)
    {
        for(auto it : m_vExpChannels)
        {
            if(it->getLogicalChaNO())
            {
                return it;
            }
        }

        return nullptr;
    }

    void Experiment::CExperiment::addNewExpChannel(CExpChannelInfo *pSampleChannel)
    {
        bool bExist = false;

        for(auto it : m_vExpChannels)
        {
            if(it->getLogicalChaNO() == pSampleChannel->getLogicalChaNO())
            {
                bExist = true;
            }
        }

        if(!bExist)
        {
            m_vExpChannels.push_back(pSampleChannel);
        }
    }
}


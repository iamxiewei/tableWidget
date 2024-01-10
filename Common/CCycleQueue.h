#ifndef CYCLE_QUEUE1_HH_
#define CYCLE_QUEUE1_HH_

#include <QMutex>

/******************************************
 * class 	CCycleQueue
 *
 * brief	该类是工具类，实现一个大小为800K大小的循环队列
 *
 * author	zhy
 * date     2021-4-21
 ******************************************/
template<class T>
class  CCycleQueue
{

public:

    CCycleQueue(void)
    {
        // 创建队列时即按默认值分配了内存
        allocateBuffer();
    }

    CCycleQueue(unsigned long lSize)
    {
        allocateBuffer( lSize );
    }

    virtual ~CCycleQueue(void)
    {
        freeBuffer();
    }

    /***************************************
     * \brief	读取一定数据长度的数据，并返回在buffer中
     * \param   iLength [int]想要读取的长度
     *          pBuffer [out]返回的数据
     * \return 	int 真实读取到的长度
     ***************************************/
    unsigned int read(unsigned int iLength, T* pBuffer)
    {
        //参数判断
        if(iLength <= 0 || pBuffer == nullptr || iLength > m_lTotalLength)
        {
            return 0;
        }

        //保护：如果没有分配内存，或读取数据长度错误，返回0.
        m_mutexReadWrite.lock();

        unsigned int iReadLength = iLength;

        //可以读取的数据量
        unsigned int iAvaliableReadLength = getLengthInQueue();

        //更新需要读取的数据量
        if(iAvaliableReadLength < iLength)
        {
            iReadLength = iAvaliableReadLength;
        }

        //读取数据
        for (int i = 0; i < iReadLength; ++i)
        {
            pBuffer[i] = m_pDataBuffer[m_iFront];
            m_iFront = (m_iFront + 1) % m_lTotalLength;
        }

        m_mutexReadWrite.unlock();

        return iReadLength;
    }

    /***************************************
     * \brief	将buffer中的数据写入
     * \param   iLength [int]想要写入的长度
     *          pBuffer [int]数据
     * \return 	int 真实读取到的长度
     ***************************************/
    unsigned int write(unsigned int iLength, const T* pBuffer)
    {
        if(iLength <= 0 || pBuffer == nullptr || iLength > m_lTotalLength)
        {
            return 0;
        }

        m_mutexReadWrite.lock();

        unsigned int iWriteLength = iLength;

        //可以写入的数据长度
        unsigned int iAvaliableWriteLength = m_lTotalLength - getLengthInQueue() - 1;

        //更新写入数据长度
        if(iAvaliableWriteLength < iLength)
        {
            iWriteLength = iAvaliableWriteLength;
        }

        //写入数据
        for(int i = 0; i < iWriteLength; i++)
        {
            m_pDataBuffer[m_iRear] = pBuffer[i];
            m_iRear = (m_iRear + 1) % m_lTotalLength;
        }

        m_mutexReadWrite.unlock();

        return iWriteLength;
    }

    /***************************************
     * \brief	获取队列现有的数据长度，会预留一个数据
     *          作为判断空或满的依据
     * \param
     * \return 	int 现有的数据长度
     ***************************************/
    unsigned long getLengthInQueue(void)
    {
        unsigned long lLength = 0;

        if(isEmpty())
        {
            lLength = 0;
        }
        else if(isFull())
        {
            lLength = m_lTotalLength - 1;
        }
        else
        {
            if(m_iFront < m_iRear)
            {
                lLength = m_iRear - m_iFront - 1;
            }
            else
            {
                lLength = m_lTotalLength - (m_iFront - m_iRear) - 1;
            }
        }

        return lLength;
    }

    /***************************************
     * \brief	清空队列
     * \param
     * \return
     ***************************************/
    void clearQueue(void)
    {
        m_iFront = 0;
        m_iRear = 0;

        memset(m_pDataBuffer, 0, m_lTotalLength * sizeof(T));
    }

    /***************************************
     * \brief	队列空间数据总长度
     * \param
     * \return
     ***************************************/
    inline const unsigned long &getTotalLength(void)const
    {
        return m_lTotalLength;
    }

    /***************************************
     * \brief	重新分配队列长度，并复制原有的数据
     *          仅支持扩容队列，不支持缩小队列
     * \param
     * \return
     ***************************************/
    bool resize(unsigned long lLength)
    {
        bool bSuccess = false;

        if(lLength > m_lTotalLength)
        {
            auto pTemp = new T[lLength]{0};

            //原始数据继续保留
            if(pTemp != nullptr)
            {
                if(m_pDataBuffer != nullptr)
                {
                    memcpy(pTemp, m_pDataBuffer, sizeof (T) * m_lTotalLength);
                    delete []m_pDataBuffer;
                }

                //设定容量小于当前容量只需将表现出来的容量变更即可
                m_lTotalLength = lLength;

                m_pDataBuffer = pTemp;
                bSuccess = true;
            }       
        }

        return bSuccess;
    }

private:

    /***************************************
     * \brief	数据队列是否为空
     * \param
     * \return 	bool 是否为空
     ***************************************/
    bool isEmpty()
    {
        return m_iFront == m_iRear;
    }

    /***************************************
     * \brief	数据队列是否为满
     * \param
     * \return 	bool 是否为满
     ***************************************/
    bool isFull()
    {
        return (m_iRear + 1) % m_lTotalLength == m_iFront;
    }

    /***************************************
     * \brief	分配一定大小的缓存区
     *
     * \param   lLength 缓存数据长度（不是字节数）
     * \return
     ***************************************/
    bool allocateBuffer(unsigned long lLength = BUF_LENGTH)
    {
        //按指定字节大小分配内存，并初始化为0
        m_pDataBuffer = new T[lLength]{0};

        //分配成功返回true
        if( m_pDataBuffer != nullptr )
        {
            m_lTotalLength	= lLength;

            return true;
        }
        //分配失败返回false
        else
        {
            return false;
        }
    }

    /***************************************
     * \brief	释放队列
     *
     * \param
     * \return
     ***************************************/
    void freeBuffer(void)
    {
        if( m_pDataBuffer )
        {
            delete []m_pDataBuffer;
            m_pDataBuffer = nullptr;
        }
    }

private:

    // 默认的循环队列大小为262144个数据，如果按照浮点数计算就是1M的空间
    // 262144 = 1024 * 1024 / 4；
    enum { BUF_LENGTH = 262144 };

    // 循环队列写指针（write pointer)
    unsigned long m_iFront{0};

    // 循环队列读指针（read pointer)
    unsigned long m_iRear{0};

    // 循环队列的大小（对应类型的点数,对外表现的大小）
    unsigned long m_lTotalLength{0};

    // 循环队列存贮控件指针
    T* m_pDataBuffer{nullptr};

    QMutex m_mutexReadWrite;
};

// //模板的分离式编程必须包含CPP文件
// #include "CCycleQueue.cpp"

#endif

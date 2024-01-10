#ifndef CLOG_H
#define CLOG_H

#include <QMutex>
#include <QtConcurrent>
#include <QDebug>
#include "ILog.h"

#define instLog CLog::create_Instence()

#define LOGINFO(info) \
    do { \
    string sLog = __FILE__; \
    sLog += "--";\
    sLog +=__FUNCTION__;\
    sLog += "--";\
    sLog += info;\
    instLog->log_Info(sLog);\
    }while(false);

#define LOGWARN(warn) \
    do { \
    string sLog = __FILE__; \
    sLog += "--";\
    sLog +=__FUNCTION__;\
    sLog += "--";\
    sLog += warn;\
    instLog->log_Warring(sLog);\
    }while(false);

#define LOGERROR(error) \
    do { \
    string sLog = __FILE__; \
    sLog += "--";\
    sLog +=__FUNCTION__;\
    sLog += "--";\
    sLog += error;\
    instLog->log_Error(sLog);\
    }while(false);

#define LOGFATAL(fatal) \
    do { \
    string sLog = __FILE__; \
    sLog += "--";\
    sLog +=__FUNCTION__;\
    sLog += "--";\
    sLog += fatal;\
    instLog->log_Fatal(sLog);\
    }while(false);

#define QDebug() \
    instLog; \
    qDebug()

#define QInfo() \
    instLog; \
    qInfo()

#define QWarning() \
    instLog; \
    qWarning()

#define QError() \
    instLog; \
    qCritical()

#define QFatal(msg) \
    instLog; \
    qFatal(msg)

class CLog : public ILog
{
public:
    static CLog* create_Instence();
    static void release_Log();
    CLog();
    virtual ~CLog();

    static void qLogOutputProxy(QtMsgType type, const QMessageLogContext &context, const QString &msg);

    /*************************************************
     <函数名称>   Initialize
     <功    能>  对日志模块的初始化
     <参数说明>

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void initialize();

    /*************************************************
     <函数名称>   set_Log_Path
     <功    能>  设置日志模块存储路径
     <参数说明>  path 路径字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void set_Log_Path(const string& path);

    /*************************************************
     <函数名称>    set_Log_File
     <功    能>   设置日志文件名称
     <参数说明>    file_Name日志文件名称字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void set_Log_File(const string& file_Name);

    virtual void set_Max_Log_Size(unsigned int);
    virtual void set_Max_Log_Count(unsigned int);

    /*************************************************
     <函数名称>     log_Info
     <功    能>    一般性提示日志
     <参数说明>     info输出为日志信息的字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Info(const string& info);

    /*************************************************
     <函数名称>     log_Warring
     <功    能>    警告性日志
     <参数说明>     warring输出为日志信息的字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Warring(const string& warring);

    /*************************************************
     <函数名称>     log_Error
     <功    能>    错误性日志
     <参数说明>     error输出为日志信息的字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Error(const string& error);

    /*************************************************
     <函数名称>     log_Assert
     <功    能>    错误性日志
     <参数说明>     fatal输出为日志信息的字符串;

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Fatal(const string& fatal);

private:
    /*************************************************
     <函数名称>    checkLogFileCount
     <功能描述>    对所给目录下的日志文件数目加以控制
     <参数说明>    logFilePath  文件目录

     <返 回 值>    无
     <函数说明>
     <作    者>   tcy
     <时    间>   2019/11/14
     **************************************************/
    void checkLogFileCount(const QString& logFilePath);

    /*************************************************
     <函数名称>    getLogFileCount
     <功能描述>    获取当前目录下日志文件数目
     <参数说明>    logFilePath 日志文件目录

     <返 回 值>    日志文件个数
     <函数说明>
     <作    者>   tcy
     <时    间>   2019/11/14
     **************************************************/
    int getLogFileCount(const QString& logFilePath);

    /*************************************************
     <函数名称>    delteLogFile
     <功能描述>    删除超过文件数目的日志
     <参数说明>

     <返 回 值>    无
     <函数说明>
     <作    者>   tcy
     <时    间>   2019/11/14
     **************************************************/
    void deleteLogFile();

    /*************************************************
     <函数名称>    getLogFileDate
     <功能描述>    获取日志文件生成日期
     <参数说明>    fileName 日志文件名

     <返 回 值>    日期字符串
     <函数说明>
     <作    者>   tcy
     <时    间>   2019/11/14
     **************************************************/
    int getLogFileDate(const QString& fileName);

public:
    static CLog*      m_PInstence ;
    static QMutex     m_InsMutex;

private:
    string        m_Path = "";
    string        m_File = "";
    bool          m_Be_Initialize = false;         //标识本类是否已经被初始化
    int           m_Max_Count = 90;
    unsigned int  m_Max_Size = 10;     //单位M(默认设置为10M)
    QStringList   m_LogFile_Name_List;

private:
    CLog (const CLog&);
    //  禁止拷贝
    const CLog &operator = (const CLog&);
};

#endif // CLOG_H

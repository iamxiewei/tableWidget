#ifndef ILOG_H
#define ILOG_H

#include <string>

using namespace std;

class ILog
{
public:
//    static ILog* create_Instence();
//    static void release_Log();

    /*************************************************
     <函数名称>   Initialize
     <功    能>  对日志模块的初始化
     <参数说明>

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void initialize() = 0;

    /*************************************************
     <函数名称>   set_Log_Path
     <功    能>  设置日志模块存储路径
     <参数说明>  path 路径字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void set_Log_Path(const string& path) = 0;

    /*************************************************
     <函数名称>    set_Log_File
     <功    能>   设置日志文件名称
     <参数说明>    file_Name日志文件名称字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void set_Log_File(const string& file_Name) = 0;

    /*************************************************
     <函数名称>    log_Info
     <功    能>   一般性提示日志
     <参数说明>    info输出为日志信息的字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Info(const string& info) = 0;

    virtual void set_Max_Log_Size(unsigned int) = 0;
    virtual void set_Max_Log_Count(unsigned int) = 0;

    /*************************************************
     <函数名称>    log_Warring
     <功    能>   警告性日志
     <参数说明>    warring输出为日志信息的字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Warring(const string& warring) = 0;

    /*************************************************
     <函数名称>   log_Error
     <功    能>  错误性日志
     <参数说明>   error输出为日志信息的字符串

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Error(const string& error) = 0;

    /*************************************************
     <函数名称>     log_Assert
     <功    能>    错误性日志
     <参数说明>     fatal输出为日志信息的字符串;

     <返回值>     无
     <函数说明>
     <作    者>   adam
     <时    间>   2018/4/26
    **************************************************/
    virtual void log_Fatal(const string& fatal) = 0;
};

#endif // ILOG_H

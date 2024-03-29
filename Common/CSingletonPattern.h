﻿#pragma once

#include <memory>
#include <mutex>

//using namespace std;

template <class T>
class CSingletonPtr
{

private:
	class CGarbo{
	public:
		void operator()(T* p)
		{
			delete p;
		}
	};

protected:
	CSingletonPtr() 
	{
	}

	virtual ~CSingletonPtr() 
	{
	}

public:
    static T& getInstance()
	{   
		if ( !m_singletonPtr.get() )
		{
            m_mutex.lock();

			if ( !m_singletonPtr.get() )
			{
                //shared_ptr<T> temp(new T(),T::Deleter()); //避免这种写法，防止T::CGarbo()过程中出现异常，
                //导致temp不能成功被创建，造成new T()的指针泄漏
                //shared_ptr<T> temp(new T());
                m_singletonPtr = std::shared_ptr<T>(new T(), CSingletonPtr<T>::CGarbo());
			}

            m_mutex.unlock();
		}

		return   *m_singletonPtr.get();
	} 
   
private:
	CSingletonPtr(const CSingletonPtr&);
	CSingletonPtr& operator = (const CSingletonPtr&);

private:
    static std::shared_ptr<T> m_singletonPtr;
    static std::mutex m_mutex;
};

template <class T>
    std::mutex CSingletonPtr<T>::m_mutex;


template <class T>
   std::shared_ptr<T> CSingletonPtr<T>::m_singletonPtr;


#define DECLARE_SINGLETON_CLASS(type)  friend class CSingletonPtr<type>;

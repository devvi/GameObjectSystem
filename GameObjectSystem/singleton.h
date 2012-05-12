#ifndef __SINGLETON_H__
#define __SINGLETON_H__
#include "noncopyable.h"
namespace DAISY{
template<typename T> 
class Singleton: private tools::noncopyable
{
protected:
	static T * _singleton;
public:
	Singleton(void)
	{
		assert( !_singleton );
		_singleton = static_cast< T* >( this );

	}


	virtual ~Singleton(void)
	{
		assert(_singleton);
		_singleton = NULL;
	}

	///�õ���������
	static T& getInstance(void)
	{
		assert(_singleton);
		return(*_singleton);
	}

	///�õ�����ָ��
	static T* getInstancePtr(void)
	{
		return (_singleton);
	}

};
}
#endif
#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__
namespace DAISY{
namespace tools{
	class noncopyable
	{
	protected:
		noncopyable() {}
		~noncopyable() {}
	private:  //
		noncopyable( const noncopyable& );
		const noncopyable& operator=( const noncopyable& );
	};
}
}
#endif
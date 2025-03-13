// #ifndef _DELEGATE_H_
// #define _DELEFATE_H_
#pragma once
#include <typeinfo>
#include <list>

using namespace std;

class IDelegate
{
public:
    virtual ~IDelegate() { }
    virtual bool isType(const std::type_info& _type) = 0;
    virtual void invoke() = 0;
    virtual bool compare(IDelegate *_delegate) const = 0;
};

class CStaticDelegate : public IDelegate
{

public:
    typedef void (*NormalFunPtr)();

    CStaticDelegate(NormalFunPtr _func):mFun(_func) {}

    virtual bool isType(const std::type_info& _type)
    {
        return typeid(CStaticDelegate) == _type;
    }

    virtual void invoke()
    {
        mFun();
    }

    virtual bool compare(IDelegate* _delegate) const
    {
        if ( 0 == _delegate || !_delegate->isType( typeid(CStaticDelegate) ) )
            return false;
        CStaticDelegate* cast = static_cast<CStaticDelegate*>(_delegate);
        return cast->mFun == mFun;
    }

private:
    NormalFunPtr mFun;
};

/*注册类非静态函数成员的委托，非静态函数成员的函数指针为void (ClassName::*FunName)();
**这里ClassName不确定，所以要么采用宏，要么采用模板类，这里采用模板类
*/
template<class T>
class CMethodDelegate : public IDelegate
{
public:
    typedef void (T::*Method)();

    CMethodDelegate(T* _object, Method _method): mObject(_object), mMethod(_method) {}

    virtual bool isType (const std::type_info& _type)
    {
        return typeid(CMethodDelegate<T>) == _type;
    }

    virtual void invoke()
    {
        (mObject->*mMethod)();
    }

    virtual bool compare( IDelegate* _delegate) const
    {
        if (0 == _delegate || !_delegate->isType(typeid(CMethodDelegate<T>)) )
            return false;
        CMethodDelegate<T>* cast = static_cast<CMethodDelegate<T>*>(_delegate);
        return cast->mObject == mObject && cast->mMethod == mMethod;
    }

private:
    T* mObject;
    Method mMethod;
};

inline IDelegate* newDelegate(void (*_func)() )
{
    return new CStaticDelegate(_func);
}

template<class T>
inline IDelegate* newDelegate( T* _object, void (T::*_method)() )
{
    return new CMethodDelegate<T>(_object, _method);
}

class CMultiDelegate
{
public:
    typedef std::list<IDelegate*> ListDelegate;
    typedef ListDelegate::iterator ListDelegateIterator;
    typedef ListDelegate::const_iterator ConstListDelegateIterator;

    CMultiDelegate() {}
    ~CMultiDelegate() {clear();}

    bool empty() const
    {
        for (ConstListDelegateIterator iter = mListDelegates.begin(); iter != mListDelegates.end(); iter++)
        {
            if (*iter) return false;
        }
        return true;
    }

    void clear()
    {
        for (ListDelegateIterator iter = mListDelegates.begin(); iter!=mListDelegates.end(); iter++)
        {
            if (*iter)
            {
                delete (*iter);
                (*iter) = 0;
            }
        }
    }

    /*重载了 +=  表示向这个委托注册一个函数指针，这个方法会自动判重，如果重复了就不会向里面添加。*/
    CMultiDelegate& operator+= (IDelegate* _delegate)
    {
        for (ListDelegateIterator iter = mListDelegates.begin(); iter!= mListDelegates.end(); ++iter)
        {
            if ((*iter) && (*iter)->compare(_delegate))
            {
                delete _delegate;
                return *this;
            }
        }
        mListDelegates.push_back(_delegate);
        return *this;
    }

    /*重载了  -=  表示向这个委托注销一个函数指针，如果这个函数指针不存在就什么也不执行。*/
    CMultiDelegate& operator-= (IDelegate* _delegate)
    {
        for (ListDelegateIterator iter = mListDelegates.begin(); iter!= mListDelegates.end(); ++iter)
        {
            if ((*iter) && (*iter)->compare(_delegate))
            {
                if ((*iter) != _delegate) delete (*iter); //如果是指向同一个IDelegate对象，即*iter=_delegate, 切勿重复删除
                (*iter) = 0;
                break;
            }
        }
        delete _delegate;
        return *this;
    }

    /*重载了  ()   表示当作函数调用启动这个委托，内部就是将所有函数指针指向的函数都运行一遍。*/
    void operator() ( )
    {
        ListDelegateIterator iter = mListDelegates.begin();
        while (iter != mListDelegates.end())
        {
            if ( 0 == (*iter))
            {
                iter = mListDelegates.erase(iter);
            }
            else
            {
                (*iter)->invoke();
                ++iter;
            }
        }
    }

private: //堵死这两种带参构造函数
    CMultiDelegate (const CMultiDelegate& _event) { }
    CMultiDelegate& operator= (const CMultiDelegate& _event) { }

private:
    ListDelegate mListDelegates;
};

// #endif
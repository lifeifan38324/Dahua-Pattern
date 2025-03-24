#pragma once
#include <iostream>
#include <cstdio>
#include "14_observer_delegate_pattern/delegate.h"

using namespace std;

void NormalFunc()
{
    printf("这里是普通函数\n");
}

class A
{
public:
    int i;
    A(int in):i(in) { }

    static void StaticFunc()
    {
        printf("这里是成员静态函数\n");
    }
    void MemberFunc()
    {
        printf("这里是成员非静态函数%d\n", i);
    }
};
int include_main()
{
    //普通函数
    typedef void(*NormalFuncp)();
    //成员函数
    typedef void(A::*MemberFuncp)();

    NormalFuncp fun1 = NormalFunc;
    MemberFuncp fun2 = &A::MemberFunc;
    NormalFuncp fun3 = A::StaticFunc;
    A a(10);
    // fun1();
    // (a.*fun2)();
    // fun3();

    CMultiDelegate onClick;
    onClick += newDelegate(NormalFunc);
    onClick += newDelegate(&A::StaticFunc);
    onClick += newDelegate(new A(100), &A::MemberFunc);

    onClick();

    return 0;
}

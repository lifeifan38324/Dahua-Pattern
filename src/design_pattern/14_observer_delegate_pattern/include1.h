#pragma once
#include <iostream>
#include <string>

using namespace std;

void NormalFunc()
{
    printf("这里是普通函数\n");
}

class A
{
public:
    A() {};
    A(string name){
        this->name = name;
    }

    static void StaticFunc()
    {
        printf("这里是成员静态函数\n");
    }
    void MemberFunc()
    {
        // printf("这里是%s成员非静态函数\n", name.c_str());
        cout << "这里是" << name <<"成员非静态函数\n";
        // cout << "这里是成员非静态函数\n";
    }
private:
    string name = "a_name";
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
    A a("llff");
    fun1();
    (a.*fun2)(); //类的成员函数调用规范，使用".*"
    fun3();

    return 0;
}
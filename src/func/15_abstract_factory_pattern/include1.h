#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "15_abstract_factory_pattern/RegistClass.h"
using namespace std;

class base
{
  public:
    base() {}
    virtual void test() { std::cout << "I'm base!" << std::endl; }
    virtual ~base() {}
};

class A : public base
{
  public:
    A() { cout << " A constructor!" << endl; }
    virtual void test() { std::cout << "I'm A!" <<std::endl; }
    ~A() { cout << " A destructor!" <<endl; }
};

// 注册反射类 A
RegisterClass(base, A);

class B : public base
{
  public :
    B() { cout << " B constructor!" << endl; }
    virtual void test() { std::cout << "I'm B!"; }
    ~B() { cout << " B destructor!" <<endl; }
};

// 注册反射类 B
RegisterClass(base, B);

class base2
{
  public:
    base2() {}
    virtual void test() { std::cout << "I'm base2!" << std::endl; }
    virtual ~base2() {}
};

class C : public base2
{
    public :
    C() { cout << " C constructor!" << endl; }
    virtual void test() { std::cout << "I'm C!" << std::endl; }
    ~C(){ cout << " C destructor!" << endl; }
};

// 注册反射类 C
RegisterClass(base2, C);

void include_main(){
  // 创建的时候提供基类和反射类的字符串类名
  base* p1 = CreateObject(base, "A");
  p1->test();
  delete p1;
  p1 = CreateObject(base, "B");
  p1->test();
  delete p1;
  base2* p2 = CreateObject(base2, "C");
  p2->test();
  delete p2;
}
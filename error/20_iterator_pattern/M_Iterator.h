#pragma once
#include <iostream>
#include <string>
using namespace std;


// typedef string objectStr;
template<class T1>
class ConcreteAggregate;

template<class T2>
class M_Iterator{
public:
    virtual T2 First() = 0;
    virtual T2 Next() = 0;
    virtual bool IsDone() = 0;
    virtual T2 CurrentItem() = 0;
};
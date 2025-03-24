#pragma once
#include <iostream>
#include <string>
using namespace std;


template<class T>
class Iterator{
public:
    virtual T* First() = 0;
    virtual T* Next() = 0;
    virtual bool IsDone() = 0;
    virtual T* CurrentItem() = 0;
};
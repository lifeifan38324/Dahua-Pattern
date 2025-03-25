#pragma once
#include <iostream>
#include <string>
using namespace std;


typedef string objectStr;

// template<class T>;
class M_Iterator{
public:
    virtual objectStr First() = 0;
    virtual objectStr Next() = 0;
    virtual bool IsDone() = 0;
    virtual objectStr CurrentItem() = 0;
};
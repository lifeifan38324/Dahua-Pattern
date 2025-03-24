#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T>
class Iterator;
template<class T>
class Aggregate{
public:
    virtual Iterator* CreateIterator() = 0;
};
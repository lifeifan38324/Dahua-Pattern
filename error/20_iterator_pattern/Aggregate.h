#pragma once
#include <iostream>
#include <string>
#include "20_iterator_pattern/ConcreteIterator.h"
using namespace std;

template<class T4>
class Aggregate{
public:
    virtual M_Iterator<T4> CreateIterator() = 0;
};
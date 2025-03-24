#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "20_iterator_pattern/Aggregate.h"
using namespace std;

template<class T>
class ConcreteAggregate: public Aggregate{
public:
    Iterator<T>* CreateIterator() {};

    int Count() {return items.size();}; 

    T* operator[](int index) {return items[index];};

private:
    vector<T*> items;
};
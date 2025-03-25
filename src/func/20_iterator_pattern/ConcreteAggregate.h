#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "20_iterator_pattern/Aggregate.h"
using namespace std;

typedef string objectStr;

class ConcreteIterator;
// template<class T>
class ConcreteAggregate: public Aggregate{
public:
    M_Iterator* CreateIterator();

    int Count() {return items.size();}; 

    objectStr operator[](int index) {return items[index];};

    void Add(objectStr i){
        items.push_back(i);
    }

private:
    vector<objectStr> items;
};
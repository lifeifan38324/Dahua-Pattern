#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "20_iterator_pattern/Aggregate.h"
using namespace std;

typedef string objectStr;

template<class T5>
class ConcreteAggregate: public Aggregate<T5>{
public:
    M_Iterator<T5> CreateIterator() override{    
        return new ConcreteIterator<T>(this);
    };

    int Count() {return items.size();}; 

    T& operator[](int index) {return items[index];};

    void Add(T5 i){
        items.push_back(i);
    }

private:
    vector<T5> items;
};
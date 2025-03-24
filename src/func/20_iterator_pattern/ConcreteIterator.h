#pragma once
#include <iostream>
#include <string>
#include "20_iterator_pattern/Iterator.h"
#include "20_iterator_pattern/ConcreteAggregate.h"
using namespace std;

class ConcreteAggregate;

template<class T>
class ConcreteIterator: public Iterator{
public:
    ConcreteIterator(ConcreteAggregate *aggregate){
        this->aggregate = aggregate;
    }

    T* First();

    T* Next();

    bool IsDone();

    T* CurrentItem();

private:
    ConcreteAggregate *aggregate;
    int current = 0;
};
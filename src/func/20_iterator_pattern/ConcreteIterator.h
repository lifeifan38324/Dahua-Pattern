#pragma once
#include <iostream>
#include <string>
#include "20_iterator_pattern/M_Iterator.h"
// #include "20_iterator_pattern/ConcreteAggregate.h"
using namespace std;

class ConcreteAggregate;

// template<class T>
class ConcreteIterator: public M_Iterator {
public:
    ConcreteIterator(ConcreteAggregate *aggregate){
        this->aggregate = aggregate;
    }

    objectStr First();

    objectStr Next();

    bool IsDone();

    objectStr CurrentItem();

private:
    ConcreteAggregate *aggregate;
    int current = 0;
};
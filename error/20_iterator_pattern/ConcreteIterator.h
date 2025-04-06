#pragma once
#include <iostream>
#include <string>
#include "20_iterator_pattern/M_Iterator.h"
// #include "20_iterator_pattern/ConcreteAggregate.h"
using namespace std;



template<class T3>
class ConcreteIterator: public M_Iterator<T3> {
public:
    ConcreteIterator(ConcreteAggregate<T3> *aggregate){
        this->aggregate = aggregate;
    }

    T3 First() override{
        return (*aggregate)[0];
    }

    T3 Next() override{
        T3 ret;
        current++;
        if(current < aggregate->Count()){
            ret = (*aggregate)[current];
        }
        return ret;
    }

    bool IsDone() override{
        return current >= aggregate->Count();
    }

    T3 CurrentItem() override{
        return (*aggregate)[current];
    }

private:
    ConcreteAggregate<T3> *aggregate;
    int current = 0;
};
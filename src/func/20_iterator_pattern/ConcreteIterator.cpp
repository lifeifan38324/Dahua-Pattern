#include "20_iterator_pattern/ConcreteIterator.h"

template<class T>
T* ConcreteIterator::First() {
    return (*aggregate)[0];
}

template<class T>
T* ConcreteIterator::Next() {
    Aggregate *ret = NULL;
    current++;
    if(current < aggregate->Count()){
        ret = (*aggregate)[current];
    }
    return ret;
}

template<class T>
bool ConcreteIterator::IsDone() {
    return current >= aggregate->Count();
}

template<class T>
T* ConcreteIterator::CurrentItem() {
    return (*aggregate)[current];
}
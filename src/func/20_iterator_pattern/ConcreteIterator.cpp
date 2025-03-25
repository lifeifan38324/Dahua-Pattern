#include "20_iterator_pattern/ConcreteIterator.h"
#include "20_iterator_pattern/ConcreteAggregate.h"


objectStr ConcreteIterator::First() {
    return (*aggregate)[0];
}


objectStr ConcreteIterator::Next() {
    objectStr ret;
    current++;
    if(current < aggregate->Count()){
        ret = (*aggregate)[current];
    }
    return ret;
}


bool ConcreteIterator::IsDone() {
    return current >= aggregate->Count();
}


objectStr ConcreteIterator::CurrentItem() {
    return (*aggregate)[current];
}
#include "20_iterator_pattern/ConcreteAggregate.h"
#include "20_iterator_pattern/ConcreteIterator.h"


void include_main(){
    ConcreteAggregate *a = new ConcreteAggregate();
    a[0] = new ConcreteAggregate();
}
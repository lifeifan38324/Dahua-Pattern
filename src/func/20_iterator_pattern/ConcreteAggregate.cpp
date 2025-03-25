#include "20_iterator_pattern/ConcreteAggregate.h"
#include "20_iterator_pattern/ConcreteIterator.h"

M_Iterator* ConcreteAggregate::CreateIterator() {return new ConcreteIterator(this);};
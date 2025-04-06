#include "20_iterator_pattern/ConcreteIterator.h"
// #include "20_iterator_pattern/ConcreteAggregate.h"

// template<class T>
// T ConcreteIterator<T>::First() {
//     return (*aggregate)[0];
// }

// template<class T>
// T ConcreteIterator<T>::Next() {
//     T ret;
//     current++;
//     if(current < aggregate->Count()){
//         ret = (*aggregate)[current];
//     }
//     return ret;
// }

// template<class T>
// bool ConcreteIterator<T>::IsDone() {
//     return current >= aggregate->Count();
// }

// template<class T>
// T ConcreteIterator<T>::CurrentItem() {
//     return (*aggregate)[current];
// }
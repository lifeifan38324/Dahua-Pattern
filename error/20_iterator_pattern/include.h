#include "20_iterator_pattern/ConcreteAggregate.h"
#include "20_iterator_pattern/ConcreteIterator.h"


void include_main(){
    ConcreteAggregate<string> *a = new ConcreteAggregate<string>();
    a->Add("李非凡");
    a->Add("王林林");
    a->Add("李二帆");
    a->Add("李🈲风");

    M_Iterator<string> *i = a->CreateIterator();
    string item = i->First();
    while(!i->IsDone()){
        cout << i->CurrentItem() << " 请买车票" << endl;
        i->Next();
    }
}
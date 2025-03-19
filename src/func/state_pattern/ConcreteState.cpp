#include "state_pattern/ConcreteState.h"
#include "state_pattern/Context.h"

void ConcreteStateA::Handle(Context *context){
    delete context->getState();
    context->setState(new ConcreteStateB());
    cout << "状态从 A 切换为 B ..." << endl;
}

void ConcreteStateB::Handle(Context *context){
    delete context->getState();
    context->setState(new ConcreteStateA());
    cout << "状态从 B 切换为 A ..." << endl;
}
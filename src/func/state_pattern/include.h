#pragma once
#include "state_pattern/ConcreteState.h"
#include "state_pattern/Context.h"

void include_main(){
    Context *c = new Context(new ConcreteStateA());
    c->Request();
    c->Request();
    c->Request();
    c->Request();
}
#pragma once
#include "16_state_pattern/ConcreteState.h"
#include "16_state_pattern/Context.h"

void include_main(){
    Context *c = new Context(new ConcreteStateA());
    c->Request();
    c->Request();
    c->Request();
    c->Request();
}
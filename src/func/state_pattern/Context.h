#pragma once
#include <iostream>
#include <string>
#include "state_pattern/State.h"
using namespace std;


class Context{
public:
    Context(State *state){
        this->state = state;
    }

    State* getState(){
        return state;
    }

    void setState(State *state){
        this->state = state;
    }

    void Request(){
        state->Handle(this);
    }
private:
    State *state;
};
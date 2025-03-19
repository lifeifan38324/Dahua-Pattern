#pragma once
#include <iostream>
#include <string>
#include "state_pattern/State.h"
using namespace std;


class ConcreteStateA: public State{
public:
    void Handle(Context *context);
};


class ConcreteStateB: public State{
public:
    void Handle(Context *context);
};
#pragma once
#include <iostream>
#include <string>
using namespace std;


class Context;
class State{
public:
    virtual void Handle(Context *context) = 0;
};
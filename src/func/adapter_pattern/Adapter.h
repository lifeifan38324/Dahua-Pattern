#pragma once
#include <iostream>
#include <string>
#include "adapter_pattern/Target.h"
#include "adapter_pattern/Adaptee.h"
using namespace std;


class Adapter: public Target{
public:
void Request() {
    adaptee->SpecificRequest();
}

private:
    Adaptee *adaptee = new Adaptee();
};



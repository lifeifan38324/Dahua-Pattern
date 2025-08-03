#pragma once
#include<iostream>
#include<string>
#include "0_test/A.h"
using namespace std;

void include_main(){
    Derived<string> derived("10", "3.14");
    derived.printBaseValue();
    derived.printDerivedValue();
    derived.setB(new B<string>("李非凡"));
    cout << derived.getB() << endl;
}
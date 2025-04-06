#pragma once
#include<iostream>
#include<stdio.h>
#include<string>
#include"template_learn/BaseA.h"
using namespace std;

void include_main(){
    Derived<double> derived(10, 3.14);
    derived.printBaseValue();
    derived.printDerivedValue();
}
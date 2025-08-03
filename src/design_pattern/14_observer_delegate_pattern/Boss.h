#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "14_observer_delegate_pattern/Subject.h"
#include "14_observer_delegate_pattern/delegate.h"
using namespace std;

class Boss: public Subject{
public:
    void Notify();
    
public:
    CMultiDelegate Update;
};
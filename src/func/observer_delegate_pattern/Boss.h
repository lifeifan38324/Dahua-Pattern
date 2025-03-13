#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "observer_delegate_pattern/Subject.h"
#include "observer_delegate_pattern/delegate.h"
using namespace std;

class Boss: public Subject{
public:
    void Notify();
    
public:
    CMultiDelegate Update;
};
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "observer_pattern/Observer_o.h"
using namespace std;

// class Observer;
class Subject_o{
public:
    virtual void Attach(Observer_o *observer) = 0;
    virtual void Notify() = 0;
    void setAction(string action){
        this->action = action;
    }
    string getAction(){
        return action;
    }
protected:
    string action;
};
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "observer_pattern/Observer.h"
using namespace std;

// class Observer;
class Subject{
public:
    virtual void Attach(Observer *observer) = 0;
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
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"observer_pattern/Subject.h"
using namespace std;

class Secretary: public Subject{
public:
    void Attach(Observer *observer);
    void Notify();
    
private:
    vector<Observer*> observers;
};
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"14_observer_pattern/Subject_o.h"
using namespace std;

class Secretary_o: public Subject_o{
public:
    void Attach(Observer_o *observer);
    void Notify();
    
private:
    vector<Observer_o*> observers;
};
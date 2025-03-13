#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "observer_pattern/Observer.h"
using namespace std;

class NBAObserver: public Observer{
public:
    NBAObserver(string name, Subject *sub): Observer::Observer(name, sub){};

    void Update();
    
};
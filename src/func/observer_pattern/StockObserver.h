#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "observer_pattern/Observer.h"
using namespace std;

class StockObserver: public Observer{
public:
    StockObserver(string name, Subject *sub): Observer::Observer(name, sub){};

    void Update();

};


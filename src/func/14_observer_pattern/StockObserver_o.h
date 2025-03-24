#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "14_observer_pattern/Observer_o.h"
using namespace std;

class StockObserver_o: public Observer_o{
public:
    StockObserver_o(string name, Subject_o *sub): Observer_o::Observer_o(name, sub){};

    void Update();

};


#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "observer_pattern/Observer_o.h"
using namespace std;

class NBAObserver_o: public Observer_o{
public:
    NBAObserver_o(string name, Subject_o *sub): Observer_o::Observer_o(name, sub){};

    void Update();
    
};
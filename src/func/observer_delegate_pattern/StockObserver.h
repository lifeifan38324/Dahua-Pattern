#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "observer_delegate_pattern/Subject.h"
using namespace std;

class StockObserver{
public:
    StockObserver(string name, Subject *sub){
        this->name = name;
        this->sub = sub;
    }

    void CloseStockMarket();

private:
    string name;
    Subject *sub;
};
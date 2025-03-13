#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "observer_delegate_pattern/Subject.h"
using namespace std;

class NBAObserver{
public:
    NBAObserver(string name, Subject *sub){
        this->name = name;
        this->sub = sub;
    }

    void CloseNBADirectSeeding();

private:
    string name;
    Subject *sub;
};
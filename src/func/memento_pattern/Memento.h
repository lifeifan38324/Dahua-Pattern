#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Memento{
public:
    Memento(string state) {
        this->state = state;
    }

    string getState(){
        return this->state;
    }
private:
    string state;
};  
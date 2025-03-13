#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Subject{
public:
    virtual void Notify() = 0;

    void setState(string state){
        this->state = state;
    }

    string getState(){
        return this->state;
    }

private:
    string state;
};
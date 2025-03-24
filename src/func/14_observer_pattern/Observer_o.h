#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Subject_o;
class Observer_o{
public:
    Observer_o(string name, Subject_o *sub){
        this->name = name;
        this->sub = sub;
    }

    void changeSubject(Subject_o *sub){
        this->sub = sub;
    }

    virtual void Update() = 0;

protected:
    string name;
    Subject_o *sub;
};
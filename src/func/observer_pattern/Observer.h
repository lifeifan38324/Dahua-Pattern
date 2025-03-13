#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Subject;
class Observer{
public:
    Observer(string name, Subject *sub){
        this->name = name;
        this->sub = sub;
    }

    void changeSubject(Subject *sub){
        this->sub = sub;
    }

    virtual void Update() = 0;

protected:
    string name;
    Subject *sub;
};
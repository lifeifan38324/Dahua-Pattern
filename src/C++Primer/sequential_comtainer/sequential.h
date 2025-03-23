#pragma once
#include<iostream>
#include<string>
using namespace std;

class A {
public:
    A(): A("default name"){};
    A(string name): name(name) {};
    void show();
    
private:
    string name;
};


#pragma once
#include <iostream>
#include <string>
using namespace std;


class Company{
public:
    Company(string name): name(name) {};

    virtual void Add(Company*) = 0;
    virtual void Remove(Company*) = 0;
    virtual void Display(int) = 0;
    virtual void LineOfDuty() = 0;

protected:
    string name;
};
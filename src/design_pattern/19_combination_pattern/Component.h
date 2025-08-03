#pragma once
#include <iostream>
#include <string>
using namespace std;


class Component{
public:
    Component(string name): name(name) {}

    virtual void Add(Component*) = 0;
    virtual void Remove(Component*) = 0;
    virtual void Diaplay(int) = 0;

protected:
    string name;
};
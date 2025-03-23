#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "19_combination_pattern/Component.h"
using namespace std;


class Composite: public Component{
public:
Composite(string name): Component(name) {}

    void Add(Component* c) override;
    void Remove(Component* c) override;
    void Diaplay(int depth) override;

private:
    vector<Component *> children;
};
    
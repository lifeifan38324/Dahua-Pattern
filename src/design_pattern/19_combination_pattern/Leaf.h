#pragma once
#include <iostream>
#include <string>
#include "19_combination_pattern/Component.h"
using namespace std;

class Leaf: public Component{
public:
    Leaf(string name): Component(name) {}

    void Add(Component* c) override;
    void Remove(Component* c) override;
    void Diaplay(int depth) override;
};

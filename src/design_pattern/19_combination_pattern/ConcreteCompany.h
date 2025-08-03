#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "19_combination_pattern/Company.h"
using namespace std;


class ConcreteComponany: public Company{
public:
    ConcreteComponany(string name): Company(name) {};
    void Add(Company* c) override;
    void Remove(Company* c) override;
    void Display(int depth) override;
    void LineOfDuty() override;

private:
    vector<Company*> children;
};
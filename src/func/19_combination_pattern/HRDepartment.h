#pragma once
#include <iostream>
// #include <stdio.h>
#include <string>
#include "19_combination_pattern/Company.h"
using namespace std;


class HRDepartment: public Company{
public:
    HRDepartment(string name): Company(name) {};
    void Add(Company* c) override {};
    void Remove(Company* c) override {};
    void Display(int depth) override {
        cout << string(depth, '-') + name << endl;
    }
    void LineOfDuty() override {
        // printf("%s 员工招聘培训管理", name);
        cout << name << "员工招聘培训管理" << endl;
    }
};

class FinanceDepartment: public Company{
public:
    FinanceDepartment(string name): Company(name) {};
    void Add(Company* c) override {};
    void Remove(Company* c) override {};
    void Display(int depth) override {
        cout << string(depth, '-') + name << endl;
    }
    void LineOfDuty() override {
        // printf("%s 公司财务收支管理", name);
        cout << name << "公司财务收支管理" << endl;
    }
};
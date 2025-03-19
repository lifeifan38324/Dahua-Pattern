#pragma once
#include <iostream>
#include <string>
using namespace std;


class Target{
public:
    virtual void Request() {
        cout << "普通请求！" << endl;
    }
};
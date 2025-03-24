#pragma once
#include <iostream>
#include <string>
using namespace std;


class Adaptee{
public:
    void SpecificRequest(){
        cout << "特殊请求！" << endl;
    }
};


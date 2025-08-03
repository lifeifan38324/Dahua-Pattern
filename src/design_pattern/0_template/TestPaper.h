#pragma once
#include <iostream>
#include <string>
using namespace std;

class TestPaper{
public:
    void TestQuestion1(){
        cout << "1 + 2 = ? a.1 b.2 c.3 d.4" << endl;
        cout << "答案：" << Answer1()  << endl;
    }

    virtual string Answer1() {};

    void TestQuestion2(){
        cout << "1 + 3 = ? a.1 b.2 c.3 d.4" << endl;
        cout << "答案：" << Answer2()    << endl;
    }
    
    virtual string Answer2() {};
};
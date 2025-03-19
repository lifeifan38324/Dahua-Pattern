#pragma once
#include <iostream>
#include <string>
using namespace std;

class Work;
class WorkState{
public:
    virtual void WriteProgram(Work *w) = 0;
};
#pragma once
#include <iostream>
#include <string>
#include "0_template/TestPaper.h"
using namespace std;

class TestPaperB: public TestPaper{
public:
    string Answer1(){
        return "c";
    }

    string Answer2(){
        return "d";
    }
    
    
};
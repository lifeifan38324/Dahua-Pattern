#pragma once
#include <stdio.h>
#include <string>
#include "17_adapter_pattern/Player.h"
using namespace std;


class PoreignCenter{
public:
    friend class Translator;
    void Chinese_Attach(){
        printf("外籍中锋 %s 进攻！\n", this->name.c_str());
    }

    void Chinese_Defense(){
        printf("外籍中锋 %s 防守！\n", this->name.c_str());
    }

private:
    string name;
};
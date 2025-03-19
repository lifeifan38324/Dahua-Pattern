#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include "adapter_pattern/Player.h"
#include "adapter_pattern/ForeignCenter.h"
using namespace std;


class Translator: public Player{
public:
    Translator(string name): Player::Player(name) {
        if(fc){
            delete fc;
        }
        fc = new PoreignCenter();
        fc->name = name;
    }

    void Attack(){
        fc->Chinese_Attach();
    }

    void Defense(){
        fc->Chinese_Defense();
    }

private:
    PoreignCenter *fc;
};
#pragma once
#include<iostream>
#include<string>
using namespace std;

struct RoleState{
    int vit;
    int atk;
    int def;
};

class RoleStateMemento{
public:
    RoleStateMemento(RoleState rState) {
        this->rState = rState;
    }

    RoleState getState(){
        return this->rState;
    }

private:
    RoleState rState;
};
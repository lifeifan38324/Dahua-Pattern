#pragma once
#include <iostream>
#include <string>
using namespace std;


class Player{
public:
    Player(string name){
        this->name = name;
    }

    virtual void Attack() = 0;
    virtual void Defense() = 0;

protected:
    string name;
};
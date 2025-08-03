#pragma once
#include<iostream>
#include<string>
#include "18_memento_pattern/RoleStateMemento.h"
using namespace std;


class RoleStateCaretaker{
public:
    RoleStateMemento *getMemento(){
        return this->memento;
    }

    void setMemento(RoleStateMemento *memento){
        if(this->memento){
            delete this->memento;
        }
        this->memento = memento;
    }


private:
    RoleStateMemento *memento;
};
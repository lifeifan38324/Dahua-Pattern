#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "18_memento_pattern/Memento.h"
using namespace std;

class Caretaker{
public:
    void setMemento(Memento *memento){
        if(this->memento){
            delete this->memento;
        }
        this->memento = memento;
    }

    Memento *getMemento(){
        return memento;
    }

private:
    Memento *memento;
};
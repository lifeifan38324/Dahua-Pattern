#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "18_memento_pattern/Memento.h"
using namespace std;


class Originator{
public:
    Memento *CreateMemento() {
        return new Memento(state);
    }

    void RecoverFromMemento(Memento *memento) {
        state = memento->getState();
    }

    void Show(){
        cout << "state is: " << state << "\n"; 
    }
public:
    string state;
};
#include "19_combination_pattern/ConcreteCompany.h"



void ConcreteComponany::Add(Company* c) {
    for(vector<Company*>::iterator it = children.begin(); it != children.end(); ++it){
        if (*it == c){
            return;
        }
    }
    children.push_back(c);
}

void ConcreteComponany::Remove(Company* c) {
    for(vector<Company*>::iterator it = children.begin(); it != children.end(); ++it){
        if (*it == c){
            delete c;
            children.erase(it);
            return;
        }
    }
}

void ConcreteComponany::Display(int depth) {
    cout << string(depth, '-') + name << endl;
    for(vector<Company*>::iterator it = children.begin(); it != children.end(); ++it){
        (*it)->Display(depth + 2);
    }
}

void ConcreteComponany::LineOfDuty() {
    for(Company *c: children){
        c->LineOfDuty();
    }
}


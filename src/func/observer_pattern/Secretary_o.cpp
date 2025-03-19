#include "observer_pattern/Secretary_o.h"
#include "observer_pattern/Observer_o.h"

void Secretary_o::Attach(Observer_o *observer){
    observers.push_back(observer);
}

void Secretary_o::Notify(){
    for(auto &o: observers){
        o->Update();
    }
}
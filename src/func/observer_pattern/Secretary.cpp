#include "observer_pattern/Secretary.h"
#include "observer_pattern/Observer.h"

void Secretary::Attach(Observer *observer){
    observers.push_back(observer);
}

void Secretary::Notify(){
    for(auto &o: observers){
        o->Update();
    }
}
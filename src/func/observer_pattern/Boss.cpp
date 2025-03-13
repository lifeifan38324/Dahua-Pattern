#include"observer_pattern/Boss.h"
#include"observer_pattern/Observer.h"

void Boss::Attach(Observer *observer){
    this->observers.push_back(observer);
}

void Boss::Notify(){
    for(auto &o: observers){
        o->Update();
    }
}
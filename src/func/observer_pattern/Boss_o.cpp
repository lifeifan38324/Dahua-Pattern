#include"observer_pattern/Boss_o.h"
#include"observer_pattern/Observer_o.h"

void Boss_o::Attach(Observer_o *observer){
    this->observers.push_back(observer);
}

void Boss_o::Notify(){
    for(auto &o: observers){
        o->Update();
    }
}
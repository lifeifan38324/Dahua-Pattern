#pragma once
#include<iostream>
#include<string>
#include "18_memento_pattern/RoleStateMemento.h"
using namespace std;


class GameRole{
public:
    void StateDisplay() {
        cout << "角色当前状态：" << "\n"
            << "体力：" << rstate.vit << " "
            << "攻击力：" << rstate.atk << " "
            << "防御力：" << rstate.def << "\n";
    }

    void GetInitState(){
        rstate = {100, 100, 100};
    }

    void Fight(){
        rstate = {0, 0, 0};
    }

    RoleStateMemento *CreateMemento(){
        return new RoleStateMemento(this->rstate);
    }

    void RecoveryFromMemento(RoleStateMemento *memento){
        this->rstate = memento->getState();
    }



private:
    RoleState rstate;
};
#pragma once
#include <stdio.h>
#include <string>
#include "17_adapter_pattern/Player.h"
using namespace std;

// 前锋
class Forwards: public Player{
public:
    Forwards(string name): Player::Player(name) {} 
    
    void Attack(){
        printf("前锋 %s 进攻！\n", this->name.c_str());
    }

    void Defense(){
        printf("前锋 %s 防守！\n", this->name.c_str());
    }
};

// 中锋
class Center: public Player{
public:
    Center(string name): Player::Player(name) {} 
    
    void Attack(){
        printf("中锋 %s 进攻！\n", this->name.c_str());
    }

    void Defense(){
        printf("中锋 %s 防守！\n", this->name.c_str());
    }
};

// 后卫
class Guards: public Player{
public:
    Guards(string name): Player::Player(name) {} 
    
    void Attack(){
        printf("后卫 %s 进攻！\n", this->name.c_str());
    }

    void Defense(){
        printf("后卫 %s 防守！\n", this->name.c_str());
    }
};
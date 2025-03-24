#pragma once
#include <iostream>
#include <string>
#include "16_state_pattern_work/WorkState.h"
using namespace std;

class Work{
    friend class WorkState;
public:
    Work(WorkState *workstate): workstate(workstate), hour(0.0), finish(false) {}

    void Update(){
        workstate->WriteProgram(this);
    }

    void setWorkState(WorkState *workstate){
        this->workstate = workstate;
    }

    void setHour(double hour){
        this->hour = hour;
    }

    void setFinish(bool finish){
        this->finish = finish;
    }

    WorkState* getWorkState(){
        return workstate;
    }

    double getHour(){
        return hour;
    }

    bool getFinish(){
        return finish;
    }
private:
    WorkState *workstate;
    double hour;
    bool finish;
};
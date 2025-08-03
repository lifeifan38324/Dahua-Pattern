#pragma once
#include <iostream>
#include <string>
#include "16_state_pattern_work/WorkState.h"
using namespace std;

// 上午工作状态
class ForenoonState: public WorkState {
public:
    void WriteProgram(Work *w);
};

// 中午工作状态
class NoonState: public WorkState {
public:
    void WriteProgram(Work *w);
};

// 下午工作状态
class AfternoonState: public WorkState {
public:
    void WriteProgram(Work *w);
};

// 晚间工作状态
class EveningState: public WorkState {
public:
    void WriteProgram(Work *w);
};

// 睡眠工作状态
class SleepingState: public WorkState {
public:
    void WriteProgram(Work *w);
};

// 下班休息工作状态
class RestState: public WorkState {
public:
    void WriteProgram(Work *w);
};
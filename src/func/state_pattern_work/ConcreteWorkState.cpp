#include "state_pattern_work/ConcreteWorkState.h"
#include "state_pattern_work/Work.h"

// 上午工作状态
void ForenoonState::WriteProgram(Work *w){
    if (w->getHour() < 12){
        cout << "当前时间：" << w->getHour() << "点, 上午工作，精神百倍。" << endl;
    }
    else{
        delete w->getWorkState();
        w->setWorkState(new NoonState());
        w->Update();
    }
}

// 中午工作状态
void NoonState::WriteProgram(Work *w){
    if (w->getHour() < 13){
        cout << "当前时间：" << w->getHour() << "点, 饿了，午饭；犯困，午休。" << endl;
    }
    else{
        delete w->getWorkState();
        w->setWorkState(new AfternoonState());
        w->Update();
    }
}

// 下午工作状态
void AfternoonState::WriteProgram(Work *w){
    if (w->getHour() < 17){
        cout << "当前时间：" << w->getHour() << "点, 下午状态还不错，继续努力！" << endl;
    }
    else{
        delete w->getWorkState();
        w->setWorkState(new EveningState());
        w->Update();
    }
}

// 晚间工作状态
void EveningState::WriteProgram(Work *w){
    if (w->getFinish()){
        delete w->getWorkState();
        w->setWorkState(new RestState());
        w->Update();
    }
    else{
        if (w->getHour() < 21){
            cout << "当前时间：" << w->getHour() << "点, 加班哦，疲累之极！！" << endl;
        }
        else{
            delete w->getWorkState();
            w->setWorkState(new SleepingState());
        }
    }
}

// 睡眠工作状态
void SleepingState::WriteProgram(Work *w){
    cout << "当前时间：" << w->getHour() << "点, 不行了，睡着了" << endl;
}

// 下班休息工作状态
void RestState::WriteProgram(Work *w){
    cout << "当前时间：" << w->getHour() << "点, 下班回家了" << endl;
}
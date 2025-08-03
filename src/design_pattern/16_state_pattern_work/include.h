#include "16_state_pattern_work/Work.h"
#include "16_state_pattern_work/ConcreteWorkState.h"

void include_main(){
    Work *work = new Work(new ForenoonState());
    for(int i = 0; i < 24; i++){
        work->setHour(i);
        work->Update();
    }
}

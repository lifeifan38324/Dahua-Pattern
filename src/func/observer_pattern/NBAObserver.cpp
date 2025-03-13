#include "observer_pattern/Subject.h"
#include "observer_pattern/NBAObserver.h"

void NBAObserver::Update(){
    cout << sub->getAction() << " " << name << " 关闭NBA，继续工作!\n";
}
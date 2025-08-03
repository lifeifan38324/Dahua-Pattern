#include "14_observer_pattern/Subject_o.h"
#include "14_observer_pattern/NBAObserver_o.h"

void NBAObserver_o::Update(){
    cout << sub->getAction() << " " << name << " 关闭NBA，继续工作!\n";
}
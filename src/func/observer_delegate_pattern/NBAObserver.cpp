#include "observer_delegate_pattern/NBAObserver.h"


void NBAObserver::CloseNBADirectSeeding(){
    cout << sub->getState() << ": " << this->name << "关闭了NBA直播，继续工作！\n";
}
#include "observer_pattern/Subject.h"
#include "observer_pattern/StockObserver.h"


void StockObserver::Update(){
    cout << sub->getAction() << " " << name << " 关闭股票行情，继续工作!\n";
}


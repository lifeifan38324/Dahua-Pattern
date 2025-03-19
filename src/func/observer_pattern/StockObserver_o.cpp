#include "observer_pattern/Subject_o.h"
#include "observer_pattern/StockObserver_o.h"


void StockObserver_o::Update(){
    cout << sub->getAction() << " " << name << " 关闭股票行情，继续工作!\n";
}


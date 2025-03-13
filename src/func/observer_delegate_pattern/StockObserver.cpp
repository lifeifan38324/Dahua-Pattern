#include "observer_delegate_pattern/StockObserver.h"


void StockObserver::CloseStockMarket(){
    cout << sub->getState() << ": " << this->name << "关闭了股票行情，继续工作！\n";
}


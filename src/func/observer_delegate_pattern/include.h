#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "observer_delegate_pattern/Subject.h"
#include "observer_delegate_pattern/Boss.h"
#include "observer_delegate_pattern/Secretary.h"
#include "observer_delegate_pattern/StockObserver.h"
#include "observer_delegate_pattern/NBAObserver.h"
using namespace std;


void include_main(){
    Boss *huhansan = new Boss();
    StockObserver *tongshi1 = new StockObserver("李非凡", huhansan);
    NBAObserver *tongshi2 = new NBAObserver("王林林", huhansan);

    huhansan->Update += newDelegate(tongshi1, &StockObserver::CloseStockMarket);
    huhansan->Update += newDelegate(tongshi2, &NBAObserver::CloseNBADirectSeeding);

    huhansan->setState("我胡汉三回来了!");

    huhansan->Notify();

    // ===============================================

    Secretary *mishu = new Secretary();
    StockObserver *tongshi3 = new StockObserver("李非凡", mishu);
    NBAObserver *tongshi4 = new NBAObserver("王林林", mishu);

    mishu->Update += newDelegate(tongshi3, &StockObserver::CloseStockMarket);
    mishu->Update += newDelegate(tongshi4, &NBAObserver::CloseNBADirectSeeding);

    mishu->setState("老板回来了!");

    mishu->Notify();

}
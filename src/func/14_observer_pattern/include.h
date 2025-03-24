#pragma once
#include "14_observer_pattern/Subject_o.h"
#include "14_observer_pattern/Secretary_o.h"
#include "14_observer_pattern/Boss_o.h"
#include "14_observer_pattern/Observer_o.h"
#include "14_observer_pattern/StockObserver_o.h"
#include "14_observer_pattern/NBAObserver_o.h"


void include_main(){
    Subject_o *tongzizhe1 = new Secretary_o();
	
	Observer_o *tongshi1 = new StockObserver_o("李非凡", tongzizhe1);
	Observer_o *tongshi2 = new NBAObserver_o("王林林", tongzizhe1);

	tongzizhe1->Attach(tongshi1);
	tongzizhe1->Attach(tongshi2);

    tongzizhe1->setAction("老板回来了lff! ");
    tongzizhe1->Notify();

    Subject_o *tongzizhe2 = new Boss_o();

    tongshi1->changeSubject(tongzizhe2);
    tongshi2->changeSubject(tongzizhe2);
    tongzizhe2->Attach(tongshi1);
	tongzizhe2->Attach(tongshi2);

    tongzizhe2->setAction("我胡汉三回来了！");
    tongzizhe2->Notify();


}
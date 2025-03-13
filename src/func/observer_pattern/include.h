#pragma once
#include "observer_pattern/Subject.h"
#include "observer_pattern/Secretary.h"
#include "observer_pattern/Boss.h"
#include "observer_pattern/Observer.h"
#include "observer_pattern/StockObserver.h"
#include "observer_pattern/NBAObserver.h"


void include_main(){
    Subject *tongzizhe1 = new Secretary();
	
	Observer *tongshi1 = new StockObserver("李非凡", tongzizhe1);
	Observer *tongshi2 = new NBAObserver("王林林", tongzizhe1);

	tongzizhe1->Attach(tongshi1);
	tongzizhe1->Attach(tongshi2);

    tongzizhe1->setAction("老板回来了lff! ");
    tongzizhe1->Notify();

    Subject *tongzizhe2 = new Boss();

    tongshi1->changeSubject(tongzizhe2);
    tongshi2->changeSubject(tongzizhe2);
    tongzizhe2->Attach(tongshi1);
	tongzizhe2->Attach(tongshi2);

    tongzizhe2->setAction("我胡汉三回来了！");
    tongzizhe2->Notify();


}
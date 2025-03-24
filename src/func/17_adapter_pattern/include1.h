// #include "17_adapter_pattern/Target.h"
#include "17_adapter_pattern/Adapter.h"


void include_main(){
    Target *target = new Adapter();
    target->Request();
    delete target;
    target = new Target();
    target->Request();
}
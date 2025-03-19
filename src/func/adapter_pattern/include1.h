// #include "adapter_pattern/Target.h"
#include "adapter_pattern/Adapter.h"


void include_main(){
    Target *target = new Adapter();
    target->Request();
    delete target;
    target = new Target();
    target->Request();
}
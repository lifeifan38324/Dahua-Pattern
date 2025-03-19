#include "adapter_pattern/ConcretePlayer.h"
#include "adapter_pattern/Translator.h"


void include_main(){
    Player *b = new Forwards("巴蒂尔");
    b->Attack();
    Player *m = new Guards("麦克格雷迪");
    m->Attack();

    Player *y = new Translator("姚明");
    y->Attack();
}
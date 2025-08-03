#include "18_memento_pattern/Originator.h"
#include "18_memento_pattern/Caretaker.h"


void include_main(){
    Originator *o = new Originator();
    o->state = "on";
    o->Show();

    Caretaker *c = new Caretaker();
    c->setMemento(o->CreateMemento());

    o->state = "off";
    o->Show();

    o->RecoverFromMemento(c->getMemento());
    o->Show();
}
#include "18_memento_pattern/GameRole.h"
#include "18_memento_pattern/RoleStateCaretaker.h"


void include_main(){
    GameRole *gr = new GameRole();
    gr->GetInitState();
    gr->StateDisplay();

    RoleStateCaretaker *rsc = new RoleStateCaretaker();
    rsc->setMemento(gr->CreateMemento());

    gr->Fight();
    gr->StateDisplay();

    gr->RecoveryFromMemento(rsc->getMemento());
    gr->StateDisplay();
}
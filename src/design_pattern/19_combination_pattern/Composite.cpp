#include "19_combination_pattern/Composite.h"

void Composite::Add(Component* c) {
    children.push_back(c);
}

void Composite::Remove(Component* c) {
    for(vector<Component*>::iterator it = children.begin(); it != children.end(); ++it){
        if (*it == c){
            children.erase(it);
            delete c;
            return;
        }
    }    
}

void Composite::Diaplay(int depth) {
    cout << string(depth, '-') + name << endl;
    for (Component* it : children){
        it->Diaplay(depth + 2);
    }
}

#include "19_combination_pattern/Leaf.h"

void Leaf::Add(Component* c) {
    cout << "不能向Leaf添加！" << endl;
}

void Leaf::Remove(Component* c) {
    cout << "不能从Leaf删除" << endl;
}

void Leaf::Diaplay(int depth) {
    cout << string(depth, '-') + name << endl;
}
#pragma once
#include <iostream>
#include <string>
using namespace std;


class M_Iterator;

class Aggregate{
public:
    virtual M_Iterator* CreateIterator() = 0;
};
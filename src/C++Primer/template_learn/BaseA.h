#pragma once
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


template <typename T>
class Base {
public:
    T value;
    Base(T val) : value(val) {}
    void printBaseValue() {
        std::cout << "Base value: " << value << std::endl;
    }
};

// 派生类模板继承基类模板
template <typename T>
class Derived : public Base<T> {
public:
    T anotherValue;
    Derived(T val, T anotherVal) : Base<T>(val), anotherValue(anotherVal) {}
    void printDerivedValue() {
        std::cout << "Derived value: " << anotherValue << std::endl;
    }
};
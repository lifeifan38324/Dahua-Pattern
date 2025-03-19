#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "abstract_factory_pattern/Reflection.h"
using namespace std;

class MyClass {
public:
    int x;
    float y;
    std::string z;

    REFLECTABLE(x, y, z)
};

void include_main(){
    MyClass obj;
    Reflection reflection;

    // 注册类型信息
    obj.reflect(reflection);

    // 获取类型信息
    const TypeInfo& typeInfo = reflection.getTypeInfo<MyClass>();

    // 输出字段信息
    std::cout << "Type: " << typeInfo.name << std::endl;
    for (const auto& field : typeInfo.fields) {
        std::cout << "Field: " << field.name << ", Type: " << field.type.name() << ", Offset: " << field.offset << std::endl;
    }

}
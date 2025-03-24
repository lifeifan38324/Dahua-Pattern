#pragma once
#include <iostream>
#include <string>
#include <typeinfo>
#include <typeindex>
#include <unordered_map>
#include <vector>
/*
 * 来源：https://blog.csdn.net/lovely_yoshino/article/details/140442476
 * 3.源信息结构反射机制
*/ 
struct FieldInfo {
    std::string name;
    std::type_index type;
    size_t offset;
};

struct TypeInfo {
    std::string name;
    std::vector<FieldInfo> fields;
};


#define REFLECTABLE(...) \
    friend struct Reflection; \
    void reflect(Reflection& r) { \
        r.registerType(typeid(*this), #__VA_ARGS__, __VA_ARGS__); \
    }

class Reflection {
public:
    template<typename... T>
    void registerType(std::type_index type, const std::string& fieldNames, T&... instance) {
        std::istringstream stream(fieldNames);
        std::string fieldName;
        size_t offset = 0;
        std::type_index instance_number[] = {typeid(&instance)...};
        while (std::getline(stream, fieldName, ',')) {
            trim(fieldName);
            TypeInfo& typeInfo = typeRegistry[type];
            typeInfo.name = type.name();
            typeInfo.fields.push_back({ fieldName, typeid(instance. * (T::*)(T:: *) &fieldName), offset });
            offset += sizeof(fieldName);
        }
    }

    template<typename T>
    const TypeInfo& getTypeInfo() {
        return typeRegistry[std::type_index(typeid(T))];
    }

private:
    std::unordered_map<std::type_index, TypeInfo> typeRegistry;

    void trim(std::string& s) {
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);
    }
};

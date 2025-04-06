#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

void rep_string(string& s, const string& oldVal, const string& newVal) {

    for (string::iterator it = s.begin(); it != s.end(); ++it) {
        string::iterator its = it;
        string::const_iterator ito = oldVal.cbegin();
        while (ito != oldVal.end() && *its == *ito) {
            ++its;
            ++ito;
        }
        if (ito == oldVal.end()) {
            it = s.erase(it, its);
            it = s.insert(it, newVal.begin(), newVal.end());
        }
    }
}

void include_main(){
    string s = "i thotho you are right. tho";
    string oldVal = "tho";
    string newVal = "thought";
    rep_string(s, oldVal, newVal);
    cout << s << endl;

}
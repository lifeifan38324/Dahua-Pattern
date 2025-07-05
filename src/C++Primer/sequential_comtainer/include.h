#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

bool isShorter(const string s1, const string s2){
    return s1.size() < s2.size();
}

void include_main(){
    ifstream ifs;
    ifs.open("./configure/string.txt", ifstream::in);
    string temp;
    vector<string> vs;
    while (ifs >> temp) {
        cout << "file in >> " << temp << endl;
        vs.push_back(temp);
    }
    for (auto& v: vs){
        cout << v << " ";
    }
    cout << endl;
    stable_sort(vs.begin(), vs.end(), isShorter);
    for (auto& v: vs){
        cout << v << " ";
    }
    cout << endl;

}
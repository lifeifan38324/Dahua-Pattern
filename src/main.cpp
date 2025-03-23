#include<iostream>
#include<stdio.h>
#include<string>
#include"19_combination_pattern/include2.h"
using namespace std;

void my_pause(){
	cout << "Press any key to continue . . .";
	string s;
	getline(cin, s);
}

int main(int argc, char *argv[]){
	include_main();
	
	my_pause();
	return 0;
}
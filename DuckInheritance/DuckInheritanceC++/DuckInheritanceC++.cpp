// DuckInheritanceC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Duck
{
	public : Duck(){};
	public : void swim() { cout << "All ducks can swim" << endl; };
};



int main()
{
	cout << "Hello World!" << endl;
	string readone;
	getline(cin, readone);
    return 0;
}


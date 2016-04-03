// postfixconverstation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "conio.h"
using namespace std;
void push();
void pop();
void check();

int _tmain(int argc, _TCHAR* argv[])
{
	char str[30];
	char stack;
	cout << "enter the expression";
	for (int i = 0; i < 30; i++)
	{
		str[i] = _getch();
		cout << str[i]<<endl;
	}


	 
	return 0;
}


// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int Abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return n;
}
int main()
{
	int number;
	cin >> number;
	cout << Abs(number) << endl;;
	return 0;
}



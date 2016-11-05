// Task1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double num1, num2, num3, num4, num5;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	double maxNum = num1;
	if (num2 > maxNum)
	{
		maxNum = num2;
	}
	if (num3 > maxNum)
	{
		maxNum = num3;
	}
	if (num4 > maxNum)
	{
		maxNum = num4;
	}
	if (num5 > maxNum)
	{
		maxNum = num5;
	}
	
	cout << maxNum << endl;
	return 0;
}



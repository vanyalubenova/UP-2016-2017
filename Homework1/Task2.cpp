// Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 == 0 || num2 == 0 || num3 == 0)
	{
		cout << "0" << endl;
		return 0;
	}
	int sign = 0;
	if (num1 < 0)
	{
		sign++;
	}
	if (num2 < 0)
	{
		sign++;
	}
	if (num3 < 0)
	{
		sign++;
	}
	if (sign % 2 == 0)
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
	}
       

    return 0;
}


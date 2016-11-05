// Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int maxNum = num1;
	if (num2 > maxNum)
	{
		maxNum = num2;
	}
	maxNum = (maxNum >= 0) ? maxNum : maxNum * -1;
	cout << maxNum << endl;
    return 0;
}


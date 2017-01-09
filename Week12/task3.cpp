// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int digits(int number, int count)
{
	if (number == 0)
	{
		return count;
	}
	return digits(number / 10, count + 1);
}
int main()
{
	int number;
	cout << "Number = ";
	cin >> number;
	int count = 0;
	cout << digits(number, count);
    return 0;
}


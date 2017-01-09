// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int times(int number, int k, int count)
{
	if (number % 10 == k)
	{
		count++;
	}
	if (number / 10 == 0)
	{
		
		return count;
	}
	return times(number / 10, k, count);
}
int main()
{
	int number, k;
	cout << "Number = ";
	cin >> number;
	cout << "k = ";
	cin >> k;
	int count = 0;
	cout << times(number, k, count) << " times";
    return 0;
}


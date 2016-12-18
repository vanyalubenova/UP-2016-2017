// Task8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int Pow(int a, int b)
{
	int var = 1;
	for (int i = 0; i < b; i++)
	{
		var *= a;
	}
	return var;
}
void initArray(int *array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}
}
int *returnPointer(int *array, int n, int number)
{
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int bineryNum = 0;
		while (number != 0) {
			bineryNum += (array[i] % 2) * pow(10, count);
		}

		if (array[i] == bineryNum)
		{
			return array + i;
			break;
		}
	}
}
int main()
{
	int array[100];
	int n, number;
	cin >> n;
	initArray(array, n);
	cin >> number;
	returnPointer(array, n, number);
    return 0;
}


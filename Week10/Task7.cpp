// Task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void initArray(int *array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}
}
bool deleteElements(int *array, int n, int number)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] == number)
		{
			for (int j = i; j < n - 1; j++)
			{
				array[j] == array[i + 1];
			}
			count++;
		}
	}
	if (count)
	{
		return true;
	}
	else
		return false;
}
int main()
{
	int array[100];
	int n;
	cin >> n;
	initArray(array, n);
	int number;
	cin >> number;
	bool existElement = deleteElements(array, n, number);
	cout << existElement;
    return 0;
}


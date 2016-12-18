// Task2.cpp : Defines the entry point for the console application.
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
void reverseArray(int *array, int n)
{
	for (int i = 0; i < n / 2; i++)
	
		int temp = array[i];
		array[i] = array[n - 1 - i];
		array[n - 1 - i] = temp;
	}
	
}
int main()
{
	int array[100];
	int n;
	cin >> n;
	initArray(array, n);
	reverseArray(array, n);
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
    return 0;
}


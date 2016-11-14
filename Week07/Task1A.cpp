// Task1A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Input an integer: ";
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]= ";
		cin >> arr[i];
	}
	int minNumber = arr[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] < arr[i])
		{
			minNumber = arr[i + 1];
		}
		
	}
	cout << "min = " << minNumber << endl;

	int maxNumber = arr[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] > arr[i])
		{
			maxNumber = arr[i + 1];
		}
		
	}
	cout << "max = " << maxNumber << endl;
    return 0;
}


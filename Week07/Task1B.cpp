// Task1B.cpp : Defines the entry point for the console application.
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
	int maxNumber = arr[0];
	
	for (int i = 0; i < n; i++)
	{
		if (minNumber > arr[i])
		{
			minNumber = arr[i];
		}
		if (maxNumber < arr[i])
		{
			maxNumber = arr[i];
		}
	}
	



	cout << "max = " << maxNumber << endl;
	cout << "min = " << minNumber << endl;
	

	int exMinNumber = INT_MAX;
	int exMaxNumber = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > minNumber && arr[i] < exMinNumber)
		{
			exMinNumber = arr[i];
		}
		if (arr[i] < maxNumber && arr[i] > exMaxNumber)
		{
			exMaxNumber = arr[i];
		}
		
		
	}
	

	cout << "exmin = " << exMinNumber << endl;
	cout << "exmax = " << exMaxNumber << endl;
    return 0;
}


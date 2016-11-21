// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int rows = 6;
	const int cows = 5;
	int arr[rows][cows];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cows; j++)
		{
			cout << "arr[i][j] = ";
			cin >> arr[i][j];			
		}
	}
	int max = arr[6][5];
	int min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cows; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			
		}
	}
	cout << min;
	cout << max;
    return 0;
}


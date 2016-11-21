// Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	
	int arr[100][100], count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (i - j == 0)
			{
				cout << arr[i][j];
			}
			
		}
	}
	cout << endl;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (i + j == count - 1)
			{
				cout << arr[i][j];
			}

		}
	}

	

    return 0;
}


// Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void initArray(double *array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}
}
int lastAverage(double *array, int n)
{
	int last = -1;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == n - 1)
		{
			if (array[0] == array[1] || array[n - 2] == array[n - 1])
			{
				last = i;
			}
			
		}
		else if(array[i] == ((array[i - 1] + array[i + 1]) / 2.0))
		{
			last = i;
		}
		
	}
	if (last != - 1)
	{
		return last;
	}
	else
		return -1;
	
}
int main()
{
	double array[100];
	int n, last;
	cin >> n;
	initArray(array, n);
	last = lastAverage(array, n);
	cout << last;
    return 0;
}


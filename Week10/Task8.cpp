

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
int *returnPointer(int *array, int n, int number)
{
	int min = 0;
	int max = n - 1;
	int mid;

	while (min <= max)
	{
		mid = (min + max) / 2;
		if (array[mid] < number)
		{
			min = mid + 1;
		}
		else if (array[mid] > number)
		{
			max = mid - 1;
		}
		else
		{
			return &array[mid];
		}

	}
	return NULL;
}

int main()
{
	int array[100];
	int n, number;
	cin >> n;
	initArray(array, n);
	cin >> number;
	int *result = returnPointer(array, n, number);
	cout << result;
	return 0;
}




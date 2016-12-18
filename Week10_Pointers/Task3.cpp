// Task3.cpp : Defines the entry point for the console application.
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
void combineMatrixs(int *array1, int *array2, int n1, int n2, int *array3)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < n1 && j < n2)
	{
		if (array1[i] <= array2[j])
		{
			array3[k] = array1[i];
			i++;
			
		}
		else
		{
			array3[k] = array2[j];
			j++;
		}
		k++;
	}
	if (!(i < n1)) {
		for (int z = j; z < n2; z++)
		{
			array3[k] = array2[z];
			k++;
		}
		if (!(j < n2))
		{
			for (int z = i; z < n1; z++)
			{
				array3[k] = array1[z];
				k++;
			}
		}
	}
	
}
	int main()
	{
		int array1[100];
		int array2[100];
		int array3[100];
		int n1, n2;
		cin >> n1 >> n2;
		initArray(array1, n1);
		initArray(array2, n2);
		combineMatrixs(array1, array2, n1, n2, array3);
		for (int i = 0; i < n1 + n2; i++)
		{
			cout << array3[i] << " ";
		}
		return 0;
	}


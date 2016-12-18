// Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void initArray(int array[][100], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "array[" << i << "][" << j << "] = ";
			cin >> array[i][j];
		}
	}
}
void matrixTransposition(int array1[][100], int rows, int cols, int array2[][100])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = i; j < cols; j++)
		{
			array2[i][j] = array1[j][i];
			array2[j][i] = array1[i][j];
		}
	}
}
int main()
{
	int array1[100][100];
	int array2[100][100];
	int rows, cols;
	cout << "Rows = ";
	cin >> rows;
	cout << "Cols = ";
	cin >> cols;
	initArray(array1, rows, cols);
	matrixTransposition(array1, rows, cols, array2);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array2[i][j];
		}
		cout << endl;
	}
	return 0;
}


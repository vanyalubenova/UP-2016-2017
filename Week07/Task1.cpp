// Task1.cpp : Defines the entry point for the console application.
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
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}


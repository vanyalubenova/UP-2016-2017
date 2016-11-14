// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	char a, b;
	cin >> n >> a >> b;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j <= i)
			{
				cout << a;
			}
			else {
				cout << b;
			}
		}
		cout << endl;
	}
	return 0;
}


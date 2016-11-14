// Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int number = n * n;
	int counter = 0;
	int copyn = n;
	
	
	while (copyn != 0)
	{
		copyn /= 10;
		counter++;
	}
	

	if (number %(int) pow(10, counter) == n)
		{
			cout << "avtomorfno" << endl;
		}
		else {
			cout << "no"<< endl;
		

	}
	
	system("pause");
	return 0;
}


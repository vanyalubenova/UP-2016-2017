// Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int counter1 = 0;
	int counter2 = 0;
	
	for (int i = 3; i <= 7; i++)
	{
		
		do
		{

			if (num % 10 != i)
			{
				counter1++;
			}
			counter2++;
			num /= 10;
		} while (num != 0);
	}
	


if (counter1 == counter2)
{
	cout << "da" << endl;
}
else
{
	cout << "ne" << endl;
}
return 0;
}


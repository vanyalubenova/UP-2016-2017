// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
double Min(int a, int b)
{
	if (a < b)
	{
		b = a;
	}
	return b;
}
double Pow(double a, int b)
{
	double var = 1;
	for (int i = 0; i < b; i++)
	{
		var *= a;
	}
	return var;
}

	for (int i = 0; i < b; i++)
	{
		a *= a;
	}
}
int Abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return n;
}
int main()
{
	return 0;
}



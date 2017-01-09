// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int fibonachi(int a, int b, int n, int count)
{
	if (n == count)
	{
		return a;
	}
	
	return fibonachi(b, a + b, n, count + 1);
	
}
int function(int n)
{
	int count = 1;
	return fibonachi(1, 1, n, count);
}
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int result = function(n);
	cout << result;
    return 0;
}


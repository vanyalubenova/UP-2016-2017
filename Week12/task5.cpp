// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void function(int n, int count)
{
	int copy = n;
	count++;
	for (int i = 0; i < count; i++)
	{
		cout << copy << " ";
		
		copy--;
	}
	cout << endl;
	if (count == n)
	{
		return;
	}
	function(n, count);
}
int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	int count = 0;
	function(n, count);
    return 0;
}


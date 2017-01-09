// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int factoriel(int num)
{
	if (num == 1)
	{
		return 1;
	}
	num = num * factoriel(num - 1);

}
int main()
{
	int num;
	cout << "Number =";
	cin >> num;
	factoriel(num);

    return 0;
}


// Week04Task04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	cin >> x;
	int y;
	cin >> y;
	switch (y)
	{
	case 1: cout << x - 5 << endl;
		break;
	case 2: cout << sin(x) << endl;
		break;
	case 3: cout << cos(x) << endl;
		break;
	case 4: cout << exp(x) << endl;
		break;
	default:
		break;
	}
    return 0;
}


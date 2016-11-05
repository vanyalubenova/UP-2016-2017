// Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num;
	cin >> num;
	switch (num)
	{
	case 1: cout << num * 10 << endl; 
		break;
	case 2: cout << num * 10 << endl;
		break;
	case 3: cout << num * 10 << endl;
		break;
	case 4: cout << num * 100 << endl;
		break;
	case 5: cout << num * 100 << endl; 
		break;
	case 6: cout << num * 100 << endl;
		break;
	case 7: cout << num * 1000 << endl;
		break;
	case 8: cout << num * 1000 << endl;
		break;
	case 9: cout << num * 1000 << endl; 
		break;
	default: 
		if (num == 0 || num < 0 || num >= 10)
	{
			cout << "Invalid input" << endl;;
	}
		break;

	}
    return 0;
}


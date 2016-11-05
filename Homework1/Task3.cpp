// Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
 
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int result = ((num1 + num2) % 2 == 0) ? 2 * (num1 + num2) : (num1 + num2) / 2;
	cout << result << endl;
    return 0;
}


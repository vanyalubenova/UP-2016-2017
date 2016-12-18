// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void changeNumbers(int *a, int *b)
{
	int temp = *a;	
	*a = *b;
	*b = temp;


}
int main()
{
	int a, b;
	cin >> a >> b;
	changeNumbers(&a, &b);
	cout << a << " "<< b;
    return 0;
}


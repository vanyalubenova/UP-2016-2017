// Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void deleteVowels(char *string)
{
	int count = 0;
	int count2 = 0;
	for (int i = 0; string[i] != 0; i++)
	{
	
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
		{

			for (int j = i; j < n - 1; j++)
			{
				string[j] = string[j + 1];
			}
			count1++;
		}
		count2++;
	}
	for (int i = 0; i < count2 - count1 ; i++)
	{
		cout << string[i];
	}


}
int main()
{
	char string[100];
	cin >> string;
	
	deleteVowels(string);
	return 0;
}
// Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void deleteVowels(char *string1, char *string2)
{
	int count = 0;
	int j = 0;
	for (int i = 0; string1[i] != 0; i++)
	{
		if ((int)string1[i] >= 65 && string1[i] <= 90) || ((int)string1[i] >= 97 && string1[i] <= 122))
		{
		if (string1[i] != 'a' && string1[i] != 'e' && string1[i] != 'i' && string1[i] != 'o' && string1[i] != 'u')
		{
			string2[j] = string1[i];
			j++;
			count++;
		}
		}
	}
	for (int i = 0; i < count; i++)
	{
		cout << string2[i];
	}


}
int main()
{
	char string1[100];
	cin >> string1;
	char string2[100];
	deleteVowels(string1, string2);


	return 0;
}
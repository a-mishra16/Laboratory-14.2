/*
* Program: Laboratory 14.2
* Author: Aanika Mishra
* Date: 12-12-2024
* Description: This program intakes a string and a chosen specified character
* to count and look for then returns how often the character appears in the 
* string. The program then counts and returns the number of repeated characters
* in the string. The program also returns a reversed string.
*/
#include <iostream>

using namespace std; 

int charcnt(char* ptr, char c);
int repeat(char* ptr);
void reverse(char* ptr);

int main()
{

}
int charcnt(char* ptr, char c)
{
	int count = 0;
	for (int i = 0; ptr[i] != '/0'; i++)
	{
		if (ptr[i] == c)
		{
			count++;
		}
	}
	return count;
}
int repeat(char* ptr)
{
	int rCount = 0;
	for (int i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == ptr[i+1])
		{
			rCount++;
		}
	}
	return rCount;
}
void reverse(char* ptr)
{
	string reverse;
	int length = 0;
	for (int i = 0; ptr[i] != '\0'; i++)
	{
		length++;
	}
	for (int i = length; i >= 0; i--)
	{
		reverse += ptr[i];
	}
	cout << reverse;

}
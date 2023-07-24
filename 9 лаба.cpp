#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
	for (int i = 0; i <= 2; i++)
	{
	int year;
	cout << "\nEnter a year: ";
	cin >> year;
	if (year % 4 != 0)
	{
		printf("Common year");
	}
	else if (year % 100 != 0)
	{
		printf("Leap year");
	}
	else if (year % 400 != 0)
	{
		printf("Common year");
	}
	else
	{
		printf("Leap year");
	}
	if ( year >= 1582)
	{
		printf("/Grigorian era");
	}
	else
	{
		printf("/No Grigorian era");
	}
    }
	return 0;
}

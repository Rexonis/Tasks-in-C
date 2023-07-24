#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
	for (int i = 0; i <= 2; i++)
	{
	int year, a, b, c , d, e;
	cout << "\nEnter a year: ";
	cin >> year; cout << "\n";

	if (year >= 1900 && year <= 2100)
	{
		int a = year % 19;
		int b = year % 4;
		int c = year % 7;
		int d = (a * 19 + 24) % 30;
		int e = (2 * b + 4 * c + 6 * d + 5) % 7;
		int Date;
		if (d + e < 10)
		{
			Date = d + e + 22;
			cout << Date << " March";
		}
		else
		{
			Date = d + e - 9;
			cout << Date << " April";
		}
	}
	else
	{
		cout << "You entered invalid data";
	}
    }
	return 0;
}


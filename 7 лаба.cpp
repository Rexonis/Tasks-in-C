#include <iostream>
#include <complex>
using namespace std;

int main()
{
	for (int i = 0; i <= 1; i++)
	{
	float first, second;
	float e = 0.000001;

	cout << "\nEnter: ";
	cin >> first; cout << "\n";
	cout << "Enter: ";
	cin >> second; cout << "\n";

	if (abs(first / second - 1) <= e)
	{
		cout << "Results are equal (by 0.000001 epsilon)";
	}
	else
	{
		cout << "Results are NOT equal (by 0.000001 epsilon)";
	}
    }	
	return 0;
}

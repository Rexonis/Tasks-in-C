#include <iostream>
using namespace std;

int main()
{
for (int i = 0; i <= 1; i++)
{
	int ip1, ip2, ip3, ip4;
	cout << "\nEnter: ";
	cin >> ip1; cout << "\n";
	cout << "Enter: ";
	cin >> ip2; cout << "\n";
	cout << "Enter: ";
	cin >> ip3; cout << "\n";
	cout << "Enter: ";
	cin >> ip4; cout << "\n";

	if (ip1 <= 255 && ip2  <= 255 && ip3 <= 255 && ip4 <= 255)
	{
		cout << "Address: " << ip1 << "." << ip2 << "." << ip3 << "." << ip4;
	}
	else
	{
		cout << "Enter 1 to 255";
	}
}
	return 0;
}

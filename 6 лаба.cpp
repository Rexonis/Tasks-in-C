#include <iostream>
using namespace std;

int main()
{
	float first, second, third, fourth, fifth;

	cout << "Enter: ";
	cin >> first; cout << "\n";
	cout << "Enter: ";
	cin >> second; cout << "\n";
	cout << "Enter: ";
	cin >> third; cout << "\n";
	cout << "Enter: ";
	cin >> fourth; cout << "\n";
	cout << "Enter: ";
	cin >> fifth; cout << "\n";

	printf("Processing: " "\n%.1f \n%.2f \n%.6f \n%.2f \n%.0f \n", first, second, third, fourth, fifth);
	
	return 0;
}

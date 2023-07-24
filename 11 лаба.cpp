#include <iostream>
#include <string>
#include <complex>
using namespace std;

int main(void) 
{
	for (int i = 0; i <= 3; i++)
	{
	float m, ft, in;
	int sys;

	cin >> sys;
	if (sys == 0)
	{
		cout << "Enter: ";
		cin >> m;
		ft = m * 3.28084;
		in = (ft - floor(ft)) * 12;
		cout << floor(ft) << "`" << in << "``";
	}
	else
	{
		cout << "Enter: ";
		cin >> ft; 
		cout << "\nEnter: ";
		cin >> in;
		m = in / 39.370078 + ft / 3.28084;
		cout << m << "m";
	}
    }
	return 0;
}

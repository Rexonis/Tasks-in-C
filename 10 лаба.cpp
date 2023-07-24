#include <iostream>
#include <string>
using namespace std;
int main(void) 
{
    for (int i = 0; i <= 3; i++)
	{
    float grossprice, taxrate, netprice, taxvalue;
    cout << "Enter a gross price: ";
    cin >> grossprice;
    cout << "Enter a tax rate: ";
    cin >> taxrate;
    if (taxrate <=100)
    {
    netprice = grossprice / (1+ taxrate/100);
    taxvalue = taxrate * netprice / 100;
    cout << "Net price: " << netprice << endl;
    cout << "Tax value: " << taxvalue << endl;
    }
    else
    {
    cout<<"taxrate can not be greater or equals 100";
    }
    }
    return 0;
}

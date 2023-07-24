#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
	float res;
    int a = 10800;
    int z = 3*60;
    cout << "1 переменная: " << z << endl;
    int perem = 6*60;
    cout << "2 переменная: " << perem << endl;
    float q = 3.141592;
    res = a+z+perem+q;
    
   printf("result: %.6f", res); //3.141592
}

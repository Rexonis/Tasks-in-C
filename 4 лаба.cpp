#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	for (int a = 0; a <= 2; a++)
	{
	int i, j, k;
	cout << "\nEnter i: ";
	cin >> i;
	cout << "\nEnter j: ";
	cin >> j;
	i += 2; // increment i by 2
	j -= i; // decrement j by i
	k = i / j; // divide i by j giving k
	k += k; // increment k by k
	k -= 1; // decrement k by 1
	j = k % i; // assign k modulo i to j
	k += k + i; // increment k by k added to i
	k += k / j; // increment k by k divided by j
	k = pow(k, 3); 	// assign k times k times k to k
	k += i * j; // increment k by i times j
    cout << k;
    }
	return 0;
}

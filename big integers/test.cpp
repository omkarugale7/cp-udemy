#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, i, j, flag,ans=0;
	cout << "Enter lower bound of the interval: ";
	cin >> a;
	cout << "\nEnter upper bound of the interval: ";
	cin >> b; 
	cout << "\nPrime numbers between "
		<< a << " and " << b << " are: ";
	for (i = a; i <= b; i++) {
		if (i == 1 || i == 0)
			continue;
		flag = 1;

		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1 && b%i==0)
			cout << i << " ";
	}

	return 0;
}

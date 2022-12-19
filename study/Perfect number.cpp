//6=3+2+1
#include <iostream>
using namespace std;
int main()
{
	int n, i, sum = 0;
	cout << "enter the number";
	cin >> n;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum = sum + i;
	}
	if (sum == n)
		cout << i << " 'is perfect number'";
	else
		cout << i << " ' is not perfect number'";
	return 0;
}

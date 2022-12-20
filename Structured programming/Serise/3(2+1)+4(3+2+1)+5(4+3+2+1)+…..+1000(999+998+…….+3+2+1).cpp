//3(2+1)+4(3+2+1)+5(4+3+2+1)+…..+1000(999+998+…….+3+2+1)
#include <iostream>
using namespace std;
int main()
{
	int sum1 = 0,n;
  cout << "Enter the num : ";
	cin >> n;
	for (int i = 3; i <= n; i++) 
	{
		int sum2 = 0;
		for (int j = i - 1; j >= 0; j--)
		{
			sum2 = sum2 + j;
		}
		sum1 = sum1 + i * sum2;
	}
	cout << "Sum=" << sum1;
	return 0;
}

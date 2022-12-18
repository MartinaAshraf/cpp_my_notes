#include <iostream>
using namespace std;
int main()
{
	int x = 15, i = 1, n;
	cout << "enter N value";
	cin >> n;
	while (i <= n)
	{
		cout << x << " ";
		int z = x / 10;
		int y = x % 10;
		x = z * z + y * y;
		i = i + 1;
	}
	return 0;
}

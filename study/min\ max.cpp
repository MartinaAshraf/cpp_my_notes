#include <iostream>
using namespace std;
int main()
{
	int counter, x, max = INT_MIN, min = INT_MAX;
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		cin >> x;

		if (x> max)
		{
			max = x; 
			continue;
		}
		else if (x < min)
		{
			min = x;

		}
		
	}
	cout <<"min num = " << min << "  " <<"max num = " << max;
}

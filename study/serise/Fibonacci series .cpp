#include <iostream>
using namespace std;
int main()
{
	int index, s = 0, f = 0, t = 0;
	cin >> index;
	for (int i = 0; i <= index; i++)
	{
		if (i== 0)
		{
			f = 0;
			cout << f << " ";
			continue;
		}
		else if (i == 1)
		{
			s = 1;
			cout <<  s << " ";
			continue;
		}
		t = s + f;
		f = s;
		s = t;
		cout << t << " ";
	}
}

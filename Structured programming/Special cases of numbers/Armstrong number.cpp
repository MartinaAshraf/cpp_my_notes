//153=3^3+5^3+1^3   --> يعني هنا الاس = 3
//هو عدد = مجموع أرقامه مرفوعة إلى اس يساوى عدد ارقامه  
#include <iostream>
using namespace std;
int main()
{
	int n, t, r = 0, x;
	cout << "enter the number";
	cin >> n;
	t = n;
	while (n > 0)
	{
		x = n % 10;
		r = r + x * x * x;
		n = n / 10;
	}
	if (r == t)
	{
		cout << "armstrong number";
	}
	else
	{
		cout << "not armstrong number";
	}
	return 0;
}

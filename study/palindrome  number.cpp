//الرقم بنقرأه من اليمين و اليسار يبقي نفس الرقم 
#include<iostream>
using namespace std;
int main()
{
	int n, z, rev = 0, x;
	cout << "enter the number";
	cin >> n;
	z = n;
	while (n > 0)
	{
		x = n % 10;
		rev = rev * 10 + x;
		n = n / 10;
	}
	if (z == rev)
	{
		cout << "palindrome";
	}
	else
	{
		cout << "Not Palindrome";
	}
	return 0;
}

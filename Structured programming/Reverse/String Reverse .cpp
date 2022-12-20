//martina--> anitram


#include<iostream>
using namespace std;
int main()
{
	char s1[100], s2[100];
	cout << "enter string \n";
	cin >> s1;
	int i, j;
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		s2[j] = s1[i - j - 1];
	}
	s2[j] = '\0';
	cout << s2;
	return 0;
}

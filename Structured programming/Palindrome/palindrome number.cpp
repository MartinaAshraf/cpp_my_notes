//12221 =12221 --> this is a palindrome num 
// 123 != 321 --> not palindrome
//هو الرقم اللى لو قرأته من اليمين هيكون هو هو لو قرأته من الشمال 
#include<iostream>
using namespace std;
int main()
{
	int number, z, reverse = 0, modulus;
	cout << "enter the number \n";
	cin >> number;  //123
	z = number; //123
	while (number > 0)
	{
		modulus = number % 10;           //3 ... 2...1
		reverse = reverse * 10 + modulus;//3 ... 2...1
		number /= 10;                    //12 .. 1...0
	}
	if (z == reverse)
	{
		cout << "palindrome";
	}
	else
	{
		cout << "Not Palindrome";
	}
	return 0;
}

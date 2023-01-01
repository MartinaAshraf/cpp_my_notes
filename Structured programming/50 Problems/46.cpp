/*Write a C++ program to read any two real numbers (which you may assume are not equal),
and write out the larger of the two with a suitable message.
*/
#include <iostream>
using namespace std;
int main()
{
	float  num1,num2;
	cout << "Enter the frist number   = ";
	cin >> num1;
	cout << "Enter the second number = ";
	cin >> num2;
	if (num1 > num2) { cout << " The biggest number is : " << num1<<endl; }
	else if (num1 < num2) { cout << " The biggest number is : " << num2 << endl; }
	else { cout << " The two numbers are equal"; }
  
}

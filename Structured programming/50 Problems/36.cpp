/*Suppose you deposit $50 per month in a bank account every month for a year. Every month,
after the deposit has been made, interest at the rate of 1% is added to the balance. E.g. after 
one month, the balance is $50.50, and after two monthsitis $101.51.
Write a C++ program to compute and print the balance each month for a year. Arrange the 
output to look something like this:
MONTH MONTH-END BALANCE
1 50.50
2 101.51
3 153.02
...
12 640.47
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double balance = 0;
	double deposit = 50;
	double interest = 0.01;
	cout << "MONTH MONTH-END BALANCE " << endl;
	for (int month=1 ; month <= 12 ; month++)
	{
	balance += deposit;
	deposit += balance * interest;
	cout << month << " " << fixed << setprecision(2) << balance << endl;
	}
	return 0;
}

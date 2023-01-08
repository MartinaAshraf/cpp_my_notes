/*Write a C++ program that calculates (to five decimal places):
a) (1/3)+(1/5)+ ⋯(1/99)
b) (2/1)×(4/3)× … ×(98/99)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sum = 0;
	double product = 1;
	for (double i=1.3 ; i<= 1.99 ; i+=0.2)
	{
		sum += i;
	}

	for (double i = 2.1; i <= 0.98; i -= 0.11)
	{
		product *= i;
	}
	cout << fixed << setprecision(5);
	cout << "a) sum = " << sum << endl;
	cout << "b) product = " << product << endl;
	return 0;
}

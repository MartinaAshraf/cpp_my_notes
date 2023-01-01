/* Write some lines of C++ which will exchange the contents of two variables A and B, using only
one additional variable T.
*/
#include <iostream>
using namespace std;
int main()
{
	int A, B, T;
	cout << "Enter the frist number   = ";
	cin >> A;
	cout << "Enter the second number  = ";
	cin >> B;
	T = A;
	A = B;
	B = T;
	cout << "The frist number is : " << A << endl << "The  second number is : " << B << endl;
  
}

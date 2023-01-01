/* Write some lines of C++ which will exchange the contents of two variables A and B, using only
one additional variable T.
*/
#include <iostream>
using namespace std;
int main()
{
	int A, B, T;
	cout << "Enter frist number   = ";
	cin >> A;
	cout << "Enter second number  = ";
	cin >> B;
	T = A;
	A = B;
	B = T;
	cout << "Enter frist number   = " << A << endl << "Enter second number  = " << B << endl;
  
}

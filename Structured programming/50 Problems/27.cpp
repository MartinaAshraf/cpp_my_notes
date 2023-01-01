// Try the previous problem without using any additional variables!

#include <iostream>
using namespace std;
int main()
{
 int x, y;
 cout << "Enter x : ";
 cin >> x;
 cout << "Enter y : ";
 cin >> y;
 x = x + y;
 y = x - y;
 x = x - y;
 cout << "Value of x , y after exchange\n";
 cout << "x = " << x << endl;
 cout << "y = " << y << endl;
}

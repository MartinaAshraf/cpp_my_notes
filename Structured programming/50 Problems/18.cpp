/* Given three values A, B and N, write a C++ 
program to compute the following sum: 
1/A + 1/(A+B)+ 1/(A+2B) + 1/(A+3B)+… + 1/(A+NB).
*/
#include<iostream>
using namespace std;
int main()
{
int n;
float a, b;
cout << "enter A , B , N\n";
cin >> a>>b>>n;
float sum = 0;
for (int i = 0; i <= n; i++)
{
sum += 1 / (a + i * b);
}
cout << "Sum = " << sum;
}

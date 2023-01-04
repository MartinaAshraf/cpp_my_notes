/*Write a program to input a real number x and output the areas of the square with side x, the
circle with radius x and the equilateral triangle with side x
*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
 int x;
 float pi=3.14,As,Ac,At;
 cout << "enter x: " ;
 cin>>x;
 As=x*x;
 Ac=pi*x*x;
 At=(sqrt(3)*x*x)/4;
 cout<<"Area of the square: " <<As<<endl
 <<"Area Of Circle: "<<Ac<<endl
 <<"Area Of equilateral triangle: "<<At;
 return 0;
}
